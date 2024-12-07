#include <iostream>
#include <ctime>
#include <cstdlib>
//stopped using namespace since its bad practice and can cause collisions

int main()
{

    srand(time(0));//for seeding a later process

    double mydouble=3.333;
    double *dptr=&mydouble;
    std::cout<<*dptr<<"\n";

    int arr[100]={1,2,3};
    for (int i = 0; i < 100; i++)
    std::cout << *(arr+i) << " ";//returns 1,2,3 then zero * 97 due to partial initializiation


    int set[10];
    *(set + 7)=99;
    std::cout<<set[7]<<"\n";//used sugar syntax to ensure the set is correct

    double* dblPtr=new double;//this reallocates to the heap in order to access more memory
    *dblPtr=20;//assinging this to the heap
    std::cout<< *dblPtr;//prints 20
    delete dblPtr;//deletes the space in the heap to avoid memory leaks

    long* longPtr= new long[200];//do not need to specift name just says
    //go out to heap and get me 200 * 8 bytes of data

    for (int i=0;i<200;i++)
        *(longPtr +i)= rand()%50 +1;//fills the array with random nums 1-50
    for (int i=0;i<200;i++)
        std::cout<< *(longPtr +i)<< " ";
    delete[] longPtr;
}