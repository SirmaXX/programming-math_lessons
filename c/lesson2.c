#include<stdio.h>
int kareal();
float kokbul();
long faktorial();
int main()
{
int a=4;
printf("%d %.2f %ld",kareal(a),kokbul(a),faktorial(a));
return 0;
}

int kareal(int a){
	return a*a;
}

float kokbul(int a){
float sqt,temp;
sqt=a/2;
temp=0;
  while(sqt !=temp){
	  temp=sqt;
   sqt=(a/temp+temp)/2;	
   }
 return sqt;
}

long faktorial(long sayi){
if (sayi <=1)
{
	return 1;
}else{
	return (sayi*faktorial(sayi-1));
	}
	
}

