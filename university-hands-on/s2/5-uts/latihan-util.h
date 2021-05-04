#define NOT_FOUND -1

void sort_number(int arr[], int n)
{
    int i, j, k;

    for (i = 1; i < n; i++) {
        
        k = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = k;

    }
}

int search_number(int arr[], int l, int r, int q, int *rat)
{
    while (r >= l)
    {
        int mid = l + (r - l) / 2;
        *rat += 1;
        if (arr[mid] == q)
        {
            return mid;
        }
        else if (arr[mid] > q)
        {
            l = mid + 1;
        }
        else if (arr[mid] < q)
        {
            r = mid - 1;
        }
    }
    return NOT_FOUND;
}