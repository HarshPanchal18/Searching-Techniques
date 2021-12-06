#include <iostream>

using namespace std;
class Search
{
    int a[10], n, key;

public:
    void getdata()
    {
        cout << "Enter the number of elements: ";
        cin >> n;

        cout << "\nEnter " << n << " elements\n";
        for (int i = 0; i < n; i++)
            cin >> a[i];
    }

    void SeqSearch(int k)
    {
        int flag = 0, mark;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
            {
                flag = 1;
                mark = i;
                break;
            }
        }
        if (flag == 1)
            cout << endl
                 << k << " is present at " << mark + 1 << endl;
        else
            cout << endl
                 << k << " is not found ";
    }
};

int main(void)
{
    int k;
    Search object;

    object.getdata();
    cout << "\nEnter element you want to search: ";
    cin >> k;
    object.SeqSearch(k);
}