#include <iostream>
#include <iomanip>
#include <clocale>
#include <cmath>

using namespace std;

const double pi = 3.14159265358979323846;

int main() {
	setlocale(LC_ALL, "ru");

	double d;
	cout << "������� ������� ����������:";
	cin >> d;
	double lenght = 2 * pi * (d / 2);
	cout << "������ ����������:" << lenght;
	return 0;
}
