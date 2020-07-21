#include <iostream>
#include <string>
using namespace std;

void main() {
	string name;
	int salary, sale, commission;
	cout << "*********Homework 2*********\n";
	cout << "Enter name : ";
	cin >> name;
	cout << "Enter Salary : ";
	cin >> salary;
	cout << "Enter Sale : ";
	cin >> sale;
	cout << "Enter Commission Percent: ";
	cin >> commission;
	cout << "***********output*************\n";
	cout << "You Name :" << name << endl;
	cout << "Total Revenue " << salary + (sale * commission) / 100 << "  Bath" << endl;
	system("pause");


}