#include <bits/stdc++.h>
void reverseArray(vector<int> &arr, int m)
{
    int arrlength = arr.size();
    int i = m + 1;
    int j = arrlength - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
