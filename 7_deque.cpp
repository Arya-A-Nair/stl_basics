#include<iostream>
#include <queue>

using namespace std;

int main(){
    deque<int> d;

    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    d.push_back(50);
    d.push_front(10);

    d.pop_front();
    d.pop_back();

    
}


