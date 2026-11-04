#include <iostream>

//7

int main() {
	const int n = 2, m = 3;
	int a[n][m] = { { 1, 2, 3 },{ 4, 5, 6 } }, b[m] = { 0, 0, 0 }, c[n] = { 0, 0 };
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			c[i] += a[i][k] * b[k];
		}
	}

	for (int ic = 0; ic < n;ic++) {
		std::cout << c[ic] << ' ';
	}
	return 0;
}

//8

int main() {
	const int n = 4;
	int a[n][n] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } }, k2 = 0, k =-1;
	for (int k1 = 0; k1 < n; k1++) {
		k++;
		for (k2=k; k2 < n; k2++) {
			int a1 = a[k1][k2], a2 = a[k2][k1];
			a[k1][k2] = a2;
			a[k2][k1] = a1;
		}
	}

	for (int i1 = 0; i1 < n; i1++) {
		for (int i2 = 0; i2 < n; i2++) {
			std::cout << a[i1][i2] << ' ';
		}
		std::cout << '\n';
	}
	return 0;
}

//9

int main() {
	const int n = 4;
	int a[n][n] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
	for (int k = 0; k < n; k++) {
		std::cout << a[k][k] << ' ';
	}
	return 0;
}

//10

int main() {
	const int n = 4;
	int a[n][n] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } }, k2 = 0, k = -1;
	for (int k1 = 0; k1 < n; k1++) {
		k++;
		for (k2 = 0; k2 < k; k2++) {
			std::cout << a[k1][k2] << ' ';
		}
	}

	return 0;
}

//11

int main() {
	const int n = 4;
	int a[n][n] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } }, k2 = 0, k = 0;
	for (int k1 = 0; k1 < n; k1++) {
		k++;
		for (k2 = k; k2 < n; k2++) {
			std::cout << a[k1][k2] << ' ';
		}
	}

	return 0;
}
