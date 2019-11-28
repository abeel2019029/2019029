#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	cout << "writing to the file" ;
	ofstream fout;
	ifstream fin;
	fout.open("Task 2", ios::out);
	int age; char name[15];
	cout << "Enter your name: ";
	cin >> name;
	cout << endl;
	cout << "Enter your age: ";
	cin >> age; cout << endl;
	if (fout) {
		fout << name << endl;
		fout << age << endl;

	}
	else
		cout << "error";
	fout.close();
	fin.open("Task 2", ios::in);
	int Rage; char Rname[15];
	if (fin) {
		fin >> Rname;
		fin >> Rage;
	}
	cout << "The name is : " << Rname << endl;
	cout << "The age is : " << Rage;
}