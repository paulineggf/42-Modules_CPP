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
    int     shortestSpan();
    int     longestSpan();
};

#endif