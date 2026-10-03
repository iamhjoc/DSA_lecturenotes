class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k=k%n;//bcoz out of bound exception 
        //reverse the array
        reverse(arr.begin(),arr.end());
        //reverse k elements from the beginning
        reverse(arr.begin(),arr.begin()+k);
        //reverse the elements which are after k position
        reverse(arr.begin() + k ,arr.end());

        
    }
};