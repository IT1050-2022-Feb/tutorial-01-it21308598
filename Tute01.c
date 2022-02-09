/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int s1,s2,total=0;
   float avg=0;
   printf ("Enter the first subject:");
   scanf ("%d",&s1);
   printf ("Enter the second subject:");
   scanf ("%d",&s2);
   total=s1+s2;
   avg=(float)total/2;
   printf ("Avg value is :%.2f",avg);
  
  return 0;
}

