
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
 char a[9]={'0','1','2','3','4','5','6','7','8'};
  int flag,count, move, x, k;
   char l , player1[20],player2[20];
   void menu();
   void frame();
   void choice();
   void user1move();
    void upperpart();
    void lowerpart();
    void smartmove(int);
     void devilmove(int); 
    void wincheck();
    void user2move();
    void cheatcheck();
    void devilresult();
    
//////////////////////////////////////////////////////////////////////////////////
void menu()
{   system("cls");
    fflush(stdin);
    printf("\tEnter your choice");
    printf("\n1. Want to play with smart computer.");
    printf("\n2. Want to play with  evil computer.");
    printf("\n3. Want to play with your friend");
    printf("\n4  Want to Exit.");

}
/// //////////////////////////////////////////////////////////////////////
void choice()
{
  
    switch (getch())
    {
    case '1':
    k=1;
    printf("\n\n Enter your name...");
    scanf("%[^\n]s",&player1);
    strcpy(player2,"smart computer ");
    //smartcomputer
      break;
    case'2' :
    k=2;
    printf("\n\n Enter your name...");
    scanf("%[^\n]s",&player1);
    strcpy(player2,"Devil ");
    //evilcomputer();
        break;
    case '3':
    k=3;
    printf("\n\n Enter your name...");
    scanf("%[^\n]s",&player1);
    fflush(stdin);
    printf("\n\n Enter your friend name...");
    scanf("%[^\n]s",&player2);
    //friend();
        break;
    case '4':
    k=4;
    //Exit
        break;
    
    default:
        break;
    }
}

void upperpart()
{      
    printf("\n\n#########################################################\n");
        printf("# ******* *******   ****   ********    #       ****     #\n");
        printf("#    #       #    *           #       #  #    *         #\n");
        printf("#    #       #    *           #      #****#   *         #\n");
        printf("#    #    *******  ****       #     #      #   ****     #\n");
        printf("#######################TIC-TAC-TOE#######################");
    printf("\n\n %s Symbol = (X)",player1);
    printf("\n %s Symbol = (O)",player2);
}
////////////////////////////////////////////////////////////////////////////////////
void frame()
{
    
     printf("\n\n\t\t***************");
     printf("\n\t\t* %c |  %c | %c  *",a[0],a[1],a[2]);
     printf("\n\t\t***************");
     printf("\n\t\t* %c |  %c | %c  *",a[3],a[4],a[5]);
     printf("\n\t\t*********|*****");
     printf("\n\t\t* %c |  %c | %c  *",a[6],a[7],a[8]);
     printf("\n\t\t***************");

}

//////////////////////////////////////////////////////////////////*//////////////////
void lowerpart()
{
   
   printf("\n\n####################iNEURON#############################");
     printf("\n#                KRISHNA CHAUHAN                       #");
     printf("\n####################iNEURON#############################");
}


/////////////////////////////////////////////////////////////////
void user1move()
 {
   printf("\n\n %s Moved %d...",player2,x);
 int t;
 printf("\n %s Enter the  Move number...",player1);
     label1:
     scanf("%d",&t);
     move=t;
     if(t<9&&t>=0)
     {  
        if(a[t]=='x'||a[t]=='O')
          goto label1;
        
        else
         a[t]='x';
     }
      else
        goto label1;
   
   }
 ////////////////////////////////////////////////////////////////////////////////  
  void user2move()
  {
    x=0;
   int t;
 printf("\n\n%s Enter the number...",player2);
     label1:
     scanf("%d",&t);
     move=t;
     if(t<9&&t>=0)
     {  
        if(a[t]=='x'||a[t]=='O')
          goto label1;
        
        else
         a[t]='O';
     }
      else
        goto label1;

  }
  
  /////////////////////////////////////////////////////////////////
    void smartmove( int n)
   {  
     x=0;
    switch (n)
 {
    case 0: /////////////
 label0:
srand(time(NULL));
x=rand()%9;
if(x!=0&&x!=5&&x!=7&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label0;
 
break;
case 1:////////////////
  label1:
srand(time(NULL));
x=rand()%8;
if(x!=1&&x!=3&&x!=5&&x!=6&&x!=8&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label1;
 
break;
case 2:////////////////
label2:
srand(time(NULL));
x=rand()%9;
if(x!=2&&x!=3&&x!=7&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label2;
 
break;
case 3:////////////////
label3:
srand(time(NULL));
x=rand()%7;
if(x!=1&&x!=3&&x!=2&&x!=7&&x!=8&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label3;
 
break;
case 4:////////////////
label4:
srand(time(NULL));
x=rand()%9;
if(x!=4&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label4;
 
break;
case 5:////////////////
label5:
srand(time(NULL));
x=rand()%9;
if(x!=0&&x!=1&&x!=5&&x!=6&&x!=7&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label5;
 
break;
case 6:////////////////
label6:
srand(time(NULL));
x=rand()%9;
if(x!=1&&x!=5&&x!=6&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label6;
 
break;
case 7:////////////////
label7:
srand(time(NULL));
x=rand()%9;
if(x!=0&&x!=2&&x!=5&&x!=3&&x!=7&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label7;
 
break;
case 8:////////////////
label8:
srand(time(NULL));
x=rand()%8;
if(x!=1&&x!=3&&x!=8&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label8;
 
break;
    }
}
///////////////////////////////////////////////////////////////////////
void devilmove( int n)
   {  
     x=0;
    switch (n)
 {
    case 0: /////////////
 label0:
srand(time(NULL));
x=rand()%9;
if(x!=0&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label0;
 
break;
case 1:////////////////
  label1:
srand(time(NULL));
x=rand()%9;
if(x!=1&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label1;
 
break;
case 2:////////////////
label2:
srand(time(NULL));
x=rand()%9;
if(x!=2&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label2;
 
break;
case 3:////////////////
label3:
srand(time(NULL));
x=rand()%9;
if(x!=3&&a[x]!='O'&&a[x]!='x')
  a[x]='O';
 else
 goto label3;
 
break;
case 4:////////////////
label4:
srand(time(NULL));
x=rand()%9;
if(x!=4&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label4;
 
break;
case 5:////////////////
label5:
srand(time(NULL));
x=rand()%9;
if(x!=5&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label5;
 
break;
case 6:////////////////
label6:
srand(time(NULL));
x=rand()%9;
if(x!=6&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label6;
 
break;
case 7:////////////////
label7:
srand(time(NULL));
x=rand()%9;
if(x!=7&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label7;
 
break;
case 8:////////////////
label8:
srand(time(NULL));
x=rand()%9;
if(x!=8&&a[x]!='O'&&a[x]!='x')
 a[x]='O';
 else
 goto label8;
 
break;
    }
}

///////////////////////////////////////////////////////////////////////

void cheatcheck()
    { int w=-1,p=0;
     int b[4]={0};
      if(a[0]=='x'&&a[1]=='x')
      {
       w++;
       b[w]=2; 
      }
      if(a[0]=='x'&&a[4]=='x')
      {
       w++;
       b[w]=8; 
      }
      if(a[0]=='x'&&a[3]=='x')
      {
       w++;
       b[w]=6; 
      }
      if(a[2]=='x'&&a[1]=='x')
      {
       w++;
       b[w]=0; 
      }
      
      
      if(a[2]=='x'&&a[0]=='x')
      {
       w++;
       b[w]=1; 
      }
      if(a[0]=='x'&&a[8]=='x')
      {
       w++;
       b[w]=4; 
      }
      if(a[6]=='x'&&a[8]=='x')
      {
       w++;
       b[w]=7; 
      }
      if(a[6]=='x'&&a[2]=='x')
      {
       w++;
       b[w]=4; 
      }
      if(a[0]=='x'&&a[6]=='x')
      {
       w++;
       b[w]=3; 
      }
      if(a[2]=='x'&&a[8]=='x')
      {
       w++;
       b[w]=5; 
      }

      if(a[2]=='x'&&a[4]=='x')
      {
       w++;
       b[w]=6; 
      }
      if(a[2]=='x'&&a[5]=='x')
      {
       w++;
       b[w]=8; 
      }
      if(a[3]=='x'&&a[6]=='x')
      {
       w++;
       b[w]=0; 
      }
      if(a[4]=='x'&&a[6]=='x')
      {
       w++;
       b[w]=2; 
      }
      if(a[7]=='x'&&a[6]=='x')
      {
       w++;
       b[w]=8; 
      }
      if(a[5]=='x'&&a[8]=='x')
      {
       w++;
       b[w]=2; 
      }
      if(a[8]=='x'&&a[7]=='x')
      {
       w++;
       b[w]=6; 
      }
      if(a[8]=='x'&&a[4]=='x')
      {
       w++;
       b[w]=0; 
      }
      if(a[4]=='x'&&a[1]=='x')
      {
       w++;
       b[w]=7; 
      }
      if(a[7]=='x'&&a[4]=='x')
      {
       w++;
       b[w]=1; 
      }
      if(a[3]=='x'&&a[4]=='x')
      {
       w++;
       b[w]=5; 
      }
      if(a[4]=='x'&&a[5]=='x')
      {
       w++;
       b[w]=3; 
      }
       if(w>=0)
       { int i,u=0;
        for(i=0;i<=w;i++)
        {   if(a[b[i]]!='O'&&a[b[i]]!='x')
             { 
                a[b[i]]='O';
                u++;
                p--;
                if(u==2)
                break;
             
             }
             else 
             p++;
        }
       }
        if(w==-1||p>0)
        {
           devilmove(move);
        }

    }
///////////////////////////////////////////////////////////////////////
void devilresult()
{
     if(flag==1)
         {
           if(l=='x')
           { system("cls");
            upperpart();
            frame();
            lowerpart();
         printf("\n\n%s  Win.....",player1);
         flag=1;
           }
         if(l=='O')
         { system("cls");
            upperpart();
            frame();
            lowerpart();
          printf("\n\n %s Win.....",player2);
          flag=1;
          }
         
         }
}

///////////////////////////////////////////////////////////////////////


void wincheck()
{ // checkin  1st player wining condition

if(a[0]==a[1]&&a[1]==a[2])
{
 l=a[0];
flag=1;
}
if(a[0]==a[3]&&a[3]==a[6])
{
 l=a[0];
flag=1;
}
if(a[2]==a[5]&&a[5]==a[8])
{
 l=a[2];
flag=1;
}
if(a[6]==a[7]&&a[7]==a[8])
{
 l=a[6];
flag=1;
}
if(a[1]==a[4]&&a[4]==a[7])
{
 l=a[1];
flag=1;
}
if(a[3]==a[4]&&a[4]==a[5])
{
 l=a[3];
flag=1;
}
if(a[0]==a[4]&&a[4]==a[8])
{
 l=a[0];
flag=1;
}
if(a[6]==a[4]&&a[4]==a[2])
{
 l=a[6];
flag=1;
}
///////Draw condition////////////

if(flag!=1)
{
  int i,count=0;
for(i=0;i<9;i++)
{
if(a[i]=='x'||a[i]=='O')
count++;
}
 if(count==9)
 { 
  flag=1;
  system("cls");
   upperpart();
       frame();
        lowerpart();
   printf("\n\n Match draw ...");
    printf("\nsuccessfully exited..");
    getch();
   exit(1);
  
 }
}

}


////////////////////////////////////////////////////////////////////////
void main()
{
  char c,i;
  
label100:
for(i=0;i<9;i++)
 a[i]=i+48;
//strcpy(a,"012345678");
k=0;
  menu();
     choice();
   if(k==1)////////// playing with smart computer
    {
        flag=0;
  
         while(flag!=1)
      { 
           system("cls");
        upperpart();
         printf("\n\nYou are playing with smart computer");
        frame();
        lowerpart();
        user1move();
        wincheck();
        if(flag!=1)
        {
          smartmove(move);
         wincheck();
          if(flag==1)
              {
                system("cls");
                upperpart();
                frame();
                lowerpart();
              }
         
        }
       if(flag==1)
         {
           if(l=='x')
         printf("\n\n %s Win.....",player1);
         if(l=='O')
         printf("\n\n %s  Win.....",player2);
         }
      }
     }
         /// devvil computer
         if(k==2)
         {   
          flag=0;
              while(flag!=1)
           { 
                  system("cls");
               upperpart();
                printf("\n\nYou are playing with Devil computer");
               frame();
               lowerpart();
               user1move();
               wincheck();
               if(flag!=1)
               {
               cheatcheck();
              wincheck();
              if(flag==1)
              {
                system("cls");
                upperpart();
                frame();
                lowerpart();
              }
             devilresult();
               }
             }
         }
     if(k==3)//// playing with friend
      {
            flag=0;
   
              while(flag!=1)
         { 
                  system("cls");
               upperpart();
              printf("\n\nYou are playing with friend your");
             frame();
             lowerpart();
             user1move();
            wincheck();
             if(flag==1)
              {
                if(l=='x')
                {
                   printf("\n\n%s Win.....",player1);
                 break;
                 }
                
               if(l=='O')
               {
                printf("\n\n%s  Win.....",player2);
                break;
               }
            }
            system("cls");
            upperpart();
            printf("\n\nYou are playing with friend your");
             frame();
             lowerpart();
            user2move();
            wincheck();
            if(flag==1)
              {
                if(l=='x')
                {
                   printf("\n\n%s Win.....",player1);
                 break;
                 }
                
               if(l=='O')
               {
                printf("\n\n %s Win.....",player2);
                break;
               }
            }
         }
     }

   if(k==4)
   {  printf("\nsuccessfully exited..");
    getch();
exit(1);

   }
    printf("\n\n Do You want play again\n Press Y for Yes\n Press N for No");
      c=getch();
     if(c=='Y'||c=='y')
     goto label100;

}












