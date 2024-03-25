#include <iostream>
#include <cmath>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
	int i, j, k;
	const int n = 3;
	double* A = new double[n * n];
	double* B = new double[n * n];
	double sum;

	A[0 * n + 0] = 1.; A[0 * n + 1] = 2.; A[0 * n + 2] = -2.;
	A[1 * n + 0] = 1.; A[1 * n + 1] = -1.; A[1 * n + 2] = 3.;
	A[2 * n + 0] = 2.; A[2 * n + 1] = 3.; A[2 * n + 2] = -5.;

	B[0 * n + 0] = 1.; B[0 * n + 1] = 2.; B[0 * n + 2] = 3.;
	B[1 * n + 0] = 4.; B[1 * n + 1] = 5.; B[1 * n + 2] = 6.;
	B[2 * n + 0] = 7.; B[2 * n + 1] = 8.; B[2 * n + 2] = 9.;


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum = 0.;
			for (k = 0; k < n; k++)
			{
				sum += A[i * n + k] * B[k * n + j];
			}

			cout << sum << " ";
		}

		cout << endl;
	}
	delete[] A, B;
	return 0;
}