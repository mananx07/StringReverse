#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "Enter String To be Reversed: ";
    cin >> s;

    int i=0,j=s.length()-1;
    while(i < j) {
        swap(s[i++],s[j--]);
    }

    cout << "Reversed String: " << s << endl;

    return 0;
}
