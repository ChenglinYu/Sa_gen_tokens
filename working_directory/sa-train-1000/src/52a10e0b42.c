#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_6[40];        // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_2 = 9;             // Tag.BODY
    entity_5 = 38;            // Tag.BODY
    char entity_0[35];        // Tag.BODY
    entity_6[entity_2] = 'c'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_1 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 64;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_1] = 'X'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER