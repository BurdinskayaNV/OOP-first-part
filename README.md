# OOP-2-kurs
## Практические работы ООП за 2 курс
### 1. C++ Задача 4 Компиляция в командной строке
- Решена задача из первого раздела задачника вариант 4 номер 4.
Даны два действительных положительных числа. Найти среднее арифметическое и среднее геометрическое этих чисел. Компиляция в командной строке в PowerShell
>     cd c:\2курс\1модуль
> 
>     g++ zd2_number4.cpp -o zd2_number4.exe
> 
>     ./zd2_number4.exe
-  Создано две отдельные функции для вычислений среднего арифметического и среднего геометрического чисел. Есть комментарии и документирование кода.
- Вынесены функции вычислений в отдельный модуль modul_number4.cpp и его заголовочный файл modul_number4.h. Компиляция в командной строке в PowerShell  несколько файлов.
>     g++ zd2_number4.cpp modul_number4.cpp -o zd2_number4.exe
> 
>     ./zd2_number4.exe
- Скомпилирован modul_number4.cpp файл модуля в статическую библиотеку lib/modul_number4.o
>      md /2курс/1модуль/lib
> 
>      g++ -c modul_number4.cpp -o lib/modul_number4.o
> 
>      ar rcs lib/modul_number4.a lib/modul_number4.o
> 
>      g++ zd2_number4111.cpp lib/modul_number4.a -o zd2_number4111.exe
> 
>      ./zd2_number4111.exe
- Сделано автоматическое тестирование программы с помощью макроса assert

### 2. C++ Задачи 136в одномерный массив и 676а двумерный массив. Компиляция в командной строке.
- Решена задача из задачника вариант 4 номер 136в.
Даны натуральное число n, действительные числа a1,..., an. Вычислить: в) |a1| + ... + |an|. Компиляция в командной строке в PowerShell
>     cd c:\2курс\массив
> 
>     g++ zd3_massiv.cpp -o zd3_massiv.exe
> 
>     ./zd3_massiv.exe
- Сделано автоматическое тестирование программы с помощью макроса assert
-  Решена задача из задачника вариант 4 номер 676а.
Дана целочисленная матрица размера 6х9. Найти матрицу получающуюся из данной:
a) перестановкой столбцов - первого с последним, второго с предпоследним и т.д.
Созданы отдельные функции для выделения динамической памяти, создание новой матрицы путем перестановки столбцов, освобождение памяти матрицы, процедуры заполнения матрицы случайными числами и вывод на экран. Есть комментарии и документирование кода.
- Вынесены функции и процедуры в отдельный модуль Modul_zd3_massiv1.cpp и его заголовочный файл Modul_zd3_massiv1.h. Компиляция в командной строке в PowerShell  несколько файлов.
>     g++ zd3_massiv1.cpp Modul_zd3_massiv1.cpp -o zd3_massiv1.exe
> 
>     ./zd3_massiv1.exe
- Скомпилирован Modul_zd3_massiv1.cpp файл модуля в статическую библиотеку lib/Modul_zd3_massiv1.o
>      md /2курс/массив/lib
> 
>      g++ -c Modul_zd3_massiv1.cpp -o lib/Modul_zd3_massiv1.o
> 
>      ar rcs lib/Modul_zd3_massiv1.a lib/Modul_zd3_massiv1.o
> 
>      g++ zd3_massiv1.cpp lib/Modul_zd3_massiv1.a -o zd3_massiv111.exe
> 
>      ./zd3_massiv111.exe

### 3. ООП Задача 136в с одномерным массивом. Компиляция в Visual Studio.
- Решена задача из задачника вариант 4 номер 136в.
Даны натуральное число n, действительные числа a1,..., an. Вычислить: в) |a1| + ... + |an|. Компиляция в Visual Studio
- Использован одномерный динамический массив, выделение памяти для массива, освобождение памяти массива.
- Передача массива в функции, возврат из функции через return, указатели * и ссылки.
- Применение srand(time(NULL)) и rand() для ввода в массив случайных чисел.
- Демонстрация работы с библиотекой <fstream> { ofstream, ifstream }.
- Созданы пространства имён NamespaceMassiv и NamespaceFile, для работы с массивом и работы с файлами.
- Автоматическое тестирование программы с помощью assert. Проверка работы функции Sum_Mass на разных входных данных.
- Оформлено через модуль из трёх файлов: основной файл, модульный и заголовочный.
- Добавлена обработка исключительной ситуации.

### 4. ООП Задача 676а с двумерным массивом. Компиляция в Visual Studio.
- Решена задача из задачника вариант 4 номер 676а.
Дана целочисленная матрица размера 6х9. Найти матрицу получающуюся из данной:
a) перестановкой столбцов - первого с последним, второго с предпоследним и т.д. Компиляция в Visual Studio
- Использован двумерный массив - матрица, использованы vector вместо классических массивов.
- Передача массива в функции, возврат из функции через return, указатели * и ссылки.
- Применение srand(time(NULL)) и rand() для ввода в массив случайных чисел.
- Демонстрация работы с библиотекой <fstream> { ofstream, ifstream }.
- Созданы пространства имён NamespaceMassiv и NamespaceFile, для работы с массивом и работы с файлами.
- Оформлено через модуль из трёх файлов: основной файл, модульный и заголовочный.
- Добавлена обработка исключительной ситуации.
- Ссылки на константы в аргументах функций.
- Скомпилирован ModulMatrix.cpp файл модуля в статическую библиотеку lib/ModulMatrix.o
>      md /2курс/1модуль/lib
> 
>      g++ -c ModulMatrix.cpp -o lib/ModulMatrix.o
> 
>      ar rcs lib/ModulMatrix.a lib/ModulMatrix.o
> 
>      g++ MainVector.cpp lib/ModulMatrix.a -o MainVector.exe
> 
>      ./MainVector.exe

