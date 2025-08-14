#include<stdio.h>
//logout page//
void logout();
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
    if(number == 4){
        logout();
    }
}
void logout(){
printf(" successfull\n");
}
