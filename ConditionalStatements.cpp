#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    int a;
    string num[10]={"Greater than 9","one",
    "two","three","four","five","six","seven","eight","nine"};
    cin>> a;
    if(a>9){
        cout<<num[0];
    }
    else{
        cout<< num[a];
    }
    return 0;
}

