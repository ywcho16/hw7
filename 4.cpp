//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//// a = 1234, i: 1000부터 5000까지 숫자 5개, j: -0.5에서 0.5씩 증가한 수 3개
//int a = 1234, i[5] = { 1000, 2000, 3000, 4000, 5000 };
//float j[3] = { -0.5, 0.0, 0.5 };
//
//// for-loop로 5를 곱하는 함수
//void multi_5(int* ii) {
//	for (int i = 0; i < 5; i++) ii[i] = ii[i] * 5;
//}
//// for-loop로 자승하는 함수
//void self_multi(float* jj) {
//	for (int i = 0; i < 3; i++) jj[i] = jj[i] * jj[i];
//}
//// 다른 함수들을 호출한 후 저장하는 함수
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