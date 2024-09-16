# include <stdio.h> 

void calculator(){
   
   //declare all variables
   float number1, number2 ;
   char operation;

   //tell user to input an operation sign
   printf("Please input an operation sign( * , / , -, + ):   ");
   scanf(" %c",&operation);

   //tell the user to input the first number
   printf("please input the first number put a space then the second number:   ");
   scanf("%f  %f",&number1 , &number2);

   if (operation == '+'){
       printf("%f + %f = %.2f",number1,number2,number1+number2);
  }
   else if(operation == '-'){
       printf("%f - %f = %.2f",number1,number2,number1-number2);
  }
    else if(operation == '*'){
      printf("%f * %f = %.2f",number1,number2,number1*number2);
  }
  else if(operation == '/'){
  printf("%f/ %f = %.2f",number1,number2,number1/number2);
  }
  else{
    printf("Please input a number");
  }
}

int main(){
    calculator();
    return 0;
}