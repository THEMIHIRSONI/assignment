#include<iostream>
using namespace std;
class calculation{
    public:
    int a,b;
    calculation()//default constructor
    {
        cout<<"Enter Two Numbers: ";
        cin>>a>>b;
        int answer=a+b;
        cout<<"Addition = "<<answer;
    }
};

int main()
{
    calculation obj1,obj2;
    return 0;
}



/*
consrtuctor is afunction which is called automatically whenever we define the object but the name of constructor is same as classname
constructor doesn,t return anything it is just used for initialization purpose.

// function declaration
// function definition
returntype functionname(parameters)  consrtuctor doesn't have return type
{
    body of the function
}


function calling---not in the cse of constructor

class universe{

    universe()
    {
        initialization
    }
};



*/