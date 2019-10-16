#include<bits/stdc++.h>
using namespace std;
int main() {
 
    int q;int n;
    cin >> q ;
    while(q--)
    {
        cin >> n;
        // vector<int> v(n, 0);
        int num;
        int sum = 0;
        for(int i = 0; i < n ; i++)
        {
            cin >> num;
            sum += num;
        }
 
        if(sum%n == 0)
        {
            cout << sum/n <<endl;
        }
        else{
            cout << sum/n + 1 << endl;
        }
    }
    
    return 0;
    
    
}