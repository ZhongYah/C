#include<stdio.h>
int main(){
     int max;
     printf("MAX = ");
     scanf("%d", &max);

     int number;
     for (number = 1; number <= max; ++number){
          if(number%3 == 2 &&number%5 == 3 &&number%7 == 2){
             printf("%d  ", number);
             }
     }
     printf("\n");
     return 0;
}
