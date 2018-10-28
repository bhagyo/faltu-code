#include <stdio.h>

main()
{
int a,b,c,d,e;
a = 1;
b = 10;
c = 32;
d = 42;
e = 55;

int i = 1;
while(i <= 100){
if(i == a || i == b || i == c){
printf("%d\n",i);
i++;
}
else if(i == d){
break;
}
else{
i++;
}
}

return 0;
}
