#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double R;
	cin >> R;

	double A = 3.14159 * R * R;
	cout << "A=";
	cout << fixed << setprecision(4) << A;
	cout << endl;

	return 0;
}