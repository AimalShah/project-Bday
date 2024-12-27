#include<stdio.h>


int main(){

	int BirthDay , BirthMonth , CrrntDay , CrrntMonth , DaysRem;
	int flag = 1;
	int opt;


	
	do{
	printf("\t\t =====================================\n");
	printf("\t\t * Welcome To BirthDay CountDown App * \n");
	printf("\t\t =====================================\n");
	printf("\t\t Enter Current Day : ");
	scanf("%d" , &CrrntDay);
	printf("\t\t Enter Current Month : ");
	scanf("%d" , &CrrntMonth);

	printf("\t\t -------------------------------------\n");

	printf("\t\t Enter Your Birth Day : ");
	scanf("%d" , &BirthDay);
	printf("\t\t Enter Your Birth Month : ");
	scanf("%d" , &BirthMonth);

	printf("\t\t ------------------------------------\n");

	if(!(BirthDay >=1 && BirthDay <= 30))
		printf("Invalid Birth Day \n");
	
	if(!(CrrntDay >=1 && CrrntDay <= 30))
		printf("Invalid Current Day");
	
	if(!(BirthMonth >= 1 && BirthMonth <= 12))
		printf("Invalid Birth Month");
	
	if(!(CrrntMonth >= 1 && CrrntMonth <= 12))
		printf("Invalid Current Month");

	if((BirthDay >=1 && BirthDay <= 30) && (CrrntDay >=1 && CrrntDay <= 30) && (BirthMonth >= 1 && BirthMonth <= 12) && (CrrntMonth >= 1 && CrrntMonth <= 12))
	{
		if(BirthMonth == CrrntMonth)
		{
			if(BirthDay == CrrntDay){
				printf("Today is Your Birth Day , Happy Birth Day!!!!!");
			}

			if(BirthDay < CrrntDay){
				printf("Your BirthDay Has Passed.");
			}

			if(BirthDay > CrrntDay){
				DaysRem = CrrntDay - BirthDay;
				printf("Your Birth Day is Just around the Corner. %d days remaining." , DaysRem);
			}
		} else if(BirthMonth < CrrntMonth){
			DaysRem = (12 - CrrntMonth + BirthMonth) * 30 + (BirthDay - CrrntDay);
			printf("%d days Remaining to your Birth Day" , DaysRem);
		} else if(BirthMonth > CrrntMonth){
			DaysRem = (BirthMonth - CrrntMonth) * 30 + (BirthDay - CrrntMonth);
			printf("%d days remaining to your BirthDay" , DaysRem);
		}
	}
	
	printf("\n\n =================================================");
	
	printf("\nDo you want Check BirthDay Again? Yes(1) No(0) : ");
	scanf("%d",&opt);
	
	switch (opt)
	{
	case 1:
		flag = 1;
		system("cls");
		break;
	case 0:
	 	flag = 0;
	 	break;
	default : 
	 	flag = 0;
	 	break;
	}
    }
	while(flag==1);
	
	

}
