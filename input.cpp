#include <iostream>

double mult(double x, double y, double z)
{
	return (x * y * z);
}

int main()
{
	double a {};
	double b {};
	double c {};
	std::cout << "Enter three numbers to be multiplied: ";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	double res = mult(a, b, c);
	std::cout << "\nResult: " << res << "\n";
	return 0;
}
