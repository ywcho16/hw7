//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//// a = 1234, i: 1000���� 5000���� ���� 5��, j: -0.5���� 0.5�� ������ �� 3��
//int a = 1234, i[5] = { 1000, 2000, 3000, 4000, 5000 };
//float j[3] = { -0.5, 0.0, 0.5 };
//
//// for-loop�� 5�� ���ϴ� �Լ�
//void multi_5(int* ii) {
//	for (int i = 0; i < 5; i++) ii[i] = ii[i] * 5;
//}
//// for-loop�� �ڽ��ϴ� �Լ�
//void self_multi(float* jj) {
//	for (int i = 0; i < 3; i++) jj[i] = jj[i] * jj[i];
//}
//// �ٸ� �Լ����� ȣ���� �� �����ϴ� �Լ�
//int All(int b, int* iii, float* jjj) {
//	multi_5(iii);
//	self_multi(jjj);
//	ofstream xx("mybin4.dat", ios::binary | ios::out);
//	if (!xx)
//		return 666;
//	xx.write((char*)&b, sizeof(int));
//	xx.write((char*)iii, 5 * sizeof(int));
//	xx.write((char*)jjj, 3 * sizeof(float));
//	xx.close();
//
//	ifstream yyy;
//	yyy.open("mybin4.dat", ios::binary | ios::in);
//	if (!yyy) {
//
//		cout << "No File" << endl;
//		return 1;
//
//	}
//	int show_array[9];
//	yyy.read((char*)show_array, 36);
//	yyy.close();
//	for (int i = 0; i < 6; i++) cout << show_array[i] << " ";
//	float* f = (float*)(show_array + 6);
//	for (int i = 0; i < 3; i++) cout << f[i] << " ";
//	return 0;
//
//
//}
//int main() {
//	unsigned char memory[44];
//	All(a, i, j);
//
//	return 111;
//}