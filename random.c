#include <stdlib.h>
#include <time.h>




char randchar(){
    int r = rand() % 26;
    char letter = 'a' + r;
    return letter;
}
