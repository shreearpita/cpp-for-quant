#include <iostream>

namespace quant {
   int x = 23;
}

int main(){
 using namespace quant;
 using namespace std;
  
  int x = 24;
 // int x = 17;
  string role = "quant";
  cout << x << "\n";
  cout << quant::x << endl;
  cout << role << endl; 


   return 0;
}
