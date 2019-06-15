#include <stdio.h>


  int main(){
      int n1,n2,x,y,gcd,lcm;
      
      printf("Enter the number : ");
      scanf("%d",&n1);
      printf("Enter the number : ");
      scanf("%d",&n2);
      
      x = n1;
      y = n2;
      
      while(n1 != n2){
          if(n1 > n2){
              n1 = n1 - n2;
          }
          else{
              n2 = n2 - n1;
          }
      }
      gcd = n1;
      printf("gcd of 2 numbers %d\n", gcd);
      
      lcm = (x*y)/gcd;
      
      printf("lcm of 2 numbers %d", lcm);
      
      getch();
      return 0;
  }
