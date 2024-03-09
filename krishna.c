#include <stdio.h>
int main() {
    int decNum=111434; char hex[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '}; int i=4;
    while(decNum){
        int rem=decNum%16;
        if(rem>=0 && rem<=9) hex[i--]=(char)rem+'0';
        else if(rem==10) hex[i--]='A';
        else if(rem==11) hex[i--]='B';
        else if(rem==12) hex[i--]='C';
        else if(rem==13) hex[i--]='D';
        else if(rem==14) hex[i--]='E';
        else hex[i--]='F';
        decNum=decNum/16;
    }
    for(int i=0;i<5;i++) printf("%c",hex[i]);
}