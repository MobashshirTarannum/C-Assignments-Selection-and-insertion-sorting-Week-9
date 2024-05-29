// Q5->Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted array.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string arr[] = {"ragav", "sanget", "harsh", "urvi", "anas"};
    int n = 5;
    //sorting a string using bubble sort
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = true; // swaping is done
            }
        }
        if (flag == false)
            break; // false means swaping didn't happened
        // cheaking swaping is done or not
    }
    //printing the sorted string
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
