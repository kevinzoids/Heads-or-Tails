int circle(a){
	int i, j;
	
	for(i=-6;i<7;i++){
		for(j=-11;j<11;j++){
			if((i*i+j*j/4)<=26&&(i*i+j*j/4)>=24){
				printf("*");
			}else if(i==0&&j==0){
				printf("%s",a);
			}else{
				printf(" ");
				
			}
			
		}
		printf("\n");
	}
}
