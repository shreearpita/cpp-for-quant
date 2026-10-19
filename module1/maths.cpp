#include <iostream>
#include <cmath>
int main(){
    double x = 3;
    double y = 4;
    double z = 5.99;
    double a,b,c,d,e,f,g,h;

    a = std::max(x,y);
    b = std::min(x,y);
    c = pow(x,y);
    d = abs(-x);
    e = sqrt(y);
    f = round(z);
    g = ceil(z);
    h = floor(z);

    std::cout<< "x = "<<x<<std::endl;
    std::cout<< "y = "<<y<<std::endl;
    std::cout<< "z= "<<z<<std::endl;
    std::cout << "max of x and y is "<<a<<"\n";
    std::cout << "min of x and y is "<<b<<"\n";
    std::cout << "power :  "<<c<<"\n";
    std::cout << "absolute value of -x :  "<<d<<"\n";
    std::cout << "squareroot of y  "<<e<<"\n";
    std::cout << "round of z  "<<f<<"\n";
    std::cout << "ceil of z  "<<g<<"\n";
    std::cout << "floor of z  "<<h<<"\n";


    return 0;
}
