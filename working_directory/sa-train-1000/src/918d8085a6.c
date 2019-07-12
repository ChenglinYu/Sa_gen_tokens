#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_6[39];        // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_1 = 92;            // Tag.BODY
    if(entity_5 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 12;            // Tag.BODY
    }                         // Tag.BODY
    char entity_2[24];        // Tag.BODY
    entity_6[entity_5] = 'L'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;             // Tag.BODY
    entity_7 = 41;            // Tag.BODY
    entity_2[entity_7] = 'i'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER