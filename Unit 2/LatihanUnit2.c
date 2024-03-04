#include <stdio.h>
int transaksi;
int nominal;
int total=0;
int main(){
    printf("masukan jumlah transaksi:");
    scanf("%d",&transaksi);
    if(transaksi<=0){
        printf("tidak ada transaksi hari ini");
    } else{
        printf("masukan nominal transaksi:");
        for(int i=0;i<transaksi;i++){
            scanf("%d",&nominal);
            total+=nominal;
        }printf("total transaksi hari ini: %d",total);
    }

}