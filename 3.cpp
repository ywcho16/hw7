//#include <iostream>
//#include <fstream>
//using namespace std;
//
//// n개의 int에 5를 곱하는 함수
//void aa(int* a, int n) {
//    for (int i = 0; i < n; ++i) {
//        a[i] *= 5;
//    }
//}
//
//// n개의 float를 자승하는 함수
//void bb(float* b, int n) {
//    for (int i = 0; i < n; ++i) {
//        b[i] = b[i] * b[i];
//    }
//}
//
//int main() {
//    unsigned char memory[44];
//    int a = 1234;
//    int b[5];
//    float c[3];
//
//    // Allocate memory for b and c
//    int* B = new int[5];
//    float* C = new float[3];
//
//    
//    for (int i = 0; i < 5; ++i) {
//        b[i] = 1000 * (i+1);
//    }
//    for (float k = -0.5; k <= 0.5; k += 0.5) {
//        c[int((k + 0.5)*2)] = k;
//    }
//    aa(b, 5);
//    bb(c, 3);
//
//    // Write data to binary file
//    ofstream xxx;
//    xxx.open("mybin.dat", ios::binary|ios::out);
//    xxx.write((char*)(&a), sizeof(a));
//    xxx.write((char*)(&b), sizeof(b));
//    xxx.write((char*)(&c), sizeof(c));
//    xxx.close();
//
//    // Clean up memory
//    delete[] B;
//    delete[] C;
//
//    // Read data from binary file
//    ifstream yyy("mybin.dat", ios::binary|ios::in);
//    yyy.read((char*)(&a), sizeof(a));
//    yyy.read((char*)(&b), sizeof(b));
//    yyy.read((char*)(&c), sizeof(c));
//    yyy.close();
//
//    // Print results
//    cout << "a: " << a << endl;
//    cout << "b: ";
//    for (int i = 0; i < 5; ++i) {
//        cout << b[i] << " ";
//    }
//    cout << endl;
//    cout << "c: ";
//    for (int i = 0; i < 3; ++i) {
//        cout << c[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
