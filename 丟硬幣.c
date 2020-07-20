#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>
#include "circle.h"
#include "game.h"

int main(){
	bool again = true;
	char ans[5] ,S[5] = "n";
		
	while(again == true){
		game();
		printf("Play again? (y/n): " );
		scanf("%s", &ans);
		if(ans[0]==S[0]){
			again = false;
		}else{
			printf("\n \n \n \n \n \n \n");
			printf("\n \n \n \n \n \n \n \n");
			
		}		
	}
  return 0;
}


