#include <stdio.h>
#include <string.h>
#define MAX 100 // max size defined

char stack[MAX];
int top = -1; // initial top = -1


void push(char c) {
    stack[++top] = c;
}

char pop() {
    if (top == -1) return '\0';
    return stack[top--];
}

int isMatching(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '[' && close == ']') return 1;
    if (open == '{' && close == '}') return 1;
    return 0;
}

void checkBalance(char exp[]) {
  
    for (int i = 0; i < strlen(exp); i++) {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') {
            push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}') {
            if (top == -1 || !isMatching(pop(), exp[i])) {
                printf("Expression: %s -> Unbalanced\n", exp);
                return;
            }
        }
    }

    if (top == -1)
        printf("Expression: %s -> Balanced\n", exp);
    else
        printf("Expression: %s -> Unbalanced\n", exp);
}

int main() {
    char input[MAX];
    printf("Enput the statement");
    fgets(input,MAX,stdin);
    checkBalance(input);

    return 0;
}