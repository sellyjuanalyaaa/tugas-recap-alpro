#include <stdio.h>

int JumlahElemen;
int total=0;
int main(){
    printf("masukan jumlah elemennya:");
    scanf("%d",&JumlahElemen);

    int array[JumlahElemen];
    for(int i=0;i<JumlahElemen;i++){
        scanf("%d",&array[i]);
    } for(int i=0;i<JumlahElemen;i++){
        total+=array[i];
    } printf("total dari penjumlahan seluruh elemen array : %d",total);
}