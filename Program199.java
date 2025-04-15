// Approach 2

import java.util.*;

class Program199
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

        iAns = iValue1 + iValue2;

        System.out.println("Addition is : "+iAns);
    }
}

// int       nextInt()
// float     nextFloat()
// double    nextDouble()
// string    nextLine()


//javac Program199.java
//java Program199