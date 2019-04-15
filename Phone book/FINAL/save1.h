#ifndef SAVEE_H_INCLUDED
#define SAVEE_H_INCLUDED
int y;
void save ()
{

    if (p==0)
    {
        FILE *ps; // pointer to save
        ps=fopen("contactes.txt","a+");
        int h=count+1;
        for(int y=0; y<=m-1; y++)
        {
            strcpy(person[h].lastname,con[y].lastname) ;
            fprintf(ps,"%s,",person[h].lastname);

            strcpy(person[h].firstname,con[y].firstname);
            fprintf(ps,"%s,",person[h].firstname);

            person[h].birthofdate.day= con[y].birthofdate.day;
            fprintf(ps,"%d,",person[h].birthofdate.day);

            person[h].birthofdate.month= con[y].birthofdate.month;
            fprintf(ps,"%d,",person[h].birthofdate.month);

            person[h].birthofdate.year= con[y].birthofdate.year;
            fprintf(ps,"%d,",person[h].birthofdate.year);

            strcpy(person[h].adress,con[y].adress);
            fprintf(ps,"%s,",person[h].adress);

            strcpy(person[h].email,con[y].email);
            fprintf(ps,"%s,",person[h].email);

            strcpy(person[h].phonenum,con[y].phonenum);
            fprintf(ps,"%s,",person[h].phonenum);

            h++;
        }

    fclose(ps);
    }
    else if (p==1)
    {
         FILE *pc;
    pc=fopen("contactes.txt","w");
        for(y=0; y<=f-2; y++)
        {

            fprintf(pc,"%s,",person[y].lastname);

            fprintf(pc,"%s,",person[y].firstname);

            fprintf(pc,"%d,",person[y].birthofdate.day);

            fprintf(pc,"%d,",person[y].birthofdate.month);

            fprintf(pc,"%d,",person[y].birthofdate.year);

            fprintf(pc,"%s,",person[y].adress);

            fprintf(pc,"%s,",person[y].email);

            fprintf(pc,"%s,",person[y].phonenum);
        }

    fclose(pc);
    }
  else if (p==2)
    {
     FILE *pm;
    pm=fopen("contactes.txt","w");
        for(y=0; y<=count-2; y++)
        {

            fprintf(pm,"%s,",person[y].lastname);

            fprintf(pm,"%s,",person[y].firstname);

            fprintf(pm,"%d,",person[y].birthofdate.day);

            fprintf(pm,"%d,",person[y].birthofdate.month);

            fprintf(pm,"%d,",person[y].birthofdate.year);

            fprintf(pm,"%s,",person[y].adress);

            fprintf(pm,"%s,",person[y].email);

            fprintf(pm,"%s,",person[y].phonenum);
        }

 fclose(pm);

    }
    else
    {
        printf("didn't delete");
    }
    printf("File is saved successfully\n");


}


#endif // SAVEE_H_INCLUDED
