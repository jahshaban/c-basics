#include <iostream>

int main(){

// ternary operator is a replacement to an if/else statement
// pretty much condition ? expression1 : then 2


//int number;

//percentage give you he remainder of any dvision

//std::cout << "enter a numbaa: ";
//std::cin >> number;

//number % 2 == 1 ? std::cout << "odd" : std::cout << "even";

//number >= 50 ? std::cout << "big numba" : std::cout << "small numba";

//bool hungry = true;

//hungry == true ? std::cout << "you are hungry" : std::cout << "you are full";
//std::cout << (hungry ? "You are hungry" : "you are full");


// && check if two conditions are true
// || check if one codition is true
// ! if something becomes true its false and if something becomes false its true

//int temp;
//bool sunny = ! true;

//std::cout << "enter temp";
//std::cin >> temp;

//if(temp > 0 && temp < 69){
//    std::cout << "yes yes";
//}else{
//    std::cout << "nonono";
//}

//if(temp <= 0 || temp >= 69){
    //std::cout << "yes yes";
//}else{
    //std::cout << "nonono";
//}

//if (sunny == true){
    //std::cout << "yes yes";
//}else{
    //std::cout << "nonono";
//}
    
double temp;
char C;
char F;
char unit;

std::cout << "-temp conversion-\n";
std::cout << "-f-\n";
std::cout << "-c-\n";
std::cin >> unit;

if(unit == 'F'|| unit == 'f'){
    std::cout << "Enter the temp in celsisus: ";
    std::cin >> temp;

    temp = (1.8 * temp) + 32.0 ;
    std::cout << "the temp is: " << temp << "f";

} else if (unit == 'C'|| unit == 'c'){
    std::cout << "Enter the temp in fahrenheit: ";
    std::cin >> temp;

    temp = (temp - 32) * 5/9 ;
    std::cout << "the temp is: " << temp << "C";
}


std::cout << "-----------------";

return 0;

}