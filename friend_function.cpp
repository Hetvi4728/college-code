#include<iostream>
using namespace std;

class friend{
      private:
           int x;

      public:
           friend (int a){
                X = a;

            friend void show(friend d);
           }
};

void show(friend d){
       cout<< "Value of X:"<< d.x;
}

int main() {
    friend obj(100);
    show(obj);
    return 0;
}
