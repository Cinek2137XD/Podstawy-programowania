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
        int a,b;
        a = pytanie("podaj liczbę ");
        b = abs(a);
        std::cout << "wartość absolutna wycnosi: "<< b << "\n";
}

