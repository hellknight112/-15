#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int h,m;
	
	printf("請輸入要查詢的時間");
	scanf("%d,%d",&h,&m);
	
	if(h<17 && h>7 &&  m<=59 && m>=0){
		printf("現在是上課時間給我回去上課!!");	
	}
	else if(h==7 && m<=59 && m>=30){
		printf("現在是上課時間還混啊!!!");		
	}
	else if(h >= 25 || m >= 60 || m<=-1){
		printf("沒有這個時間好嗎");	
	}
	else{
		printf("放學啦!!");	
	}

	system("PAUSE");
	return 0;
}
