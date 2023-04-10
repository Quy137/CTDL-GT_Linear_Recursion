// nguon https://freetuts.net/de-quy-tuyen-tinh-2946.html
//cai dat
#include<stdio.h>
int factorial(int n){
  if(n == 0) return 1; 
  return n * factorial(n-1);
}
