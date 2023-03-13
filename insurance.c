#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

// gloabal variable declare
int lett, reg,mfg,cc;
char v_number[100],engine[100],chasis[100],rto[100],make[100],model[100];

char name[100],address[500];
int mob=0, adhar;


int date ,ncb;
char types[100];

int payment_mob,policy_num=1001;
 
// which type of customer
int customer_type(){
    int ch;
    printf("\t WELCOME TO MOTOR VEHICLE\n");
    printf("\t*************************\n");
    printf("\npress 1: New Customer");
    printf("\nPress 2: Old Customer"); 
    printf("\n\nenter your choise\n");
    scanf("%d",&ch);
    return(ch);
}

// vehicle detail 
void vehicle_detail(){
    printf("\tVehicle Details");
    printf("\t********************\n");
printf("\n \nvehicle number: ");
fflush(stdin);
gets(v_number);


printf("************************************************************************************************************\n");
printf("Engine Number : ");
fflush(stdin);
gets(engine);
printf("************************************************************************************************************\n");

printf(" Chasis Number : ");
fflush(stdin);
gets(chasis);
printf("************************************************************************************************************\n");

printf(" Year of Mfg : ");
scanf("%d",&mfg);
printf("************************************************************************************************************\n");

printf(" Year of Reg : ");
scanf("%d",&reg);
printf("************************************************************************************************************\n");

printf(" Cubic Capacity : ");
scanf("%d",&cc);
printf("************************************************************************************************************\n");

fflush(stdin);
printf("RTO Location: ");
gets(rto);
printf("************************************************************************************************************\n");

fflush(stdin);
printf("Make : ");
gets(make);
printf("************************************************************************************************************\n");

fflush(stdin);
printf("Model : ");
gets(model);
printf("************************************************************************************************************\n");
printf("\nThis page is over \n");
getch();
}


// vehicle owner details
void owner_detail(){
    printf("\t\t Owner Details\n\n");
    printf("Mobile Number : ");
    scanf("%d",&mob);
printf("************************************************************************************************************\n");

    printf("Adhar Number : ");
    scanf("%d",&adhar);
printf("************************************************************************************************************\n");
    
    fflush(stdin);
    printf("Name : ");
    gets(name);
printf("************************************************************************************************************\n");
    
    fflush(stdin);
    printf("Address: ");
    gets(address);
printf("************************************************************************************************************\n");

    printf(" This page is over\n");
    getch();
    
}

// policy type of the vehicle
int policy_type(){
    
    printf("\n 1:Liability Policy\n");
    printf("\n2:Standalone OD policy\n");
    printf("\n 3:Comprehensive Policy\n");
    printf("\n\nWrite Policy type as it is .\n");
    fflush(stdin);
    gets(types);
    printf(" This page is over\n");
    getch();

    
}

// tenure of the policy
void policy_tenure(){
    system("cls");
    printf("\nStart Date:(ddmmyy)");
    scanf("%d",&date);
    printf("\nNCB(Current):");
    scanf("%d",&ncb);
    printf(" This page is over\n");
    getch();
}

//payment link of the policy
void payment_link(){
    system("cls");
    printf("Enter Your Mobile Number which is link with any UPI application\n");
    scanf("%d",&payment_mob);
    printf(" This page is over\n");
    getch();
}


// process of the vehicle list
int process(){
    printf("\t\tMENU LIST\n");
    printf("\t********************\n");
    printf("\n\npress 1: Fill up vehicle detail\n");
    printf("press 2: Fill up vehicle owner details\n");
    printf("press 3: Policy type\n");
    printf("press 4: Tenure\n");
    printf("Press 5: Payment Link\n");
    printf("press 6: Get Policy\n\n");
    printf("Fillup the form one by one in sequece to(1,2,3,4,5) : \n");
    scanf("%d",&lett);
    return (lett);
}

// policy 
void get_policy(){
    system("cls");
    printf("\t\t\tKUSH MOTOR INSURANCE\n");
    printf("***************************************************************\n\n");
    policy_num=policy_num+1;  
    printf("Policy No: %d\n",policy_num);
    printf("Name:%s\n",name);
    printf("Address: %s\n",address);
    printf("Mobile Number: %d\n",mob);
    printf("Adhar Number: %d\n\n",adhar);

    printf("\t\t\t YOUR POLICY DETAIL\n");
    printf("***************************************************************\n\n");
    printf("Policy Start date: %d\n",date);
    printf("Policy Valid 365 days starts from issues date\n");
    printf("NCB : %d\n\n",ncb);

    printf("\t\t\t YOUR VEHICLE DETAIL\n");
    printf("***************************************************************\n\n");
    printf("Vehicle Number: %s\n",v_number);
    printf("Engine Number: %s\n",engine);
    printf("Chasis Number: %s\n",chasis);
    printf("RTO Location: %s\n",rto);
    printf("Make: %s\n",make);
    printf("Model: %s\n",model);
    printf("Cubic Capacity: %d\n",cc);
    printf("Year of Mfg: %d\n",mfg);
    printf("Year of Reg: %d\n",reg);

    printf("\t\t\tYOUR PREMIUM\n");
    printf("***************************************************************\n\n");
    printf("Your Policy Type: %s\n",types);
    printf("Your Total Amount : XXXX\n\n");
    printf("\t\t Thank You for Contacting ");
    getch();

}



int main(){
    
   
  switch(customer_type()){
    case 1:
      while(1){
      system("cls");
      switch (process())
      {
        
        case 1:
        system("cls");
        vehicle_detail();
        break;

        case 2:
        system("cls");
        owner_detail();
        break;

        case 3:
        system("cls");
        policy_type();
        break;
        
        case 4:
        system("cls");
        policy_tenure();
        break;

        case 5:
        system("cls");
        payment_link();
        break;

        case 6:
        system("cls");
        get_policy();
        break;

        default:
        system("cls");
        printf("Please enter valid number\n");
        break; 

      }

      }
      break;
      case 2:
      printf("SORRY");
      break;
      
    }
    return 0;
}


