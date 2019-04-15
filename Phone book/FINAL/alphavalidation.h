#ifndef ALPHAVALIDATION_H_INCLUDED
#define ALPHAVALIDATION_H_INCLUDED

int main()
{
     char ch[20];
     int flag;
     printf("Enter any character: ");
    scanf("%s", ch);
     flag=valid_char(ch);

    if (flag==1)
    {
        printf("'%s' is alphabet.", ch);
    }
    else
    {
        printf("'%s' is digit.", ch);
    }

    return 0;
}


#endif // ALPHAVALIDATION_H_INCLUDED
