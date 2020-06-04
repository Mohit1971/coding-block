/*
The heights of certain Buildings which lie adjacent to each other are given. Light starts falling from left side of the buildings. If there is a building of certain Height, all the buildings to the right side of it having lesser heights cannot see the sun . The task is to find the total number of such buildings that receive light.

Input Format
First line contains the Number of Testcases T.
Next line contains the totalnumber of buildings
Next line contains the height of n buildings.

Constraints
1<=T<=100 1<=N<=100 1<=Hi<=100

Output Format
Print total Number of buildings that receive Light.

Sample Input
2
8
5 3 9 6 10 11 8 13
6
3 4 1 6 2 3
Sample Output
5
3

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
{


int n,b,ans=0,max_h=INT_MIN;
cin>>b;
for(int i=0;i<b;i++)
{
cin>>n;
if(n>=max_h)
ans++;
max_h=n;
}

cout<<ans;

}

}
