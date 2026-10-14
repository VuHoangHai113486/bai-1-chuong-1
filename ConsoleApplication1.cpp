#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

int main() {
	double a, b, c;
	std::cin >> a >> b >> c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				std::cout << "VSN";
			}
			else {
				std::cout << "VN";
			}
		}
		else {
			std::cout << -c / b;
		}
	}
	else {
		double delta = b * b - 4 * a * c;
		if (delta < 0) {
			std::cout << "VN";
		}
		else if (delta == 0) {
			std::cout << -b / (2 * a);
		}
		else {
			double x1 = (-b + sqrt(delta)) / (2 * a);
			double x2 = (-b - sqrt(delta)) / (2 * a);
			if (x1 > x2) std::swap(x1, x2);
			std::cout << x1 << " " << x2;
		}
	}
}