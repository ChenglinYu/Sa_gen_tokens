#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_7[35];        // Tag.BODY
    entity_2 = 59;            // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    if(entity_5 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 9;             // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_5] = 'S'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;             // Tag.BODY
    entity_8 = 42;            // Tag.BODY
    char entity_4[44];        // Tag.BODY
    entity_4[entity_8] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER