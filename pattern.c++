// butterfly pattern
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Size: ";
    cin>>n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<"*";
        }
        for (int k = 1; k <= 2*n-2*i; k++){
            cout<<" ";
        }
        for (int k = 1; k <= i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = n; i >= 1; i--){
         for (int j = 1; j <= i; j++){
            cout<<"*";
        }
        for (int k = 1; k <= 2*n-2*i; k++){
            cout<<" ";
        }
        for (int k = 1; k <= i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl; 
    //inverted pattern
    // 12345
    // 1234
    // 123
    // 12
    // 1

    for(int i = 1; i <= n; i++){
        for ( int j = 1; j <= n+1-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // 0 1 pattern
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            if ((i+j)%2 == 0){
                cout<<"1";  
            } 
            else{
                cout<<"0";
            }
            cout<<" ";
            }
        cout<<endl;

        }
    cout<<endl;

    //Rhombus
    for (int i = 0; i < n; i++){
        for(int j = i; j < n-1; j++){
            cout<<" ";
        }
        for (int k = 0; k < n; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Number pattern
    for (int i = 0; i <= n; i++){
        for(int j = i; j <= n-1; j++){
            cout<<" ";
        }
        for(int k = 1; k <= i; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Palindromic Pattern
    cout<<"palindromic pattern 1"<<endl;
    for (int i = 1; i <= n; i++){
        int j;
        for(j = 1; j <= n-i; j++){ // i = 0 , n =5  (j = 1, 1 < 5, j = 2; j=2, 2<5, j=3; j=3, 3<5, j=4; j=4, 4<5, j=5; j=5, j<=5, j=6)
            cout<<"  ";
        }
        // for(int j = 1; j <= n-i; j++){
        //     cout<<"  ";
        // }

        int k = i;
        for(;j<=n; j++){
            cout<<k--<<" ";
        }
        k = 2;
        for(; j<=n+i-1; j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //palindromic Pattern another way
    cout<<"palindromic pattern 2"<<endl;

    for (int row = 1; row <= n; row++){
        for(int col = 1; col <= n-row; col++){
            cout<<" ";
        }
        
        for(int col = row; col >= 1; col--){
            cout<<col;
        }
        for(int col = 2; col<= row; col++){
            cout<<col;
        }
        cout<<endl;
    }
} 



