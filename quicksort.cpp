#include <iostream>
using namespace std;
void quicksort(int *arr, int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int count = 0;
    for (int i = si + 1; i <= ei; i++)
    {
        if (arr[i] <= arr[si])
        {
            count++;
        }
    }
    swap(arr[si], arr[si + count]);
    for (int i = si, j = ei; i < si + count && j > si + count;)
    {
        if (arr[i] <= arr[si + count])
        {
            i++;
        }
        else if (arr[j] > arr[si + count])
        {
            j--;
        }
        else
        {
            swap(arr[i++], arr[j--]);
        }
    }
    quicksort(arr, si, si + count - 1);
    quicksort(arr, si + count + 1, ei);
}
int main()
{
    int arr[7] = {1, 4443, 1, 1, 34, 21, 7};
    int size = 7;
    quicksort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}