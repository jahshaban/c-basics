#include <iostream>

int main(){

    //if statements do something if a condition is true if not it does nothing
//
/* 
   int inventory;
    int key;
    int haskey;
    int answer;
    
    inventory = 16;
    key = 1;

    haskey = inventory - key;

    std::cout << "whats 2 + 2?: ";
    std::cin >> answer;

    if(answer == 4 ){
        std::cout << "you unlocked a key " << "your inventory is now " << haskey << '\n';;
    }
    else{
        std::cout << "no key 4 u";
    }

    std::cout << "what number is your inventory to unlock door?" << '\n';
    std::cin >> inventory;
    

    if(inventory == 15){
        std::cout << "you unlocked a door ";
    }
    else{
        std::cout << "no door 4 u";
    }
*/ 
    
//
/*
    int age;

    std::cout << "enter age: ";
    std::cin >> age;

    if(age >= 18 ){
        std::cout << "welcome";
    }
    else if(age < 0){
        std::cout << "be fr";

     }
     else if(age >= 0){
        std::cout << "be fr";
    
     }
     else{
        std::cout << "leave";
    }

*/
    //if a codition in the parentheses is true you perfrom whats in side curly
    //brackets

    // >= (greater than or equal too) are comparison operators other are 
    // <= == >=
    // = is and assignment opperator == makes it comparison

    //switch is an alternative to using many else if statements
    //compare one value against matching cases

//
/*
    int magicball;
    std::cout << "pick a number between 1-8: ";
    std::cin >> magicball;

    switch(magicball){
        case 1:
            std::cout << "its ur lucky dayyyy";
            break;
        case 2:
            std::cout << "its ur even more lucky dayyyy";
            break;
        case 3:
            std::cout << "its ur lucky dayyyy";
            break;
        case 4:
            std::cout << "its ur even more lucky dayyyy";
            break;
        case 5:
            std::cout << "its ur lucky dayyyy";
            break;
        case 6:
            std::cout << "its ur even more lucky dayyyy";
            break;
        case 7:
            std::cout << "its ur lucky dayyyy";
            break;
        case 8:
            std::cout << "its ur even more lucky dayyyy";
            break;
        default:
        std::cout << "please enter in only numbers 1-8";

    }
    // no matching case you can execute a default case
*/
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*********** PROBLEM SOLVER *************\n";
    
    std::cout << "Enter first numbaa: ";
    std::cin >> num1;

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter second numbaa: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n' ;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n' ;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n' ;
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << '\n' ;
            break;
        default:
            std::cout << "stop playin fr" << '\n';
            break;
    }

    std::cout << "****************************************";



    
    return 0;
}