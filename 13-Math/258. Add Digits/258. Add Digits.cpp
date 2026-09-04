1class Solution {
2public:
3    int addDigits(int num) {
4        int sum=0;
5        while(num>=10)
6        {   
7            int a=num/10;
8            int b=num%10;
9            sum=a+b;
10            num=sum;
11        }
12        return num;
13    }
14    
15    };