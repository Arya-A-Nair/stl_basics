#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    bool b;

    //basic inout output
    int n;
    cout << "Enter any value";
    cin >> n; 
    cout << n << endl;

    //pointer
    int *p = &n;

    cout << "adress: " << p << endl;
    cout << "value: " << *p << endl;


    //arrays
    int arr[]={1,2,3};

    //for loop
    for(int i=0;i<3;i++){
        cout << arr[i] << " ";
    }

}