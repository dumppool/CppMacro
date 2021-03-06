/*

    Copyright David Abrahams 2003-2004
    Copyright Aleksey Gurtovoy 2003-2004

    Distributed under the Boost Software License, Version 1.0. 
    (See accompanying file LICENSE_1_0.txt or copy at 
    http://www.boost.org/LICENSE_1_0.txt)
            
    This file was automatically extracted from the source of 
    "C++ Template Metaprogramming", by David Abrahams and 
    Aleksey Gurtovoy.

    It was built successfully with GCC 3.4.2 on Windows using
    the following command: 

        g++ -I..\..\boost_1_32_0 -c -o%TEMP%\metaprogram-appendixB-example6.o example6.cpp
        

*/

#include <boost/mpl/placeholders.hpp>
#include <boost/mpl/assert.hpp>
#include <boost/static_assert.hpp>
namespace mpl = boost::mpl;
using namespace mpl::placeholders;


class number
{
 public:
    template <class U>
    number& operator=(U const&);
    int& operator*() const;
};

number operator*(number, double);

template <class T>
struct iterator_traits
{
    static number value_type;
};


double const pi = 3.14159265359;

template <class T> struct iterator_traits; // declaration only

template <class FwdIterator1, class FwdIterator2>
void iter_swap(FwdIterator1 i, FwdIterator2 j)
{
    iterator_traits<FwdIterator1>::value_type* pi = &*i;
    /* ...continued... */
}

int main() { iter_swap(number(),number()); }




    void f(number i) {
         typedef number FwdIterator1;
    

(iterator_traits<FwdIterator1>::value_type * pi) = &*i;

}

