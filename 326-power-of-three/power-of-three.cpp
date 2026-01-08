class Solution {
public:
    bool isPowerOfThree(int n) 
    {
     int x = 3;
     for(int i=0;i<=200;i++)
     {
        long long int y = pow(x,i);
        if(y==n)
        {
            return true;
        }
        else if(y>n)
        {
            return false;
        }
     }   
     return -1; 
    }
};