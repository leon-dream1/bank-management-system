#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void deposite();
void withdraw();
void checkAccountDetail();
int list();
void transfer();
char name[20];
int id, depositeAmount = 0, totalAmount = 1000, withdrawAmount = 0, transferAmount = 0;
int totalDeposite = 0,totalWithdraw = 0, totalTransfer = 0;

int main(){
    // char name[20];
//int id;
    printf("\n\n\n\n\n\n\n\n\t\t\t******** WELCOME TO OUR BANKING MANAGEMENT SYSTEM *********\n\n\n\n\n");
    printf("Enter your name: ");
    fgets(name, 20, stdin);

    printf("Enter your id: ");
    scanf("%d", &id);
    system("cls");

while(1){

    system("cls");
    switch(list()){
  case 1:
      deposite();
      totalDeposite = totalDeposite + depositeAmount;
      break;
  case 2:
      withdraw();
      if(withdrawAmount <= totalAmount){
        totalWithdraw = totalWithdraw + withdrawAmount ;
      }
      break;
  case 3:
      transfer();
      if(transferAmount <= totalAmount){
      totalTransfer = totalTransfer + transferAmount;
      }
      break;
  case 4:
      system("cls");
       checkAccountDetail();
      break;
  case 5:
      exit(0);
    }
getch();
}
    return 0;
}

int list(){
    int ch;
   printf("\n\n\n\n\n1. Deposite\n");
   printf("2. Withdraw Money\n");
   printf("3. Transfer Money\n");
   printf("4. Check Account Detail\n");
   printf("5. Exit\n");

   printf("Enter your choice: ");
   scanf("%d", &ch);

   return ch;
}

void deposite(){
    printf("Enter The money you want to deposite: ");
    scanf("%d", &depositeAmount);

    totalAmount = totalAmount + depositeAmount;
    printf("DEPOSITE SUCCESSFULL\n");

}

void withdraw(){
 printf("Enter the money you want to withdraw: ");
 scanf("%d", &withdrawAmount);

 if(withdrawAmount <= totalAmount){
  totalAmount = totalAmount - withdrawAmount;
  printf("WITHDRAW SUCCESSFULL\n");
    }
else{
    printf("Not enough money\n");
    }

}

void transfer(){
 printf("Enter the money you want to Transfer: ");
 scanf("%d", &transferAmount);

   if(transferAmount <= totalAmount){
  totalAmount = totalAmount - transferAmount;
  printf("TRANSFER SUCCESSFULL\n");
    }
else{
    printf("Not enough money to transfer\n");
    }
}

void checkAccountDetail(){
    printf("\n\n\n\n\n");
   printf("\t\t\tYOUR NAME IS : %s", name);
   printf("\t\t\tYOUR ACCOUNT NUMBER IS : %d\n", id);
   printf("\t\t\tTOTAL AMOUNT IN THIS ACCOUNT IS : RS.%d\n", totalAmount );
   printf("\t\t\tTOTAL DEPOSITE AMOUNT IS : RS.%d\n", totalDeposite);
   printf("\t\t\tTOTAL WITHDRAW AMOUNT IS : RS.%d\n", totalWithdraw);
   printf("\t\t\tTOTAL TRANSFER AMOUNT IS : RS.%d\n", totalTransfer);
   printf("\n\n\t\t\t********* THANK YOU ***********");
}
