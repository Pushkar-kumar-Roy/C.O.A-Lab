
#include <iostream>
using namespace std;
void Half_Subtractor(int a,int b)
{
    int difference,borrow;
    difference = a^b;
    a = not(a);
    borrow = a & b;
    cout<<"Difference = "<<difference<<endl;
    cout<<"Borrow = "<<borrow<<endl;
}
int main() {
    int a = 1;
    int b = 0;
    Half_Subtractor(a,b);
    return 0;
}
