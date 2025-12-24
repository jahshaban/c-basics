#include <iostream>
#include <string>
#include <cmath>

int main(){
 
    //aithmetic operators = return the result of operations ( + - * /)

    //int students = 20;

    //students+=1;
    //students++;
    //students-=1;
    //students*=2;

    
    // if u need the remainder for division you need the moudulus operator
    
    //int remainder = students % 3;
    
    //std::cout << remainder;

    //order of operations pemdas

    //int students = (7 + 1) * 3 / 4 - 2;

    //std::cout << students;

    //type conversion is the conversion of a value of one data type to another
    //implicit = automatic
    //explicit = new data type (int) *

    //double x = (int) 3.14;

    //std::cout << x;

    //int questions = 12;
    //int correct = 10;
    //double score = correct/(double)questions * 100;

    //std::cout << score << "%";
    
    // std::cout << (char)100;
    // std::cout << (int) 5.77;

    //cout << (insertion operator)
    //cin >> (extraction operator)

    //using std::string;
    
    //string name;
    //int number;

    //std::cout << "whats your favorite number?:  ";
    //std::cin >> number;

    //std::cout << "what day is it and ur name?:  ";
    //std::getline(std::cin >> std::ws, name);

    // use >> std::ws to get rid of white spaces (spaces) before getline

    //std::cout << "hello " << name << '\n' << "mr number " << number;

    double x = 3.73;
    double y = 4;
    double z;

    // max functuon return the greater of 2 values
    //z = std::max(x, y);
    //z = std::min(x, y);

    // min functuon return the lesser of 2 values

    //std::cout << z;

    //z = pow (2, 3);
    // pow is to the power of
    //z = sqrt (y);
    // sqrt is the square root
    //z = abs (x);
    // abs is absoulute value how far away from 0
    //z = round(x);
    // rounds number to neartest int
    //z = ceil(x);
    // if you want to round it up always
    //z = floor(x);
    // if you want to round it down always

    //std::cout << z;

    double a;
    double b;
    double c;

    std::cout << "what is side A?: ";
    std::cin >> a;

    std::cout << "what is side B?: ";
    std::cin >> b;

    a = pow (a,2);
    b = pow (b,2);

    c = sqrt(a+b);

    std::cout << c;
    

    return 0;
}