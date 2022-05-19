#include <stdio.h>
int main(){
      int N;
      printf("N = ");
      scanf("%d", &N);

      int numberOfDivisors = 0;
      int number;
      for(number = 2;number<N;++number){
          if(N%number == 0){
             ++numberOfDivisors;
          }
      }
      if(numberOfDivisors == 0){
         printf("Yes\n");
      } else {
         printf("No\n");
      }
      return 0;
}
