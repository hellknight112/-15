#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int h,m;
	
	printf("�п�J�n�d�ߪ��ɶ�");
	scanf("%d,%d",&h,&m);
	
	if(h<17 && h>7 &&  m<=59 && m>=0){
		printf("�{�b�O�W�Үɶ����ڦ^�h�W��!!");	
	}
	else if(h==7 && m<=59 && m>=30){
		printf("�{�b�O�W�Үɶ��ٲV��!!!");		
	}
	else if(h >= 25 || m >= 60 || m<=-1){
		printf("�S���o�Ӯɶ��n��");	
	}
	else{
		printf("��ǰ�!!");	
	}

	system("PAUSE");
	return 0;
}
