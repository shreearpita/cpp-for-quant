#include <iostream>

int main(){
    std::string name;
    int age;

    // std::cout<< "Enter your name: "<<"\n";
   // std::cin >> name;
  // std::getline(std::cin, name);

    std::cout<< "Enter your age: "<<"\n";
    std::cin >> age; //adds a "\n" char in input buffer when using cin for input

    std::cout<<"Enter your name : "<<"\n";
   // std::getline(std::cin, name); //accepts that newline charcter from the input buffer by default
    std::getline(std::cin >> std::ws, name); //std::ws removes any whitespaces or new line charcater before user input    

    std::cout<< "Hey! What's up "<< name <<" ? \n";
    std::cout<< "Are you "<<age<< " years old ?" << "\n";
    return 0;
}
