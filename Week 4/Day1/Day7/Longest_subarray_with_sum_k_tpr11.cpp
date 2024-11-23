//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        int n=arr.size();
    long long int sum = 0; 
    long long int ans = 0;
    map<long long int, long long int> mp;
    long long int r=0;
    while(r<n)
    {
        sum+=arr[r];
        if(sum==k) 
        {
            ans=max(ans,r+1);
        }
        if (mp.find(sum-k)!=mp.end())
        {
            ans = max(ans,r-mp[sum-k]);
        }
        if (mp.find(sum)==mp.end()) 
        {
            mp[sum]=r;
        }
        r++;
    }
    return ans;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends