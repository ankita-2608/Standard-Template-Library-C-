#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    //to find Maximum and Minimum values.
    int a=2, b=3;
     cout<<"Max="<<max(a,b)<<endl;
     cout<<"Min="<<min(a,b)<<endl;

    //To swap two numbers.
     swap(a,b);
     cout<<"A="<<a<<" "<<"B="<<b<<endl;

    //To reverse the given string.
     string s = "abcd";
     reverse(s.begin(), s.end());
     cout<<"Reversed string="<<s<<endl;

    //To rotate the given array.
     rotate(v.begin(), v.begin()+1, v.end());
     cout<<"After rotation"<<endl;
     for(int i:v) {
        cout<<i<<" ";
     }cout<<endl;

  //To sort the given array.
    sort(v.begin(), v.end());
    for(int i:v) {
        cout<<i<<" ";
    }cout<<endl;


    return 0;
}
