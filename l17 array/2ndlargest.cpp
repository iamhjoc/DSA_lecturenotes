class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int largest = arr[0];
        int secondlargest = INT_MIN;//core concept
        
        for(int i = 1; i<n; i++)//not i = 0 bcoz int largest = arr[0];
        {
            if(arr[i] > largest)
            {
                secondlargest = largest;
                largest = arr[i];
            }
            else if(arr[i] < largest && arr[i]>secondlargest)
            {
                secondlargest = arr[i];
            }
        }
        if (secondlargest == INT_MIN){
            return -1;//that means the value of seclargest hasnt been change its same 
        }
    return secondlargest;   
    }
    
};