#ifndef DELETE1_H_INCLUDED
#define DELETE1_H_INCLUDED
int f;
void deletee()
{
    loader();
    char Fname [50];
    char Lname [50];
    p=1;
    f=count;
    printf("Please enter the first and last name of the contact you want to delete: \n First name:  ");
    scanf("%s", Fname);
    printf("\n Last name: ");
    scanf("%s", Lname);
    int i,j,n=0;
    for (i=0; i<f-1; i++)
    {
        if (strcasecmp (person[i].firstname,Fname)==0 && strcasecmp (person[i].lastname,Lname)==0)
        {

            for (j=i; j<f-1; j++)
            {
                person[j]=person[j+1];
            }
            f--;
            n++;

        }

    }

    if (n==0)
        printf("This contact does not exist.") ;
    else
    {
        printf("Contact deleted successfully. \n");
        printf("\n WARNING: Make sure you save when you are done to not lose the entered data.");
    }

}

#endif // DELETE1_H_INCLUDED
