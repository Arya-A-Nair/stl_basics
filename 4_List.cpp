#include<bits/stdc++.h>    
using namespace std;  


void print(list<int>&List){    
for(auto i : List)cout<<i<<" ";    
cout<<"\n";    }       

int main(){     

    list<int>List;    
    List.assign(10,9);   
    print(List);       

    List.push_back(10);    
    List.push_back(15);    
    print(List);       

    List.push_front(11);    
    List.push_front(12);    
    print(List);    

    cout<<List.front()<<" "<<List.back()<<"\n";    
    List.resize(20,5);    
    print(List);    

    int arr[] = {1,2,3,4,5};    
    List.insert(List.begin(),arr,arr+5);    
    print(List);    

    List.sort();   
    print(List);           

}