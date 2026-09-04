1class Solution {
2public:
3    int mySqrt(int x) {
4        if(x<2)
5        {
6            return x;
7        }
8        int low=2,high=x/2;
9        low=2;
10        while(low<=high)
11        {   
12            int mid=low+(high-low)/2;
13            long long sq=(long long)mid*mid;
14            if(x<sq)
15            {
16                high=mid-1;
17            }
18            else if(x==sq)
19            {
20                return mid;
21            }
22            else
23            {
24                low=mid+1;
25            }
26        }
27        return high;
28    }
29};
