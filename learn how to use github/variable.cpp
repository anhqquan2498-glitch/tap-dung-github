#include <iostream> 
#include <string>


int main () {
    
    int a = 10;
    int b = 12;
    int c = a + b;
    std::cout << "a + b = " << c << std::endl ;

    char e = 'A';
    char f = 'B';
    char g = 'C'; 
    std::cout << e << '\n' << f << '\n' << g << '\n';

    bool dung = true;
    bool sai = false;

    std::string name;
    std::cin >> name;
    std::cout << name; 

    double x = 16.4;
    double y = 4.1;
    double z = x/y; 
    std::cout << x << '\n' << y << "=" << z << '\n';


    return 0;
}

