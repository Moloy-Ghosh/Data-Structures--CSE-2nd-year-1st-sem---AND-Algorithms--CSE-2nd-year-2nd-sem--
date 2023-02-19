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
    }B;
    struct father
    {
        char name[20];
        int age;
    }F,M;
};
int main()
{
    struct newBorn baby1;
    strcpy(baby1.name,"Akib");
    strcpy(baby1.sex,"M");
    baby1.B.day=19;
    baby1.B.month=2;
    baby1.B.year=2023;
    strcpy(baby1.F.name,"Abdullah");
    baby1.F.age=37;
    strcpy(baby1.M.name,"Sabmam");
    baby1.M.age=33;

    return 0;
}
