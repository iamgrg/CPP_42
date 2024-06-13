/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:00:59 by gregoire          #+#    #+#             */
/*   Updated: 2023/09/06 19:01:00 by gregoire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base* generate(void)
{
    std::srand(std::time(NULL));
    int randomValue = (std::rand() % 3) + 1;
    if (randomValue == 1)
        return new A;
    else if (randomValue == 2)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Class A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Class B" << std::endl;
    else
        std::cout << "Class C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "Class A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &b = dynamic_cast<B&>(p);
            std::cout << "Class B" << std::endl;
            (void)b;
        }
        catch(const std::exception& e)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                std::cout << "Class C" << std::endl;
                (void)c;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
    }
}

int main()
{
    Base *base = generate();

    identify(base);
    identify(*base);
    return 0;
}