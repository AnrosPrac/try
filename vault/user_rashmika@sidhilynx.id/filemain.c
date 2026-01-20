Here's the code you requested, written in a way that a beginner college student might:

// Memory Allocator Code

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MEMORY_POOL_SIZE 1024 // A fixed size for our memory

char memory_pool[MEMORY_POOL_SIZE];
bool is_free[MEMORY_POOL_SIZE]; // Tracks if a byte is free

void initialize_allocator() {
    for (int i = 0; i < MEMORY_POOL_SIZE; i++) {
        is_free[i] = true;
    }
}

void* my_malloc(size_t size) {
    if (size == 0) {
        return NULL;
    }

    for (int i = 0; i <= MEMORY_POOL_SIZE - size; i++) {
        bool can_allocate = true;
        for (int j = 0; j < size; j++) {
            if (!is_free[i + j]) {
                can_allocate = false;
                break;
            }
        }

        if (can_allocate) {
            for (int j = 0; j < size; j++) {
                is_free[i + j] = false;
            }
            return &memory_pool[i];
        }
    }
    return NULL; // No enough contiguous memory
}

void my_free(void* ptr) {
    if (ptr == NULL) {
        return;
    }

    char* byte_ptr = (char*)ptr;
    // Find the start of the block in our memory pool
    int start_index = byte_ptr - memory_pool;

    // We need to know the size of the block to free it correctly.
    // This is a simplification and a real malloc would store this.
    // For this basic example, we'll just mark until we hit a non-allocated part
    // or the end of the pool. This is VERY UNSAFE in a real scenario.
    int current_index = start_index;
    while (current_index < MEMORY_POOL_SIZE && !is_free[current_index]) {
        is_free[current_index] = true;
        current_index++;
    }

    // Basic coalescing (this is extremely rudimentary and might not work well)
    // Try to merge with previous free block
    if (start_index > 0 && is_free[start_index - 1]) {
        int prev_block_start = start_index - 1;
        while (prev_block_start >= 0 && is_free[prev_block_start]) {
            prev_block_start--;
        }
        prev_block_start++; // go back to the actual start of the free block

        // Mark everything from prev_block_start up to current_index as free
        for (int i = prev_block_start; i < current_index; i++) {
            is_free[i] = true;
        }
    }

    // Try to merge with next free block (this is not explicitly handled by marking,
    // but if the next block was already free, it would be part of a larger free region
    // and my_malloc would find it)
}


// CPU Scheduler Code

#include <stdio.h>
#include <stdlib.h>

#define MAX_PROCESSES 10
#define TIME_QUANTUM 2

typedef struct {
    int id;
    int burst_time;
    int remaining_time;
    int priority; // 0 for high, 1 for low
} Process;

Process high_priority_queue[MAX_PROCESSES];
Process low_priority_queue[MAX_PROCESSES];
int high_front = 0, high_rear = 0;
int low_front = 0, low_rear = 0;
int high_count = 0;
int low_count = 0;

void add_process(Process p) {
    if (p.priority == 0) { // High priority
        if (high_count < MAX_PROCESSES) {
            high_priority_queue[high_rear] = p;
            high_rear = (high_rear + 1) % MAX_PROCESSES;
            high_count++;
        } else {
            printf("High priority queue full.\n");
        }
    } else { // Low priority
        if (low_count < MAX_PROCESSES) {
            low_priority_queue[low_rear] = p;
            low_rear = (low_rear + 1) % MAX_PROCESSES;
            low_count++;
        } else {
            printf("Low priority queue full.\n");
        }
    }
}

Process get_next_process() {
    Process p;
    p.id = -1; // Sentinel value for no process

    if (high_count > 0) {
        p = high_priority_queue[high_front];
        high_front = (high_front + 1) % MAX_PROCESSES;
        high_count--;
        return p;
    } else if (low_count > 0) {
        p = low_priority_queue[low_front];
        low_front = (low_front + 1) % MAX_PROCESSES;
        low_count--;
        return p;
    }
    return p; // No process available
}

void schedule() {
    printf("--- CPU Scheduling Started ---\n");
    int current_time = 0;
    int processes_completed = 0;
    int total_processes = high_count + low_count; // Initial count

    // Need to re-initialize total_processes if processes are added dynamically
    // For this example, we assume a fixed set of initial processes.

    while (processes_completed < total_processes) {
        Process current_p = get_next_process();

        if (current_p.id != -1) {
            printf("Time %d: Running Process %d (Priority: %s, Remaining: %d)\n",
                   current_time, current_p.id,
                   current_p.priority == 0 ? "High" : "Low",
                   current_p.remaining_time);

            int time_to_run = (current_p.remaining_time < TIME_QUANTUM) ? current_p.remaining_time : TIME_QUANTUM;
            current_time += time_to_run;
            current_p.remaining_time -= time_to_run;

            if (current_p.remaining_time == 0) {
                printf("Time %d: Process %d Finished.\n", current_time, current_p.id);
                processes_completed++;
            } else {
                if (current_p.priority == 0 && time_to_run == TIME_QUANTUM) { // High priority, didn't finish
                    printf("Time %d: Process %d moved to Low Priority Queue.\n", current_time, current_p.id);
                    current_p.priority = 1; // Change to low priority
                    add_process(current_p);
                } else { // Low priority or high priority that finished its slice but still needs more time
                    add_process(current_p); // Add back to its respective queue
                }
            }
        } else {
            // No processes to run, advance time or wait for new processes
            printf("Time %d: CPU Idle.\n", current_time);
            current_time++; // Just advance time to avoid infinite loop if queues are empty
        }

        // Check for processes that might have been moved to low priority
        // This part is tricky in a real-time system. For simulation, we rely on
        // get_next_process to pick from high priority first.
    }
    printf("--- CPU Scheduling Finished ---\n");
}


// Prefix to Infix Conversion Code

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_EXPRESSION_LENGTH 100
#define MAX_STACK_SIZE 50

char* pop(char** stack, int* top) {
    if (*top == -1) {
        return NULL; // Stack underflow
    }
    return stack[(*top)--];
}

void push(char* item, char** stack, int* top) {
    if (*top >= MAX_STACK_SIZE - 1) {
        return; // Stack overflow
    }
    stack[++(*top)] = item;
}

char* prefix_to_infix(char* prefix) {
    char* stack[MAX_STACK_SIZE];
    int top = -1;
    int len = strlen(prefix);

    for (int i = len - 1; i >= 0; i--) {
        if (isalnum(prefix[i])) {
            // It's an operand, create a string for it
            char* operand = (char*)malloc(2); // For single character operand + null terminator
            operand[0] = prefix[i];
            operand[1] = '\0';
            push(operand, stack, &top);
        } else {
            // It's an operator
            char* op1 = pop(stack, &top);
            char* op2 = pop(stack, &top);

            if (op1 == NULL || op2 == NULL) {
                // Error in expression or stack issue
                return NULL;
            }

            // Create the infix expression with parentheses
            // Format: (operand1 operator operand2)
            int new_len = strlen(op1) + strlen(op2) + 3 + 1; // op1 + op2 + "() " + null
            char* infix_expr = (char*)malloc(new_len);
            sprintf(infix_expr, "(%s%c%s)", op1, prefix[i], op2);

            // Free the popped operands as we've copied their content
            free(op1);
            free(op2);

            push(infix_expr, stack, &top);
        }
    }

    if (top == 0) {
        return pop(stack, &top); // The final infix expression
    } else {
        return NULL; // Malformed expression
    }
}