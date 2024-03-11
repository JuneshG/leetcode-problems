#include<iostream>
#include<climits>
using namespace std;

//------find max and min of an array-------
int main(){
    int max = INT_MIN;
    int min = INT_MAX;
    int n;
    cout<<"size: ";
    cin>>n;
    int arr[n];
    // cout<<"arr: ";
    for(int i = 0; i<= n; i++){
        cout<<"arr["<<i<<"]: ";
        cin>>arr[i];
    }

    for (int i = 0; i<=n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    for (int i = 0; i<=n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout<<endl;
    cout<<"max: "<<max<<" min: "<<min;
    cout<<endl;
    return 0;
    
}