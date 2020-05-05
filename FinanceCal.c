#include<stdio.h>

#include<conio.h>

#include<string.h>

#include<process.h>

#include<stdlib.h>

#include<math.h>

#include<dos.h>

#include<time.h> 

void delay(int number_of_seconds);

void showvalue(double value, char text[ ]);

int main()

{
main:

    system("cls");    /*******************Main menu************************/

    printf("\n\t **** Welcome to Finance Calculator  ****");

    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Calculate Future Value\n\t\t[2] Calculate Perodic Payment\n\t\t[3] Calculate Interest Rate Per Period\n\t\t[4] Find Number of Periods\n\t\t[5] Help\n\t\t[0] Exit\n\t\t=================\n\t\t");

    printf("Enter the choice : ");
    
    int ch;
    
    int period = 0;
		
	double inter = 0;
		
	double pmt = 0;
	
	int checkfv;
	
	int checkpmt;
	
	int doagain;
	
	double futurevalue = 0;
	
	int helpch = 0;
	
	

    scanf("%d",&ch);

    switch(ch){

    case 0:

        printf("\n\n\t\tAre you sure you want to exit?");

        break;

        /****************Exit the program*************/

    case 1:

        fv:
	        system("cls");
	        
	        period = 0;
	        inter = 0;
	        pmt = 0;
	        
			int pmtchc;
			int counter = 0;
			printf("\n\t **** Calculate Future Value  ****\n\n");
			printf("\t =================\n");
	        printf("\t Input Period : ");
	        scanf("%d",&period);
	        if(period <= 0){
	        	system("cls");
	        	printf("\n\t Invalid Period !!!\n\t Try Again in a moment");
	        	delay(3);
	        	goto fv;
			}
	        printf("\t =================\n");
			printf("\t Input Interest Rate Per Period (%%): ");
	        scanf("%lf",&inter);
	        if(inter <= 0){
	        	system("cls");
	        	printf("\n\t Invalid Interest Rate !!!\n\t Try Again in a moment");
	        	delay(3);
	        	goto fv;
			}
	        inter = inter/100;
	        printf("\t =================\n");
	        printf("\t Input Payment : ");
	        scanf("%lf",&pmt);
	        if(pmt <= 0){
	        	system("cls");
	        	printf("\n\t Invalid Payment !!!\n\t Try Again in a moment");
	        	delay(3);
	        	goto fv;
			}
	        printf("\t =================\n");
	        do{
	        	if(counter == 0){
	        		printf("\t PMT made at the Beginning or End of each period : Beginning Enter (1), End Enter (2)\n\t Enter The Choice : ");
					scanf("%d",&pmtchc);
					if(pmtchc == 1 || pmtchc == 2){
						checkfv = 0;
					}else{
						checkfv = 1;
					}
					counter++;
				}else{
					printf("\t =================\n");
					printf("\t Invalid choice, please Enter Again : ");
					scanf("%d",&pmtchc);
					if(pmtchc == 1 || pmtchc == 2){
						checkfv = 0;
					}else{
						checkfv = 1;
					}
				}
			}while(checkfv);
			
			if(pmtchc == 1){
				futurevalue = (((pow((1+inter),period)-1)/(inter))*pmt)*(1+inter);
				showvalue(futurevalue, "Future Value");
			}else{
				futurevalue = ((pow((1+inter),period)-1)/(inter))*pmt;
				showvalue(futurevalue, "Future Value");
			}
			printf("\t Back to Main Menu Enter(0)\n\t Calculate Again Enter(1)\n\t Enter the choice : ");
			scanf("%d",&doagain);
			if(doagain == 1){
				goto fv;
			}else{
				goto main;
			}
        /**********************Calculate Future Value*************************/

    case 2:

        payment:
        	system("cls");
        	
        	period = 0;
	        inter = 0;
	        pmt = 0;
	        futurevalue = 0;
	        
	        pmtchc;
	        counter = 0;
        	
        	printf("\n\t **** Calculate Perodic Payment  ****\n\n");
        	printf("\t =================\n");
	        printf("\t Input Period : ");
	        scanf("%d",&period);
	        if(period <= 0){
	        	system("cls");
	        	printf("\n\t Invalid Period !!!\n\t Try Again in a moment");
	        	delay(3);
	        	goto payment;
			}
			printf("\t =================\n");
			printf("\t Input Interest Rate Per Period (%%): ");
	        scanf("%lf",&inter);
	        
	        if(inter <= 0){
	        	system("cls");
	        	printf("\n\t Invalid Interest Rate !!!\n\t Try Again in a moment");
	        	delay(3);
	        	goto payment;
			}
			inter = inter/100;
			printf("\t =================\n");
			printf("\t Input Future Value : ");
	        scanf("%lf",&futurevalue);
	        if(inter <= 0){
	        	system("cls");
	        	printf("\n\t Invalid Future Value !!!\n\t Try Again in a moment");
	        	delay(3);
	        	goto payment;
			}
			printf("\t =================\n");
			do{
	        	if(counter == 0){
	        		printf("\t PMT made at the Beginning or End of each period : Beginning Enter (1), End Enter (2)\n\t Enter The Choice : ");
					scanf("%d",&pmtchc);
					if(pmtchc == 1 || pmtchc == 2){
						checkpmt = 0;
					}else{
						checkpmt = 1;
					}
					counter++;
				}else{
					printf("\t =================\n");
					printf("\t Invalid choice, please Enter Again : ");
					scanf("%d",&pmtchc);
					if(pmtchc == 1 || pmtchc == 2){
						checkpmt = 0;
					}else{
						checkpmt = 1;
					}
				}
			}while(checkpmt);
        	
        	if(pmtchc == 1){
				double paymentvalue = (futurevalue/((pow((1+inter),period)-1)/inter))/(1+inter);
				showvalue(paymentvalue, "Perodic Payment");
			}else{
				double paymentvalue = futurevalue/((pow((1+inter),period)-1)/inter);
				showvalue(paymentvalue, "Perodic Payment");
			}
        	printf("\t Back to Main Menu Enter(0)\n\t Calculate Again Enter(1)\n\t Enter the choice : ");
			scanf("%d",&doagain);
			if(doagain == 1){
				goto payment;
			}else{
				goto main;
			}

        /********************Calculate Perodic Payment********************/

    case 3:

		keffect:
        	system("cls");
        	
        	double interestnominal = 0;
        	int ncompoundperiod;
        	
        	printf("\n\t **** Calculate Interest Rate Per Period ****\n\n");
        	printf("\t =================\n");
	        printf("\t Input Nominal Interest Rate (%%): ");
	        scanf("%lf",&interestnominal);
	        if(interestnominal <= 0){
	        	system("cls");
	        	printf("\n\t Invalid Nominal Interest Rate !!!\n\t Try Again in a moment");
	        	delay(3);
	        	goto keffect;
			}
			printf("\t =================\n");
	        printf("\t Input Number of Compounding Periods : ");
	        scanf("%d",&ncompoundperiod);
	        if(ncompoundperiod <= 0){
	        	system("cls");
	        	printf("\n\t Invalid Nominal Interest Rate !!!\n\t Try Again in a moment");
	        	delay(3);
	        	goto keffect;
			}
			interestnominal = interestnominal/100;
			
			double interfx = pow((1+((interestnominal)/ncompoundperiod)), ncompoundperiod)-1;
			interfx = interfx*100;
			printf("\n\t =================\n");
			printf("\t Your Effective Interest Rate is %.2lf%% Per Period\n", interfx);
			
			printf("\n\t =================\n");
			printf("\t Back to Main Menu Enter(0)\n\t Calculate Again Enter(1)\n\t Enter the choice : ");
			scanf("%d",&doagain);
			if(doagain == 1){
				goto keffect;
			}else{
				goto main;
			}
        	

        

        break;

        /******************Calculate Interest Rate Per Period*******************/

    case 4:

		findpe:
			
	        system("cls");
	        
	        futurevalue = 0;
	        inter = 0;
	        pmt = 0;
	        
	        counter = 0;
	        
	        printf("\n\t **** Find Number of Periods ****\n\n");
	        printf("\t =================\n");
			printf("\t Input Future Value : ");
	        scanf("%lf",&futurevalue);
	        if(futurevalue <= 0){
	        	system("cls");
	        	printf("\n\t Invalid Future Value !!!\n\t Try Again in a moment");
	        	delay(3);
	        	goto findpe;
			}
			printf("\t =================\n");
			printf("\t Input Interest Rate Per Period (%%): ");
	        scanf("%lf",&inter);
	        if(inter <= 0){
	        	system("cls");
	        	printf("\n\t Invalid Interest Rate !!!\n\t Try Again in a moment");
	        	delay(3);
	        	goto findpe;
			}
	        inter = inter/100;
	        printf("\t =================\n");
	        printf("\t Input Payment : ");
	        scanf("%lf",&pmt);
	        if(pmt <= 0){
	        	system("cls");
	        	printf("\n\t Invalid Payment !!!\n\t Try Again in a moment");
	        	delay(3);
	        	goto findpe;
			}
			
			int counterperiod = 0;
			double endbal = 0;
			double startbal = 0;
			double tempinter = 0;
			
			while(endbal <= futurevalue){
				if(counterperiod == 0){
					startbal = (pmt*(counterperiod+1))+endbal;
				}else{
					startbal = pmt+endbal;
				}
				
				tempinter = startbal*inter;
				endbal = startbal + tempinter;
				
				counterperiod++;
			}
			
			
			printf("\t =================\n");
			do{
	        	if(counter == 0){
	        		printf("\t PMT made at the Beginning or End of each period : Beginning Enter (1), End Enter (2)\n\t Enter The Choice : ");
					scanf("%d",&pmtchc);
					if(pmtchc == 1 || pmtchc == 2){
						checkpmt = 0;
					}else{
						checkpmt = 1;
					}
					counter++;
				}else{
					printf("\t =================\n");
					printf("\t Invalid choice, please Enter Again : ");
					scanf("%d",&pmtchc);
					if(pmtchc == 1 || pmtchc == 2){
						checkpmt = 0;
					}else{
						checkpmt = 1;
					}
				}
			}while(checkpmt);
			if(pmtchc == 1){
				printf("\n\t =================\n");
				printf("\t Your Number of Periods is %d\n", counterperiod-1);
			}else{
				printf("\n\t =================\n");
				printf("\t Your Number of Periods is %d\n", counterperiod);
			}
			
			printf("\n\t =================\n");
			printf("\t Back to Main Menu Enter(0)\n\t Calculate Again Enter(1)\n\t Enter the choice : ");
			scanf("%d",&doagain);
			if(doagain == 1){
				goto findpe;
			}else{
				goto main;
			}
        
        break;

        /*********************Find Number of Periods******************/
    
    case 5:
    	help:
	        system("cls");
	        printf("\n\t **** Help ****");
			printf("\n\n\n\t\tThis Finance Calculator can be used to calculate any number of the following parameters:\n\t\t=====================\n\t\t[1] Future Value\n\t\t[2] Present Value\n\t\t[3] Period\n\t\t[4] Perodic Payment\n\t\t[5] Effective Interest Rate\n\t\t[6] Nominal Interest Rate\n\t\t\n\t\t[0] Exit to Main Menu\n\t\t=================\n\t\t");
			printf("\n\t\tEnter the choice : ");
			scanf("%d", &helpch);
			switch(helpch){
				case 0: 
					goto main;
				case 1: 
					system("cls");
					printf("\n\t **** Future Value ****\n");
					printf("\n\t The value of an asset at a specific date.");
					printf("\n\t It measures the nominal future sum of money");
					printf("\n\t that a given sum of money is worth at a specified time in the future.");
					printf("\n\n\t =================\n");
					
					printf("\t Back to Help(0)\n\t Back to Main Menu(1)\n\t Enter the choice : ");
					scanf("%d",&doagain);
					if(doagain == 1){
						goto main;
					}else{
						goto help;
					}
				case 2:
					system("cls");
					printf("\n\t **** Present Value ****\n");
					printf("\n\t Also know as Present Discounted Value,");
					printf("\n\t is the value of an expected income stream");
					printf("\n\t determined as of the date of valuation.");
					printf("\n\n\t =================\n");
					
					printf("\t Back to Help(0)\n\t Back to Main Menu(1)\n\t Enter the choice : ");
					scanf("%d",&doagain);
					if(doagain == 1){
						goto main;
					}else{
						goto help;
					}
				case 3:
					system("cls");
					printf("\n\t **** Period ****\n");
					printf("\n\t The period of time between the date of");
					printf("\n\t the agreement and the day on which the");
					printf("\n\t financing is complete.");
					printf("\n\n\t =================\n");
					
					printf("\t Back to Help(0)\n\t Back to Main Menu(1)\n\t Enter the choice : ");
					scanf("%d",&doagain);
					if(doagain == 1){
						goto main;
					}else{
						goto help;
					}
				case 4:
					system("cls");
					printf("\n\t **** Perodic Payment ****\n");
					printf("\n\t Payment which made in installments");
					printf("\n\t at regular intervals over a period.");
					printf("\n\t They may be paid annually, quaterly,");
					printf("\n\t monthly, etc.");
					printf("\n\n\t =================\n");
					
					printf("\t Back to Help(0)\n\t Back to Main Menu(1)\n\t Enter the choice : ");
					scanf("%d",&doagain);
					if(doagain == 1){
						goto main;
					}else{
						goto help;
					}
				case 5:
					system("cls");
					printf("\n\t **** Effective Interest Rate ****\n");
					printf("\n\t ( Interest Rate Per Period )");
					printf("\n\t The interest rate on a loan or financial product");
					printf("\n\t restarted from the nominal interest rate and");
					printf("\n\t expressed as the equivalent interest if compound");
					printf("\n\t interest was payable annually in arrears.");
					printf("\n\n\t =================\n");
					
					printf("\t Back to Help(0)\n\t Back to Main Menu(1)\n\t Enter the choice : ");
					scanf("%d",&doagain);
					if(doagain == 1){
						goto main;
					}else{
						goto help;
					}
				case 6:
					system("cls");
					printf("\n\t **** Nominal Interest Rate ****\n");
					printf("\n\t The rate of interest before adjustment for inflation.");
					printf("\n\t or the interest that be calculated more than once in a period.");
					printf("\n\n\t =================\n");
					
					printf("\t Back to Help(0)\n\t Back to Main Menu(1)\n\t Enter the choice : ");
					scanf("%d",&doagain);
					if(doagain == 1){
						goto main;
					}else{
						goto help;
					}
				default:
					
					system("cls");
		        	printf("\n\t Invalid Choice !!!\n\t Try Again in a moment");
		        	delay(3);
		        	goto help;
			}
		
		break;
		
		/********************Help User Function******************/


    default:

        printf("Invalid choice");

        break;

    }

    printf("\n\n\n\t\t ..::Enter the Choice:\n\n\t\t[1] Main Menu\t\t\t[0] Exit\n\t\t ");

    scanf("%d",&ch);

    switch (ch){
    	
    case 1:

        goto main;

    case 0:

        break;

    default:

        printf("Invalid choice");

        break;
    }

    return 0;

}

void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds) 
        ; 
}

void showvalue(double value, char text[ ]){
	printf("\n\t =================\n");
	printf("\t Your %s is %.2lf\n", text, value);
	printf("\n\n\t =================\n");
}

