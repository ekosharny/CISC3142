#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    FILE *file = fopen("numbers.txt", "r");
    int head;
    int array[head];
    int total;
    int count=0;
    float average;
    
    while(!feof(file)){
        fscanf(file, "%d", &head);
        for(int i=0; i<head; i++){
            fscanf(file, "%d", &array[i]);
            total+=array[i];
        }
        average = total/head;
        printf("The average of the ");
        printf("%d", head);
        printf(" integers ");
        for(int i=0; i<head; i++){
            printf("%d", array[i]);
            printf(" ");
        }
        printf(" is ");
        printf("%.1f", average);
        printf("\n");
        count++;
        average=0;
        total=0;
    }
    printf("%d", count);
    printf(" sets of numbers processed");

    return (EXIT_SUCCESS);
}