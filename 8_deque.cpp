#include <iostream>
#include <deque>

using namespace std;

int main() {

deque <int> d;

d.push_back(20);
d.push_back(30);
d.push_back(40);
d.push_back(50);
d.push_front(10);

d.front();
d.end();

d.pop_front();
d.pop_back();
d.begin();
d.end();
d.erase(d.begin(),d.end());
d.clear();
d.at(1);
d.front();
d.back();
d.empty();
d.size();

}
