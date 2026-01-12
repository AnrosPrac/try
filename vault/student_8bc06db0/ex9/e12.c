#include <stdio.h>
#define LOG(msg) printf("Line %d: %s\n", __LINE__, msg)
int main() {
    LOG("Program started");
    LOG("Processing");
    LOG("Finished");
}
