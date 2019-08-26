
#include <stdio.h>
#include <stdlib.h>

int findLast(int);
int main(int argc, char** argv) {

    int a;
    int value;
    
    printf("Enter a number: \n");
    scanf("%d", &a);
    
    while(a!=999){
        value = findLast(a);
        if(value!=0){
            printf("%d", a);
            printf(" last appears in the file at position ");
            printf("%d", value);
            printf("\n");
        }
        else{
            printf("%d", a);
            printf(" does not appear in the file\n");
        }
        printf("Enter a number: \n");
        scanf("%d", &a);
    }
    
    return (EXIT_SUCCESS);
}
int findLast(int val){
    FILE *file = fopen("numbers.txt", "r");
    if(file == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    int pos=0;
    int i;
    int values;
    while(1){
        fscanf(file, "%d", &values);
        if(val==values){
            pos=i+1;
        }
        else
            break;
    }
    return pos;
    
}