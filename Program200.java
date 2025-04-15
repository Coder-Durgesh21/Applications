// Approach 3 [ Compulsary Approach for interview ]

import java.util.*;

class Arithmatic
{
    public int iNo1;
    public int iNo2;

    public Arithmatic(int A , int B)
    {
        iNo1 = A;
        iNo2 = B;
    }
    public int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}

class Program200
{
    public static void main(String Arr[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 10 , iValue2 = 11;
        int iAns = 0;

        System.out.println("Enter First number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Second number : ");
        iValue2 = sobj.nextInt();

        Arithmatic aobj = new Arithmatic(iValue1 , iValue2);

        iAns = aobj.Addition();
        System.out.println("Addition is : "+iAns);
    }
}

// int       nextInt()
// float     nextFloat()
// double    nextDouble()
// string    nextLine()


//javac Program199.java
//java Program199