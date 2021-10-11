#include <iostream>
#include <string>

auto pytanie(std::string prompt) -> int
{
	int n;
	std::cout << prompt << ": \n";
	std::cin >> n;
	return n;

}

auto dodawanie(int a, int b) -> int
{
	int c;
	c = a + b;
	return c;
}

auto main() -> int
{
	int a,b,c;
	a = pytanie("podaj liczbę 1");
	b = pytanie("podaj liczbę 2");
	c = dodawanie(a,b);
	std::cout << "dodawanie twoich liczb wynioslo: " << c << "\n";
}

