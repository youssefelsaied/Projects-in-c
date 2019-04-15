#ifndef PRINTE_H_INCLUDED
#define PRINTE_H_INCLUDED

void printe(){
int i;
 for (i=0;i<count-1;i++)
{
    printf("\nlast name is: %s\n",person[i].lastname);
    printf("first name is: %s\n",person[i].firstname);
    printf("date is: %d/",person[i].birthofdate.day);
    printf("%d/",person[i].birthofdate.month);
    printf("%d\n",person[i].birthofdate.year);
    printf("address is: %s\n",person[i].adress);
    printf("email is: %s\n",person[i].email);
    printf("phone number is: %d\n",person[i].phonenum);
}


}

#endif // PRINTE_H_INCLUDED
