#include<stdio.h>
main(){
	int a;
	int b;
	int c;
	int d;
	printf("   		      **TRUST WELL BANK**\n      ");
	printf("              Enter your phone number\n");
	scanf("%d",&a);
	switch(a){
		case 9714004981 :
			printf("Hi! RAHUL we are showing your details\n");
			printf("Name            : Rahul\n");
			printf("Account no.     : 97140049812\n");
			printf("Current Balance : $925210\n");
			printf("press 1 to deposit money\npress 2 to withdraw money\n");
			scanf("%d",&b);
			
			switch(b){
				case 1:
					printf("Enter your value which you want to deposit\n");
					scanf("%d",&c);
					d = c + 925210;
					printf("Now your bank balance is : %d", d);
					break;
				
				case 2:
					printf("Enter your value which you have to withdraw\n");
					scanf("%d",&c);
					d  = 925210 - c;
					printf("Now your bank balance is : %d", d);
					break;
					default:
					printf("please choose valid number");
					break;
					
					
					
			}
			case 6352427084:
			printf("Hi! HERO we are showing your details\n");
			printf("Name            : Harshil hero\n");
			printf("Account no.     : 63524270843\n");
			printf("Current Balance : $9999560\n");
			printf("press 1 to deposit money\npress 2 to withdraw money\n");
			scanf("%d",&b);
			switch(b){
				case 1:
					printf("Enter your value which you want to deposit\n");
					scanf("%d",&c);
					d = c + 9999560;
					printf("Now your bank balance is :%d", d);
					break;
				
				case 2:
					printf("Enter your value which you have to withdraw\n");
					scanf("%d",&c);
					d  = 9999560 - c;
					printf("Now your bank balance is : %d", d);
					break;
					default:
					printf("please choose valid number");
					break;
				
	}
	
	case 7976984838:
		printf("Hi! Dikshit we are showing your details\n");
			printf("Name            : Dikshit\n");
			printf("Account no.     : 79769848382\n");
			printf("Current Balance : $13560\n");
			printf("press 1 to deposit money\npress 2 to withdraw money\n");
			scanf("%d",&b);
			switch(b){
				case 1:
					printf("Enter your value which you want to deposit\n");
					scanf("%d",&c);
					d = c + 13560;
					printf("Now your bank balance is : %d", d);
					break;
				
				case 2:
					printf("Enter your value which you have to withdraw\n");
					scanf("%d",&c);
					d  = 13560 - c;
					printf("Now your bank balance is : %d", d);
					break;
					default:
					printf("please choose valid number");
					
				
}
				case 6351357299:
					printf("HI! Akshay we are showing your details\n");
					
					printf("Name       		: Akshay Paul\n");
					printf("Account no 		: 63513572998\n");
					printf("Current Balance         : $98659820\n");
					printf("Press 1 to deposit money\nPress 2 to withdraw money\n");
					scanf("%d", &b);
					switch(b){
						case 1:
							printf("Enter your value which you want to deposit\n");
							scanf("%d",&c);
							d = c + 98659820;
							printf("Now your bank balance is : %d",d);
							break;
						case 2:
							printf("Enter your value which you have to withdraw\n");
							scanf("%d",&c);
							d  = 98659820 - c;
							printf("Now your bank balance is : %d", d);
							break;
							default:
							printf("please choose valid number");
						
							break;
}

}
}
