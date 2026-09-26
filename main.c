#include <stdio.h>

void Addition(int num1 ,int num2){
    int result = num1 + num2;
    printf("%d+%d=%d\n ",num1,num2,result);
}
void Substraction(int num1 ,int num2){
    int result = num1 - num2;
    printf("%d-%d=%d\n ",num1,num2,result);
}
void Multiplication(int num1 ,int num2){
    int result = num1 * num2;
    printf("%d*%d=%d\n ",num1,num2,result);
}
void Division(int num1 ,int num2){
    int result = num1 / num2;
    printf("%d/%d=%d\n ",num1,num2,result);
}

int main()
{
    int num1,num2,choice = 1;
    
    printf("=============================================== Calculator ===============================================");
    
    while(choice != 0){
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication \n4. Division \n0. Exit \n\n");
    
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        // printf("\n");
        
    
        if (choice>4 || choice<0){
            printf("Invalid Value Entered\n");
            printf("Enter Value Between 0 to 4\n");
            continue;
        }
        
        if (choice == 0){
            printf("Thank You, Bye");
            break;
        }
        printf("\n");

        printf("Enter First Value: ");
        scanf("%d", &num1);
        printf("\n");

        printf("Enter Second Value: ");
        scanf("%d", &num2);
        printf("\n");
        if (choice == 4 && num2 == 0){
            printf("Error: Cannot divide by zero\n");
            continue;
        }
    

        switch (choice)
        {

        case 1:
            Addition(num1,num2);
            break;
        
        case 2:
            Substraction(num1,num2);
            break;
        
        case 3:
            Multiplication(num1,num2);
            break;
        
        case 4:
            Division(num1,num2);
            break;
        
        }
    }

    return 0;

}
