#include <stdio.h>
#include <time.h>
#include <string.h>


void random(char *argv)
    {
    int x, p, num;
    int count;
    int i=0;
    long numlong;
    long *pointer;

    numlong = strtol(argv, &pointer, 10);
    num = numlong;
    printf("Num máximo: %d\n", num);
    int array[num];

    srand(time(NULL));

while(i<num){
    int r=rand()%num+1;
    
    for (x = 0; x < i; x++)
    {
        if(array[x]==r){
            break;
        }
    }
    if(x==i){
        array[i++]=r;
    }
}

for(p=0;p<num;p++){
printf("%d ", array[p]);
}
printf("\n");
    }

int main(int argc, char *argv[])
    {
    random(argv[1]);
    return 0;
    }