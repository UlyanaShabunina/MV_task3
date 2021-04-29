#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <iostream>

double f(double x) {
	return 3*x - cos(x) - 1;
}

double df(double x) {
	return sin(x) + 3;
}

double getRoot(double x) {
	double x_next = x - f(x) / df(x);
	if (fabs(x_next - x) < pow(10, -5)) {
		return x_next;
	}
	return getRoot(x_next);
}
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	cout << "1 корень : " << getRoot(1) << endl;
	system("pause");
	return 0;
}