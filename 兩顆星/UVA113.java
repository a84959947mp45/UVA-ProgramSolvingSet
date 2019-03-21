//�D���D�� UVA113 Power of Cryptography

//�D��²�z:
//���A��Ӿ�� n�]n >= 1�^�M p�]p >=1�^�A�A�����g�@�ӵ{���ӭp��X p ���� n ����ڡC
//�b�o�Ӱ��D�̡Ap �ҥi�� kn ���Φ��A�䤤 k ����ơC�]k�]�N�O�A���{���ҭn�D���^
//
//�C�մ��ո��2�C�A��1�C��1�Ӿ�� n�]1 <= n <= 200�^�A��2�C��1�Ӿ�� p�]1 <= p <= 10101�^�C 
//�åB�s�b�@�Ӿ�� k�A�]1 <= k <= 109�^�A�ϱo pow(k,n)=p�C
// ���׿�Xk

//�t��k:
//�Хߤj�ƪ���A���H�U��O

//���D:1.�n�F�Ѥj��B��H�μƾ�log��z
//     2.�{����log���ƬO�שԼ�e�A���������ݦb��log(��������)

import java.lang.*;
import java.math.*;
import java.util.*;

public class UVA113{

	public static void main(String[] args){
		//�ŧi��J���O����input
		Scanner input = new Scanner(System.in);
		//�ˬd��J�O�_����
		while(input.hasNext()){
		
			double n,re,k;
			String p;
			//�ŧi�j��B����
			BigInteger P ;	
			//��J�@��Double
			n = input.nextDouble();
			//��J�@��String
			p = input.next();
			//��l�Ƥj��B�A�����غc�lb�r��
			P =  new BigInteger(p);
			
			//�D�Xlog2(k)=re
			re = Math.log(P.doubleValue())/Math.log(2)/n;
			//�D�Xk
			k = Math.pow(2,re);
		
			System.out.printf("%.0f%n",k);				
					
		}

			

	}


}