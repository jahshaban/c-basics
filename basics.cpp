#include <iostream>
//iostream ia a header file that contains fucntions for
//basic input and output operations
#include <vector>

typedef std::string text_t;

namespace first{
    double x = 5.5;
}
namespace second{
    int x = 2;
}


int main(){

    std::cout << "put on a smile" << '\n';
    std::cout << "enjoy your time" << '\n';
    //
     /*
       to add a new line for performance do \n
       endl means end line
       << means output
       std meands standard c means charecter out means output
     */
    
     // int means integer or whole number
     //int x = 9; // delceration
     //int y = 18;
     //int sum = x + y;
     //x = 9; // assignment
     //y = 18; 

     //std::cout << x << '\n';
     //std::cout << sum << '\n';

     int age = 21;
     int year = 2025;
     //int days = 7.5;

     //double means number including a decimal
     double price = 10.99;
     double gpa = 2.5;
     double temp = 25.1;
     
     std::cout << temp << '\n';

     //char means single character
     char graded = 'A';
     char intial = 'B'; 

     std::cout << intial << '\n';

     //booleans are true or false or only have 2 states
     bool student = false;
     bool power = false;

     std::cout << student << '\n';

     //strings represent a sequence of text
     std::string name = "jose";
     std::string day = "awesomeday";
     std::string food = "yumyum";

     std::cout << "Hello " << name << '\n';
     std::cout << "it is " << day << " horray" << '\n';

    //const specifies that a variable value is constant 
    //pretty much prevent anything from modifying it

    const double PI = 3.14159;
    int radius = 10;
    double circumference = 2 * PI * radius;
    std::string cenimeter = " cm";

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    std::cout << circumference << cenimeter << '\n';

    //namespace provides a solution for preventing name conflict in a larger project
    //a name space allows for identical named entities as long as the namespaces are diff
    //outside of main functuon

    std::cout << first::x * second::x << '\n' ;

    //typedef is a reserved keyword used to create aditional names
    //tldr a nickname that helps with readablity and typos

    text_t firstName = "Jouse";

    std::cout << firstName << '\n';


    return 0;
    // if we reach return 0 there are no problems in the program

   
}