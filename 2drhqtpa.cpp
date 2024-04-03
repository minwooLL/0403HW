#include <iostream>
using namespace std;
void main2() {
	int N = 2, M = 3, NM;
	float A[2][3] = { {1,2,3},{4,5,6} }, ** B, ** C;
	B = new float* [N];
	for (int n = 0; n < N; n++) B[n] = new float[M];
	C = new float* [N];
	for (int n = 0; n < N; n++) C[n] = new float[M];
	B[0][0] = 1; B[0][1] = 0; B[0][2] = 2;
	B[1][0] = 0; B[1][1] = 2; B[1][2] = 3;
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			C[n][m] = A[n][m] * B[n][m];
		}
	}
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cout << C[n][m] << "  ";
		}
		cout << endl;
	}
	for (int n = 0; n < N; n++) { delete[] B[n]; delete C[n]; }
	delete[] B;
	delete[] C;
}
