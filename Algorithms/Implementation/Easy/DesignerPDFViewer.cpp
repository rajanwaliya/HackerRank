#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int h[26];
    int temp;
    string the_word;
    
    for(int i=0;i<26;i++){
        cin >> temp;
        h[i] = temp;
    }
    
    cin >> the_word;
    
    int max_height_in_the_word = 0;
    
    int width = the_word.size();
    
    for(int i=0;i<the_word.size();i++){
        max_height_in_the_word = max(max_height_in_the_word, h[the_word[i]-'a']);
    }
    
    cout << (max_height_in_the_word * width);
    
    return 0;
}
