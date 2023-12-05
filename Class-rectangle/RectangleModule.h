/// \file RectangleModule.h
/// \brief ������������ ���� ������ RectangleModule.cpp
/// \brief ����� �������������
/// \author ���������� ������� ���-22
/// \date 01.11.2023

#pragma once
//��������� cin cout, ����������� ������� �� �����.������� � ������� � ���
#include <iostream>
// ������ � �������
#include <fstream>
// ���������� ������� setlocale ��� ��������� ������� ������ � �������� ��������� �� ������� �����.
#include <locale>
#include <cmath>  // ������ � ��������������� ����������� � ���������
#include <cassert> // ��� assert
#include <iomanip> // ����������� ��� ����������� ������� ����� ������������� setw setprecision.
#include <string> // ��� ������ �� ��������
// ������ ����� ���������� �� ���� ������, ��������� � std, ���������������, ��� �������� std::
using namespace std;

// ����� - ������������� Rectangle
class RectangleClass {
private:
	// ���� ������:
	double x1, y1; // ���������� x � y ������ �����
	double x2, y2; // ���������� x � y ������ �����
	double x3, y3; // ���������� x � y ������� �����
public:
	// ������ ������:
	double a, b; // ������� ��������������
	double d; // ��������� ��������������
	double angle_a; // ���� ��������������
	double x4, y4; // ���������� x � y ��������� �����

	// ������������ ��� ����� (�������, �������������, ������)
	enum RecType { Sqare, Rectangle, Other };
	RecType type; // ���������� ���� ������ RecType
	// ����������� ��������������
	RectangleClass();
	// ����������� � �������� ��������� ������
	RectangleClass(double x1_, double y1_, double x2_, double y2_, double x3_, double y3_);
	// ������� ���������� x � y i-�� ����� ��������������
	// (��������: ��������� x � y i-�� ����� (i=1,2,3) ��������������)
	// (const �.�. ����� �� ������ �������� �����)
	double get_x1() const; double get_y1() const; // i=1
	double get_x2() const; double get_y2() const; // i=2  															
	double get_x3() const; double get_y3() const; // i=3
	// ������� ���������� x � y i-�� ����� ��������������
	// (��������: ���� x � y i-�� ����� (i=1,2,3) ��������������)
	void set_x1(double x_1); void set_y1(double y_1); // i=1
	void set_x2(double x_2); void set_y2(double y_2); // i=2 
	void set_x3(double x_3); void set_y3(double y_3); // i=3 

	// (const �.�. ����� �� ������ �������� �����) �������� �����������

	// ��������: ���������� ����� ������� A ��������������
	double SideRectangleA() const;
	// ��������: ���������� ����� ������� B ��������������
	double SideRectangleB() const;

	// ��������: ���������� �������� ���� �������������� cos90=0
	double AngleRectangle() const;
	// ��������: ���������� ����� ��������� ��������������
	double DiagonalRectangle() const;
	// ��������: ���������� ���������� X ��������� ����� ��������������
	double �oordinateX4() const;
	// ��������: ���������� ���������� Y ��������� ����� ��������������
	double �oordinateY4() const;

	// ��������: ������ ��������� P �������������� ����� ����� ������
	double PerimeterAB() const;
	// ��������: ������ ������� S �������������� ����� ����� ������
	double SquareAB() const;
	// ��������: ������ ��������� P �������������� ����� ���������� �����
	double PerimeterXY() const;
	// ��������: ������ ������� S �������������� ����� ���������� �����
	double SquareXY() const;
	// ��������: ���������� ��� ��������������
	void RectangleType();
	// ��������: ����� ����������� - ����� to string
	string OutputResults() const;
};
//---�������� ������ ���� ������� � ������� RectangleClass
// � ���� ��������� ��� ������� ����������
// ������ 1 - ������������� 
// ������� ������ Test ������ RectangleClass � ������������ (1,1) (4,1) (1,3)
// ��������� ����� � ���� ������ A � B, ��������� D,
// ���������� 4-�� �����, �������� � ������� ��������������
// ����� �������� ���������� �� (1,1) (3,2) (0,3)
// ��������� ���������� 4-�� �����, ������� � ��������
void Test_RectangleClass1();
// ������ 2 - ������������� �������������� ������
// ������� ������ 3 �������� Test ������ RectangleClass � ���������� ������������
// ����� ����� ���������� ��������������� � ���������
void Test_RectangleClass2();
// ������ 3 - ������������� ������������ ������ �� ���������
// ������� ������ Test� ������ RectangleClass 
// ����� ������� ��������������
void Test_RectangleClass3();
// ������ 4 - ������������� ������ �� ������������ ��������  
// ������� ������ �� 4 ������������ ��������,
// ������� ��� �� �������
void Test_RectangleClass4();
// ������ 5 - ������������� ��������� � ���� fclass.txt  
// ������� ������ Testmass ������ RectangleClass � ������������ (1,1) (4,1) (1,3)
// ��������� ��� � ���� � ������� � ����� ������ Testmass1
// ������� ������� ��������������
void Test_RectangleClass5();
