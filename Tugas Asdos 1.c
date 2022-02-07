#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>



int main(){

int pilihan;
    float idr,btc,eth,usdt;
    btc = 547974483, eth = 37897476, usdt = 14342;

    printf ("AYO KONVRENSIIN DISINI!!!!!!\n\n\n");
    printf ("Mau IDR ke apa nih : \n1. IDR ke BTC\n2. IDR ke ETH\n3. IDR ke USDT\n");
    printf ("\nPilihan lo : ");
    scanf ("%d",&pilihan);

    switch (pilihan){
case 1 :
    printf ("Masukin nominalnya bro : ");
    scanf ("%f",&idr);
    printf ("Ini bro hasilnya : %.9f BTC\n",idr/btc);
    break;
case 2 :
    printf ("Masukin nominalnya bro : ");
    scanf ("%f",&idr);
    printf ("Ini bro hasilnya : %.9f ETH\n",idr/eth);
    break;
case 3 :
    printf ("Masukin nominalnya bro : ");
    scanf ("%f",&idr);
    printf ("Ini bro hasilnya : %.9f USDT\n",idr/usdt);
    break;
}
}
