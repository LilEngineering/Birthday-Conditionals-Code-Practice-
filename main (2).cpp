/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream> 


int main(){
    std::cout << "This program was writen by Lily Alterman on 5/4/2022. This program will calculate and display the user’s age based on  the birthdate the user enters. It will also display the astrological sign based on what the user inputs. The program   will only run though for people with a certain birthday month. :) \n";
    
    int day; 
    int month; 
    int year; 
    int i;
    
    std::cout << "Please enter your birth day: \n";
    std::cin >> day; 
    
    std::cout << "Please enter your birth month (in numerical values): \n"; 
    std::cin >> month; 
    
    std::cout << "Please enter your birth year: \n";
    std::cin >> year; 
    

    int age = (2021 + (5 / 12) + (4 / 31)) - (year + (month / 12) +(day / 31));
   
    
    if (month != 8) {
        
        for (int i = 0; i < 6; i++){
        std::cout << "Sorry, try again :(\n";

        std::cout << "Please enter your birth day: \n";
        std::cin >> day; 
    
        std::cout << "Please enter your birth month (in numerical values): \n"; 
        std::cin >> month; 
    
        std::cout << "Please enter your birth year: \n";
        std::cin >> year; 
        
        i++;
        }
        if (i > 12){
        std::cout <<"Maximum amount of inputs reached";
    }
    }
    

    
    while (month == 8){
        if (day <= 22){
            std::cout << "You are a Leo. Your birthday is: " << month << "/" << day << "/" << year << "\n";  
            std::cout << "You are " << age << " years old.\n"; 
            break;
        }
            else {
              std::cout << "You are a Virgo. Your birthday is: " << month << "/" << day << "/" << year << "\n";  
                std::cout << "You are " << age << " years old.\n"; 
                break;
                
            }
        }
 echo "# Birthday-Conditionals-Code-Practice-" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/LilEngineering/Birthday-Conditionals-Code-Practice-.git
git push -u origin main       
}

