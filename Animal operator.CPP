#include <iostream>

int main()
{
#include <iostream>
    using namespace std;
    class Animal {
    public:
        virtual void Cry() = 0;
    };
    class Dog : public Animal {
    public:
        void Cry() {
            cout << "멍멍\n"; return;
        }
    };
    class Bird : public Animal {
    public:
        void Cry() {
            cout << "짹짹\n"; return;
        };
    };
    class Cat : public Animal  {
    public:
        void cry() {
            cout << "냥냥\n"; return;
        };
    Animal a;
    ++a; (pre-order)
    a++; (post-order)
    cout << a;
    
    int main()
    {
            Animal* arr[6];
    arr[0] = new Dog;
    arr[1] = new Dog;
    arr[2] = new Bird;
    arr[3] = new Bird;
    arr[4] = new Cat;
    arr[5] = new Cat;
    Animal* Animal_pointer = *arr;
    Animal_pointer->Cry();
    Animal_pointer = *(arr + 1);
    Animal_pointer->Cry();
    Animal_pointer = *(arr + 2);
    Animal_pointer->Cry();
    Animal_pointer = *(arr + 3);
    Animal_pointer->Cry();
    Animal_pointer = *(arr + 4);
    Animal_pointer->Cry();
    Animal_pointer = *(arr + 5);
    Animal_pointer->Cry();
    }
