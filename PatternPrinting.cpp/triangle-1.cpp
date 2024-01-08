# include <iostream>
 using namespace std;

int main() {
    int n=5;
        int stars=1;
        int spaces=n-1;
        int ml=n;
        for(int i=1;i<=2*n-1;i++){
            for(int j=1;j<=spaces;j++){
                cout<<" ";}
                for(int k=1;k<=stars;k++){
                    cout<<k<<" ";}
             if(i<ml){stars++; spaces--;}
             else {stars--;spaces++;}
        cout<<endl;
        }
    return 0;
}