#include<stdio.h>
#include <stdlib.h>
#include <string.h>


struct program
{
	int corse; //for index of courses
	char coursename[50];//name of courses
	char placename[50],place[50],state[50],stateau[50];//name of places
	int n1,n2;
	char MBAnation[50],MBASTATE[50];
	char college[50];
	char city[50];
}s;
int n;







void course(int ,char []);   //function definition
void place(int, char []);
void country(char[]);
void nation( char[]);
void USA(char []);
void UK(char []);
void Australia(char []);
void Switzerland(char []);
void Germany(char []);
void MBAcountry(char []);
void MBAUSA(char []);




int main(void)

{
	printf("\n\n\n\n\n\t\t\t\tWelcome to the PG College Advisor"); //
	printf("\n\t\t\t\t=====================");
	char fname[50];
	int corse;
	printf("Enter the file name to save data to: \n");
	fgets(fname,sizeof(fname),stdin);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n "); 
	printf("Enter the course of interest: \nEnter 1 for M.S\nEnter 2 for MBA\nEnter 3 for M.tech\n");
	scanf("%d",&corse);       	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n ");
	course(corse,fname);
	return 0;
}






void course(int corse,char fname[50])
{
	int n1,n2,n3;
	FILE *fp;
	fp = fopen(fname,"a");
	if(corse == 1)                                                                                                                                                           
	                         {                                                                                                                                                            strcpy(s.coursename,"M.S"); 
	   country(fname);                                                      
	}                
	else if(corse == 2)
	{
        strcpy(s.coursename,"MBA");
	 printf("Enter the place where you want to study: \n Enter 1 for Telangana \n Enter 2 for PAN India \n Enter 3 for Abroad\n"); 
	 scanf("%d", &n1);
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");    
	 if(n1==1||2||3)	 
	      place(n1,fname); 
	     else
	      printf("Entered number is wrong\n");
	}   
	else if(corse == 3)
	{
        strcpy(s.coursename,"M.Tech");   
	      nation(fname); 
	 }
	else
		printf("Entered number is wrong\n");
	fprintf(fp,"%s\n",s.coursename);
	 fclose(fp);
}




void place(int n1, char fname[50])
{
	       FILE *fp;             
	       fp = fopen(fname,"a");
	       if(n1==1)
		{
		strcpy(s.placename,"state");
	        printf("The famous Colleges for MBA in Telangana are: \nUniversity of Hydrebad\nOsmania University\n JNTUH Hydrebad\n Woxsen University\n IPE Hydrebad\n\n");
	        printf("The Expenditure for MBA in:\n"
			"University of Hydrebad: 5 Lakhs \n"
			"Osmania University: 4 Lakhs \n"
		       	"JNTUH Hydrebad: 4 Lakhs \n"
		       	"Woxsen University:12 Lakhs \n"
		       	"IPE Hydrebad: 8.15 Lakhs\n\n");
		}
		else if(n1==2)
		{        
			strcpy(s.placename,"Nation");
			 printf("The famous colleges PAN India are:\nIIM Ahmedabad\nIIM Banglore\nIIM Calcuta\nIIM-Lucknow\nIIM Kozhikode\nIIM Indore\nIIM Udaipur\nIIM Trichy\nIIM Raipur\nIIM Rohtak\n\n");
	      printf("All IIMs have approximately same fees: 23 Lakhs for 2 years\n\n");
		}  
	      else if(n1==3)
    		{			
			strcpy(s.placename,"Foreign");
			MBAcountry(fname);
		}
	         else
		 printf("Entered number is wrong \n");
		  fprintf(fp,"%s\n",s.placename);                                                                                                                                                                                  fclose(fp);  
}



void nation( char fname[50])
{
	       int n2;
	        FILE *fp;                                                                                                                                                                                                        fp = fopen(fname,"a");   
	       printf("Enter 1 for I.I.T \n Enter 2 for N.I.T \n Enter 3 for I.I.I.T \n");
	       scanf("%d" , &n2);
	       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	       if(n2==1)
	       {
		   strcpy(s.college,"IIT");
		  printf("The Colleges are: \n IIT Bombay \n IIT Madras \n IIT kharagpur \n IIT Delhi \n IIT kanpur \n IIT Roorkee \n IIT Guwahati\n IIT Hyderabad\n IIT(BHU) Varanasi \n IIT Indore\n\n");
	       printf("The Fee Expenditure for all the above IITs is the same\n\n Hostel fee per Semester is Rs.67,000\n Tution fee per semester is Rs.48,000 \n Total Fees Per semester is Rs.1.15 lakh\n\n");
	       }
	       else if(n2==2)
		{
		      strcpy(s.college,"NIT");  
                   printf("The colleges are:\nNIT Trichy\nNIT Surathkal\nNIT Rourkela\nNIT Warangal\nNIT Calicut\nVNIT Nagpur\n NIT Kurukshetra\nMNIT Allahabad\nNIT Durgapur\nNIT Silchar\n\n");
		   printf("The Fee Expenditure of all the above NITs is the same\n\n Hostel fee per Semester is Rs.39,000\nTution fee per semester is Rs.26,500\nTotal Fee  Per semester is Rs.62,500\n\n");
		}
	       else if (n2==3)
		 {
		     strcpy(s.college,"IIIT");  
	            printf("The Colleges are :\nIIIT Hyderabad\nIIIT Banglore\nIIIT Guwahati\nIIITDM Jabalpur\nABV IIIT Gwalior\nIIIT Allahabad\nIIITDM Kanchipuram\nIIIT Pune\nIIIT Kota\nIIIT chitoor\n\n");
		    printf("The Toatal Fee Expenditure :\n IIIT Hydrebad is:3,00,000/-per annum\n IIIT Banglore is:2,00,000/- per annum\n IIIT Guwahati:1,30,000/- per annum\n IIITDM Jabalpur is:2,00,00/- per annum\nABV IIIT Gwalior is: 1,00,000/-per annum\nIIIT Allahabad is:2.8 lakhs per annum\n IIITDM Kanchipuram is: 1,00,000/- per sem\n IIIT Pune is: 1,80,000/- per Year\nIIIT Kota is:1,26,000/- per Sem\nIIIT chitoor is: 1,15,000/ per Sem\n\n");
		  }
	        else
			printf("Entered number is wrong \n");
                    fprintf(fp,"%s\n",s.college);                                                                                                                                                          fclose(fp);
}







void country(char fname[50])
{	
	int n3;
	FILE *fp;
	fp = fopen(fname,"a");
	printf("Enter the country that you want to study in: \n");
	printf("Enter 1 for USA\n2 for UK\n3 for Australia\n4 for Switzerland\n5 for Germany\n\n");
	scanf("%d",&n3);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	if(n3==1)
	{
		strcpy(s.place,"USA");
		USA(fname);
	}	
	else if (n3==2)
	{
		strcpy(s.place,"UK");
		UK(fname);
	}
	else if(n3==3)
	{
		strcpy(s.place,"Australia");
		Australia(fname);
	}
	else if(n3==4)
	{
		strcpy(s.place,"Switzerland");
		Switzerland(fname);
	}
	else if(n3==5)
	{
		strcpy(s.place,"Germany");
		Germany(fname);
	}
	else
		printf("The entered number is wrong\n");
	fprintf(fp,"%s\n",s.place);
	fclose(fp);
}


void USA (char fname[50])
{
	FILE *fp;
	fp = fopen(fname,"a");
	int n4;
	printf("Enter the state that you want to study in: \n");
	printf("Enter 1 for California\nEnter 2 for Massachusetts\nEnter 3 for New York\nEnter 4 for Washington\nEnter 5 for Texas\n\n");
	scanf("%d",&n4);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	if(n4 == 1)
	{
		  strcpy(s.state,"California");
		printf("The Colleges For MS in California are: \nStanford University-Stanford\nCalifornia Instiute of Technology-Pasadena\nUniversity of Southern California-Los Angeles\nUniversity of California - Berkeley\n\n");
		printf("Average cost of maintenance in california is: $20,000 per month\n\n");
	        printf("The Expenditure of Stanford University is:  ");	
			printf("\n");
                printf("The Expenditure of California Institute of Technology is: \n"
	"Expense	                    	On Campus	                       Off Campus\n"
        "Room and Board	                                $16,644                                	$14,631\n"
        "-- Housing                              	$9,615	\n"
        "-- Meals                                	$7,029	\n"
      " Other Living Expenses                    	$2,091                                  $4,311\n"
       "Books and  Books and Supplies                    $1,428	                                $1,428\n"
       "Total	                                        $35,163	                                $20,370\n"
		         "\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("The Expenditure for University of Southern California is: \n"
"			 	                      On/Off Campus	    With Parents or Relatives\n"
   "Tuition \n"
   "(12-18 units for two semesters)   	              $59,260	             $59,260\n"
   "Fees	                                      $1,015	     	     $1,015\n"
   "Housing	                                      $9,327	             $0\n"
   "Dining/meals	                              $6,110	             $1,812\n"
   "Books and supplies	                              $1,200	             $1,200\n"
   "Personal and miscellaneous	                      $1,598	             $1,598\n"
   "Transportation	                              $553	             $1,920\n"
   "Total	                                      $79,063	             $66,805\n"
     "(Add $450 New Student Fee for your first semester.) \n");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                printf("The Expenditure for University of California is: \n"
"			 	    CA RESIDENT	                NONRESIDENT\n"
 "Tuition and Fees	            $14,254	                $14,254\n"
 "Nonresident supplemental tuition	-	                $29,754\n"
 "Student Health Insurance Plan	    $3,286	                $3,286\n"
 "Room and board	            $17,220	                $17,220\n"           
 "Food	                            $1,644	                $1,644\n"
 "Books and supplies	            $870	                $870\n"
 "Personal	                    $1,876	                $1,876\n"
 "Transportation	            $400	                $400\n"
 "TOTAL	                            $39,550	                $69,304\n"
                 "\n\n\n\n\n");
	       printf("\n\nPLEASE SCROLL UP TO SEE OTHER UNIVERSITIES\n\n\n\n\n");  
	}
	else if(n4 == 2)
	{
		strcpy(s.state,"Massachusetts");
                printf("The colleges for MS in Massachusetts are: \nHarvard University-Cambridge\nMassachusetts Institute of Tehnology-Cambridge\n\n");
		printf("The Expenditure for Harvard University is:\n INR 40.2Lakhs per 1 year\nIt costs $73,160 a year to go to MIT\n\n");
	        printf("Average cost of living in Massachusetts is: $30,000 per month\n\n");
	}
	else if(n4 == 3)
	{
		strcpy(s.state,"New York");
                printf("The Colleges for MS in New York are: \nNew York University - New York\nColumbia University-New York\n\n");
		printf("The Expenditure for New York University is:\n" 
                 "             On/Off Campus Student	      Commuter Student"
 "Tuition and Mandatory Fees	$54,880	                        $54,880"
 "Room and Board	                $19,244                         $2,516"
 "Estimated Total Direct Costs	$74,124	                        $57,396" 	 	 
 "Books and Supplies             $718	                        $718\n"
 "Transportation	                $1,110	                        $0\n"
 "Personal Expenses	        $2,790	                        $2,790\n"
 "Estimated Total Indirect Costs	$4,618	                        $3,508\n"
 "	 	 \n"
" Total	                        $78,742	                        $60,904\n"
  "             \n");
		printf("\n");
		printf("The Expenditure for Columbia University is: \n"
  "Tuition 	                $58,920"
 "Mandatory Fees	         $2,751"
 "Average Room and Board Cost	$15,130"
 "Books and Personal Expenses	$3,538"
 "Travel	varies"
 "Total	                        $80,339 + Travel"
  "          \n");
	       printf("\n");
               printf("Average cost of living in New York is: $25,000 per month \n\n");	       
		
	}
	else if(n4 == 4)                                                                                                                                                                   {                                                                                                                                                                                          strcpy(s.state,"Washington");
	   printf("The Colleges for MS in Washington are: \nGeorge Washington University - Washington\n American University - Washington \n\n");
	   printf("The Expenditure for George Washington University  is:\n"
			  "Average 1st Year Tuition Cost for MS is INR 17.6 Lakhs \n");
	          printf("\n");
	         printf("The Expenditure for M.S American University is: \n"
     "Duration\n"
     "1.5-2 Years\n"
"\n"
     "1st Year Tuition Fees\n"
     "INR 20.6 Lakh\n"	 
          "\n");
		 printf("\n");
		  printf("Average cost of living in New York is: $30,000 per month \n\n"); 
     } 	
	else if(n4 == 5)
	{
		strcpy(s.state,"Texas");
		printf("The Colleges for MS in Texas are: \n The University of Texas - Austin\n University of Houston - Houston \n\n");
	        printf("The Expenditure for The University of Texas is: \n"
 "In State Texas Resident Sticker Price\n"
 "$27,728\n"
 "Fee	              Cost\n"
 "Tuition	       $10,824\n"
 "Books and Supplies   $700\n"
 "Other Fees	       $0\n"
 "Room and Board       $11,812\n"
 "Other Expenses Budget $4,392\n"
"\n"
 "Out of State Resident Sticker Price\n"
 "$55,230\n"
 "Fee	               Cost\n"
 "Tuition	        $38,326\n"
 "Books and Supplies	$700\n"
 "Other Fees	        $0\n"
 "Room and Board	        $11,812\n"
 "Other Expenses Budget	$4,392\n"
 "\n");
		printf("\n");
		printf("The Expenditure for the University of the Houston is:\n" 
				"MS 18 - 24 Months	INR 12.1Lakhs - 13.9Lakhs per year \n");
		printf("\n");
	}
	else 
		printf("The Entered Number is wrong\n");
	fprintf(fp,"%s\n",s.state);
	fclose(fp);
}



void UK (char fname[50])
{
	printf("The Colleges for MS in U.k are : \n University of Oxford - Oxford\nUniversity of Cambridge - Cambridge\nUniversity College of London - London\n\n");
        printf("The Expenditure For University of Oxford is: \n"
 "Courses      Duration	        1st Year Tuition Fees\n"
 "MS(1 Course)   12 Months	INR 26.8L \n");
	printf("\n");
	printf("The Expenditure for University of Cambridge is : \n"
        "It Costs nearly 30,000 pounds pear Annum\n");
	printf("\n");
	printf("The Expenditure For University College of london is: \n"
  "MS	12 - 24 Months	INR 20.4Lakhs - 32.7Lakhs \n");
	printf("\n");
	printf("Average cost of living in London is 20,000 pounds \n");
         printf("\n");
}




void Australia(char fname[50])
{
	FILE *fp;
	fp = fopen(fname,"a");
	int n5;
	printf("Enter the state that you want to study in: \n");
	printf("Enter 1 for Melbourne\nEnter 2 for Sydney\nEnter 3 for Canberra\n\n");
	scanf("%d",&n5);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	if(n5 == 1)
	{
		strcpy(s.stateau,"Melbourne");
		printf("The Fee Expenditure for Holmes institute is: \n");
		printf("					"
			"Tuition fee per trimester   $9,600\n"
			"No of Trimesters	    4\n"
			"Enrolment Fee 		    $250\n"
			"Late Payment Fee	    $330\n"
			"Enrolment Reinstatement    $300\n"
			"Payment plan		    $220\n"
			"Change of course/campus    $220\n"
			"Airport Transfer Service   $160\n"
			"Homestay Placement &  \n"
			"support Fee		    $275 - per placement\n"
			"  \n"
			"Overseas Student Health Cover(OSHC)-Optional\n"
			"per month		    $60\n"
			"Up to 3 month		    $180\n"
			"Up to 6 month		    $360\n"
			"Up to 9 month		    $540\n"
			"Up to 12 month		    $720\n"
			"Up to 24 month 	    $1,440\n"
			"Up to 36 month		    $2,160\n"
			"\n"
			"Homestay(minimum one week, weekly rates)\n"
			"Over 18 - Single Room Half Board  $330\n"
			"Under 18 (3 meals,7 days)	  $350\n"
			"Single Nights			  $60(per night)\n"
			"Carer Provision\n"
			"Arrangement Fee 		  $280(once only)\n"
			"				\n"
			"U18 Care Provision Weekly\n"
			"Fee				  $65(per week) \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("The Fee Expenditure for Melbourne Institute of Technology: \n");
		printf("					\n"
			"Tuition Fee per trimester  $8,441.50\n"
			"Project placement fee	   $350 including GST\n"
			"Internship placement fee   $1000 excluding GST\n"
			"Ceremony Cost 		   $162\n"
			"Gown Hire 		   $31\n"
			"Stole Hire 		   $17\n"
			"Hood Hire 		   $16\n"
			"Mortar Hire		   $16\n"
			"	"
			"Registered postage fee     $60  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("The Fee Expenditure for Kaplan Business School: \n");
		printf("					\n"
			"Tuition Fee per course     $32,400\n"
			"annual course fee	   $21,600\n"
			"Accommodation Placement    $260\n"
			"Enrolment Fee		   $285\n"
			"Late Enrolment fee	   $260\n"
			"Airport Pickup		   $125\n"
			"Deferral of studies Fee    $160\n"
			"Suspension of studies fee  $160\n"
			"Assessment Re-mark fee	   $250\n"
			"Overdue library book fee   $5 per day\n"
			"Credit card surcharge      1.2 percent er transaction  \n\n\n\n\n\n\n");
		 printf("\n\n\n\n\nPLEASE SCROLL UP TO SEE OTHER UNIVERSITIES\n\n\n\n\n\n");
	}
	else if(n5 == 2)
	{
		strcpy(s.stateau,"Sydney");
		printf("The Fee Expenditure at Macqarie University is: \n");
	 	printf("                                        "                                                                                                                                           "Tuition fee per trimester   $9,600\n"                                                                                                                                              "No of Trimesters           4\n"                                                                                                                                                    "Enrolment Fee              $250\n"                                                                                                                                                 "Late Payment Fee           $330\n"                                                                                                                                                 "Enrolment Reinstatement    $300\n"                                                                                                                                                 "Payment plan               $220\n"                                                                                                                                                 "Change of course/campus    $220\n"                                                                                                                                                 "Airport Transfer Service   $160\n"                                                                                                                                                 "Homestay Placement &  \n"                                                                                                                                                          "support Fee                $275 - per placement\n"                                                                                                                                 "  \n"                                                                                                                                                                              "Overseas Student Health Cover(OSHC)-Optional\n"                                                                                                                                    "per month                  $60\n"                                                                                                                                                  "Up to 3 month              $180\n"                                                                                                                                                 "Up to 6 month              $360\n"                                                                                                                                                 "Up to 9 month              $540\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); 	 
		printf("The Fee Expenditure at University of New south wales is:\n");
	    	printf("                                        \n"                                                                                                                                         "Tuition Fee per trimester  $8,441.50\n"                                                                                                                                            "Project placement fee     $350 including GST\n"                                                                                                                                    "Internship placement fee   $1000 excluding GST\n"                                                                                                                                  "Ceremony Cost             $162\n"                                                                                                                                                  "Gown Hire                 $31\n"                                                                                                                                                   "Stole Hire                $17\n"                                                                                                                                                   "Hood Hire                 $16\n"                                                                                                                                                   "Mortar Hire               $16\n"                                                                                                                                                   "       "                                                                                                                                                                           "Registered postage fee     $60  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		 printf("The Fee Expenditure at University of Sydney is: \n");
		 printf("                                        \n"                                                                                                                                         "Tuition Fee per course     $32,400\n"                                                                                                                                              "annual course fee         $21,600\n"                                                                                                                                               "Accommodation Placement    $260\n"                                                                                                                                                 "Enrolment Fee             $285\n"                                                                                                                                                  "Late Enrolment fee        $260\n"                                                                                                                                                  "Airport Pickup            $125\n"                                                                                                                                                  "Deferral of studies Fee    $160\n"                                                                                                                                                 "Suspension of studies fee  $160\n"                                                                                                                                                 "Assessment Re-mark fee    $250\n"                                                                                                                                                  "Overdue library book fee   $5 per day\n"                                                                                                                                           "Credit card surcharge      1.2 percent per transaction  \n\n\n\n\n\n\n\n\n");
		printf("\n\n\n\n\nPLEASE SCROLL UP TO SEE OTHER UNIVERSITIES\n\n\n\n\n\n"); 
	}
	else if(n5 == 3)
	{
		strcpy(s.stateau,"Canberra");
		printf("The Fee Expenditure at Australian National University is: \n");
		 printf("                                        "                                                                                                                                           "Tuition fee per trimester   $9,600\n"                                                                                                                                              "No of Trimesters           4\n"                                                                                                                                                    "Enrolment Fee              $250\n"                                                                                                                                                 "Late Payment Fee           $330\n"                                                                                                                                                 "Enrolment Reinstatement    $300\n"                                                                                                                                                 "Payment plan               $220\n"                                                                                                                                                 "Change of course/campus    $220\n"                                                                                                                                                 "Airport Transfer Service   $160\n"                                                                                                                                                 "Homestay Placement &  \n"                                                                                                                                                          "support Fee                $275 - per placement\n"                                                                                                                                 "  \n"                                                                                                                                                                              "Overseas Student Health Cover(OSHC)-Optional\n"                                                                                                                                    "per month                  $60\n"                                                                                                                                                  "Up to 3 month              $180\n"                                                                                                                                                 "Up to 6 month              $360\n"                                                                                                                                                 "Up to 9 month              $540\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); 
		 printf("The Fee Expenditure at Canberra Institute of technology\n");
		 printf("                                        \n"                                                                                                                                         "Tuition Fee per trimester  $8,441.50\n"                                                                                                                                            "Project placement fee     $350 including GST\n"                                                                                                                                    "Internship placement fee   $1000 excluding GST\n"                                                                                                                                  "Ceremony Cost             $162\n"                                                                                                                                                  "Gown Hire                 $31\n"                                                                                                                                                   "Stole Hire                $17\n"                                                                                                                                                   "Hood Hire                 $16\n"                                                                                                                                                   "Mortar Hire               $16\n"                                                                                                                                                   "       "                                                                                                                                                                           "Registered postage fee     $60  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  			
		printf("The Fee Expenditure at University of canberra is: \n");
		 printf("                                        \n"                                                                                                                                         "Tuition Fee per course     $32,400\n"                                                                                                                                              "annual course fee         $21,600\n"                                                                                                                                               "Accommodation Placement    $260\n"                                                                                                                                                 "Enrolment Fee             $285\n"                                                                                                                                                  "Late Enrolment fee        $260\n"                                                                                                                                                  "Airport Pickup            $125\n"                                                                                                                                                  "Deferral of studies Fee    $160\n"                                                                                                                                                 "Suspension of studies fee  $160\n"                                                                                                                                                 "Assessment Re-mark fee    $250\n"                                                                                                                                                  "Overdue library book fee   $5 per day\n"                                                                                                                                           "Credit card surcharge      1.2 percent per transaction  \n\n\n\n\n\n\n\n\n");                                                                                             printf("\n\n\n\n\nPLEASE SCROLL UP TO SEE OTHER UNIVERSITIES\n\n\n\n\n\n");     
	}
	else
		printf("The entered number is wrong\n");
	printf("The average cost of living in Australia is: $2835 per month\n\n");
	fprintf(fp,"%s\n",s.stateau);
	fclose(fp);
}



void Switzerland(char fname[50])
{
	FILE *fp;
	fp = fopen(fname,"a");
	int n6;
	printf("Enter the City that you want to study in: \n");
	printf("Enter 1 for Zurich\nEnter 2 for Geneva\n\n");
	scanf("%d",&n6);
	if(n6 == 1)
	{
		strcpy(s.city,"Zurich");
		printf("The Fee expenditure at ETH Zurich is: \n");
		printf("                                        "                                                                                                                                           "Tuition fee per trimester   $9,600\n"                                                                                                                                              "No of Trimesters           4\n"                                                                                                                                                    "Enrolment Fee              $250\n"                                                                                                                                                 "Late Payment Fee           $330\n"                                                                                                                                                 "Enrolment Reinstatement    $300\n"                                                                                                                                                 "Payment plan               $220\n"                                                                                                                                                 "Change of course/campus    $220\n"                                                                                                                                                 "Airport Transfer Service   $160\n"                                                                                                                                                 "Homestay Placement &  \n"                                                                                                                                                          "support Fee                $275 - per placement\n"                                                                                                                                 "  \n"                                                                                                                                                                              "Overseas Student Health Cover(OSHC)-Optional\n"                                                                                                                                    "per month                  $60\n"                                                                                                                                                  "Up to 3 month              $180\n"                                                                                                                                                 "Up to 6 month              $360\n"                                                                                                                                                 "Up to 9 month              $540\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");       
		printf("The Fee Expenditure at University of Zurich is: \n");
		printf("                                        \n"                                                                                                                                         "Tuition Fee per trimester  $8,441.50\n"                                                                                                                                            "Project placement fee     $350 including GST\n"                                                                                                                                    "Internship placement fee   $1000 excluding GST\n"                                                                                                                                  "Ceremony Cost             $162\n"                                                                                                                                                  "Gown Hire                 $31\n"                                                                                                                                                   "Stole Hire                $17\n"                                                                                                                                                   "Hood Hire                 $16\n"                                                                                                                                                   "Mortar Hire               $16\n"                                                                                                                                                   "       "                                                                                                                                                                           "Registered postage fee     $60  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");     
		printf("The Fee Expenditure at University of Basel is: \n");
		printf("                                        \n"                                                                                                                                         "Tuition Fee per course     $32,400\n"                                                                                                                                              "annual course fee         $21,600\n"                                                                                                                                               "Accommodation Placement    $260\n"                                                                                                                                                 "Enrolment Fee             $285\n"                                                                                                                                                  "Late Enrolment fee        $260\n"                                                                                                                                                  "Airport Pickup            $125\n"                                                                                                                                                  "Deferral of studies Fee    $160\n"                                                                                                                                                 "Suspension of studies fee  $160\n"                                                                                                                                                 "Assessment Re-mark fee    $250\n"                                                                                                                                                  "Overdue library book fee   $5 per day\n"                                                                                                                                           "Credit card surcharge      1.2 percent per transaction  \n\n\n\n\n\n\n\n\n");                                                                                             printf("\n\n\n\n\nPLEASE SCROLL UP TO SEE OTHER UNIVERSITIES\n\n\n\n\n\n");   
	}
	else if(n6 == 2)
	{
		strcpy(s.city,"Geneva");
		printf("The Fee Expenditure at THE International University is: \n");
		printf("                                        "                                                                                                                                           "Tuition fee per trimester   $9,600\n"                                                                                                                                              "No of Trimesters           4\n"                                                                                                                                                    "Enrolment Fee              $250\n"                                                                                                                                                 "Late Payment Fee           $330\n"                                                                                                                                                 "Enrolment Reinstatement    $300\n"                                                                                                                                                 "Payment plan               $220\n"                                                                                                                                                 "Change of course/campus    $220\n"                                                                                                                                                 "Airport Transfer Service   $160\n"                                                                                                                                                 "Homestay Placement &  \n"                                                                                                                                                          "support Fee                $275 - per placement\n"                                                                                                                                 "  \n"                                                                                                                                                                              "Overseas Student Health Cover(OSHC)-Optional\n"                                                                                                                                    "per month                  $60\n"                                                                                                                                                  "Up to 3 month              $180\n"                                                                                                                                                 "Up to 6 month              $360\n"                                                                                                                                                 "Up to 9 month              $540\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");  
		printf("The Fee Expenditure at Geneva Business school is: \n");
		printf("                                        \n"                                                                                                                                         "Tuition Fee per trimester  $8,441.50\n"                                                                                                                                            "Project placement fee     $350 including GST\n"                                                                                                                                    "Internship placement fee   $1000 excluding GST\n"                                                                                                                                  "Ceremony Cost             $162\n"                                                                                                                                                  "Gown Hire                 $31\n"                                                                                                                                                   "Stole Hire                $17\n"                                                                                                                                                   "Hood Hire                 $16\n"                                                                                                                                                   "Mortar Hire               $16\n"                                                                                                                                                   "       "                                                                                                                                                                           "Registered postage fee     $60  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");      
		printf("THe Fee Expenditure at the 	Geneva Information Technology Institute is: \n");
		  printf("                                        \n"                                                                                                                                         "Tuition Fee per course     $32,400\n"                                                                                                                                              "annual course fee         $21,600\n"                                                                                                                                               "Accommodation Placement    $260\n"                                                                                                                                                 "Enrolment Fee             $285\n"                                                                                                                                                  "Late Enrolment fee        $260\n"                                                                                                                                                  "Airport Pickup            $125\n"                                                                                                                                                  "Deferral of studies Fee    $160\n"                                                                                                                                                 "Suspension of studies fee  $160\n"                                                                                                                                                 "Assessment Re-mark fee    $250\n"                                                                                                                                                  "Overdue library book fee   $5 per day\n"                                                                                                                                           "Credit card surcharge      1.2 percent per transaction  \n\n\n\n\n\n\n\n\n");                                                                                             printf("\n\n\n\n\nPLEASE SCROLL UP TO SEE OTHER UNIVERSITIES\n\n\n\n\n\n");  
	}
	else 
		printf("The entered number is wrong\n");
	printf("The average cost of living in Switzerland is: CHF 1062 per month\n\n\n");
	fprintf(fp,"%s\n",s.city);
	fclose(fp);
}



void Germany(char fname[50])
{
	printf("The Colleges for MS in Germany are :\nLudwig Maximilian University - Munich\nTechnical University of Munich - Munich\n\n");
	printf("The Expenditure For MS in Ludwig Maximilan University: \n"
		"300 Euros per year. And it is one of the chepeast universities in Germany with Quality Education. \n");
	        printf("\n");
	printf("The Expenditure of Technical University of Munich \n"
	        "500 Euros per year \n");
	         printf("\n");
        printf("Average cost of living in Germany is: \n"
		"Larger cities: Berlin, Frankfurt or Dusseldorf - total living costs of 900 - 1,500 EUR/month\n"
               " Smaller cities: Freiburg, Leipzig or Hannover - you will need 750 - 1,100 EUR/month\n");
	   printf("\n");
	printf("\n");
}







void MBAcountry(char fname[50])
{
	FILE *fp;
	fp = fopen(fname,"a");
	printf("Enter 1 for France\nEnter 2 for UK\nEnter 3 for USA\nEnter 4 for Germany\nEnter 5 for Switzerland\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	scanf("%d",&s.n1);
	if(s.n1 == 2)
	{
		strcpy(s.MBAnation,"UK");
		printf("The colleges for MBA in UK are: \n\n\n");
		printf("London Business school-London\nUniversity of Oxford-London\nWarwick Business school-London\n\n\n\n\n\n\n");
		printf("The expenditure in London Business school is 50,000 Pounds\n\n\n\n\n\n\n\n\n");
		printf("The expenditure in University of Oxford is 70,000 Pounds\n\n\n\n\n\n\n\n\n");
		printf("The expenditure in Warwick Business school is 45,000 Pounds\n\n\n\n\n\n\n\n\n");
		printf("Average cost of living in London is 20,000 pounds \n"); 
	}
	else if(s.n1 == 1)
	{
		strcpy(s.MBAnation,"France");
		printf("The college for MBA in France are: \n\n");
		printf("Insead Business school-Paris\nESSEC-Paris\nHEC-Paris\n\n\n\n\n\n\n");
		printf("The expenditure in Insead Business school\nTuition Fee is 90,000 Euros\n\n\n");
		printf("The expenditure in ESSEC is 80 lakhs in Indian currency\n\n\n");
		printf("The expenditure in HEC is 50 lakhs PA in Indian currency\n\n\n\n\n\n");
		printf("The average cost of living in france is 850 to 1000 euros a month\n\n\n");
	}
	else if(s.n1 == 3)
	{
		strcpy(s.MBAnation,"USA");
		MBAUSA(fname);
		 printf("Average cost of living in USA is $750 a month\n"); 
	}
	else if(s.n1 == 4)
	{
		strcpy(s.MBAnation,"Germany");
		printf("The colleges in Germany are: \n\n");
		printf("Frankfurt School of Finance & Management-Frankfurt\nESMT Berlin-Berlin\nTechnische Universität Munchen-munchen\n\n\n\n\n\n");
		printf("The expenditure in Frankfurt school of finance and management is 40000 Euros per annum\n\n\n");
		printf("The expenditure in ESMT Berlin  is 25 lakhs per annum in Indian currency\n\n\n");
		printf("The expenditure in Technische University Munchen is 25 Lakhs per annum in Indian Currency\n\n\n\n\n\n");
		 printf("Average cost of living in Germany is 850 Euros a month \n\n\n\n\n"); 
	}
	else if(s.n1 == 5)
	{
		strcpy(s.MBAnation,"Switzerland");
		printf("The colleges in Switzerland are: \n\n");
		printf("Zurich Business school-Zurich\nGeneva Business school-Geneva\n\n\n\n");
		printf("The expenditure in Zurich Business School is 40,000 Euros per annum\n\n\n\n\n");
		printf("The expenditure in Geneva Business school is 50,000 Euros per annum\n\n\n\n\n");
		printf("The expenditure In  Switzerland is CHF 1062 per month\n\n\n\n");
	}
	fprintf(fp,"%s\n",s.MBAnation);
	fclose(fp);
}





void MBAUSA(char fname[50])
{
	FILE *fp;
	fp = fopen(fname,"a");
	printf("Enter 1 for New york\nEnter 2 for California\nEnter 3 for Washington\n\n\n\n\n\n\n");
	scanf("%d",&s.n2);
	if(s.n2 == 1)
	{
		strcpy(s.MBASTATE,"New York");
		printf("The colleges in New York are:\n\n\n");
		printf("Columbia Business School\nNYU Stern school of Business\nCornell University - Samuel Curtis Johnson Graduate School of Management\n\n\n");
		printf("The expenditure in Columbia Business School is $1,68,000 per annum\n\n\n\n");
		printf("The expenditure in Cornell University is Rs.52,00,000 per annum\n\n\n\n");
	        printf("The expenditure in NYU Stern is Rs.1,00,00,000 per annum\n\n\n\n\n\n\n\n\n");	
	}
	else if(s.n2 == 2)
	{
		strcpy(s.MBASTATE,"California");
		printf("The colleges in california are: \n\n\n");
		printf("Marshall Business School\nStanford University\nHaas School of Business\n\n\n");
		printf("The expenditure in Marshall Business school is $91,000 per year\n\n\n\n");
	        printf("The expenditure in Stanford University is $74,570 per year\n\n\n\n");
		printf("The expenditure in Haas School of Business is $37,400 per year\n\n\n\n\n");
	}
	else if(s.n2 == 3)
	{
		strcpy(s.MBASTATE,"Washington");
		printf("The colleges in Washington D.C are:\n\n\n");
		printf("University of Washington\nSeattle University\nCity University of Seattle\n\n\n\n");
		printf("The expenditure in University of Washington is $43,992 per year\n\n\n\n\n");
		printf("The expenditure in Seattle University is $63,921 per year\n\n\n\n");
		printf("The expenditure in City university is $23,557 per year \n\n\n\n");
	}	

	fprintf(fp,"%s\n",s.MBASTATE);
	fclose(fp);
}
