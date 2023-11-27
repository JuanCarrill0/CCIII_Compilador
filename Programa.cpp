#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main(){
int a=1,b=0;
printf("Al inicio: %d \n",b);
if(a==1){
 b=5;
}
printf("Despues: %d \n",b);

switch(a){
case 1:
printf("Caso 1");
break;
}

return b;
}
