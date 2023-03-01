
template<typename T>
MutantStack<T>::MutantStack()
    :std::stack<T>()
{
    std::cout << "MutantStack default constructor" << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& src)
    :std::stack<T>(src)
{
    std::cout << "MutantStack copy constructor" << std::endl;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other)
{
    std::cout << "MutantStack copy assignment" << std::endl;
    this->c = other.c;
    return *this;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << "MutantStack default destructor" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
    return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
    return (this->c.rend());
}