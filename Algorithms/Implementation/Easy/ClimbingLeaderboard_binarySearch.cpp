#include <bits/stdc++.h>
using namespace std;


//http://www.geeksforgeeks.org/floor-in-a-sorted-array/
//http://quiz.geeksforgeeks.org/binary-search/
//http://ideone.com/rS1b21

vector<int> arr;
//modified floorsearch for descending sorted 
int floorSearch(int low, int high, int x)
{
	//cout << "into the search with low "<< low << " and high "<< high << endl;
    // If low and high cross each other
    if (low > high)
        return -1;
 
    // If last element is smaller than x
    if (x >= arr[low])
        return low;
 
    // Find the middle point
    int mid = (low+high)/2;

	//cout << "foundmid: "<< mid << endl;
    // If middle point is floor.
    if (arr[mid] == x)
        return mid;
 
    // If x lies between mid and mid-1
    //cout << "between? "<< arr[mid-1] << "and "<< arr[mid] << endl;
    if (mid > 0 && arr[mid] <= x && x < arr[mid-1])
        return mid;
 
    // If x is smaller than mid, floor must be in
    // right(not left) half.
    //cout << "?  is "<<x <<" < "<<arr[mid] << endl;
    if (x < arr[mid])
        return floorSearch( mid+1,high, x);
 
    // otherwise in the left half
    return floorSearch( low, mid-1, x);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    long temp;
    cin >> n;
    
    //creating a mapping for rank -> score
    //ith index of lb (leaderboard) contains score required for that rank
    long last = -1;
    int rank = 0;
    //vector<int> lb(n+1,0);
    arr.push_back(-1); //there is no 0th rank
    for(int i=0;i<n;i++){
        cin >> temp;

        if(last!=temp){
            rank++;
            last = temp;
            //lb[rank] = last;
            arr.push_back(last);
        }
        
        //no need to store all the scores in an array, the data we needed is stored in lb
    }
    arr.push_back(0);
    //***now rank+1 is the last possible rank***
    cin >> m;
    vector<int> ans;
    for(int i=0;i<m;i++){
        cin >> temp;
        //find rank for score==temp
        /**
        for(int j=1;j<n+1;j++){
            if(temp>=lb[j]){
                cout << j << endl;
                ans.push_back(j);
                break;
            }
        }
        **/
        //time complexity NxM
        //since lb is sorted, can we search faster?
        //binary search!!!!
        
        int a1 = floorSearch(1,rank+1,temp);
        //cout << a1 << " is found from floor search" << endl;
        ans.push_back(a1);
        
        //no need to save all scores of Alice, since we already processed
        //a.push_back(temp);
        
    }
    
    for(int i=0;i<m;i++){
        cout << ans[i] << endl;
    }
    
    return 0;
}


