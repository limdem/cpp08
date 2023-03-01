#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
private:

    std::vector<int>    _span;
    unsigned int    _elNbr;
    unsigned int    _maxEls;
public:

    Span();
    Span(unsigned int);
    ~Span();
    Span(const Span&);
    Span& operator= (const Span&);
        
    void    displaySpan();
    std::vector<int>::iterator    getSpanBeg();
    std::vector<int>::iterator    getSpanEnd();
    void    addNumber(int);
    void    AddMultipleNumbers(std::vector<int>::const_iterator, std::vector<int>::const_iterator);
    int     shortestSpan();
    int     longestSpan();
        
    class SpanFullException: public std::exception
    {
        virtual const char* what() const throw();
    };

    class SpanNoDistanceException: public std::exception
    {
        virtual const char* what() const throw();
    };
};
#endif