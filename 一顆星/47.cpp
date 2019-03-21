/*
	UVA118�GMutant Flatworld Explorers
	
	�D�ػ����G�n�A�]�p�@����t���������H
			  �H(0.0)���U�����a�ϰ_�l�I�A�Ĥ@�C��J�a�ϥk�W�����y��
			  ���ۿ�J�n�X��CASE
			  	CASE���Ĥ@�C:��J�����H����m�έ����V(NESW)
			  	CASE���ĤG�C:��J�����H�����u
				  R:�V�k��90��
				  L:�V����90��
				  F:�­����V���@�B
			  ������H���X�a�Ͻd��A�����CASE�����H���ʧ@�ÿ�X�L���X�d��e���y�Шå[�WLOST 
			  ���۾����H�|���D���I���~�ɦ�m�A�b���U�Ӫ�case�|���L���I���~�ɨ��~��i��ʧ@
	
	�D�ذ��k:�p�U		   
*/

#include <iostream>
#include <string.h>
#include <map> 
using namespace std;

// robot��t���������H���O 
class robot
{
public:
	// �غc�l�A��J�a����t 
	robot(int eX, int eY):edgeX(eX),edgeY(eY){} 
	
	// set�ܼ�(x,y:�y�� o:�����V) 
	void setXY(int ix,int iy){
		x=ix;y=iy;
	}
	void setO(char io){
		o=io;
	}
	
	// get�ܼ�(edgeX,edgeY ��t) 
	int getX(void) const{
		return x;
	}
	int getY(void) const{
		return y;
	}
	char getO(void) const{
		return o;
	}
	int getEdgeX(void) const{
		return edgeX;
	}
	int getEdgeY(void) const{
		return edgeY;
	}
	
	// ��������H�ʧ@ 
	void path(string &s){
		for(int i=0; i<s.length(); i++){
				// �p�G�����H���X�a�Ͻd��A����ʧ@
				if(getHaveLost()) return; 	
				
				// ����F(�樫)�A�h�������H�樫		
				else if(s[i]=='F') Fgo(); 
				
				// ����L(�४��90��)�A��ﭱ���V 
				else if(s[i]=='L'){ 
					switch(getO()){
						case 'N':setO('W');break;
						case 'W':setO('S');break;
						case 'S':setO('E');break;
						case 'E':setO('N');break;
					}
				}
				
				// ����R(��k��90��)�A��ﭱ���V
				else if(s[i]=='R'){
					switch(getO()){
						case 'N':setO('E');break;
						case 'E':setO('S');break;
						case 'S':setO('W');break;
						case 'W':setO('N');break;
					}
				}
				
				else continue; 
			}
		} 
	
	// �����H�e�i 
	void Fgo(void){
		int tmpX=getX(),tmpY=getY(); // �x�s��U������m 
		
		if( m[ getX() ][ getY() ][ getO() ] ) return; // �ˬd�e�i��V�O���O��ɡA�O���ܰ���e�i 
		
		// �­����V�e�i 
		switch(getO()){
			case 'N':setXY(getX()  ,getY()+1);break;
			case 'E':setXY(getX()+1,getY()  );break;
			case 'W':setXY(getX()-1,getY()  );break;
			case 'S':setXY(getX()  ,getY()-1);break;
		}
		
		// ���X�a�Ͻd��A�h�x�s�e�i���e���y�ЩM�����V����haveLost=1; 
		if(getX()>getEdgeX() || getY()>getEdgeY() || getX()<0 || getY()<0) {
			setXY(tmpX,tmpY); // �����e�y�� 
			m[tmpX][tmpY][getO()]=1; // �x�s�����e�����A 
			setHaveLost(1); // �����H�w���� 
		}
	}
	
	// �]�wset�Ψ��oget�����H���S������ 
	void setHaveLost(bool b){
		haveLost = b;
	}
	bool getHaveLost(void) const{
		return haveLost;
	}
	
private:
	int x,y,edgeX,edgeY;
	char o;
	map<int,map<int,map<char,bool> > >	m; // ��ɱ����ܼ� 
	bool haveLost;
};


int main(){
	int edgeX,edgeY,x,y;
	char o;
	string s;
	cin>>edgeX>>edgeY; // ��J�a����� 
	robot r(edgeX,edgeY); // �]�w�����H
	
	// ��Jcase 
	while(cin>>x>>y>>o,cin>>s){
		r.setHaveLost(0); // �C��case�ϥηs�������H���s�i��ʧ@(�����k�s) 
		r.setXY(x,y);r.setO(o); // ��J�����H�@�}�l�����A 
		r.path(s); // �����H����ʧ@ 
		if( r.getHaveLost() ) cout<<r.getX()<<" "<<r.getY()<<" "<<r.getO()<<" LOST"<<endl;
		else cout<<r.getX()<<" "<<r.getY()<<" "<<r.getO()<<endl;
	}
}
