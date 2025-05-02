#include<stdio.h>
int main()
{
        char UserName[] = "admin@123";
        scanf("%s", &UserName);
        printf("enter your password: ");
        char PassWord[] = "123456789";
        scanf("%s", &PassWord); 
        if (UserName == "admin@123") 
        {
        if (PassWord == "123456789"){
        printf("Login Successful\n");
        }
        }else
        {
        printf("Login credentials are incorrect.\n");
        }}
   
