#include <stdio.h>
#include <string.h>
#include <locale.h>
int main (){
  setlocale(LC_ALL, "Portuguese");
  char *str1 = "melancia";
  char *str2 = "absintol";
  int ret;
  ret = strncmp(str1, str2, 6);
  if(ret > 0){
    printf("str1 � maior");
  }else if(ret < 0){
    printf("str2 � maior");
  }else{
    printf("As duas palavras s�o iguais");
  }
  return(0);
}
