//25-UVA10093：An Easy Problem!
//題目: 找出 N(2~62) 進位的數字，並且剛好可以被N-1給整除。其中A~Z由10~35表示、a~z由36~61表示。
//演算法:把每一個值都加起來為sum，從每個值找出最大的那個數字，從這個數字開始往上加直到可以整除就結束，列印出這個數+1，即為所求

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    while(getline(cin,str))
    {
        int sum=0;
        int Max=1;
        for(int i=0;i<str.size();i++)
        {
            int R=0;
            if('0'<=str[i]&&str[i]<='9') R=str[i]-48;
            else if('A'<=str[i]&&str[i]<='Z') R=str[i]-'A'+10;//'A'-10
            else if('a'<=str[i]&&str[i]<='z') R=str[i]-'a'+36;//'a'-36
            sum+=R;
            if(R>Max) Max=R;
        }
        //從MAX開始加1，加到可以整除那個數即為所求 
        for(int i=Max;i<=62;i++)
        {
            if(sum%i==0)
            {
                cout<<i+1<<endl;//所求N=i+1
                break;
            }
            else if(i==62) cout<<"such number is impossible!"<<endl;
        }
    }
    return 0;
}


