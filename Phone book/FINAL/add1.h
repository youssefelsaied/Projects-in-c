#ifndef ADDE_H_INCLUDED
#define ADDE_H_INCLUDED
int p;
int m=0;
contact con[100];

void add ()
{
    p=0;
    for(int q=0; q<1; q++)
    {

        printf("Enter the last name: ");
        scanf("%s",con[m].lastname);

        while (valid_char(con[m].lastname)==0)
        {
            printf("Info: Last name must only contain characters. \nRe-enter the last name: ");
            scanf("%s",con[m].lastname);
        }

        printf("Enter the first name: ");
        scanf("%s",con[m].firstname);
        while (valid_char(con[m].firstname)==0)
        {
            printf("Info: First name must only contain characters. \nRe-enter the first name: ");
            scanf("%s",con[m].firstname);
        }

        printf("Enter the day: ");
        scanf("%d",&con[m].birthofdate.day);

        printf("Enter the month: ");
        scanf("%d",&con[m].birthofdate.month);

        printf("Enter the year: ");
        scanf("%d",&con[m].birthofdate.year);

        printf("Enter the street address: ");
        scanf("%s",con[m].adress);

        printf("Enter the e-mail address: ");
        scanf("%s",con[m].email);

        printf("Enter the phone number: ");
        scanf("%s",&con[m].phonenum);
        while (valid_char(con[m].phonenum)==1)
        {
            printf("Info: Phone number must not contain letters or special characters other than +. \nRe-enter the phone number: ");
            scanf("%s",con[m].phonenum);
        }

        m++;

    }

}


#endif // ADDE_H_INCLUDED
