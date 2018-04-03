#include<iostream>
using namespace std;
int main()
{
    int cnt = 0;
    string s,s1;
    cin >> s;
    for(int i = 0,l=s.size();i<l;i++)
        s[i]+='a'-'A';
    while(cin>>s1)
    {
        if(s1=="END_OF_TEXT")
            break;
        for(int i=0,l=s1.size();i<l;i++)
            s1[i]+='a'-'A';
        if(s==s1)
            cnt++;
    }
    cout << cnt <<endl;
    return 0;
}
