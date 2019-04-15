#include <stdio.h>
#include <stdlib.h>
#include "load2.h"
#include "print (sort).h"
#include "charvalidation.h"
#include "add1.h"
#include "search1.h"
#include "delete1.h"
#include "save1.h"
#include "modifi.h"

int main()
{
    printf("*********************************************MENU***********************************************\n 1-Load.   2-print(sorted).   3-Add.   4-save.    5-search    6-delete     7-modify    8-exit \n *********************************************************************************************** ");

    int n;
    while(1)
    {

        printf("\nEnter the number of the option wanted: \n");
        scanf("%d",&n);

        switch (n)
        {
        case 1 :
            loader();
            printf("Loaded Successfully.");
            break;

        case 2:
            sort();
            break;

        case 3:
            add();
            printf("\n WARNING: Make sure you save when you are done to not lose the entered data.");
            break;

        case 4:
            save();
            break;

        case 5:
            printf("Enter the last name: ") ;
            query();
            break;

        case 6:
            deletee();
            break;

        case 7:
            printf("Enter the last name: ") ;
            modify();
            break;

        case 8:
            exit(0);
       }



    }
    return 0;
}
