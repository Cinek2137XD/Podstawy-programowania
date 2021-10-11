#include <iostream>
#include <string>

auto pytanie(std::string prompt) -> int
{
        int n;
        std::cout << prompt << ": \n";
        std::cin >> n;
        return n;

}

auto mnozenie(int a,int b) -> int
{
	int c;
	c = a * b;
	return c;
}

auto main() -> int
{
        int a,b,c;
        a = pytanie("podaj liczbę 1");
        b = pytanie("podaj liczbę 2");
        c = mnozenie(a,b);
        std::cout << "mnozenie twoich liczb wynioslo: " << c << "\n";
}

