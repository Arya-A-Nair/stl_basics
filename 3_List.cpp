#include<iostream>
#include<list>

using namespace std;

void print(list<int> l){
    
}

int main(){
    
    //declaration
    list<int> l1;
    list<int> l2(5);
    list<int> l3(5,1);
    
    //copy list
    list<int> n(l3);

    //push
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    l1.push_front(10);


    //pop
    l1.pop_back();
    l1.pop_front();

    //maxsize
    l1.max_size();

    //remove
    l1.remove(30);

    //erase
    l1.erase(l1.begin(),l1.end());

    //empty
    cout << l1.empty();

    //size
    l1.size();

    l1.clear();

    l1.sort();
}