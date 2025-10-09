class Solution {
public:
    int divide(int div, int ds) {
        if (div == INT_MIN && ds == -1)
            return INT_MAX;

        return div / ds; 
    }
};
