#include <iostream>
#include<stack>
using namespace std;
int main()
{

    stack<int> s;
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int min=s.top();
    while (!s.empty()) { 
        cout << ' ' << s.top(); 
        int a=s.top();
        if(min>a)
        {
            min=a;
        }
        s.pop(); 
    } 
    cout<<"\nthe minimum element is :"<<min;

    return 0;
}
