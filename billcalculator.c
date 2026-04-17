#include <stdio.h>
int main()
{
    int r0,r1,r2;
    float A,C,E,U,F,I,G,H,J,Z;

    printf("Consumer Id : N78347650");

    printf("\nName : Anurag Hindoliya");

    printf("\nAddress : F-21 Suresh nagar, Thatipur-474001, Gwalior(M.P.)");

    printf("\nMeter No. : 7345654");

    printf("\nEnter previous reading = ");
    scanf("%d",&r1);

    printf("\nEnter current reading = ");
    scanf("%d",&r2);

    r0=r2-r1;

    printf("\nTotal units consumed = %d",r0);

    if(r0<0)
{
    printf("\nInvalid inputs");
}

   else if(r0>0 && r0<=50)
{
    A=4.21;//Rate energy charges (Rs.Per Unit)

    C=A*r0;//slab wise calculation

    E=r0*0.34;//FCA charges @ 34 paise per unit

    U=r0;

    F=0.09;//Duty charge rate

    G=U*A*F;//Slab wise duty charge

    H=U*F*0.34;

    I=G+H;//I is total duty charge

    J = 69;//Fixed charges for urban area

    Z=C+E+G+H+I+J;

    printf("\nAmount to be paid = %.2f Rs",Z);
}

    else if(r0<=150)
{

     A=5.17;//Rate energy charges (Rs.Per Unit)

     C=A*r0;//slab wise calculation

     E=r0*0.34;//FCA charges @ 34 paise per unit

     U=r0;
 
     F=0.12;//Duty charge rate

     G=U*A*F;//Slab wise duty charge

     H=U*F*0.34;

     I=G+H;//I is total duty charge

     J=121;//Fixed charges for urban areas
 
     Z=C+E+G+H+I+J;

     printf("\nAmount to be paid = %.2f Rs",Z);
    
}

    else if(r0<=300)
{
     A=6.55;//Rate energy charges (Rs.Per Unit)

     C=A*r0;//slab wise calculation

     E=r0*0.34;//FCA charges @ 34 paise per unit

     U=r0;
 
     F=0.12;//Duty charge rate

     G=U*A*F;//Slab wise duty charge

     H=U*F*0.34;

     I=G+H;//I is total duty charge

     J=26*(r0/15);//Fixed charges for urban areas
 
     Z=C+E+G+H+I+J;

     printf("\nAmount to be paid = %.2f Rs",Z);
}

    else if(r0>300)
{    
     A=6.74;//Rate energy charges (Rs.Per Unit)

     C=A*r0;//slab wise calculation

     E=r0*0.34;//FCA charges @ 34 paise per unit

     U=r0;
 
     F=0.12;//Duty charge rate

     G=U*A*F;//Slab wise duty charge

     H=U*F*0.34;

     I=G+H;//I is total duty charge

     J=27*(27/15);//Fixed charges for urban areas
 
     Z=C+E+G+H+I+J;

     printf("\nAmount to be paid = %.2f Rs",Z);
}

    return 0;
}