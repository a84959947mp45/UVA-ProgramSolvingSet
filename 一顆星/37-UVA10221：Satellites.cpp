//37-UVA10221�GSatellites 
//�D��:��ìP�b�P�@�y�D�A��s,a��a�����As�O�a���ìP���Z���Aa�����סA�᭱�O���׳��(1min=deg) 
//     �D��ìP�Z���έy�D�����C
//���D:�Y���׶W�L180�ݭn��360�Ӧ��A�~�O�H���������򩶪�
//     cmath���Y�Ҥ� sqrt,cos,acos���O�ܦn�Ϊ���� 
//     ���D�ݭn�ϥξl���w�z 

#include <iostream>
#include <string>
#include <cmath>  // sqrt,cos,acos
#include <iomanip>

using namespace std;


#define r 6440         //�a�y�b�| 
#define  PI acos(-1.0) //cos�Ϩ�� acos(-1.0)��3.1415926�A�`�N�ݥ�1.0���i�ϥ�1�A���M�|�sĶ���~ 
int main(){
  
  double x,y;
  double R;
  
  //��J 
  while(cin>>x>>y){
    
    string str;
    double arc,chord;
    
    R=x+r;           //�ìP��a�ߪ��Z�� 
    cin>>str;     
    if(y>180){
	  y=360-y;
	}
	//�ˬd���ת���� 
    if(str=="min"){
      y/=60;
    }
    
    
    arc=2*R*PI*y/360;       //�������� 
    chord=sqrt(2*R*R*(1-cos(y/180*PI))); //�l���w�z 
    
    //��ܨ�p���I�᤻�� 
    cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
  
  
  }



}
