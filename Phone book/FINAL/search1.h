#ifndef SEARCH_H_INCLUDED
#define SEARCH_H_INCLUDED
int a;
int u;
int nf;
char searchname[50] ;
int b[100];
void query()
{
    a=0;
    u=0;
    nf=1;
    int cb=0;
    scanf("%s",searchname);

    for (a=0; a<count; a++)
    {
        if(strcasecmp(searchname,person[a].lastname)==0)
        {
            printf("(%d):",cb+1);
            printf("\nlast name: %s\n",person[a].lastname);
            printf("First name: %s\n",person[a].firstname);
            printf("Date of birth: %d %d %d\n",person[a].birthofdate.day,person[a].birthofdate.month,person[a].birthofdate.year);
            printf("Address: %s\n",person[a].adress);
            printf("E-mail address: %s\n",person[a].email);
            printf("Phone number: %s\n",person[a].phonenum);
            b[cb]=a;
            cb++;
            u++;
        }
    }

    if(u==0)
    {

        nf=0;
        printf("This contact does not exist.") ;

    }


}


#endif // SEARCH_H_INCLUDED
