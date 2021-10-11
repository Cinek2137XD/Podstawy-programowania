#include <iostream>
#include <string>

auto pytanie(std::string prompt) -> int
{
        int n;
        std::cout << prompt << ": \n";
        std::cin >> n;
        return n;

}


auto main() -> int
{

	int a,b,c;
	a = pytanie("podaj liczbę 1");
        b = pytanie("podaj liczbę 2");
	if(a == b)
	
	{
		std::cout << a << " == " << b << "\n";
	}

	else if(a > b)
	{
		std::cout << a << " > " << b << "\n";
	}
	else
	{
		std::cout << a << " < " << b << "\n";

	}
}

