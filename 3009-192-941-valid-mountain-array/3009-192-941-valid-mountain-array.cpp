class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int k = 0;
      
        int n = arr.size();

        if (n <= 2) {
            return false;
        }
        for (int i = k; i < n - 1; i++) {
            if (arr[k] >= arr[k + 1]) {
               break;
            } 
            else k++;
        }
        if (k == 0 || k == n - 1) {
            return false;
        }
        for (int i = k; i < n - 1; i++) {
            if (arr[i] <= arr[i + 1]) {
                return false;
            }
        }
       return true;
    }
};