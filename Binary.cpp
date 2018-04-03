#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;

    cin >> n;
    vector<int>v(n);
    for(int i = 0;i<n;i++)
        cin >>v[i];
    int ans = 0;
    int m;
    cin >> m;
    sort(v.begin(),v.end());
    while(m--)
    {
        int a;
        cin >> a;
        if(binary_search(v.begin(),v.end(),a))
            ans++;
    }
    cout << ans<<endl;
    return 0;
}
