/// \file Massiv_main.cpp
/// \brief тело основной программы
/// \brief использован одномерный динамический массив
/// \brief выделение памяти для массива, освобождение памяти массива
/// \brief передача массива в функции, возврат из функции через return, указатели *
/// \brief применение srand(time(NULL)) и rand()
/// \brief демонстрация работы с библиотекой <fstream>
/// \brief созданы пространства имён NamespaceMassiv и NamespaceFile
/// \brief автоматическое тестирование программы с помощью assert
/// \brief реализованы функции работы с массивом
/// \brief оформлен через модуль из трёх файлов
/// \brief создан репозиторий в GitHub
/// \brief 
/// \brief использован vector вместо классического массива
/// \brief Аргументы командной строки cmd arg для функции main
/// \author Бурдинская Наталья ВМК-22
/// \date 29.10.2023

/* Задача 136в: Даны натуральное число n,
*  действительные числа a1,..., an.
*  Вычислить: в) |a1| + ... + |an| */

//Объявляет cin cout,управляющие чтением из станд.потоков и записью в них
#include <iostream>
// вызов заголовочного файла модуля ModulMassiv.cpp
#include "ModulMassiv.h"
// пространство имён для работы с матрицей
using namespace NamespaceMassiv;
// пространство имён для работы с матрицей в файлах
using namespace NamespaceFile;
//теперь можно обращаться ко всем именам, описанным в std, непосредственно, без префикса std::
using namespace std;

int main(int argc, char* argv[]) //главная функция, вызываемая при запуске программы
{
	// Функция setlocale задаёт локализацию программы. 
	// LC_ALL указывает программе, что локализированы будут все функции.
	// «Rus» локализация произойдёт на русский язык.
	system("chcp 65001 > nul"); //подключение русского языка 
	setlocale(LC_ALL, "RUSSIAN");

	// Генерирует случайное число, используя текущею дату, для непредсказуемости результата
	srand(time(0)); // инициализация генератора случайных чисел текущим временем в секундах time
	// *** перенесла из процедуры Vvod_Mass в главный модуль

	// Аргументы командной строки cmd arg для функции main
	// argv[0] - имя файла Massiv_main.exe
	// значит начинаем argv[1] и argv[2] 
	// в нашем случае argc = 3
	// (argv[0] имя самого проекта, argv[1] размерность массива и argv[2] имя файла для ввода и сохранения данных)
	string str_argv;
	string file_name;
	int n = 0;
	int k = argc;
	if (k == 1)
	{
		try { // ****** 
			cout << "Введите размерность массива" << endl;
			cout << "n = "; cin >> n;
		}
		catch (const length_error err) {
			cout << err.what() << endl; // выводим сообщение об ошибке
		}
		try { // *******НЕ нужен
			cout << "Введите имя файла " << endl;
			cout << "file_name = "; cin >> file_name;
		}
		catch (const invalid_argument inval) {   //ловим исключение
			cout << inval.what() << endl;
		}
		cout << "\n";
	}
	
	if (k == 2)
	{
		str_argv = argv[1];
		try { // ******** не нужен 
			if (str_argv == "help")	// Если введут help
			{
				cout << "Чтобы программа работала корректно, введите первый аргумент число: <размерность массива>" << endl;
				cout << "Далее <имя файла для ввода и сохранения данных>" << endl;
				return 0;
			}
		}
		catch (const invalid_argument inval) {   //ловим исключение
			cout << inval.what() << endl;
		}
		cout << "\n";
	}

	if (k == 3)
	{
		try {
			n = stoi(argv[1]); // преобразовать строку в int 
		}
		catch (const std::length_error err) {
			cout << err.what() << endl; // выводим сообщение об ошибке
		}
		try { // ********* не нужен
			file_name = argv[2];
		}
		catch (const std::invalid_argument inval) {//ловим исключение
			cout << inval.what() << endl;
		}
	}

		vector<double> arr; // описываем массив как вектор
		arr.resize(n); // даем ему размерность n из переданного аргумента argv[1]

		Vvod_Mass(arr); // выполняем ввод массива
		Screen_Mass(arr); // выводим на экран массив введеных коэффициентов
		cout << "\n";

		// проверка работы функции Sum_Mass на разных входных данных
		Test_Sum_Mass();
		cout << "\n";
		cout << "Сумма |a1| + ... + |an| = " << Sum_Mass(arr) << endl;
		cout << "\n";

		// выполняем запись массива в файл
		WriteFile(file_name, arr); // *********** Try
		cout << "\n";

		// читаем из файла массив и выдаем на консоль
		// file_name = argv[2]; // название файла
		try   // проверка на исключения
		{
			// Заполняем массив arr1 из файла *.txt
			// это защищенный блок кода 
			// при чтении массива может возникнуть исключение 
			// Находим количество элементов массива из файла
			unsigned size_1 = SizeFile(file_name);
		}
		catch (const exception& error) // файл не открыт или пуст
		{
			// Код, который выполняется при возникновении исключения типа
			// Exception генерируется в блоке try
			// Зарегистрировать сообщение об ошибке в объекте exception
			cout << error.what() << endl; // Завершить
		}

		vector<double> arr1;
		arr1.resize(n); // Задаем размер size
		arr1 = ReadFile(file_name, n); // ************ Try
		Screen_Mass(arr1); // выводим на экран массив введеных коэффициентов
		arr.clear();
	return 0;
}
