#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TEXT "adventtext.txt"

void main(int argc, char *argv[]){
    
    char Numbers[10];
    int PrevNumbers;
    int CountedNumbers = 0;
    int j = 0;
	int som = 0;
    int num1 = 0, num2 = 0, num3 = 0;

    FILE *fp = NULL; // verander de naam (dit is voor file opening en error voor fail.
    
    fp = fopen(TEXT,"r");
    if(fp == NULL){
        printf("error");
        return -1;
    }
    else{
        for(int i = 0; i < 2253 ; i++){
            
            
            fgets(Numbers, 10, (FILE*)fp);
            PrevNumbers = atoi(Numbers);
            CountedNumbers = CountedNumbers + PrevNumbers;
            
            if(Numbers[0] == '\n'){
                if (CountedNumbers > num1) {
                    num3 = num2;
                    num2 = num1;
                    num1 = CountedNumbers;
                }

                else if (CountedNumbers > num2){
                    num3 = num2;
                    num2 = CountedNumbers;
                }

                else if (CountedNumbers > num3)
                    num3 = CountedNumbers;
                        
                        CountedNumbers = 0;
            }
        }
    }
    printf("1=%d 2=%d 3=%d\n", num1, num2, num3);
	som = num1 + num2 + num3;
	printf("%d", som);
    fclose(fp);
    return 0;
}