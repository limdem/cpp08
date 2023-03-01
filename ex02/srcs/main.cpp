#include "../includes/MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    /*
    MutantStack<int> mstack;

    mstack.push(10);
    mstack.push(9);
    mstack.push(8);
    mstack.push(7);
    mstack.push(6);
    mstack.push(5);
    mstack.push(4);
    mstack.push(3);
    mstack.push(2);
    mstack.push(1);

    MutantStack<int>::iterator  it = mstack.begin();
    MutantStack<int>::iterator  ite = mstack.end();
    while (it != ite)
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
    */
    /*
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    */
    
    std::cout << "MUTANTSTACK: " << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);

    std::cout << std::endl;
    std::cout << "LIST: " << std::endl;
    std::list<int> list1;
    list1.push_back(5);
    list1.push_back(17);
    std::cout << list1.back() << std::endl;
    list1.pop_back();
    std::cout << list1.size() << std::endl;
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(737);
    //[...]
    list1.push_back(0);
    std::list<int>::iterator itl = list1.begin();
    std::list<int>::iterator itel = list1.end();
    ++itl;
    --itl;
    while (itl != itel)
    {
    std::cout << *itl << std::endl;
    ++itl;
    }

    std::cout << "MUTANTSTACK COPY CONSTRUCTOR" << std::endl;
    MutantStack<int> mstack2(mstack);
    std::cout << "mstack: ";
    for (MutantStack<int>::const_iterator   it = mstack.begin(); it != mstack.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "mstack2: ";
    for (MutantStack<int>::const_iterator   it = mstack2.begin(); it != mstack2.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "MUTANTSTACK COPY ASSIGNMENT" << std::endl;
    MutantStack<int>    mstack3;
    mstack3 = mstack;
    std::cout << "mstack: ";
    for (MutantStack<int>::const_iterator   it = mstack.begin(); it != mstack.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    std::cout << "mstack3: ";
    for (MutantStack<int>::const_iterator   it = mstack3.begin(); it != mstack3.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "REVERSE ITERATOR" << std::endl;
    std::cout << "reverse mstack3: ";
    for (MutantStack<int>::const_reverse_iterator   it = mstack3.rbegin(); it != mstack3.rend(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    
    return (0);
}