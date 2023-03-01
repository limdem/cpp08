#include "../includes/easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main()
{
    std::vector<int> myvector;
    std::vector<int>::iterator it1;
    for (int i = 1; i <= 5; i++)
        myvector.push_back(i);
    
    it1 = easyfind(myvector, 3);
    if (it1 != myvector.end())
        std::cout << "*it1: " << *it1 << std::endl;
    else
        std::cout << "NOPE" << std::endl;
   
    std::cout << *it1 << std::endl;
    *it1 = 6;
    it1 = easyfind(myvector, 6);
    if (it1 != myvector.end())
        std::cout << "*it1: " << *it1 << std::endl;
    else
        std::cout << "NOPE" << std::endl;
    
    it1 = easyfind(myvector, 7);
    if (it1 != myvector.end())
        std::cout << "*it1: " << *it1 << std::endl;
    else
        std::cout << "NOPE" << std::endl;

    std::deque<int> mydeque;
    std::deque<int>::iterator it2;
    for (int i = 1; i <= 5; i++)
        mydeque.push_back(i);
    
    it2 = easyfind(mydeque, 3);
    if (it2 != mydeque.end())
        std::cout << "*it2: " << *it2 << std::endl;
    else
        std::cout << "NOPE" << std::endl;
   
    std::cout << *it2 << std::endl;
    *it2 = 6;
    it2 = easyfind(mydeque, 6);
    if (it2 != mydeque.end())
        std::cout << "*it2: " << *it2 << std::endl;
    else
        std::cout << "NOPE" << std::endl;
    
    it2 = easyfind(mydeque, 7);
    if (it2 != mydeque.end())
        std::cout << "*it2: " << *it2 << std::endl;
    else
        std::cout << "NOPE" << std::endl;

    std::list<int> mylist;
    std::list<int>::iterator it3;
    for (int i = 1; i <= 5; i++)
        mylist.push_back(i);
    
    it3 = easyfind(mylist, 3);
    if (it3 != mylist.end())
        std::cout << "*it3: " << *it3 << std::endl;
    else
        std::cout << "NOPE" << std::endl;
   
    std::cout << *it3 << std::endl;
    *it3 = 6;
    it3 = easyfind(mylist, 6);
    if (it3 != mylist.end())
        std::cout << "*it3: " << *it3 << std::endl;
    else
        std::cout << "NOPE" << std::endl;
    
    it3 = easyfind(mylist, 7);
    if (it3 != mylist.end())
        std::cout << "*it3: " << *it3 << std::endl;
    else
        std::cout << "NOPE" << std::endl;
    return (0);
}