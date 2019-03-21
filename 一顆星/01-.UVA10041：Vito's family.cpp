//UVA10041：Vito's family 
//題目:   有一個人想要蓋房子，蓋在離一群親戚家最近的地方，求離每個親戚家的距離總和
//演算法:  先排列親戚家的位子，在找出親戚家位子的中位數，每個親戚家都跟中位數相減，在加起來，即為所求
//難題:   當個數是基數的時候，中位數為中間的數字，
//        若為偶數，則中間的值前後一個數皆可做為蓋房子的地方，去做計算 
 
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
   //宣告變數 
   int a[600],x,y;
   int i,j,r,temp,mid,sum;
   //有幾組測試資料 
   cin>>x;
   
   while(x--){
      //將a陣列裡，所有值都清成0 
	  memset(a,0,600*4);sum=0;
	  //輸入數量 
      cin>>y;
      //輸入值 
      for(i=0;i<y;i++){
        cin>>a[i];
      }
      //泡沫排列，由小到大排序 
      for(i=y-2;i>=0;i--){
        for(j=0;j<=i;j++){
           if(a[j]>a[j+1]){
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
           }
        }
      }
      //判斷數字為基偶數，然後找中位數 
      if(y%2==1){
          mid=a[(y-1)/2];
      }else{
          mid=a[y/2];
      }
      //將與中位數所有距離加起來 
      for(i=0;i<y;i++){
         sum+=abs(mid-a[i]);
      }
      //顯示 
      cout<<sum<<endl;
   }


}




