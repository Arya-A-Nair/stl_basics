#include <iostream>
#include <deque>

using namespace std;

int main() {

deque <int> d;

d.push_back(1);
d.push_front(2);
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
d.max_size();

}
