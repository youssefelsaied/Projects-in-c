/*#ifndef PRINTSORT_H_INCLUDED
#define PRINTSORT_H_INCLUDED
#include <string.h>

void sort()
{
    loader();
    int i;
    contact temp[100];
    for (int j=0; j<count-1; j++)
    {
        for (i=j+1; i<count; i++)
        {
            if (strcasecmp(person[j].lastname, person[i].lastname) > 0)
            {
                temp[0]= person[j];
                person[j]= person[i];
                person[i]=temp[0];

            }
            /*
            else if (strcasecmp(person[j].lastname, person[i].lastname) == 0)
            {
                if (strcasecmp(person[j].firstname, person[i].firstname) > 0)
                {
                    temp[0]= person[j];
                    person[j]= person[i];
                    person[i]=temp[0];
                }
               else if (strcasecmp(person[j].firstname, person[i].firstname) == 0)
                {
                    if (strcasecmp(person[j].phonenum, person[i].phonenum) > 0)
                    {
                        temp[0]= person[j];
                        person[j]= person[i];
                        person[i]=temp[0];

                    }
                }

        }
    }
    for (i=1; i<count; i++)
    {
        printf("\nLast name: %s\n",person[i].lastname);
        printf("First name: %s\n",person[i].firstname);
        printf("Date of birth: %d %d %d\n",person[i].birthofdate.day,person[i].birthofdate.month,person[i].birthofdate.year);
        printf("Address: %s\n",person[i].adress);
        printf("E-mail address: %s\n",person[i].email);
        printf("Phone number: %s\n",person[i].phonenum);
    }
}


#endif // PRINTSORT_H_INCLUDED*/
#ifndef PRINTSORT_H_INCLUDED
#define PRINTSORT_H_INCLUDED
#include <string.h>

void sort()
{
    loader();
    int i;
    contact temp[100];
    for (int j=0; j<count-1; j++)
    {
        for (i=j+1; i<count; i++)
        {
            if (strcasecmp(person[j].lastname, person[i].lastname) > 0)
            {
                temp[0]= person[j];
                person[j]= person[i];
                person[i]=temp[0];

            }
        }
    }
    for (i=1; i<count; i++)
    {
        printf("\nlast name is: %s\n",person[i].lastname);
        printf("first name is: %s\n",person[i].firstname);
        printf("date is: %d",person[i].birthofdate.day);
        printf("%d",person[i].birthofdate.month);
        printf("%d\n",person[i].birthofdate.year);
        printf("address is: %s\n",person[i].adress);
        printf("email is: %s\n",person[i].email);
        printf("phone number is: %d\n",person[i].phonenum);
    }
}


#endif // PRINTSORT_H_INCLUDED

