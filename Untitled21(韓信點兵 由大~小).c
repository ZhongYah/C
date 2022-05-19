#include<stdio.h>
int main(){
     int min, max;
     printf("MIN = ");
     scanf("%d", &min);
     printf("MAX = ");
     scanf("%d", &max);
     int number;
     for (number = max; number >= min; --number){
          if(number%3 == 2  &&number%5 == 3  &&number%7 == 2){
             printf("%d\n", number);
             }
     }
     printf("\n");
     return 0;
}
