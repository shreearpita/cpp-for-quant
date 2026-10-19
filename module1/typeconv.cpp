#include <iostream>

int main(){

    //implicit
    int x = 3.24;
    double y = 3.24;
    double z = 3;
    char w = 100;
    std::cout<<x<<"\n";//3 [converts 3.24 intenally into integer value]
    std::cout<<y<<"\n";//3.24
    std::cout<<z<<"\n";//3
    std::cout<<w<<"\n";

    //explicit
    double a = (int) 3.24;
    std::cout<<a<<"\n";

    //example
    int correct = 8;
    int question = 10;
    double score =(correct/(double)question) *100;
    std::cout<<"score: "<<score<<std::endl;
    return 0;
}
