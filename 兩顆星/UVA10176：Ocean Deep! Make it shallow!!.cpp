
#include <iostream>

#include <sstream>

#include <cstdio>

#include<cstring>

#include <climits>

#define MAX 5001

using namespace std;

int main()

{
    int i,j;

    string a,s;

    long long int num;

    while(cin>>a)

    {
        long long sum=0;
        //假如最後一個是#
        if(a[a.length()-1]=='#')
        {

              s+=a;

              num=1;
            //從後面數來開始算
            for(i=s.length()-2;i>=0;i--)
            {


                sum+=(s[i]-'0')*num;
                num*=2;

                while(sum>=131071){

                    sum-=131071;

                }

            }
            cout<<sum<<endl;

            if(sum%13071==0){

                cout<<"YES"<<endl;

            }

            else{

                cout<<"NO"<<endl;

              }

              s="";

            }

        else {

            s+=a;

        }

    }

    return 0;

}
