/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Logan Mead
 * ECE 141- SPRING 2020
 *
 * Created on February 22, 2020, 12:00 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int power(int x, int y){                    //sets the function of power with an inputs of x and y
    double power = 1;                       //sets power as a double and equal to one
    while(y > 0){                           //while y is less than 0 the rest will run until its smaller then zero
        power = power * x;                  // sets power to power times x to represent x times a power depending on till y is less than zero
        y--;                                //y is subtracted by one
    }
    return power;                           //returns power as a integer as an output
}

int Factorial( int number){                //sets the function named as Factorial with an input number and sets the output as an input
    int fact = 1;                          //sets fact equal to 1 so your number is not eventually multiplied by zero
    for(int i=1; i<= number; i++){         //for loop that sets i equal to zero and runs until i is equal to number 
        fact = fact * i;                   //sets fact to fact times i to multiply each number that comes before the users number except zero
    }
    return fact;                           //returns fact as an integer as an output
}

int isEven( int userNum){                  //sets the function names as isEven with an input userNum as an integer and has an output as an integer 
    if(userNum%2 == 0){                    //an if loop that runs if userNum is divisible by 2 and has a reminder of zero 
       userNum = true;                     //if true sets userNum to true and returns an output as 1 a.k.a. true 
       return true;
    }
    else{                                  //runs if the other statement is false and sets userNum to false and returns an output as 0 a.k.a. false
        userNum = false;
        return false;
    }
}

int roundNum(double userNumber){         //sets the function names roundNum with an input of userNumber as a double and sets an output as an int
    if(userNumber > 0){                 //if userNumber is greater than 0 runs statement
        userNumber = userNumber + .5;   //userNumber is equal to userNumber + .5
        return userNumber;              //returns userNumber as an integer and truncates everything after the decimal point
    }
    else{                               //runs if other statement is false, if userNumber is less than 0
        userNumber = userNumber - .5;   //sets userNumber equal to userNumber - .5
        return userNumber;             //returns userNumber as an integer and truncates everything after the decimal point
    }
    
}

double distance (double x1, double x2, double y1, double y2){   //sets a function named distance with an input x1,y1,x2,y2 as double with an output as a double
    double pointx = 0;                                          //sets doubles as zero to not get random output values
    double pointy = 0;
    double total = 0;
    
    pointx = (x2 - x1) * (x2 - x1);                             //sets pointx equal to (x2-x1)^2
    pointy = (y2 - y1) * (y2 - y1);                             //sets pointy equal to (y2-y1)^2
    total = pointx + pointy;                                    //sets the total equal to pointx + pointy
    double x = total;                                           //sets x as an double and equals to total
    double y = 1.0;                                             //sets y as an double and equal to 1.0 
    double e = 0.000001;                                        //makes e as the accuracy of the output
        while(x - y > e){                                       //runs until x-y is not greater than e, this function is to find the square root of a number
            x = (x + y)/2;                                      //sets x equal to x plus y divided by 2
            y = total/x;                                        //sets y equal to total divided by x
        }
        return x;                                               //returns x as a output in the form of a double
}

int main(int argc, char** argv) {
    //Start Power Function
    
    int x = 0;                                            //Initialize x and y to zero before being rewriting to users input
    int y = 0;
    
    printf("--------------------------\n");               //Prints --- to serve as a break point for easy viewing
    printf("Testing Power Function\n");                   //Prints to user that next steps will be testing the power function
    printf("Enter Number: ");                             //Asks user to enter a number
    scanf("%d", &x);                                      //save users number as x  
    
    printf("Enter Exponent: ");                            //Asks user to enter an exponent and save as y 
    scanf("%d", &y);
    
    printf("Power(%d,%d):%d\n", x, y, power(x,y));         //prints Power(%d,%d): than runs the power function
    printf("--------------------------\n");
    
    //End Power Function
    //Start Factorial Function
    
    int number = 0;                                                      //Sets number to zero 
    
    printf("Testing Factorial Function\n");                              //Tells user that it will begin the testing Factorial function
    printf("Enter a number: ");                                          //asks user to enter a number and saves as number
    scanf("%d", &number);
    printf("Fact(%d):%d\n", number, Factorial(number));                  //prints Fact(%d): than runs the Factorial function
    printf("--------------------------\n");
    
    //End Factorial Function
    //Start Is Even Function
    
    int userNum = 0;                                                     //sets userNum to zero
    
    printf("Testing isEven Function");                                   //Tells user that it will begin the testing isEven Function
    printf("Enter a number: ");                                          //Asks user to enter a number and saves it as userNum
    scanf("%d", &userNum);
    printf("IsEven(%d):%d\n", userNum, isEven(userNum));                 //prints isEven(%d): than goes and runs the isEven function
    printf("--------------------------\n");
    
    //End Is Even Function
    //Start Round Function
    
    double userNumber = 0;                                               //Sets userNumber to a double and initialize as zero
    
    printf("Testing roundNum Function\n");                              //Tells user that it will begin the testing Round Function
    printf("Enter a number: ");                                         //Asks user to enter a number and saves as userNumber
    scanf("%lf", &userNumber);
    printf("round(%.2lf): %d\n", userNumber, roundNum(userNumber));     //prints round(%lf): than runs the roundNum
    printf("--------------------------\n");
    
    //End Round Function
    //Start Distance Function
                    
    double x1 = 0;                                                      //sets x1,x2,y1,y2 as a double as they can be negative or positive
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    
    printf("Enter x1: ");                                               //asks user to enter points(x1,y1,x2,y2) and saves it to corresponding name
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);
    printf("Distance between points: %.2lf\n",distance(x1,x2,y1,y2));   //prints Distance between points: than runs the distance function
    printf("--------------------------\n");
    
    //End Distance Function
    return (EXIT_SUCCESS);
}

