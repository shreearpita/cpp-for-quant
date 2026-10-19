#include <iostream>

int main(){

    int flag = 10;
    std::cout << "Value of flag is : "<<flag<<std::endl;
    std::cout<<"Select the option in 1,2,3,4,5 to perform the arithmetic operation"<<"\n";
    int t;
    std:: cin>>t;
    
    switch(t){
     case 1:
        flag+=2;//flag = flag+2; //incrementor : flag++;
        std::cout<< "Addition: " <<flag<<std::endl;
        break;
    
     case 2 : 
        flag--;//flag = flag-1; //short-hand : flag-=1;
        std::cout<<"Subtraction: "<<flag<<std::endl;
        break;
 
     case  3: 
        flag*=2;
        std::cout<<"Multiplication: "<<flag<<std::endl;
        break;

     case  4:
        flag = flag/2;
        std::cout<<"Division: "<<flag<<"\n";
        break;

     case 5:
        flag = flag%2;
        std::cout<<"Modulos: "<<flag<<std::endl;
        break;
     default :
        std::cout<<"Default: "<<flag<<std::endl;
   }
    return 0;
}
