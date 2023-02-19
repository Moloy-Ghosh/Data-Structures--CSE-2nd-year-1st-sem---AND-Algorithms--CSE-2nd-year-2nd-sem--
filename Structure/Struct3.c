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
}baby1,baby2,baby3;

int main()
{
    strcpy(baby1.name,"Akib");
    strcpy(baby1.sex,"M");
    baby1.Bdy.day=19;
    baby1.Bdy.month=2;
    baby1.Bdy.year=2023;
    strcpy(baby1.Father.name,"Abdullah");
    baby1.Father.age=37;
    strcpy(baby1.Mother.name,"Sabmam");
    baby1.Mother.age=33;


    strcpy(baby1.name,"Rahima");
    strcpy(baby1.sex,"F");
    baby1.Bdy.day=19;
    baby1.Bdy.month=2;
    baby1.Bdy.year=2023;
    strcpy(baby1.Father.name,"Rahim");
    baby1.Father.age=45;
    strcpy(baby1.Mother.name,"Sabana");
    baby1.Mother.age=42;

    strcpy(baby1.name,"Jalal");
    strcpy(baby1.sex,"M");
    baby1.Bdy.day=19;
    baby1.Bdy.month=2;
    baby1.Bdy.year=2023;
    strcpy(baby1.Father.name,"Rahmat");
    baby1.Father.age=42;
    strcpy(baby1.Mother.name,"Joly");
    baby1.Mother.age=40;

    return 0;
}
