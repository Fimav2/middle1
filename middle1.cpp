#include <iostream>
#include "middle.h"

using namespace std;


void itc_num_print(int number){
    cout<< number;
}


int itc_len_num(long long number){
    int rezult;
    rezult=0;
    while (number>0){
        rezult = rezult +1;
        number = number/10;
}
    return rezult;
}
int itc_sum_num(long long number){
int symma,zifra;
symma = 0 ;
while (number>0){
        zifra = number %10;
        symma = zifra + symma;
        number = number/10;
}
return symma;




}
long long itc_multi_num(long long number){
int zifra,proiz;
    proiz = 1;
while (number>0){
    zifra = number %10;
    proiz = proiz * zifra ;
    number = number /10;
}
return proiz;
}


int itc_max_num(long long number){
    int zifra, great;
    great = 0;
    while(number>0){
        zifra = number % 10;
        if (zifra > great){
            great = zifra;
        }
        number /=  10;
    }
    return great;
}