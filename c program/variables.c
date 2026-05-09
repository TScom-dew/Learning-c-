#include<stdio.h>
#include<stdbool.h>


int main(){
  
    /*int
    =========*/
    int age = 18;
    int year = 2026;
    int quantity = 1;

    printf("You are %d years old.\n", age);
    printf("The year is %d\n.", year);
    printf("You have ordered  %d laptop.\n", quantity);


    /*float
    ====================*/

    float gpa = 2.5;
    float price = 199999.99;

    printf("your gpa is %.1f\n", gpa);
    printf(" the price is $%.2f\n", price);


    /*double
    =======================*/

    double pi = 3.146345324853845;
    double e = 2.782156498563497569;

    printf("The value of pi is %.15lf.\n" , pi);
    printf("The value of e is %.15lf.\n", e);

    /*char
    ========================*/

    char grade = 'F';
    char symbol = '!';
    char currency = '$';


    printf("your grade is %c.\n", grade);
    printf("Your favorite symbole is %c\n", symbol);
    printf("The currency is %c\n", currency);

    /*string (in c don't have string data type )

    like
    string name= "Ashlok kumar";(it is invalid in c )
    ====================================*/

    char name[] = "Ashlok kumar";
    char food[] = "piza";
    char email[] = "fake12345@gmail.com";

    printf("My name is %s\n", name);
    printf("the one fast food is %s\n", food);

    printf("Your email is %s\n", email);



    /*boolean
    labrary: stdbool.h
    true=1 | false=0
    ============================*/

    bool isonline = true ;
    bool isStudent = true;

    bool isSale = false;

    if(isonline){
        printf("You are online.\n");
    }else{
        printf("you are  offline. \n ");
    }

    if (isStudent)
    {
        printf("Yes, i am a Student.\n");
    }else{
        printf("No, i am not a student");
    }
    
    if (isSale)
    {
        printf("That item is for sale");
    }else{
        printf("That item is not for sale\n");
    }
    
    return 0;
}
