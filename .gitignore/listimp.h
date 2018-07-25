#ifndef LISTIMP_H
#define LISTIMP_H
#include<string>

using namespace std;

extern string string1 ;
class ListDemo{
    private:
    class list{
        public:
            int value;
            list * next;
            list(int val, list * next): value(val), next(next) {}
            ~list(){
                //cout<<"this is destructor "<<endl;
            }

    };
    list * head;
public:
    ListDemo();
    bool isEmpty();
    void insert(int val);
    void delete_last();
};
#endif
