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
    printf("str1 é maior");
  }else if(ret < 0){
    printf("str2 é maior");
  }else{
    printf("As duas palavras são iguais");
  }
  return(0);
}
