#include <stdio.h>

int main (int argc, char *argv[]){
    int n;

    printf("Enter an integer\n");
    scanf("%d", &n);

    if (n%2 == 0){
        printf("We good fam");
    }

    return 0;
}
