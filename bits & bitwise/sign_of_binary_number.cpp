//program to check the sign of the number
#include"iostream"
using namespace std;
int main(){
    int n;
    cout<<"Enter the signed binary number :";
    cin>>n;
    int n1=n;
    int count=0;
    while(n1!=0){
        count++;
        n1=n1/10;
    }
    int b=1;
    for(int i=1;i<count;i++){
       b=b*10; 
    }
    int msb = n/b;
    if(msb==1)
    cout<<"It's a negative number.";
    else
    cout<<"It's a positive number.";
    return 0;
}
