#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<string> s;
    s.push("Ankita");
    s.push("Singh");
    s.push("Chandel");
    cout<<s.top()<<endl;

    s.pop();
    cout<<s.top()<<endl;

    cout<<"Size of the stack "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;



    return 0;
}
