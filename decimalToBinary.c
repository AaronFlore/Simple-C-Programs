#include <stdio.h>
int main()
{ 
   int bNum[32];
   int i, dNum;
 
   printf("Enter the decimal number you wish to convert to binary: ");   
   scanf("%d", &dNum);   
   for(i=0; dNum>0; i++)   
   {   
       bNum[i]=dNum%2;   
       dNum=dNum/2;   
   }   
   printf("The binary conversion of your number is: ");   
   for(i=i-1; i>=0; i--)   
       printf("%d",bNum[i]); 

   return 0; 
} 