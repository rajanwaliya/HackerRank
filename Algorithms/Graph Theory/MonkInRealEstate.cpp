#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t-->0){
        int e;
        cin >> e;
        set<int> st;
        int x,y;
        while(e-->0){
            cin >> x >> y;
            st.insert(x);
            st.insert(y);
            
        }
        cout << st.size() << endl;
        
    
    }
    
    return 0;
}
