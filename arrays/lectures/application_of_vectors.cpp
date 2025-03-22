#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // How can we adjust the length of an array?
    // Static Array  -> can't adjust its length
    // Dynamic Array -> can adjust its length

    int n = 50;
    int array_one[n];
    for (int i = 0; i < n; i++) 
    {
        cout << array_one[i] << ' ';
    }

    vector<int> vector_one(n, 0);
    for (int i : vector_one)
    {
        cout << i << ' ';
    }

    return 0;
}