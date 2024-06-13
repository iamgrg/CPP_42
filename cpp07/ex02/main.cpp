#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    srand(time(NULL));

    // Test basic
    Array<int> defaultArray;
    std::cout << "Default array size: " << defaultArray.size() << std::endl;

    // Test with specific size
    Array<int> numbers(MAX_VAL);
    std::cout << "Numbers array size: " << numbers.size() << std::endl;

    int* mirror = new int[MAX_VAL];
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    // Test copy constructor
    Array<int> tmp = numbers;
    Array<int> test(tmp);

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i] || mirror[i] != tmp[i] || mirror[i] != test[i])
        {
            std::cerr << "Copy constructor failed at index " << i << std::endl;
            return 1;
        }
    }

    // Modify the original and check the copies
    numbers[0] = -1;
    if (tmp[0] == -1 || test[0] == -1) 
    {
        std::cerr << "Changes in original array reflected in copied arrays!" << std::endl;
        return 1;
    }

    // Test exception handling
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // Test assignment operator
    Array<int> assignedArray;
    assignedArray = numbers;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (assignedArray[i] != numbers[i])
        {
            std::cerr << "Assignment operator failed at index " << i << std::endl;
            return 1;
        }
    }

    // Modify the original and check the assigned one
    numbers[0] = -2;
    if (assignedArray[0] == -2)
    {
        std::cerr << "Changes in original array reflected in assigned array!" << std::endl;
        return 1;
    }

    // Cleanup
    delete[] mirror;

    std::cout << "All tests passed!" << std::endl;
    return 0;
}
