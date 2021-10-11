
#include <iostream>
#include <string>

auto pytanie(std::string prompt) -> int
{
        int n;
        std::cout << prompt << ": \n";
        std::cin >> n;
        return n;

}

auto cowieksze(int a, int b) -> int
{
        if(a > b)
	{
		return a;
	}
	else
	{
		return b; 
	}
}

auto main() -> int
{
        int a,b,c;
        a = pytanie("podaj liczbę 1");
        b = pytanie("podaj liczbę 2");
	c = cowieksze(a,b);
        std::cout << "ta liczba jest wieksza: " << c << "\n";
}

