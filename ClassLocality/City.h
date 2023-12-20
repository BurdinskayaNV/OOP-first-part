/// \file City.h
/// \brief ������������ ���� ������ City.cpp
/// \brief ����� �����
/// \author ���������� ������� ���-22
/// \date 15.12.2023

#pragma once
#include "Locality.h"
#include <iostream>
#include <cstring>

class City : public Locality {
private:
	//std::string TypeLoc;
public:
	City(std::string City_name = "-", std::string City_population = "-", int City_home = 0);
	std::string work() const;
	std::string walk() const;
};