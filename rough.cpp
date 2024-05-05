#include <bits/stdc++.h>
using namespace std;

int main(){
    float team1,team2,odd,even,total;
    cout<<"Enter total amount to invest : ";
    cin>>total;
    cout<<"enter lowest odds in satta : ";
    cin>>odd;
    cout<<"enter highest odds in satta : ";
    cin>>even;
    team2=total*(odd/(odd+even));
    team1=total-team2;
    cout<<"kam vale team p itna lgana h : "<<team1<<endl;
    cout<<"jyda vale team p itna lgana h : "<<team2<<endl;
    float maxloss,maxprofit,maxreturn;
    maxreturn=team1*odd+team2*even;
    maxloss=team2*even-total;
    cout<<"maximum return : "<<maxreturn<<endl<<"maximum loss : "<<maxloss<<endl<<"maximum profit : "<<maxreturn-total<<" ";
    return 0;
}