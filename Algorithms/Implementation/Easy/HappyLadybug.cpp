#include <bits/stdc++.h>

using namespace std;

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout << v[i]<< ",";    }
    cout << endl;
}

int main(){
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
        bool underscore = false;
        
        bool init_happy = true;
        //important case, since don't need underscore for this
        
        vector<int> char_map(26);
        for(int i=0;i<b.size();i++){
            if(b[i]=='_'){underscore=true;}
            else{
                char_map[b[i]-'A']++;
            }
            if(i==0){
                if(b[i]!=b[i+1]){init_happy = false;}
            }else if (i==b.size()){
                if(b[i]!=b[i-1]){init_happy = false;}
            }else{
                if(b[i]!=b[i-1] && b[i]!=b[i+1]){init_happy = false;}
            }
        }
        
        bool alone = false;
        for(int i=0;i<char_map.size();i++){
            if(char_map[i]==1){
                alone = true;
            }
        }
        //print(char_map);
        
        if(underscore && !alone || init_happy){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
        
    }
    return 0;
}
