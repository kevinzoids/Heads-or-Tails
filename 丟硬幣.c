#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "circle.h"

int main(){
  srand( time(NULL) );
  int a;
  char xx[5]="?", yy[5]="\b��",zz[5]="\b��";
  circle(xx);
  /* ���� [0, 1) ���B�I�ƶü� */
  int x =  rand() % 100;
  printf("�O�����٬O�ϭ�? \n�����O+1�ϭ��O-1:");
  scanf("%d",&a);

  while(a!=+1&&a!=-1){
  	printf("�Х�+1��-1�n��?\n�����O+1�ϭ��O-1:\n");
  	scanf("%d",&a);  	
  }
	printf("�n���o~\n");Sleep(1500);
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
	
	if(x>=50){		
	circle(yy);
	}else{
	circle(zz);
	}

  if(a==+1){
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
