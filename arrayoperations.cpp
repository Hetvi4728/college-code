#include <iostream>
using namespace std;

// Function to display array
void traverse(int arr[], int n)
{
    if (n == 0)
    {
        cout << "Array is empty.\n";
        return;
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element
int insertElement(int arr[], int n, int size, int element, int pos)
{
    if (n >= size)
    {
        cout << "Array is full. Insertion not possible.\n";
        return n;
    }

    if (pos < 1 || pos > n + 1)
    {
        cout << "Invalid position.\n";
        return n;
    }

    // Shift elements to the right
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;

    cout << "Element inserted successfully.\n";
    return n + 1;
}

// Function to delete an element
int deleteElement(int arr[], int n, int pos)
{
    if (n == 0)
    {
        cout << "Array is empty.\n";
        return n;
    }

    if (pos < 1 || pos > n)
    {
        cout << "Invalid position.\n";
        return n;
    }

    // Shift elements to the left
    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    cout << "Element deleted successfully.\n";
    return n - 1;
}

// Function to search an element
void searchElement(int arr[], int n, int key)
{
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Element not found.\n";
}

int main()
{
    const int SIZE = 100;
    int arr[SIZE];
    int n, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Traverse Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Search Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            traverse(arr, n);
            break;

        case 2:
        {
            int element, pos;
            cout << "Enter element to insert: ";
            cin >> element;
            cout << "Enter position (1 to " << n + 1 << "): ";
            cin >> pos;
            n = insertElement(arr, n, SIZE, element, pos);
            break;
        }

        case 3:
        {
            int pos;
            cout << "Enter position to delete (1 to " << n << "): ";
            cin >> pos;
            n = deleteElement(arr, n, pos);
            break;
        }

        case 4:
        {
            int key;
            cout << "Enter element to search: ";
            cin >> key;
            searchElement(arr, n, key);
            break;
        }

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
