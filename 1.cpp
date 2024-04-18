#include <iostream>
#include<fstream>
using namespace std;

int fun1(int i);
float fun2(float i);
int main(void) {
	int a = 1234;
	int b[5] = { 1000,2000,3000,4000,5000 };
	float c[3] = { -0.5,0.0,0.5 };

	for (int i = 0; i < 5; i++)
	{
		b[i] = fun1(b[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		c[i] = fun2(c[i]);
	}
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

int fun1(int i) {
	i *= 5;
	return i;
}

float fun2(float i) {
	i *= i;
	return i;
}