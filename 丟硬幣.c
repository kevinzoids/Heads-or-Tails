#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
int main(){
  srand( time(NULL) );
  int a;
		printf(
	"        �@         \n" 
	"     /      \\     \n" 
	"    |   ??   |     \n"
	"     \\      /     \n"
	"        �@         \n"	       );
  /* ���� [0, 1) ���B�I�ƶü� */
  int x =  rand() % 100;
  printf("�O�����٬O�ϭ�? \n�����O0�ϭ��O1:");
  scanf("%d",&a);
  
  while(a!=0&&a!=1){
  	printf("�Х�0��1�n��?\n�����O0�ϭ��O1:\n");
  	scanf("%d",&a);  	
  }
  printf("�n���o~\n");Sleep(1500);
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
		printf("      �@");
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
	"        �@         \n" 
	"     /      \\     \n" 
	"    |   ��   |     \n"
	"     \\      /     \n"
	"        �@         \n"	       );
	}else{
		printf(
	"        �@         \n" 
	"     /      \\     \n" 
	"    |   ��   |     \n"
	"     \\      /     \n"
	"        �@         \n"	       );
	}

  if(a==0){
  	if(x>=50){
  	printf("����F!\n");
    }else{
  	printf("�O�ϭ���\n");
    } 
  }else{  	
  	if(x>=50){
  	printf("�O������\n");
    }else{
  	printf("����F!\n");
    } 
  }
  


 system("pause");
  return 0;
}
