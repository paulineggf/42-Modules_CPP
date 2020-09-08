#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class   Span
{
    private:
    unsigned int    _Nmax;
    unsigned int    _N;
    std::vector<int> _tab;

    Span();

    public:
    Span(unsigned int N);
    ~Span();

    void    addNumber(int nb);
    void    addNumber(int n1, int n2);
    int     shortestSpan();
    int     longestSpan();
};

#endif