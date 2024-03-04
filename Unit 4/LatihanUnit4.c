#include <stdio.h>

int sisi;

void keliling(int P){
    int total= P*4;
    printf("hasilnya adalah : %d\n",total);
}
void luas(int Q){
    int total= Q*Q;
    printf("hasilnya adalah : %d\n",total);
}
void volume(int R){
    int total=R*R*R;
    printf("hasilnya adalah : %d\n",total);
}
int main(){
    printf("masukan nilai yang akan di hitung : ");
    scanf("%d",&sisi);
    keliling(sisi);
    luas(sisi);
    volume(sisi);
    return 0;
}