#include<iostream>>
using namespace std;
int main(){

    int arr[5];
    int n = sizeof(arr)/4;

    cout << "Enter your array elements :\n";

    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }


    cout << "What number of you want to know index?\n";

    int checker;
    cin >> checker;

    for(int i=0; i<n; i++){
        if(checker == arr[i]){
            cout << i+1 << " is your desired index.";
        }
    }
    return 0;
}