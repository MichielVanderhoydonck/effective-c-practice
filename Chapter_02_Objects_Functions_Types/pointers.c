#include <stdio.h>

void action_0(void) { puts("Executing Action 0"); }
void action_1(void) { puts("Executing Action 1"); }
void action_2(void) { puts("Executing Action 2"); }

void perform_action(unsigned int index) {
    void (*actions[3])(void) = { action_0, action_1, action_2 };

    if (index < 3) {
        actions[index](); 
    } else {
        puts("Invalid index!");
    }
}

int main(void) {
    perform_action(1);
    return 0;
}