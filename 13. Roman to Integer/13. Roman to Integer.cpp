1class Solution {
2public:
3    int romanToInt(string s) {
4    s+=' ';
5    int sum=0;
6    int I = 1,V=5,X=10,L=50,C=100,D=500,M=1000;
7        for(int i=0;i<s.length();i++)
8        {
9            if (s[i] == 'I')
10            {
11                if(s[i+1]=='V')
12                {
13                    sum+=4;
14                    i++;
15                }
16                else if(s[i+1]=='X')
17                {
18                    sum+=9;
19                    i++;
20                }
21                else
22                {
23                    sum+=1;
24                }
25            }
26            else if (s[i] == 'V') sum += 5;
27            else if (s[i] == 'X')
28            {
29                if(s[i+1]=='L')
30                {
31                    sum+=40;
32                    i++;
33                }
34                else if(s[i+1]=='C')
35                {
36                    sum+=90;
37                    i++;
38                }
39                else
40                {
41                    sum+=10;
42                }
43            }
44            else if (s[i] == 'L') sum += 50;
45            else if (s[i] == 'C')
46            {
47                if(s[i+1]=='D')
48                {
49                    sum+=400;
50                    i++;
51                }
52                else if(s[i+1]=='M')
53                {
54                    sum+=900;
55                    i++;
56                }
57                else
58                {
59                    sum+=100;
60                }
61            }
62            else if (s[i] == 'D') sum += 500;
63            else if (s[i] == 'M') sum += 1000;
64        }
65        return sum;
66    }
67};