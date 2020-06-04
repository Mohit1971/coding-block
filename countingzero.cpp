/*
This program is used to count zeros in factorial number ...............................................................


Ram is very good at mathematics. He was given a number n and was told to find out number of trailing zeroes in n! in logarithmic time. Can you help him?

Input Format
An integer n

Constraints
n can go upto 2000

Output Format
An integer denoting number of trailing zeroes

Sample Input
5
Sample Output
0
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
int n;
cin>>n;
int countc = 0;
while(n>0)
{
    n=n/5;
    countc=countc+n;
}
cout<<countc;
}


