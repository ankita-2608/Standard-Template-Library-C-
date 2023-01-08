#include<iostream>
#include<queue>

using namespace std;

int main() {
    queue<string> q;
    q.push("Item1");
    q.push("Item2");
    q.push("Item3");

    cout<<q.front()<<endl;

    cout<<"Size of the queue "<<q.size()<<endl;

    q.pop();

    cout<<q.front()<<endl;

    cout<<"Size of the queue "<<q.size()<<endl;

    return 0;
}
