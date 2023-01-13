
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the binary number: ";
    cin>>n;
    int n1=n;
    int sum=0,count=-1;
    while(n!=0){
        count++;
        int rem = n%10;
        sum = sum+ rem*pow(2,count);
        n = n/10;
    }
    cout<<"The decimal corresponding is: "<<sum<<endl;
    return 0;
}
