#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "circle.h"

int main(){
  srand( time(NULL) );
  int a;
  char xx[5]="?", yy[5]="\b正",zz[5]="\b反";
  circle(xx);
  /* 產生 [0, 1) 的浮點數亂數 */
  int x =  rand() % 100;
  printf("是正面還是反面? \n正面是+1反面是-1:");
  scanf("%d",&a);

  while(a!=+1&&a!=-1){
  	printf("請打+1或-1好嗎?\n正面是+1反面是-1:\n");
  	scanf("%d",&a);  	
  }
	printf("要丟囉~\n");Sleep(1500);
  int i;  
  printf("      |");
  fflush(stdout);
	for(i=1;i<=2; i++)
	{
		Sleep(150-i*i);
		printf("\b \n");
		fflush(stdout);
		printf("      /");
		fflush(stdout);
		Sleep(150-i*i);
		printf("\b \n");
		fflush(stdout);
		printf("      一");
		fflush(stdout);
		Sleep(150-i*i);
		printf("\b\b \n");
		fflush(stdout);
		printf("      \\");
		fflush(stdout);	
		Sleep(150-i*i);
		printf("\b \n");
		fflush(stdout);
		printf("      |");
		fflush(stdout);	
	}
  Sleep(150-i*i);
	printf("\b \n");
	fflush(stdout);
	printf("      /");
	fflush(stdout);
	Sleep(150-i*i);
	printf("\b \n");
	fflush(stdout);
	printf("\b");
	printf(" \n");
	fflush(stdout);
	
	if(x>=50){		
	circle(yy);
	}else{
	circle(zz);
	}

  if(a==+1){
  	if(x>=50){
  		printf("答對了!\n");
    }else{
  		printf("是反面喇\n");
    } 
  }else{  	
  	if(x>=50){
  		printf("是正面喇\n");
    }else{
  		printf("答對了!\n");
    } 
  }
  


 system("pause");
  return 0;
}
