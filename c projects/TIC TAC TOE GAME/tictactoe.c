#include<stdio.h>
#include<stdlib.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int k=0,end=1,count=0;
void Name()
{
	printf("\n\t\t\tTIC TAC  TOE \n");
}
void draw()
{
	printf("\n\n\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c ",a[0],a[1],a[2]);
	printf("\n\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c ",a[3],a[4],a[5]);
	printf("\n\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c ",a[6],a[7],a[8]);
	printf("\n\t\t\t---|---|---\n");
}
void instructions()
{   
    printf("INSTRUCTIONS:-\n");
    printf("1) Don't overwrite again on same position\n");
	printf("2) Player 1 Symbol is x\n");
	printf("3) Player 2 Symbol is 0\n");
}
void getInput()
{
 char ch;
 int i;
 if(k==0)
 {
   printf("\nEnter the position for Player 1  ");
   fflush(stdin);
   scanf("%c",&ch);
   count++;
  for(i=0;i<=8;i++)
    { if(a[i]==ch)
      {
  	    a[i]='x';
  	    k=1;
  	    break;
       }
	 }	
 }
else
{  printf("\nEnter the position for Player 2  ");
   fflush(stdin);
   scanf("%c",&ch);
   count++;
   for(i=0;i<=8;i++)
   { if(a[i]==ch)
       {
      	a[i]='0';
      	k=0;
      	break;
        }
	    }
   }
	 
}
int Constrain()
{
	if(a[0]=='x'&&a[1]=='x'&&a[2]=='x')
	 return(1);
	else if(a[0]=='x'&&a[3]=='x'&&a[6]=='x')
	 return(1);
	else if(a[0]=='x'&&a[4]=='x'&&a[8]=='x')
	 return(1);
	else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
	 return(1);
	else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
	 return(1);
	else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
	 return(1);
	else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
	 return(1);
	else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
	 return(1);
	else if(a[0]=='0'&&a[1]=='0'&&a[2]=='0')
	 return(2);
	else if(a[0]=='0'&&a[3]=='0'&&a[6]=='0')
	 return(2);
	else if(a[0]=='0'&&a[4]=='0'&&a[8]=='0')
	 return(2);
	else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
	 return(2);
	else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
	 return(2);
	else if(a[2]=='0'&&a[4]=='0'&&a[6]=='0')
	 return(2);
	else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
	 return(2);
	else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
	 return(2);
	else
	 return(3);
}
void final()
{   
	int var;
	var=Constrain();
	if(count<9){
	if(var==1){
		printf("\nPlayer 1 won");
		end=0;
		count=0;
	}
	if(var==2){
		printf("\nPlayer 2 won");
		end=0;
		count=0;}
      }
	else
	{
		printf("\nGame Draw");
		count=0;
		end=0;
	}
   
   
}
int main()
{char c;
 again:
system("cls");
 Name();
 draw();
 instructions();
 while(end)
 {
 getInput();
 system("cls");
 Name();
 draw();
 final();
 }
 printf("\nWant to play again ?");
 printf("\nPress Y for YES or any key to exit");
 fflush(stdin);
 scanf("%c",&c);
 if(c=='Y'||c=='y')
 { 
 	a[0]='1';
 	a[1]='2';
 	a[2]='3';
 	a[3]='4';
 	a[4]='5';
 	a[5]='6';
 	a[6]='7';
 	a[7]='8';
 	a[8]='9';
 	k=0;
 	end=1;
 	goto again;
 }
 printf("\nTHANKS FOR PLAYING THE GAME");
 return 0;
}

