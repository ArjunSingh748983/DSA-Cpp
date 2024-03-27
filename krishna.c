# include <stdio.h>
int main() {
    int num=23108051; // 23118151
    int sum=0;
    while(num>0){
        int ld=num%10;
        sum=ld+(sum*10);
        num/=10;
    }
    int rev=sum; // rev = 150080132
    sum=0;
    while(rev>0){
        int ld=rev%10;
        if(ld==0) ld=1;
        sum=ld+(sum*10);
        rev/=10;
    }
    printf("%d",sum); // 23118151
    return 0;
}
