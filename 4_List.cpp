#include<iostream>
#include<list>

using namespace std;

int main(){
    
    list<int> l(5,1);

    //copy list
    list<int> n(l);

    l.push_back(1);
    l.push_front(2);
    l.empty();
    l.end();
    l.erase(l.begin());
    l.size();
    l.max_size();

}