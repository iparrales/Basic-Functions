#include <iostream> 
#include <algorithm>

int factorial(int x) {
	if (x == 0) { return 1; }
	if (x < 2) { return x; }
	return  x * factorial(x - 1);

}

int fibo(int x) {
	if (x <= 0) { return 0; }
	if (x == 1) { return x; }
	return (fibo(x - 1) + fibo(x - 2));
}


int main() {
	std::cout << fibo(13) << std::endl;
	std::cout << factorial(5) << std::endl;
	return 0;
}