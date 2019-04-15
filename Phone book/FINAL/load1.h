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
    int phonenum;
} contact;
contact person[100];
int count=0;
void loade()
{
    FILE *fr;
    fr=fopen("contactes.txt","a+");
    while(!feof(fr))
    {
        fscanf(fr,"%[^,],",person[count].lastname);
        fscanf(fr,"%[^,],",person[count].firstname);
        fscanf(fr,"%d,",&person[count].birthofdate.day);
        fscanf(fr,"%d,",&person[count].birthofdate.month);
        fscanf(fr,"%d,",&person[count].birthofdate.year);
        fscanf(fr,"%[^,],",person[count].adress);
        fscanf(fr,"%[^,],",person[count].email);
        fscanf(fr,"%d,",&person[count].phonenum);
        count++;
    }
    fclose(fr);
}

#endif // LOADE_H_INCLUDED
