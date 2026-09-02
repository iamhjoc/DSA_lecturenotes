class Solution {
  public:
    void reverseArray(vector<int> &a) {
        int start = 0;
        int end = a.size() -1;
        while(start < end)
        {   swap(a[start],a[end]);
            start++;
            end--;
        }
    }
};
