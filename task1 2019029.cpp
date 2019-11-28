#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int mynum[10] = { 1,2,3,4,5,6,7,8,9 ,10 };
	int retrive[10];
	ofstream fout;
	ifstream fin;
	fout.open("Task 1", ios::out);
	int j = 0; int sum = 0;
	if (fout) {
		while (j != 10) {
			fout << mynum[j];

			fout << " ";
			j++;
		}
	}
	j = 0;
	fout.close();
	fin.open("Task 1", ios::in);
	if (fin) {
		while (j != 10) {
			fout << retrive[j];

			j++;

		}
		cout << "The retrived array is: ";
		j = 0;
		while (j != 10) {
			cout << retrive[j];
			cout << " ";
			sum = sum + retrive[j];

			j++;


			cout << endl;
			cout << " ";

		}
	}else
		cout << "error";
	fin.close();
}