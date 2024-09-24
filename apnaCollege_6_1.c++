//all prime numbers
//armstrong numbers
//fibonacci numbers
//reverse
//pattern


#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int num){
    
    // if (num <= 1){
    //     while (num<=1){
    //         num = num+1;
    //     }
    // }
    for(int i = 2; i <= sqrt(num); i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}
void fib(int n){
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for(int i = 0; i<= n; i++){
        cout<<t1<<" ";
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}

int reverse(int num){
    int temp = 0;
    int rem;

    while(num>0){
        rem = num%10;
        temp = temp*10+rem;
        num = num/10;
    }
    return temp;
}

int factorial(int num){
    int fact;
    if( num == 0 || num == 1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
    
}

int combination(int n, int r){
    return factorial(n)/((factorial(n-r))*factorial(r));
}

int main(){
    int n; 
    // int a; int b;
    // int num; 
    int r;
    // cout<<"num: ";
    // cin>>num;
    // cout<<"a: ";
    // cin>>a;
    // cout<<"b: ";
    // cin>>b;
    cout<<"n: ";
    cin>>n;
    cout<<"r: ";
    cin>>r;
    // for(int i = a; i<= b; i++){
    //     if (isPrime(i)){
    //         cout<<i<<" ";
    //     }
    // }
    // for (int row = 0; row <= n; row++){
    //     for(int space = 0; space <= n-row; space++){
    //         cout<<" ";
    //     }
    //     for (int col = row; col>=1; col--){
    //         cout<<col;
    //     }
    //     for(int col = 2; col <= row; col++){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }

    // cout<<endl;

    // cout<<"Fibonacci: "<<endl;
    // fib(n);
    // cout<<endl;
    // cout<<"Reverse number: ";
    
    // cout<<reverse(num)<<" "<<endl;

    // cout<<"Factorial"<<endl;
    // cout<<factorial(num)<<endl;

    // cout<<"Calculate nCr: "<<endl;
    
    // cout<<"combination: "<<combination(n,r)<<endl;
    cout<<"Pascals Triangle: "<<endl;
    for(int i = 0; i <= n; i++){
        for(int space = 0; space <= n-i; space++){
            cout<<" ";
        }
        for(int j = 0; j<=i; j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}


