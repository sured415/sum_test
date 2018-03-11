#include <iostream>
#include "sum.h"

using namespace std;

int main() {
	int a, b, c = 0;
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;

	if (a>b) c = sum(a)-sum(b)+b;
	else if (a<b) c = sum(b)-sum(a)+a;
	else c = 0;

	cout << c << endl;
	return 0;
}
