// nguon https://freetuts.net/de-quy-tuyen-tinh-2946.html
// vi du
#include <stdio.h>
 

int factorial(int n){
  if(n == 0) return 1; 
  return n * factorial(n-1);
}

int main() {
  int n;
  printf("nhap vao giai thua muon tinh : ");
  scanf("%d" , &n);
  int kq = factorial(n);
  printf("Ket qua : %d", kq);
}
