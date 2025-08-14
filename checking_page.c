#include <stdio.h>
// bus checking page//
void check();
void user_page();
void bus_110();
void bus_120();
int main()
{

    user_page();

    return 0;
}
void user_page()
{
    int number;
    printf("1.booking ticket\n");
    printf("2.cencle ticket\n");
    printf("3.check bus\n");
    printf("4.logout\n");
    printf("select one option: ");
    scanf("%d", &number);
    if (number == 3)
    {
        check();
    }
}
void check()
{
    int num;
    printf("enter bus number: ");
    scanf("%d", &num);
    if (num == 110)
    {
        bus_110();
    }
    else if (num == 120)
    {
        bus_120();
    }
}
void bus_110()
{
    printf("bus_number:110\n");
    printf("surce city:Ajmer\n");
    printf("destinaion city:mehsi\n");
    printf("total seat:50\n");
    printf("available seat: 40\n");
    printf("fare:4000.00\n");
}
void bus_120()
{
    printf("bus_number:120\n");
    printf("surce city:Kanya Kumari\n");
    printf("destinaion city:patna\n");
    printf("total seat:60\n");
    printf("available seat: 30\n");
    printf("fare:9000.00\n");
}
