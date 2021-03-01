#include <stdio.h>


int main() {

   /*
 //burada verilen sayılar mevcut 
   int sayi=8;//yeliz
   int sayi1 =5;//mürüvvet
   int sayi2=3;//beyza 
   float deniz=2.1; //deniz
   char den='k';

aşağıda verilen çıktılar
öğrencilerin söylediği rakamlardır

printf("yelizin  dediği sayi :%d \n",sayi);
printf("mürüvvet dediği sayi :%d \n",sayi1);
printf("beyzanın dediği sayi :%d \n",sayi2);
printf("deniz dediği sayi :%f \n",deniz);
printf(" verilen harf %c \n",den);
   */
char ad[20],soyad[30];
printf("adınız nedir \n");
//scanf kullanıcıdan veri alır
scanf("%s",ad);
printf("soyadınız nedir?");
scanf("%s",soyad);

printf("kullanıcının adı %s ",ad);
printf("kullanıcının soyadı %s ",soyad);



}
