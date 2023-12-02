#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
    string b;
    char A;
    char B;
    cin>> a>> b;
    int lena = a.size();
    int lenb = b.size();
    cout<< lena <<" "<< lenb<<"\n";
    string c= a+b;
    cout << c<<"\n";
    A = a[0];
    B = b[0];
    a[0] = B;
    b[0] = A;
    cout << a << " " << b << "\n";
    
  
    
    
  
    return 0;
}
