//46-UVA10415�GEb Alto Saxophone Player
//�D��:�ץ���F�X���A1~10 �Q������C�C�X��
//���D:�ϥ�map�B�z�|�ܮe���A�]�w�W�@���ת����s(last_x)�h�P�_ 

#include <iostream>
#include <string>
#include <map>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){

    map<char,string>judge;
    int c;
    char nouse;
    
    judge['0']="0000000000";
    judge['c']="0111001111";
    judge['d']="0111001110";
    judge['e']="0111001100";
    judge['f']="0111001000";
    judge['g']="0111000000";
    judge['a']="0110000000";
    judge['b']="0100000000";
    judge['C']="0010000000";
    judge['D']="1111001110";
    judge['E']="1111001100";
    judge['F']="1111001000";
    judge['G']="1111000000";
    judge['A']="1110000000";
    judge['B']="1100000000";
    
    cin>>c;
    nouse=getchar();
    
    while(c--){
       int i,j;
       int finger[11];
       char last_x='0',x;
       string str;
       
       memset(finger,0,11*4);
       
       getline(cin,str,'\n');
       
       for(i=0;i<str.size();i++){
          x=str[i];
         for(j=0;j<=10;j++){
           if(judge[last_x][j]=='0'&&judge[x][j]=='1'){
               finger[j]++;
           }
         }
         last_x=x;
       }
       for(j=0;j<10;j++){
          cout<<finger[j];
          if(j==9){
            cout<<endl;
          }else{
            cout<<" ";
          }
       }
       
       
       
    }
    
    
}
