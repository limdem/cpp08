#include "../includes/Span.hpp"
#include <iostream>
#include <vector>

int main()
{

    Span sp1 = Span(5);
    sp1.addNumber(6);
    sp1.addNumber(3);
    sp1.addNumber(17);
    sp1.addNumber(9);
    sp1.addNumber(11);
    std::cout << sp1.shortestSpan() << std::endl;

    std::cout << sp1.longestSpan() << std::endl;
    
    sp1.displaySpan();
    try
    {
        sp1.addNumber(47);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::vector<int>    vect(10000, 47);
    Span    sp2(10000);
    sp2.AddMultipleNumbers(vect.begin(), vect.end());
    sp2.displaySpan();

    std::cout << "SPAN COPY CONSTRUCTOR" << std::endl;
    Span    sp3(sp1);
    std::cout << "sp1: ";
    sp1.displaySpan();
    std::cout << "sp3: ";
    sp3.displaySpan();

    std::cout << "SPAN COPY ASSIGNMENT" << std::endl;
    Span    sp4;

    sp4 = sp1;
    std::cout << "sp1: ";
    sp1.displaySpan();
    std::cout << "sp4: ";
    sp4.displaySpan();

    Span    sp5(667);

    try
    {
        sp5.AddMultipleNumbers(vect.begin(), vect.end());

    }   
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    sp5.displaySpan();
    return 0;
}

