#include <bits/stdc++.h>
using namespace std;

bool validPos(int i){
    return (i>=0 && i<9);
}

vector<int> getBlankSpace(vector<string> mp){
    //returns vector [si,sj,ei,ej]
    int si=-1,sj=-1,ei=-1,ej=-1,nexti,nextj,diri=-1,dirj=-1;
    int dx[] = {-1,1,0,0};
    int dy[] = {0,0,-1,1};
    for(int i=0;i<10 && si==-1;i++){
        for(int j=0;j<10 && si==-1;j++){
            //for each position
            if(mp[i][j]!='+'){ //if not restricted location
                for(int k=0;k<4 && si==-1;k++){
                    nexti = i+dx[k];
                    nextj = j+dy[k];
                    if(validPos(nexti) && validPos(nextj) && mp[nexti][nextj]=='-'){
                        si = i;
                        sj = j;
                        diri = dx[k];
                        dirj = dy[k];
                        break;
                    }
                }
            }
        }
    }
    ei = nexti;
    ej = nextj;
    while(validPos(nexti) && validPos(nextj)){
        ei = nexti;
        ej = nextj;
        ei = ei+diri;
        ej = ej+dirj;
    }
    return vector<int>({si,sj,ei,ej,diri,dirj});
}

int getLen(int si,int sj, int ei, int ej){
    //either same row or same col
    if(ei==si){
        return abs(ej-sj);
    }else{
        return abs(ei-si);
    }
}


bool solve(vector<string> mp, vector<string> dic, int si, int sj, int ei, int ej, int diri,int dirj){
    int len = getLen(si,sj,ei,ej);
    for(int i=0;i<dic.size();i++){
        if(len==dic[i].size() && (mp[si][sj]=='-' || mp[si][sj] == dic[i][0] )){
            for(int j=0;j<len;j++){ //put the word
                mp[si+j*diri][sj+j*dirj] = dic[i][j];
            }
            vector<int> temp = getBlankSpace(mp);
            if(temp[0]==-1){
                for(int i=0;i<10;i++){
                    cout << mp[i] << endl;
                }
                return true;
            }
            string temps = dic[i];
            dic[i] = "";
            return solve(mp,dic,temp[0],temp[1],temp[2],temp[3],temp[4],temp[5]);
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<string> mp;
    string temp;
    for(int i=0;i<10;i++){
        cin >> temp;
        mp.push_back(temp);
    }
    cin >> temp;
    string p = strtok(temp, ";");
    while(p!=NULL){
        mp.push_back(p);
        cout << "adding " << p;
        p = strtok(NULL,";");
    }
    return 0;
}
