#include <iostream>
#include<fstream>
using namespace std;

void func1(int n, int* x);
void func2(int n, float* y);

int main(void) {

	int a = 1234;
	int b[5] = { 1000,2000,3000,4000,5000 };
	float c[3] = { -0.5,0.0,0.5 };

	func1(5, b);
	func2(3, c);

	ofstream xxx;
	xxx.open("mybin.dat", ios::binary | ios::out);
	xxx.write((char*)&a, 4);
	xxx.write((char*)b, 20);
	xxx.write((char*)c, 12);
	xxx.close();

	ifstream yyy;
	yyy.open("mybin.dat", ios::binary | ios::in);
	if (!yyy) {

		cout << "No File" << endl;
		return 1;

	}

	int show_array[9];
	yyy.read((char*)show_array, 36);
	yyy.close();
	for (int i = 0; i < 6; i++) cout << show_array[i] << " ";
	float* f = (float*)(show_array + 6);
	for (int i = 0; i < 3; i++) cout << f[i] << " ";
	return 0;
}

void func1(int n, int* x) {

	for (int i = 0; i < n; i++) *(x + i) *= 5;

}

void func2(int n, float* y) {

	for (int i = 0; i < n; i++)
	{
		*(y + i) *= (*(y + i));
	}

}