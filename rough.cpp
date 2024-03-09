#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
    int x=123455; // 4d2
    char hex[5]={' ',' ',' ',' ','\0'};
    int i=4;
    while(x){
        int rem=x%16;
        if(rem>=0 and rem<=9) {
            hex[i--]=char(rem+'0');
        }
        else if(rem==10) hex[i--]='A';
        else if(rem==11) hex[i--]='B';
        else if(rem==12) hex[i--]='C';
        else if(rem==13) hex[i--]='D';
        else if(rem==14) hex[i--]='E';
        else if(rem==15) hex[i--]='F';
        x=x/16;
    }
    for(int i=0;i<5;i++) cout<<hex[i];
}