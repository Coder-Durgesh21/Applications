//Approach 3

#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int iNo1;
        int iNo2;

        Arithmatic(int A , int B)
        {
            iNo1 = A;
            iNo2 = B;
        }        
        int Addition()
        {
            int iAns = 0;
            iAns = iNo1 + iNo2;
            return iAns;
        }
};

int main()
{
    int iValue1 = 0 , iValue2 = 0;
    int iRet = 0;

    cout<<"Enter first number : "<<endl;
    cin>>iValue1;

    cout<<"Enter second number : "<<endl;
    cin>>iValue2;

    Arithmatic aobj(iValue1 , iValue2);  //call to class at line 6

    iRet = aobj.Addition();  //call to function at line 17

    cout<<"Addition is : "<<iRet<<endl;

    return  0;
}
