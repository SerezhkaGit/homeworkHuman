#pragma once
#include <iostream>
using namespace std;

struct HUMAN 
{
	char name[100];
	int age;
};

HUMAN h;

void fill_data(HUMAN& h)
{
	cout << "\nEnter person name: ";
	cin >> h.name;
	cout << "\nEnter person age: ";
	cin >> h.age;
}

void show_data(HUMAN& h)
{
	cout << "\nPerson name: ";
	cout << h.name;
	cout << "\nPerson age: ";
	cout << h.age;
}