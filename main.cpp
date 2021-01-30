#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <array>
#include <stdio.h>

using namespace std;
int insertionSort(int arr[10]);
/*
 *
 */
int main(int argc, char** argv) {

    int n;
    cin >> n;

    int i = 0;
    vector<int> v;

    while (i < n)
    {
        int arr[10];
        for (int j = 0; j < 10; j++)
        {
            cin >> arr[j];
        }
        int nthSmallest = insertionSort(arr);
        v.push_back(nthSmallest);
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
int insertionSort(int arr[10])
{

    for (int i = 1; i < 10; i++)
    {
        int current = arr[i];

        int j = i - 1;
        while (j > -1 && current < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    return arr[1];
}



