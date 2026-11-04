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