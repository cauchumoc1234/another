﻿#include<iostream>
using namespace std;
int main() {
	int d, m, y;
	cin >> d >> m >> y;
	int y0, x; m0, d0;
	y0 = y−(14−m) / 12;
	x = y0 + y0 / 4−y0 / 100 + y0 / 400;
	m0 = m + 12 * ((14−m) / 12)−2;
	d0 = ((d + x + 31×m0 / 12)) % 7;
	cout << d0;
	return 0;
}
