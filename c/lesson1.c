#include <stdio.h>
#include <string.h>

int main()
{
//mantık

 char username[20];
 printf("kullanıc adı giriniz");
       scanf("%s",username);
 char password[20];
 printf("parola giriniz");
       scanf("%s",password);
       
       if (strcmp(username, "admin") == 0 && strcmp(password, "12345") == 0  )
       {
          printf("Welcome the system");
       }else{
		   printf("giriş yok");
	   }
return 0;
}
