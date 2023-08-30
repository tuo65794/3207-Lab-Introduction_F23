#include <stdlib.h>
#include <time.h>




char randchar(){
    srand(time(NULL));
    int r = rand() % 26;
    char letter = 'a' + r;
    return letter;
}
