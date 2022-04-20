#include <iostream>
#include <set>

using namespace std;

int main(){

    //no duplicates, no modification
    set<int> s;
    s.insert(5);
    s.insert(6);
    s.insert(2);
    s.insert(6);
    s.insert(1);
    s.count(5);

    //returns address
    cout << *s.find(5);

    //print 
    for(int i: s){
        cout << i;
    }
     
    cout << endl;

    ////auto keyword
    for(auto i: s){
        cout << i;
    }

    s.erase(s.begin());
    s.clear();
    


}