
#define MATH_H

template <typename T>
class Math
{
    public:
        Math(T num = 0, T den = 1);
        void setFraction(T num, T den);
        T getNumerator() const;
        T getDenominator() const;
        T divide();

    private:
        T numerator;
        T denominator;
};

template <typename T>
Math<T>::Math(T num, T den) : numerator(num), denominator(den) 
{
    if (den == 0) 
    {
        denominator = 1;
    }
}

template <typename T>
void Math<T>::setFraction(T num, T den) 
{
    numerator = num;
    if (den != 0) 
    {
        denominator = den;
    }
    else 
    {
        denominator = 1;
    }
}

template <typename T>
T Math<T>::getNumerator() const 
{
    return numerator;
}

template <typename T>
T Math<T>::getDenominator() const 
{
    return denominator;
}

template <typename T>
T Math<T>::divide() 
{
    float x = numerator / denominator;
    return  x;
}
