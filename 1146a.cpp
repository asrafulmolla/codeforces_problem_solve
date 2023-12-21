#include<iostream>
#include<string>
#include<math.h>
#include<functional>

//#include<bits/stdc++.h>

//#define l               long
#define ll              long long
#define ull             unsigned long long
#define pb              push_sback
#define uns             using namespace std
// Md. Asraful Molla; Department of CSE; Dhaka International University(DIU), Bangladesh;
//using namespace std;
uns;
int main()
{
    int len=0,a=0,good=0;
    string s;
    cin>>s;
    len=s.length();
    for(int i=0; i<len; i++)
        if(s[i]=='a')
            a++;
    int minimum = min(len,2*a-1);
    cout<<minimum << endl;


    return 0;
}
