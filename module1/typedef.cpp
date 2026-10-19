#include <iostream>
#include <vector>
typedef std::vector<std::pair<std::string , int>> pairlist_t;
typedef std::string text_t;
typedef int num_t;

int main(){
    pairlist_t pairlist;
    text_t name = "Gojo Satoru";
    num_t age = 27;

    std::cout<< "Name: " << name<<"\n";
    std::cout<< "Age: "<<age<<"\n";
    return 0;
}
