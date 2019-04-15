#ifndef LOADE_H_INCLUDED
#define LOADE_H_INCLUDED
struct date
{
int day;
int month;
int year;
};

typedef struct
{
    char lastname[50];
    char firstname[50];
    struct date birthofdate;
    char adress[50];
    char email[50];
    char phonenum[50];
} contact;
contact person[100];
int count;
void loader()
{
    FILE *fr;
    fr=fopen("contactes.txt","a+");
    count=0;
    while(!feof(fr))
    {
        fscanf(fr,"\n%[^,],",person[count].lastname);
        fscanf(fr,"%[^,],",person[count].firstname);
        fscanf(fr,"%d,",&person[count].birthofdate.day);
        fscanf(fr,"%d,",&person[count].birthofdate.month);
        fscanf(fr,"%d,",&person[count].birthofdate.year);
        fscanf(fr,"%[^,],",person[count].adress);
        fscanf(fr,"%[^,],",person[count].email);
        fscanf(fr,"%[^,],",person[count].phonenum);
        count++;
    }
    fclose(fr);
}

#endif // LOADE_H_INCLUDED
