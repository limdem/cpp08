#include "../includes/Span.hpp"
#include <iostream>
#include <stdlib.h>
#include <algorithm>

Span::Span()
{
    std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int maxEls)
{
    std::cout << "Span constructor called" << std::endl;
    this->_elNbr = 0;
    this->_maxEls = maxEls;
}

Span::~Span()
{
    std::cout << "Span default destructor called" << std::endl;
}

Span::Span(const Span& src)
:_span(src._span), _elNbr(src._elNbr), _maxEls(src._maxEls)
{
    std::cout << "Span copy constructor called" << std::endl;
}

Span& Span::operator= (const Span& src)
{
    this->_span = src._span;
    this->_elNbr = src._elNbr;
    this->_maxEls = src._maxEls;
    return (*this);
}

void    Span::displaySpan()
{
    std::vector<int>::const_iterator    it;

    it = this->_span.begin();
    while (it != this->_span.end())
    {
        std::cout << *it << ' ';
        it++;
    }
    std::cout << std::endl;
}

void    Span::addNumber(int nbr)
{
    if (this->_elNbr >= this->_maxEls)
        throw SpanFullException();
    this->_span.push_back(nbr);
    this->_elNbr++;
}

int     Span::shortestSpan()
{
    if (_span.size() < 2)
        throw SpanNoDistanceException();
    int shortest;
    std::vector<int>::const_iterator    it1;
    std::vector<int>::const_iterator    it2;

    it1 = this->_span.begin();
    it2 = it1 + 1;
    shortest = abs(*it2 - *it1);
    while (it1 != this->_span.end())
    {
        while (it2 != this->_span.end())
        {
            if (abs(*it2 - *it1) < shortest)
                shortest = abs(*it2 - *it1);
            it2++;
        }
        it1++;
        it2 = it1 + 1;
    }
    return (shortest);
    

}

int     Span::longestSpan()
{
    if (_span.size() < 2)
        throw SpanNoDistanceException();
    
    std::vector<int>::iterator    it1(_span.begin());
    std::vector<int>::iterator    it2(_span.end());
    return (*std::max_element(it1, it2) - *std::min_element(it1, it2));
}

void    Span::AddMultipleNumbers(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last)
{
    for (; first != last; first++)
        addNumber(*first);
}

const char* Span::SpanFullException::what() const throw()
{
    return ("SpanFullException: span is full");
}

const char* Span::SpanNoDistanceException::what() const throw()
{
    return ("SpanFullException: no distance can be measured");
}