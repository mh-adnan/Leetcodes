class Solution {
public:
    int numberOfSteps(int num) {
        int cnt=0;
        while(num!=0)
    {
        if(num%2==0)
        {
            num=num/2;
        }
        else if(num%2!=0)
        {
            num=num-1;
        }
        num=num;
        cnt++;
    }
    return cnt;
    }
};