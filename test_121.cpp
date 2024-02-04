#include <iostream>
#include <vector>
using namespace std;

int main()
{   

    //myfirst
 
    // 使用vector构造函数初始化string
    vector<char> charVec = {'h', 'e', 'l', 'l', 'o'};
      cout<<charVec.size()<<endl;
    for(auto i:charVec)
    cout<<i<<endl;
    cout<<charVec.data()<<endl;
    string str(charVec.begin(), charVec.end());
    cout << str << endl; // 输出: hello
    
    // 使用assign函数初始化string
    vector<char> charVec2 = {'w', 'o', 'r', 'l', 'd'};
    string str2;
    str2.assign(charVec2.begin(), charVec2.end());
    cout << str2 << endl; // 输出: world

    vector <char> ans;
    cout<<"happy new year"<<endl;
    return 0;
}
