

#include <iostream>
using namespace std;

void Half_Adder(int a,int b)
{
 
    int sum , carry;
    
  
    sum = a ^ b;
    carry = a & b;
    cout<<"Sum = "<< sum << endl;
    cout<<"Carry = "<<carry<< endl;
}
int main()
{
    int a= 1;
    int b = 0;
    Half_Adder(a,b);
    return 0;
}
