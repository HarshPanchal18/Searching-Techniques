#include <iostream>

using namespace std;

int a[10];

int search(int a[], int s, int e, int key)
{
    if (s > e)
        return -1;

    int mid = (s + e) / 2;
    // first we have to chek position of mid;
    if (key == a[mid])
        return mid + 1;

    if (a[s] >= a[mid])
        // check key in sorted part
        if (key >= a[mid] && key <= a[e])
            return search(a, mid + 1, e, key);
        else
            return search(a, s, mid - 1, key);

    if (a[s] < key && key <= a[mid])
        return search(a, s, mid - 1, key);

    return search(a, mid + 1, e, key);
}

int main(void)
{
    int n;
    cout << "\nEnter the number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int key;
    cout << "\nEnter key: ";
    cin >> key;

    cout << key << " is at position: " << search(a, 0, n - 1, key) << endl;
}
