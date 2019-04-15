#ifndef MODIFI_H_INCLUDED
#define MODIFI_H_INCLUDED

void modify ()
{
    loader();
    p=2;
    int j,w;
    query();
    if(nf!=0)
    {
        printf("Enter the number of the contact you want to modify: ");
        scanf("%d",&f);
        f=f-1;
        j=b[f];

        while(w!=7)
        {
            printf("Please choose the field you want to modify: \n 1-Last name  2-First name  3-Date Of birth  4-Address  5-E-mail address  6-Phone number   7-Done modifying ");
            scanf("%d",&w);
            switch (w)
            {
            case 1:
                printf("Enter the last name: ");
                scanf("%s",person[j].lastname);
                while (valid_char(con[m].lastname)==0)
                {
                    printf("Info: Last name must only contain characters. \nRe-enter the last name: ");
                    scanf("%s",con[m].lastname);
                }
                break;
            case 2:
                printf("Enter the first name: ");
                scanf("%s",person[j].firstname);
                while (valid_char(con[m].firstname)==0)
                {
                    printf("Info: First name must only contain characters. \nRe-enter the first name: ");
                    scanf("%s",con[m].firstname);
                }
                break;
            case 3:
                printf("Enter the day");
                scanf("%d",&person[j].birthofdate.day);

                printf("Enter the month");
                scanf("%d",&person[j].birthofdate.month);

                printf("Enter the year");
                scanf("%d",&person[j].birthofdate.year);
                break;
            case 4:
                printf("Enter the address: ");
                scanf("%s",person[j].adress);
                break;
            case 5:
                printf("Enter the email: ");
                scanf("%s",person[j].email);
                break;
            case 6:
                printf("Enter the phone number: ");
                scanf("%s",&person[j].phonenum);
                while (valid_char(con[m].phonenum)==1)
                {
                    printf("Info: Phone number must not contain letters or special characters other than +. \nRe-enter the phone number: ");
                    scanf("%s",con[m].phonenum);
                }
                break;
            case 7:

                break;
            }
        }


    }
}

#endif // MODIFI_H_INCLUDED
