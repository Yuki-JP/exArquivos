#include <stdio.h>
char v[256];
void lerArquivo();

void lerArquivo(){
 FILE *p;
 p = fopen("texto.txt","ra");
  if(p == NULL)
   printf("noa foi possivel abrir o arquivo\n");
  else{
   fprintf(p,"alguma coisa ai");
   fscanf(p, " %[^\n]", v);
  }
  fclose(p);
}

int main(){
 lerArquivo();
 printf("%s",v);
}
