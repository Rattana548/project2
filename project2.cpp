#include <iostream>
#include <string>
using namespace std;

void main() {
	string name;
	int salary, sale, commission;

	cout << "Enter name :";
	cin >> name;
	cout << "Enter Salary :";
	cin >> salary;
	cout << "Enter Sale :";
	cin >> sale;
	cout << "Enter Commission :";
	cin >> commission;
	cout << "***********output*************\n";
	cout << "You Name :" << name << endl;
	cout << "Total :" << salary + (sale * commission) / 100 << endl;
	system("pause");


}