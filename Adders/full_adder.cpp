
#include <iostream>
using namespace std;
void full_adder(int a,int b,int c_in)
{
    int sum , c_out;
    sum = c_in ^ (a ^ b);
   
    c_out = (a& b) | (b & c_in) | (a & c_in);
  
    cout<<"sum = "<< sum <<endl;
    cout<<"c-out = "<< c_out <<endl;
  }
  
 
int main() {
    int a = 1;
    int b = 0;
    int c_in = 0;
     full_adder(a, b, c_in);
    return 0;
}
