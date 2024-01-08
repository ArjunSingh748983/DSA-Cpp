# include <iostream>
# include <vector>
 using namespace std;

int main() {
 vector<int>v;
 v.push_back(1);
 v.push_back(2);
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;

 vector<int>b(2);
 b.push_back(1);
 b.push_back(2);
 for(int i=0;i<2;i++){
    cout<<b[i]<<" ";
 }
 cout<<endl;
 
 vector<int>c(2);
 c.push_back(1);
 c.push_back(2);
 for(int i=0;i<c.size();i++){
    cout<<c[i]<<" ";
 }
 cout<<endl;
    return 0;
}