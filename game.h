void game(void){
	srand( time(NULL) );
  char a[5], h[5] = "��", t[5] = "��";
  char xx[5]="?", yy[5]="\b��",zz[5]="\b��";
  circle(xx);
  /* ���� [0, 1) ���B�I�ƶü� */
  int x =  rand() % 100;
  printf("�O�����٬O�ϭ�? \n��J\"��\"��\"��\":");
  scanf("%s",&a);
  

  while(a[0] != h[0] && a[0] != t[0]){
  	printf("�Х�\"��\"��\"��\"�n��?\n");
  	scanf("%s",&a);  	
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

  if(a[0] == h[0]){
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
	printf("\n\n");
}
