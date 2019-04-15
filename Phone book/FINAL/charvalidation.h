#ifndef CHARVALIDATION_H_INCLUDED
#define CHARVALIDATION_H_INCLUDED

int valid_char(char ch[])
{

     int flag=0;
     int i;
    for(i=0;i<strlen(ch);i++)
    {
    if(((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z')) && (ch[i] != '+' ))
    {
        flag=1;
    }
    else
        flag=0;
    }
        return flag;

}

#endif // CHARVALIDATION_H_INCLUDED
