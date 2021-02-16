#include "kshlib.h"

const int N = int(1e5);
int a[N];
int n;

/* Reverses arr[0..i] */
void flip(int arr[], int i)
{
    int temp, start = 0;
    while (start < i)
    {
        OpCnt();
        temp = arr[start];
        arr[start] = arr[i];
        arr[i] = temp;
        start++;
        i--;
    }
}

int findMax(int arr[], int n)
{
    int mi, i;
    for (mi = 0, i = 0; i < n; ++i)
    {
        OpCnt();
        if (arr[i] > arr[mi])
            mi = i;
    }
    return mi;
}

void pancakeSort(int *arr, int n)
{
    RecTrace _t(n);
    if (n <= 1)
        return;
    int mi = findMax(arr, n);
    if (mi != n - 1)
    {
        flip(arr, mi);
        flip(arr, n - 1);
    }
    pancakeSort(arr, n - 1);
}

int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);

    n = atoi(argv[1]);
    FOR(i, 1, n)
    a[i] = rnd.next(0, int(1e6));

    pancakeSort(a, n);
}