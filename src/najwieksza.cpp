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
	c = pytanie("podaj liczbe 3");
        if(a > b && a > c)
        {
                std::cout << "najwieksza liczba to: " << a;
        }

        else if(b > a && b > c)
        {
                std::cout << "najwieksza liczba to: " << b;
        }
        else
        {
                std::cout << "najwieksza liczba to: " << c;

        }
}

