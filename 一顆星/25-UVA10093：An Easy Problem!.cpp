//25-UVA10093�GAn Easy Problem!
//�D��: ��X N(2~62) �i�쪺�Ʀr�A�åB��n�i�H�QN-1���㰣�C�䤤A~Z��10~35��ܡBa~z��36~61��ܡC
//�t��k:��C�@�ӭȳ��[�_�Ӭ�sum�A�q�C�ӭȧ�X�̤j�����ӼƦr�A�q�o�ӼƦr�}�l���W�[����i�H�㰣�N�����A�C�L�X�o�Ӽ�+1�A�Y���ҨD

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
        //�qMAX�}�l�[1�A�[��i�H�㰣���ӼƧY���ҨD 
        for(int i=Max;i<=62;i++)
        {
            if(sum%i==0)
            {
                cout<<i+1<<endl;//�ҨDN=i+1
                break;
            }
            else if(i==62) cout<<"such number is impossible!"<<endl;
        }
    }
    return 0;
}


