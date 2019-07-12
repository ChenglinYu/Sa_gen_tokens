#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[33];        // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 96;            // Tag.BODY
    char entity_1[45];        // Tag.BODY
    entity_7 = 97;            // Tag.BODY
    entity_1[entity_2] = 'n'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 38;            // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    char entity_6[34];        // Tag.BODY
    if(entity_3 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 45;            // Tag.BODY
    entity_6[entity_9] = 'i'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    entity_5[entity_3] = 'N'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER