#include<stdio.h>
#include<stdlib.h>
#incluid<windows.h>
int i,j;
int main_exit;
void menu();
struct data{
     int month,day,year;
     }
struct{
      char name[60];
      int acc_no,agg;
      char address[60];
      char citizenship[15];
      double phon;
      char acc_type[10]
      fiot amt;
      struct data dob;
      struct data deposit;
      struct data withdraw;
      }add,upd,check,rem,transaction;
float interest(float t,float amount,int rate)
{
      float SI;
      SI=(rate*t*amount)/100.0;
      return (SI);
}
void new_acc()
{
      int choice;
      FILE *ptr;
      ptr=fopen("record.data","a+");
      acount_no;
      system("cls");
      prientf("\t\t\t\xB2\xB2\xB2\ADD RECORD\xB2\xB2\xB2\xB2");
      PRIENTF("\n\n\n Enter today's data(mm/dd/yyyy):");
      scanf("%d/%d/%d",&add.deposit.monthh,&add.deposit.day,&add.deposit.year);
      prientf("\nEnter the acount number:");
      scanf("%d",&check.acc_n0);
      while(fscanf(ptr,"%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&add.acc_no,add.name,add.dob.month,add.dob.day,add.dob.year,7add.age,add.address,add.citizenship,&add.phon,add.acc_type,7add.amt,&add.deposit.day,&add.deposit.year)!=EOF)
      {
           if(check.acc_no==add.acc_no)
           {prientf("Account no. already in use!");
           fordelay(1000000000);
                  goto account_no;
                  
