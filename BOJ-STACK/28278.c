#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 50

typedef int element;
element stack[MAX_STACK_SIZE];
int top = -1;

void push(element item){
    if (top >= MAX_STACK_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

int is_empty(){
    return (top == -1);
}

element print_n_pop(){
    printf("%d\n", stack[top]);
    return stack[top--];
}

element pop(){
    return stack[top--];
}


int main(){

    int input = 0;
    int command = 0;

    scanf("%d", &command);

    int i = 0;
    while(i < command){
        scanf("%d", &input);
        if(input == 1){
            int item = 0;
            scanf("%d", &item);
            push(item);
        }
        else if(input == 2){
            if(is_empty()){
                printf("-1");
            }
            else{
                print_n_pop();
            }
        }
        else if(input == 3){
            printf("%d", top+1);
        }
        else if(input == 4){
            if(is_empty()){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        else if(input == 5){
            if(is_empty()){
                printf("-1");
            }
            else{
                printf("%d", stack[top]);            }
        }
        i++;
    }



    return 0;
}