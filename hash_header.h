#include<iostream>
#include <cstdlib>
using namespace std;
class Hash
{
    public:
        int hash[10];
        int capacity;
        Hash()
        {
            for(int i=0;i<10;i++)
                hash[i]=-1;
            capacity=10;
        }
        int h(int x);
        int h2(int x);
        int insert(int x);
        int search();
        void display();
        bool isFull();
};