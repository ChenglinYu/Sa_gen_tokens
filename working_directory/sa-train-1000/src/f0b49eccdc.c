#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[52];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_1 = 42;            // Tag.BODY
    entity_8 = 94;            // Tag.BODY
    char entity_5[84];        // Tag.BODY
    entity_5[entity_1] = 'S'; // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = rand();        // Tag.BODY
    if(entity_7 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 7;             // Tag.BODY
    }                         // Tag.BODY
    char entity_2[12];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_6[entity_7] = 'm'; // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 33;            // Tag.BODY
    entity_2[entity_9] = 't'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER