
#full subtactor


#include <iostream>
using namespace std;
    void full_subtractor(int a,int b,int bin)
    {
        int difference=(a^b)^bin;
        int a1=not(a);
        int b_out=a1& bin|a1&b|b&bin;
        cout<<"difference="<<difference<<endl;
        cout<<"b_out="<<b_out<<endl;
    }
int main() {
    int a=1;
    int b=0;
    int bin=1;
    full_subtractor(a,b,bin);
    return 0;
}
