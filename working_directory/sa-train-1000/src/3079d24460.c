#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_3[58];        // Tag.BODY
    entity_6 = 17;            // Tag.BODY
    entity_7 = 54;            // Tag.BODY
    if(entity_6 < entity_7){  // Tag.BODY
    entity_6 = 84;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 50;            // Tag.BODY
    }                         // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 7;             // Tag.BODY
    entity_3[entity_6] = 'S'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_0[3];         // Tag.BODY
    entity_0[entity_9] = '7'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER