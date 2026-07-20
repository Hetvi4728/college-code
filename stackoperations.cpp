#include <iostream>
using namespace std;

int stack[100];
int top = -1;
int size;

// Function to push an element
void push()
{
    int value;

    if (top == size - 1)
    {
        cout << "\nStack Overflow! Stack is full.\n";
    }
    else
    {
        cout << "Enter the element to push: ";
        cin >> value;

        top++;
        stack[top] = value;

        cout << value << " pushed into the stack.\n";
    }
}

// Function to pop an element
void pop()
{
    if (top == -1)
    {
        cout << "\nStack Underflow! Stack is empty.\n";
    }
    else
    {
        cout << stack[top] << " popped from the stack.\n";
        top--;
    }
}

// Function to peek the top element
void peek()
{
    if (top == -1)
    {
        cout << "\nStack is empty.\n";
    }
    else
    {
        cout << "Top element is: " << stack[top] << endl;
    }
}

// Function to display stack elements
void display()
{
    if (top == -1)
    {
        cout << "\nStack is empty.\n";
    }
    else
    {
        cout << "\nStack elements are:\n";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
}

int main()
{
    cout << "Enter the size of the stack (Maximum 100): ";
    cin >> size;

    int choice;

    do
    {
        cout << "\n===== STACK MENU =====\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
