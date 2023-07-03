//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        // code here
        int LeftMin[n];
       LeftMin[0] = arr[0];
       for(int i = 1;i<n;i++){
           LeftMin[i] = min(LeftMin[i-1],arr[i]);
       }
       
       int maxDist = INT_MIN;
       int i = n-1 , j = n-1;
       while(i>=0&& j>=0){
           if(arr[j] >= LeftMin[i]){
               maxDist = max(maxDist,j-i);
               i--;
           }
           else{
               j--;
           }
       }
       return maxDist;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends