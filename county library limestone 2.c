/*
Version: C99
Project : Library management
Author: Virginia Mbugua
Date: June 2021
License :MIT






#include <stdio.h>
#include<math.h>
#include<string.h>
//Adding user:
//name
//contact
//is stuff
struct user{
char name[100];
int id;
char tel[13];

//function prototype
void execute
void execute action(int action)
int main()
{
int action;
printf("\tcounty library management system!\n");
printf("welcome virginia\n");
//Navigation menu
do{
    printf("1. Add user\n");
    printf("2. Add book\n");
    printf("3. Exit\n");
    printf("Select action(1-3):");
    scanf("%d",&action);
    //Validate input
    if (action >1 || action > 3)
    printf("invalid action.Try again\n");
}
while(action >1 || action > 3);
execute action

return0;
}
int action ;
while(1){
    action= menu
}
void execute action (int action)}
switch(action)
case1:
printf("adding a user\n");
break;
case 2:
printf("adding a book\n");
case 3
printf("exiting\n");
break;
default;
printf(:unknown action\n");
}
void add user () [
struct user u;]
file *fp;
if((fp=fopen ("users","ab"))==null)(


                                   printf("cannot open file.\n"))
                                    printf{"name:"];
                                    getchar ();
                                    gets(u,name);
                                    printf("ID number:"}:
                                           scanf("%d",&u"id);
                                           printf("phone number:");
                                           scanf("%s"&u,tel)
                                           printf('user type(1 for staff'0for ordinary user:"};
                                           fwrite(&u'sizeof(struct user),]'fp);
                                           fclose(fb);
                                           printf("user successfully added/n")
                                           ))







int main()
{
    printf("Hello world!\n");
    return 0;
}
