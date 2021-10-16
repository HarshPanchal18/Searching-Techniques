#include <iostream>
using namespace std;
class InterP
{
    int key;
    int low, mid, high;

public:
    void InterSearcher(int *, int);
};

void InterP::InterSearcher(int *arr, int no)
{
    int key;
    low = 0, high = no - 1;

    cout << "\nEnter the number to be searched ";
    cin >> key;

    while (low < high)
    {
        mid = low + (high - low) * ((key - arr[low]) / (arr[high] - arr[low]));
        if (key < arr[mid])
            high = mid - 1;
        else if (key > arr[mid])
            low = mid + 1;
        else
        {
            cout << "\nThe key " << key << " is found at " << mid + 1 << endl;
            return;
        }
    }
    cout << "\nThe key is not found..";
}

int main(void)
{
    int *a, n, *b;
    InterP obj;
    cout << "Enter the number of element: ";
    cin >> n;
    a = new int[n];
    b = a;
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the " << i + 1 << " element: ";
        cin >> *a;
        a++;
    }
    obj.InterSearcher(b, n);
}