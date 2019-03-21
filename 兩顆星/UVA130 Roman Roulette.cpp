#include<iostream>
#include<vector>
using namespace std;

int countPosition(int,int,vector<int>);
int counterPositionValue(int&,vector<int>);
int main(){
	int n,k;
	//輸入值 
	while(cin>>n>>k){
		if(n==0||k==0){
			break;
		}
		int position=0;
	    vector<int>people;
	    people.assign(n,0);
	    for(int i=1;i<=n;i++){
	    	people[i-1]=i;
		}
	 
	    int die;
	    try{
	    	for(int i=0;i<people.size();i++){
		
	    	int reposition=-1;
	       position=countPosition(position,k,people);
	       reposition=position;
	   // cout<<"被淘汰的人:"<<people[position]<<endl;
	       die=people[position];
		   people[position]=-1;
		   position=countPosition(position,k+1,people);
		   //假如都為-1就丟出最後死亡那位 
		   if(position==-2){
		   	  throw die;
		   }
		//cout<<"幫忙埋葬的人"<<people[position]<<" 位置"<<position<<endl;
		   people[reposition]=people[position];
		   people[position]=-1;
		   position=reposition;
		   position=countPosition(position,2,people);
	    //cout<<"下一個開始的人"<<people[position]<<endl;
	    //cout<<endl;
	      }
    	}
		catch(int die){
			if(n==1){
				 cout<<"1"<<endl;
			}else{
		        cout<<(people.size()+1-die)%people.size()+1<<endl;		
			}
		   
		} 
	    
		
	}
	
} 
//走幾count步 傳回值 
int countPosition(int position,int count,vector<int> people){
	//第一次的變數
	int first=0;
	 
	for(int i=1;i<count;i++){
		int countX=0;
		//判斷下一個是不是-1 
		while(1){
		   //整個people裡面都是-1	
		   if(countX==people.size()){
		   	  return -2;
		   }	
			//假如是-1就繼續找 
		   if(counterPositionValue(position,people)==-1){
		   	 countX++;
		     continue;
	       }
	       	
	       	
	       	 break;
		   		
		}	

	} 	
	return position;
	
}
//幫忙數到不是-1的位置 
int counterPositionValue(int& position,vector<int>people){
	
	position++;
	if(position==people.size()){
		position-=people.size();
	}
	
	return people[position];
	
	
}

