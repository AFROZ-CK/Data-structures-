#include <stdio.h>
#include <ctype.h>
#include <string.h>

char stk[20];
int top = -1;

int priority(char ch) { 
}

int push(char ch) {  
}

char pop() {  
}

int main() {
    char infix[20], postfix[20], ch;
    int i, j, l;

    printf("\nEnter the string Expression :");
    scanf("%s", infix);
    l = strlen(infix);

    for (i = 0, j = 0; i < l; i++) {
        if (isalpha(infix[i])) {
            postfix[j++] = infix[i];
        } else {
            if (infix[i] == '(') {
                push(infix[i]);
            } else if (infix[i] == ')') {
                while ((ch = pop()) != '(') {
                    postfix[j++] = ch;
                }
            } else {
                while (priority(infix[i]) <= priority(stk[top])) {
                 postfix[j++] = pop();
                }
                push(infix[i]);
            }
        }
    }

    while (top != -1) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';

    printf("\nEquivalent infix to postfix is: %s", postfix);
    getchar();

    return 0;
}
