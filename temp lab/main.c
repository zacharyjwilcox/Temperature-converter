//
//  main.c
//  temp lab
//
//  Created by Zach Wilcox on 10/1/16.
//  Copyright © 2016 Zach Wilcox. All rights reserved.
//
/*Zach Wilcox Lab1*/
#include <stdio.h>

int main()
{
    int choice;
    float fahrenheit,celsius;
label1:
    printf("\n\n");
    printf("\n: Press 1 to convert temperature from fahrenheit to celsius.");
    printf("\n: Press 2 to convert temperature from celsius to fahrenheit.");
    printf("\n: Press 3 to close the program. \n\n");
    scanf("%d",&choice);
    
    if(choice ==1){
        printf("\nPlease enter the temperature in fahrenheit to be converted: ");
        scanf("%f",&fahrenheit);
        if(fahrenheit<122&&fahrenheit>-58){
            celsius= (fahrenheit-32)*(.55555);
            printf("The temperature in celsius is: %.2f",celsius);
            goto label1;
        }else{
            goto label3;
        }
        
    }
    else if(choice==2){
        printf("\nPlease enter the temperature in celsius to be converted: ");
        scanf("%f",&celsius);
        if(celsius<50&&celsius>-50){
            fahrenheit= (celsius*(1.8))+32;
            printf("The temperature in fahrenheit: %.2f",fahrenheit);
            goto label1;
        }else{
            goto label3;
        }
    }
    else if(choice==3){
        goto label2;
    }
    else{
    label3:
        printf("\n Please enter a valid choice.");
        goto label1;
    }
    return 0;
label2:
    while(choice==3){
        break;
    }
}
