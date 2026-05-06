#include <stdio.h>

int main(){
    int n;
    printf("Ingresa un número: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        //izquierda
        for(int j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("     ");
        //derecha
        for(int j = i; j >= 1; j--){
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}