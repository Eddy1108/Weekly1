//This code was done in cooperation with Sten Rune Lyngmo, Erik Holst, Mathias Fredriksen and Adrian Drevland.

#include <iostream>
#include <string>
#include <conio.h>
#include <limits>
#include <Windows.h>

void task1()
{
    system("cls");

    int age;
    std::string name;
    std::string birthYear;
    char initial;
    long phoneNum;

    //Store the Name
    std::cout << "What is your full name?   -";
    std::getline(std::cin, name);

    system("cls");

    //Store the inital letter
    //std::cout << "What letter does your name start with?    -";
    //initial = _getch();
    initial = name[0];

    //Store Age
    std::cout << "How old are you?    -";
    std::cin >> age;

    system("cls");

    //Store phone number
    std::cout << "Can i have your phone number?? ;)   -";
    std::cin >> phoneNum;

    system("cls");

    //Store Date of birth
    std::cout << "What is your date of birth? (Use DD/MM/YY)   -";
    std::cin.ignore();
    std::getline(std::cin, birthYear);

    system("cls");

    //Print out all the Information
    std::cout << "--------------------\n"
        << "|Name     |" << name << "\n"
        << "|Inital   |" << initial << "\n"
        << "|Age      |" << age << "\n"
        << "|Phone Num|" << phoneNum << "\n"
        << "|Birthday |" << birthYear << "\n"
        << "--------------------" << std::endl;

    std::cout << "\n\nReturning to Main Menu..." << std::endl;
    system("pause");

}


void task2() 
{
    system("cls");

    std::string name = "";
    std::string answer = "";
    char coffee{0};
    int age{0};
   
    //Store name
    std::cout << "What is your name sir?  -";
    std::getline(std::cin, name);

    //Store age
    std::cout << "\nAnd how old are you?   -";
    std::cin >> age;

    //Store coffee answer
    std::cout << "\nDo you like Coffee? (Y/N)   -";
    std::cin >> coffee;
    std::cin.ignore();

        //Solve
        if (coffee == 'Y' || coffee == 'y') 
        {
            answer = "It seems you like coffee!";
        }
        else 
        {
            answer = "Oh, seems you dont like coffee...";
        }

    system("cls");

    //Print Final
    std::cout << "Your name is: " << name << "\n\n"
              << "You are " << age << " years old" << "\n\n"
              << answer << "\n\n\n";

    std::cout << "Returning to Main Menu . . ." << std::endl;
    system("pause");

}

void task3() 
{
    system("cls");

    int age;
    std::cout << "How old are you?   -";
    std::cin >> age;

    if (age < 20) 
    {
        std::cout << "You are young!";
    }
    else if (age >= 20 && age < 41) {
        std::cout << "You are a grown up";
    }
    else if (age >= 40 && age < 60) {
    std::cout << "You are old";
    }
    else if (age >= 60) {
        std::cout << "You are REALLY old\n\n";
    }

    std::cout << "\n\nReturning to Main Menu . . ." << std::endl;
    system("pause");
}

int task4() 
{
    int answer = 0;
    while (true) {
        system("cls");
        std::cout << "Out of the 3, what is your favorite?\n"
            << "1. Coffee \n2. Tea \n3. Coca Cola \n\n"
            << "Please make your choice with 1, 2, or 3 : ";

        std::cin >> answer;
        //std::cin.ignore();

        system("cls");

        if (answer == 1)
        {
            std::cout << "Coffee is delicious!";
            std::cout << "\n\nReturning to Main Menu . . ." << std::endl;

            system("pause");
            return 0;
        }
        else if (answer == 2)
        {
            std::cout << "Tea gives you peace of mind";
            std::cout << "\n\nReturning to Main Menu . . ." << std::endl;

            system("pause");
            return 0;
        }
        else if (answer == 3)
        {
            std::cout << "Coke will give you a white smile :)";
            std::cout << "\n\nReturning to Main Menu . . ." << std::endl;

            system("pause");
            return 0;
        }
        else {
            std::cout << "That is not a valid option from the list\n\n";
            std::cout << "Please try again" << std::endl;

            system("pause");
        }
    }
}

void task5() 
{
    system("cls");

    char pattern[11][33] = {
        "      1   2   3   4   5   6    \n",
        "    --- --- --- --- --- ---    \n",
        "A  | * | * | * | * | * | * |  A\n",
        "    --- --- --- --- --- ---    \n",
        "B  | * | * | * | * | * | * |  B\n",
        "    --- --- --- --- --- ---    \n",
        "C  | * | * | * | * | * | * |  C\n",
        "    --- --- --- --- --- ---    \n",
        "D  | * | * | * | * | * | * |  D\n",
        "    --- --- --- --- --- ---    \n",
        "     1   2   3   4   5   6     \n"
    };

    for (int i = 0; i < 11; i++) 
    {
        for (int j = 0; j < 33; j++) 
        {
            if (pattern[i][j] == '*') {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                std::cout << pattern[i][j];
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            }
            else 
            {
                std::cout << pattern[i][j];
            }
        }
    }
    std::cout << "\n\nReturning to Main Menu . . ." << std::endl;
    system("pause");
}

int main()
{
        int choice;

    start:
        system("cls");
        std::cout << "Main Menu \n\n";
        std::cout << "Weekly 1 assignment, by Edvard.\n";
        std::cout << "There are 5 tasks in this program.\n";
        std::cout << "To choose a task, type a number between 1 and 5, then press enter.\n";

    choice:
            std::cin >> choice;
            std::cin.ignore();
            if (choice == 1) {
                task1();
            }
            else if (choice == 2) 
            {
                task2();
            }
            else if (choice == 3) 
            {
                task3();
            }
            else if (choice == 4) 
            {
                task4();
            }
            else if (choice == 5) 
            {
                task5();
            }
            else {
                system("cls");
                std::cout << "Really? You can't type a number between 1 and 5?\n\n";
                std::cout << "Type a number between 1 and 5, then press enter.\n";
                goto choice;
            }
            goto start;
}


