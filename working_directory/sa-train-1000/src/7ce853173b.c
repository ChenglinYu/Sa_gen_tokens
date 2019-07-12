#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_5[95];        // Tag.BODY
    char entity_3[22];        // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_4[94];        // Tag.BODY
    entity_9 = 60;            // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_1 = 60;            // Tag.BODY
    entity_2 = 27;            // Tag.BODY
    if(entity_8 < entity_9){  // Tag.BODY
    entity_5[entity_1] = 'v'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_8 = 67;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_8] = 'q'; // Tag.BUFWRITE_COND_SAFE
    entity_3[entity_2] = 't'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER