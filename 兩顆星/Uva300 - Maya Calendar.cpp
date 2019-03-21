#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int find(string,string);
int findHoliday(int);
int convert(string);

string Head[]={"pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};
string Tzolkin[]={"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};

int origin[]={1,21,41,61,81,101,121,141,161,181,201,221,241};//imix
int head[]={1,8,2,9,3,10,4,11,5,12,6,13,7};

int main(){
	
	int nam;
	cin>>nam;
	cin.get();
	cout<<nam<<endl;
	while(nam--){
		//input
		string allword;
		getline(cin,allword);
		string dayString,monthString,yearString,nouse;
		stringstream ss(allword);
		getline(ss,dayString,'.');
		getline(ss,nouse,' ');
		getline(ss,monthString,' ');
		getline(ss,yearString,' ');
	    //算出總天數
	    int day =convert(dayString);
	    int year=convert(yearString);
	    int month =find("Head",monthString);
		
		int sum = year*365+month*20+day+1;
		//轉換
		int outYear=0;
		while(sum>260){
				sum-=260;
				outYear++;
		}
		int re = sum;
		
		int outMonth =re-origin[findHoliday(re)];
		int outDay = outMonth+head[findHoliday(re)];
	
		
		while(outDay>13){
				outDay-=13;
		}
	
		
	    cout<<outDay<<" "<<Tzolkin[outMonth]<<" "<<outYear<<endl;
	}
	
}
int convert(string str){
	int integer;
	stringstream ss;
	ss<<str;
	ss>>integer;
	
	return integer;
}
int find(string kind,string name){
	if(kind=="Head"){
		for(int i =0 ;i<19;i++){
			if(Head[i]==name){
				return i;
			}
		}
	}else if(kind=="Tzolkin"){
		for(int i =0 ;i<20;i++){
			if(Tzolkin[i]==name){
				return i;
			}
		}
	}
	return -2;
}
int findHoliday(int sumDay){
	for(int i = 0;i<13;i++){
		if(sumDay<origin[i]){
			return i-1;
		}
	}
	return 12;
}
