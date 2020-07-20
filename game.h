void game(void){
	srand( time(NULL) );
  char a[5], h[5] = "正", t[5] = "反";
  char xx[5]="?", yy[5]="\b正",zz[5]="\b反";
  circle(xx);
  /* 產生 [0, 1) 的浮點數亂數 */
  int x =  rand() % 100;
  printf("是正面還是反面? \n輸入\"正\"或\"反\":");
  scanf("%s",&a);
  

  while(a[0] != h[0] && a[0] != t[0]){
  	printf("請打\"正\"或\"反\"好嗎?\n");
  	scanf("%s",&a);  	
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

  if(a[0] == h[0]){
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
	printf("\n\n");
}
