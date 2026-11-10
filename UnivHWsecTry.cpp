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

//////////////////////////// ОДНОМЕРНЫЕ МАССИВЫ

//5
int main() {
	const int n = 14;
	int m[n] = { 0, 1, 1, 0, 1, 0, 1, 1, 1, 0 }, k = 0, maxk = 0, i = 0, indm = 0;

	for (i; i < n; i++) {
		if (m[i] == 1) {
			int ind = i;
			int i2 = i;
			for (i2; i2 < n; i2++) {
				if (m[i2] == 1) {
					k++;
					if (k > maxk) {
						maxk = k;
						indm = ind;
					}
				}
				else {
					break;
				}
			}
			k = 0;
			i = i2;
		}
	}

	std::cout << indm << " " << maxk;
	return 0;
}

//6
int main() {
	const int n = 7;
	int m[n] = { 4,1,7,9,4, 4, 1 }, km=0, k=0;

	for (int i = 0; i < n; i++) {
		int a = m[i];
		for (int i2 = i+1; i2 < n; i2++) {
			if (a == m[i2]) {
				k++;
				break;
			}
		}
		if (k == 0) {
			km++;
		}
		k=0
	}
	std::cout << km;
	return 0;

}

//7
int main() {
	const int n = 6;
	int m1[n] = {1, 2, 3, 4, 5, 6}, m2[n] = {11, 12, 13, 14, 15, 16};

	for (int i = 0; i < n; i++) {
		int a1 = m1[i];
		int a2 = m2[i];
		m1[i] = a2;
		m2[i] = a1;
	}

	for (int i = 0; i < n; i++) {
		std::cout << m1[i] << " ";
	}
	std::cout << "\n";
	for (int i = 0; i < n; i++) {
		std::cout << m2[i] << " ";
	}
	return 0;
}

//8
int main() {
	const int n = 6;
	int a[n] = { 1, 2, 3, 4, 5, 6 }, b[n] = { 11, 12, 13, 14, 15, 16 }, c[n] = { 0,0,0,0,0,0 };
	
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			if (a[i] > b[i]) {
				c[i] = a[i];
			}
			else {
				c[i] = b[i];
			}
		}
		else {
			if (a[i] < b[i]) {
				c[i] = a[i];
			}
			else {
				c[i] = b[i];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		std::cout << c[i] << " ";
	}
	return 0;
}

//ФЛАГИ

//1
int main() {
	const int n = 5;
	int m[n] = { 1, 2, 0, -2, 1 };

	for (int i = 0; i < n; i++) {
		if (m[i] < 0) {
			std::cout << "yes";
			return 0;
		}
	}

	std::cout << "no";
	return 0;
}

//2
int main() {
	const int n = 5;
	int m[n] = { 1, 2, 0, -2, 1 };

	for (int i = 0; i < n; i++) {
		if (m[i] < 0) {
			std::cout << "no";
			return 0;
		}
	}

	std::cout << "yes";
	return 0;
}

//3
int main() {
	const int n = 3, m = 3;
	int a[n][m] = { { 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 } }, k=0;

	for (int i = 0; i < n; i++) {

		for (int i2 = 0; i2 < n; i2++) {
			if (a[i][i2] > 0) {
				k++;
				break;
			}
		}
	}

	if (k >= n) {
		std::cout << "Yes";
	}
	else
		std::cout << "No";

	return 0;
}

//4
int main() {
	const int n = 3, m = 3;
	int a[n][m] = { { 1, -2, 3 },{ -4, 5, 6 },{ 7, 8, -9 } }, k=0;

	for (int i = 0; i < n; i++) {
		k = 0;
		for (int i2 = 0; i2 < n; i2++) {
			if (a[i][i2] > 0) {
				k++;
			}
		}
		if (k == m) {
			std::cout << "yes";
			return 0;
		}
	}

	std::cout << "no";
	return 0;
}

//5
int main() {
	const int n = 3, m = 3;
	int a[n][m] = { { 2, -2, 4 },{ -4, 4, 6 },{ 4, 8, -2 } }, k = 0;

	for (int i = 0; i < n; i++) {

		for (int i2 = 0; i2 < m; i2++) {
			if (a[i][i2] % 2 == 0)
				k++;
		}
	}

	if (k == (n * m))
		std::cout << "yes";
	else
		std::cout << "no";
	return 0;
}

//6
int main() {
	const int n = 3, m = 3;
	int a[n][m] = { { 2, -2, 4 },{ -4, 4, 6 },{ 4, 8, -2 } }, k = 0;

	for (int i = 0; i < n; i++) {

		for (int i2 = 0; i2 < m; i2++) {
			if (a[i][i2] % 2 != 0) {
				std::cout << "yes";
				return 0;
			}
		}
	}

	std::cout << "no";
	return 0;
}

//7
int main() {
	const int n = 3, m = 3;
	int a[n][m] = { { 1, -2, 4 },{ -4, 1, 6 },{ 4, 8, 1 } }, k = 0, minz=0;

	if (n < m)
		minz = n;
	else
		minz = m;

	for (int i = 0; i < minz; i++) {
		if (a[i][i] == 1)
			k++;
	}

	if (k == minz)
		std::cout << "yes";
	else
		std::cout << "no";
	return 0;
}

//8
int main() {
	const int n = 3, m = 3;
	int a[n][m] = { { 3, -2, 4 },{ -4, 1, 6 },{ 4, 8, 1 } };

	for (int i = 0; i < n; i++) {
		int s = 0;
		for (int i2 = 0; i2 < m; i2++) {
			s += a[i][j];
		}
		if (s == 5) {
			std::cout << "yes";
			return 0;
		}
	}

	std::cout << "no";
	return 0;
}

//9
int main() {
	const int n = 3, m = 3;
	int a[n][m] = { { 1, 3, 67 },{ 5, 11, 17 },{ 13, 3, 7 } }, k = 0, f=0;

	for (int i = 0; i < n; i++) {
		k = 0;
		f = 0;

		for (int i2 = 0; i2 < m; i2++) {
			int c = a[i][i2];

			for (int d = 2; d < c; d++) {
				if (c % d == 0) {
					f = 1;
					break;
				}
			}

			if (f == 0) {
				k++;
				break;
			}
		}
		
		if (k == 0) {
			std::cout << "no";
			return 0;
		}
	}

	std::cout << "yes";
	return 0;
}
