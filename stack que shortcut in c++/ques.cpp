#include <iostream>
#include<queue>//c++ libeareary to add this is import 
using namespace std;
int main()
{
    queue<int> s; //ques is declare here
    s.push(20); //pushing element into the que
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    while (!s.empty())  
    { 
        cout << ' ' << s.front(); //printing the front element then pop it front-- by pop function below
        s.pop(); 
    } 

    return 0;
}
