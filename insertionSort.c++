#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"size: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cout<<"arr["<<i<<"]: ";
        cin>>arr[i];
    }
    for (int i = 1; i<n; i++){
        int j = i-1;
        int current = arr[i];
        while (arr[j] > current && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}