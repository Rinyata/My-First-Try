#include <stdio.h>
#include <stdlib.h>

int main() {
    
    srand(time(NULL));
    int a = rand() % 100;
    int b;
    printf("6 tahmin hakkınız bulunmaktadır.\n");
    
    for(int sayac= 0; sayac<6; sayac++){
        printf("Lütfen tahminde bulununuz\n");
        scanf("%d",&b); 
        if(b<a){
            printf("küçük girdiniz\n");
        }
        else if(b>a){
            printf("büyük girdiniz\n");
        }
        else{
            printf("doğru bildiniz!!\n");
            break;
        }
    }
    
    if(b==a){
        printf("tebrikler\n");
    }
    else{
        printf("bilemediniz\n");
    }
    
	return 0;
}
