#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 10;

int medianOfThree(int arr[], int left, int right) {
    int mid = left + (right - left) / 2;

    if (arr[left] > arr[mid]) {
        swap(arr[left], arr[mid]);
    }

    if (arr[left] > arr[right]) {
        swap(arr[left], arr[right]);
    }

    if (arr[mid] > arr[right]) {
        swap(arr[mid], arr[right]);
    }

    return mid;
}

int partition(int arr[], int left, int right, int pivotIdx) 
{
    int pivot = arr[pivotIdx];

    swap(arr[pivotIdx], arr[right]);

    int i = left;
    for (int j = left; j < right; j++) 
    {
        if (arr[j] < pivot) 
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[i], arr[right]);
    return i;
}

void quicksort(int arr[], int left, int right) 
{
    if (left < right) 
    {
        int pivotIdx = medianOfThree(arr, left, right);
        int pivotNewIdx = partition(arr, left, right, pivotIdx);
        quicksort(arr, left, pivotNewIdx - 1);
        quicksort(arr, pivotNewIdx + 1, right);
    }
}

int main()
{
    int n;
    int arr[MAXN];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Unsorted array:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    quicksort(arr, 0, n - 1);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
