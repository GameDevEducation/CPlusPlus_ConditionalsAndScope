// C++ Tutorial - Conditionals and Scope.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Please enter a whole number: ";

    int enteredNumber;
    std::cin >> enteredNumber;

    // check if the number is even
    if (enteredNumber % 2 == 0)
    {
        std::cout << "The number (" << enteredNumber << ") is even." << std::endl;
    }
    else
    {
        std::cout << "The number (" << enteredNumber << ") is odd." << std::endl;
    }

    if (enteredNumber < 10)
    { // this block runs if less than 10
        std::cout << "The number is less than 10" << std::endl;
    }
    else if (enteredNumber < 20)
    { // this block runs if less 20 (but will not run if less than 10)
		std::cout << "The number is less than 20 and greater than or equal to 10" << std::endl;
    }
	else
	{
		std::cout << "The number is greater than or equal to 20" << std::endl;
	}

    // && = logical AND - both MUST be true to evaluate to true
    // || = logical OR  - one  MUST be true to evaluate to true

	// A == B - is A equal                to B
	// A != B - is A not equal            to B
	// A <  B - is A less than               B
	// A <= B - is A less than or equal   to B
	// A >  B - is A greater than            B
	// A >= B - is A greater than orequal to B

    bool bIsEven = enteredNumber % 2 == 0;
    bool bIsDivisibleBy5 = enteredNumber % 5 == 0;

    if (bIsEven && bIsDivisibleBy5)
    {
        std::cout << "Number is divisible by 5 and is even" << std::endl;
    }

    if (bIsDivisibleBy5)
        std::cout << "Number is divisible by 5" << std::endl;

    {
        int testValue = 50;
        std::cout << testValue << std::endl;
    }

    {
        int testValue = 42;
		std::cout << testValue << std::endl;
    }

}
