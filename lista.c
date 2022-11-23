#include <stdio.h>
#include <stdlib.h> //necessário para usar as funções malloc() e free()
#include <conio.h>
int main()
{

   std::queue<char> p;
   p.push('A');
   p.push('B');
   printf("%c\n", p.front()); // A
   p.pop();
   printf("%c\n", p.front()); // B


   return 0;
}
