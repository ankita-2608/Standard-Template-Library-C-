#include<iostream>
#include<deque>

using namespace std;

int main() {
     deque<int> d;
     d.push_back(1);
     d.push_front(2);

     for(int i:d) {
        cout<<i<<" ";
     }cout<<endl;

     d.pop_back();
     for(int i:d) {
        cout<<i<<" ";
     }cout<<endl;

     cout<<"First index element "<<d.at(1)<<endl;
     
     cout<<"First element "<<d.front()<<endl;
     cout<<"Last element "<<d.back()<<endl;

     cout<<"Empty or not "<<d.empty()<<endl;

     cout<<"Before earse "<<d.size()<<endl;
     d.erase(d.begin(), d.begin()+1);
     cout<<"After earse "<<d.size()<<endl;

    return 0;
}
