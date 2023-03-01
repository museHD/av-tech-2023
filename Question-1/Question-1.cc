/// <summary>
/// Question 1: This question requests you to fix all compile errors in the main function and any classes. Address 
/// the comments given inside the code. 
/// Your code should run and compile without any warnings or errors.
/// </summary>
/// <returns></returns>

#include <iostream>
#include <map>
#include <vector>
#include <initializer_list>
#include <cmath>

const int values[] = { 1,2,3,4,5 };
const int NVALS = sizeof values / sizeof(int);



class Foo {
    std::vector<int> mElements;
public:
    Foo(std::initializer_list<int> list)
    : mElements(list) {}
};

struct person{
    int age;
    float weight;
};


void fn(const int** pp)
{
    printf("%p : %p : %d", pp, *pp, **pp);
}



int main() {

    int x = 10;
    int y = 15;
    std::cout << " " << x << y << std::endl;

    typedef std::map<int, double> valmap;

    valmap m;

    for (int i = 0; i < NVALS; i++)
        m.insert(std::make_pair(values[i], std::pow(values[i], .5)));

    m.insert({1, 2});

    int i = 1, j = 1;
    if ((i = !3) && (j == 1))
    {
        std::cout << "inside if statement\n";
    }

    const int n = 1;
    const int* p = &n;
    const int** pp = &p;
    fn(pp);

    // Initialise a person on the heap with the use of smart pointers (unique_ptr) instead.
    struct person* ptr = new person;
    // ptr = (struct person*)malloc(sizeof(struct person));
    ptr->age = 10;
    ptr->weight = 55.5;

    // Initialise with 5 integers 
    Foo foo = {1,2,3,4,5};
    

    return 0;

}