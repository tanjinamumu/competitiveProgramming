//Assignment on calculating Sum of numbers from 0 to 40

#include<iostream> //header file for c++ io

#include<vector> //header file for using vector

using namespace std;

const int N=40;  //Number of elements in vector

inline void sum(int*p, vector<int>d) //this is a function which takes an integer and a vector to return the sum
{
    int i;

    *p = 0; //*p gives the value of the variable stored at address, and initializing it to 0

    for(i=0; i<d.size(); i++) //loop running upto the size of vector d
    {
        *p = *p + d[i]; //summing the values.
    }
}

int main()
{
    int i;

    int accum = 0; //initializing a variable called accum to 0

    vector<int>d(40); //declaring a vector d and assigning 40 to it

    for(i = 0; i < N; ++i)  //loop running upto the N=40
    {
        d.push_back(i); //pushing i to the vector d

        sum(&accum,d); //calling function sum
    }
    cout<<"Sum is"<<" "<<accum<<endl; //printing the required result

    return 0;
}
