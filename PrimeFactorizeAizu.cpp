/* Author:Tanim
Date:12/3/2018
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{int i=2,k;
    cin >> k;
    cout << k <<":";
    while(i<=sqrt(k))
    {
        if(k%i==0)
        {
            cout << ' '<< i;
            k/=i;
        }
        else
        {
          i++;
        }

    }
    if(k-1)
    {
        cout << ' '<<k;
    }
    cout << endl;
    return 0;
}
