#include <stdio.h>
// 1 + 1/2 + 1/3 + ... + 1/n şeklindeki kesirli seri toplamını hesaplar

int main() 

{
 
 int i;
 int n;
 float sonuc = 0.0;
 
 printf("kesirli serinin son terimindeki paydadaki n tamsayi değerini girin: ");
 scanf("%d",&n);
 
 for(i = 1 ; i <= n ; i++)
 {
  sonuc = sonuc + 1.0/i;  
 }
 
 printf("kesirli seri toplami: %.2f",sonuc);
  
 return 0;

}