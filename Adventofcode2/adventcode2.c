#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEXT "adventtext.txt"

 char Numbers[10];
/*
A for Rock, B for Paper, and C for Scissors
X for Rock, Y for Paper, and Z

1 for Rock, 2 for Paper, and 3 for Scissors) plus 
the score for the outcome of the round (0 if you lost,
 3 if the round was a draw, and 6 if you won
*/
void main(int argc, char *argv[]){

int score = 0;

 FILE *fp = NULL; 
    
    fp = fopen(TEXT,"r");
    if(fp == NULL){
        printf("error");
        return -1;
    }else{
        for(int i = 0; i < 2500 ; i++){
            
            
            fgets(Numbers, 10, (FILE*)fp);
            
			//printf("%s",Numbers);
            /*if(Numbers[0] == 'A' && Numbers[2] == 'X'){
				score = score + 3 + 1;
			}
			 if(Numbers[0] == 'B' && Numbers[2] == 'X'){
				score = score + 0 + 1;
			}
			 if(Numbers[0] == 'C' && Numbers[2] == 'X'){
				score = score + 6 + 1;
			}
			 if(Numbers[0] == 'A' && Numbers[2] == 'Y'){
				score = score + 6 + 2;
			}
			 if(Numbers[0] == 'B' && Numbers[2] == 'Y'){
				score = score + 3 + 2;
			}
			 if(Numbers[0] == 'C' && Numbers[2] == 'Y'){
				score = score + 0 + 2;
			}
			 if(Numbers[0] == 'A' && Numbers[2] == 'Z'){
				score = score + 0 + 3;
			}
			 if(Numbers[0] == 'B' && Numbers[2] == 'Z'){
				score = score + 6 + 3;
			}
			 if(Numbers[0] == 'C' && Numbers[2] == 'Z'){
				score = score + 3 + 3;
			}*/
			
			if(Numbers[0] == 'A' && Numbers[2] == 'X'){
				score = score + 0 + 3;
			}
			 if(Numbers[0] == 'B' && Numbers[2] == 'X'){
				score = score + 0 + 1;
			}
			 if(Numbers[0] == 'C' && Numbers[2] == 'X'){
				score = score + 0 + 2;
			}
			 if(Numbers[0] == 'A' && Numbers[2] == 'Y'){
				score = score + 3 + 1;
			}
			 if(Numbers[0] == 'B' && Numbers[2] == 'Y'){
				score = score + 3 + 2;
			}
			 if(Numbers[0] == 'C' && Numbers[2] == 'Y'){
				score = score + 3 + 3;
			}
			 if(Numbers[0] == 'A' && Numbers[2] == 'Z'){
				score = score + 6 + 2;
			}
			 if(Numbers[0] == 'B' && Numbers[2] == 'Z'){
				score = score + 6 + 3;
			}
			 if(Numbers[0] == 'C' && Numbers[2] == 'Z'){
				score = score + 6 + 1;
			}
        }
    }
	printf("Score = %d",score);
	
}
/*
A for Rock, B for Paper, and C for Scissors
X for Rock, Y for Paper, and Z

1 for Rock, 2 for Paper, and 3 for Scissors) plus 
the score for the outcome of the round (0 if you lost,
 3 if the round was a draw, and 6 if you won
*/