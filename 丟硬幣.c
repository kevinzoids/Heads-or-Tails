#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
int main(){
  srand( time(NULL) );
  int a;
		printf(
	"        一         \n" 
	"     /      \\     \n" 
	"    |   ??   |     \n"
	"     \\      /     \n"
	"        一         \n"	       );
  /* 產生 [0, 1) 的浮點數亂數 */
  int x =  rand() % 100;
  printf("是正面還是反面? \n正面是0反面是1:");
  scanf("%d",&a);
  
  while(a!=0&&a!=1){
  	printf("請打0或1好嗎?\n正面是0反面是1:\n");
  	scanf("%d",&a);  	
  }
  printf("要丟囉~\n");Sleep(1500);
  int i;  
	printf("      |");
	fflush(stdout);
	for(i=1;i<=3; i++)
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
	
	if(x>=50){		printf(
	"        一         \n" 
	"     /      \\     \n" 
	"    |   正   |     \n"
	"     \\      /     \n"
	"        一         \n"	       );
	}else{
		printf(
	"        一         \n" 
	"     /      \\     \n" 
	"    |   反   |     \n"
	"     \\      /     \n"
	"        一         \n"	       );
	}

  if(a==0){
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
