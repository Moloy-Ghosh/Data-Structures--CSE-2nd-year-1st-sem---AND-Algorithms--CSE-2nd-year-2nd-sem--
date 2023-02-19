#include <stdio.h>
#include <stdlib.h>

struct newBorn
{
    char name[20];
    char sex[1];
    struct birthday
    {
        int month;
        int day;
        int year;
    }Bdy;
    struct parents
    {
        char name[20];
        int age;
    }Father,Mother;
};
int main()
{
    struct newBorn baby1;
    strcpy(baby1.name,"Akib");
    strcpy(baby1.sex,"M");
    baby1.Bdy.day=19;
    baby1.Bdy.month=2;
    baby1.Bdy.year=2023;
    strcpy(baby1.Father.name,"Abdullah");
    baby1.Father.age=37;
    strcpy(baby1.Mother.name,"Sabmam");
    baby1.Mother.age=33;

    return 0;
}
