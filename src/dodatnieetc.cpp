#iclude <iostream>
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
        if(a == 0)

        {
                std::cout << "0\n";
        }

        else if(a > 0)
        {
                std::cout << "1\n"; 
        }
        else
        {
		std::cout << "-1\n";

        }
}

