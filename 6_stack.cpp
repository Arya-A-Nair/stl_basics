#include <iostream>
#include <stack>

using namespace std;

int main(){
    //declaration
    stack<int> s;

    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    

    //size
    cout << s.size() << '\n';

    //accessing topmost element
    cout << s.top() << '\n';

    //popping out elements
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    //empty
    cout << s.top();

    cout << s.empty();
    
    
}