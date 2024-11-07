#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam, *p, null = 0;
    scanf(" %d", &tam);
    p = (int*) malloc(tam * sizeof(int));
    for(int i = 0; i < tam; i++){
        int aux;
        null = 1;
        scanf("%d", &aux);
        p[i] = aux;
    }
    printf("[");
    if(p != NULL){
        for(int i = 0; i < tam; i++){
            if(i < tam-1)
                printf("%d, ", p[i]);
            else
                printf("%d", p[i]);
        }
    }
    if(!null){
        printf("vazio");
    }
    printf("]\n");
    
    free(p);

    return 0;
}