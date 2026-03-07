#include <iostream>
#include <cstring>
using namespace std;

class BOOK
{
private:
    int BOOK_NO;
    char BOOKTITLE[20];
    float PRICE;

    float TOTAL_COST(int N)  
    {
        return PRICE * N;
    }

public:
    BOOK()
    {
        BOOK_NO = 0;
        strcpy(BOOKTITLE, " ");
        PRICE = 0;
    }

    BOOK(int bno, char title[], float p)
    {
        BOOK_NO = bno;
        strcpy(BOOKTITLE, title);
        PRICE = p;
    }

    void PURCHASE()
    {
        int N;
        cout << "Enter number of copies to purchase: ";
        cin >> N;

        float total = TOTAL_COST(N);

        cout << "Total cost to be paid: " << total << endl;
    }
};

int main()
{
    int bno;
    char title[20];
    float price;

    cout << "Enter Book Number: ";
    cin >> bno;

    cout << "Enter Book Title: ";
    cin >> title;

    cout << "Enter Price: ";
    cin >> price;

    BOOK b1(bno, title, price);  

    b1.PURCHASE();

    return 0;
}
