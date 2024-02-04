# include <iostream>
# include <vector>
 using namespace std;

int main() {
    // vector<vector<int>>v; // Declaring a 2d vector
    int n,m;

    // Declaring a 2d vector of size n x m ->
    vector<vector<int> >v(n,vector<int>(m));

    // Initialsing a vector ->
    v={{1,2,3},{4,5,6,7},{8,9}}; // 2D-Vector need not have equal
                        // no of elements in each row...
    // Initialsing a 2d vector of size 3 x 4 and elements 0 ->
    vector<vector<int> >a(3,vector<int>(4,0));
    cout<<a.size();








return 0;
}