#include <iostream>
#include <string>

int main(int argc, const char *argv[])
{
    std::string NumberOne = "";
    std::string NumberTwo = "";
    std::string Operation = "";

    std::cout << "Welcome To Simple Calculator (Wrote By CPlusPlus Programming Language)" << std::endl;
    std::cout << "If You Want To Leave This Program Please Do These Works" << std::endl;
    std::cout << "In Windows Please Press (Ctrl+C)" << std::endl;
    std::cout << "In Linux Please Press (Ctrl+C)" << std::endl;
    std::cout << "In Mac Please Press (Command+C)" << std::endl;

    while (true)
    {
        // Get NumberOne Value From User
        while (true)
        {
            std::cout << "Please Enter NumberOne : ";
            std::cin >> NumberOne;
            try
            {
                std::stoll(NumberOne);
                break;
            }
            catch (...)
            {
                std::cout << "Error : Please Enter A Number (A Number Is Cantain (1234567890)). Please Try Again." << std::endl;
                continue;
            }
        }

        // Get NumberTwo Value From User
        while (true)
        {
            std::cout << "Please Enter NumberTwo : ";
            std::cin >> NumberTwo;
            try
            {
                std::stoll(NumberTwo);
                break;
            }
            catch (...)
            {
                std::cout << "Error : Please Enter A Number (A Number Is Cantain (1234567890)). Please Try Again." << std::endl;
                continue;
            }
        }

        // Get Operation From User
        while (true)
        {
            std::cout << "1) Sum" << std::endl;
            std::cout << "2) Subtraction" << std::endl;
            std::cout << "3) Multiplication" << std::endl;
            std::cout << "4) Divide" << std::endl;
            std::cout << "Please Enter A Number Of Operation : ";
            std::cin >> Operation;
            try
            {
                std::stod(Operation);
                if ((std::stod(Operation)) < 1 or (std::stod(Operation) > 4))
                {
                    std::cout << "Error : The Selected Operation Not Valid. Please Try Again." << std::endl;
                    continue;
                }
                else
                {
                    break;
                }
            }
            catch (...)
            {
                std::cout << "Error : Please Enter A Number (A Number Is Cantain (1234567890)). Please Try Again." << std::endl;
            }
        }

        // Print Total Of User's Selected Operation
        switch (std::stoi(Operation))
        {
        case 1:
        {
            std::cout << "Sum Is : " << (std::stoll(NumberOne) + std::stoll(NumberTwo)) << std::endl;

            break;
        }
        case 2:
        {
            std::cout << "Subtraction Is : " << (std::stoll(NumberOne) - std::stoll(NumberTwo)) << std::endl;

            break;
        }
        case 3:
        {
            std::cout << "Multiplication Is : " << (std::stoll(NumberOne) * std::stoll(NumberTwo)) << std::endl;

            break;
        }
        case 4:
        {
            if (std::stoll(NumberTwo) == 0)
            {
                std::cout << "Error : We Can't Divide A Number To Zero. Please Try Again." << std::endl;
            }
            else
            {
                std::cout << "Divide Is : " << (std::stoll(NumberOne) / std::stoll(NumberTwo)) << std::endl;
            }

            break;
        }
        }
    }

    return 0;
}