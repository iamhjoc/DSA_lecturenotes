class Solution {
  public:
    int largest(vector<int> &arr) {

        int i;
        int n = arr.size();
        int ans = INT_MIN;
        for(i=0;i<n;i++){
        if(arr[i]>ans)
        ans = arr[i];
            
        }
        return ans;
        
    }
};
