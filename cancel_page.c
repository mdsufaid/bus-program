#include<stdio.h>
//cancle page//
void cancle_ticket();
void user_page();
int main(){

    user_page();

    return 0;

}
void user_page(){
    int number;
    printf("1.booking ticket\n");
    printf("2.cencle ticket\n");
    printf("3.check bus\n");
    printf("4.logout\n");
    printf("select one option: ");
    scanf("%d",&number);
    if(number == 2){
        cancle_ticket();
    }
}
void cancle_ticket(){
int bus_number;
int seat_number;
printf("enter bus number: ");
scanf("%d",&bus_number);
printf("enter seat number:");
scanf("%d",&seat_number);
printf("cancle successful %d number seat cancle of bus number %d",seat_number,bus_number);
}
