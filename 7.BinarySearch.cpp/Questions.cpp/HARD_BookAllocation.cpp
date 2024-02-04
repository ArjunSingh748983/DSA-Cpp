#include <bits/stdc++.h>
using namespace std;
int CountStudents(vector<int> &arr, int pages) // find how many students can be allocated books if the maximum pages a student can have is the parameter -> pages
{
    int n = arr.size();
    int students = 1; // atleast one student will always be there, the case in which he takes all the books
    int PagesToStudent = 0;
    for (int i = 0; i < n; i++)
    {
        if (PagesToStudent + arr[i] <= pages)
        {
            PagesToStudent += arr[i];
        }
        else
        {
            students++;              // next student allocated the book
            PagesToStudent = arr[i]; // having arr[i] pages
        }
    }
    return students;
}
int findPages(vector<int> &arr, int books, int students)
{
    if (students > books) // students>books
        return -1;
    int low = arr[0];
    int high = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        high += arr[i]; // high will total number of pages
    }
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (CountStudents(arr, mid) > students)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return low;
}
int main()
{
    int books = 4;
    int students = 2;
    vector<int> pagesPerBook{12, 34, 67, 90};
    cout << findPages(pagesPerBook, books, students);
    return 0;
}