//This code was done in cooperation of Sten Rune Lyngmo, Erik Holst, Mathias Fredriksen and Adrian Drevland.

#include <iostream>
#include <string>
#include <conio.h>
#include <limits>

int getintfromuser() {
    int integer;
    std::cin >> integer;
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max()), '\n';
        system("cls");
        std::cout << "That, my friend, is not a number...\n";
        std::cin >> integer;
    }
    return integer;
}


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

    std::cout << "Press any button to return to the main menu...";
    _getch();

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
        if (coffee == 'Y') 
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

    std::cout << "Press any button to return to the main menu...";
    _getch();

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

    std::cout << "\n\nPress any button to return to the main menu...";
    _getch();
}

void task4() 
{

}

void task5() 
{

}

int main()
{
        bool complete1 = false;
        bool complete2 = false;
        bool complete3 = false;
        bool complete4 = false;
        bool complete5 = false;


    start:
        system("cls");
        std::cout << "This is Edvard's assignment Weekly 1.\n";
        std::cout << "It contaions 5 tasks.\n";
        std::cout << "To chose a task, type a number between 1 and 5, then press enter.\n";

    choice:
        if (complete1 && complete2 && complete3 && complete4 && complete5) {
            system("cls");
            std::cout << "You are done!\n\n\n\n Now go away.";
            _getch();
        }
        else {
            int choice = getintfromuser();
            std::cin.ignore();
            if (choice == 1) {
                task1();
                complete1 = true;
            }
            else if (choice == 2) {
                task2();
                complete2 = true;
            }
            else if (choice == 3) {
                task3();
                complete3 = true;
            }
            else if (choice == 4) {
                task4();
                complete4 = true;
            }
            else if (choice == 5) {
                task5();
                complete5 = true;
            }
            else {
                system("cls");
                std::cout << "Really? You can't type a number between 1 and 5?\n\n";
                std::cout << "Type a number between 1 and 5, then press enter.\n";
                goto choice;
            }
            goto start;
        }
}


