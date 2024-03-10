#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<"number: ";
    int n;
    cin>>n;
    int main = n;
    int rem;
    int temp = 0;
    while(n>0){
        rem = n%10;
        temp = temp+pow(rem,3);
        n = n/10;
    }
    cout<<"Number cubed added:"<<temp<<endl;
    if (temp == main){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
    return 0;
}

