#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_1 = 71;            // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_5 = 89;            // Tag.BODY
    entity_9 = 30;            // Tag.BODY
    entity_6 = 98;            // Tag.BODY
    char entity_8[39];        // Tag.BODY
    char entity_7[21];        // Tag.BODY
    entity_8[entity_5] = 'W'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_3[55];        // Tag.BODY
    if(entity_9 < entity_1){  // Tag.BODY
    entity_7[entity_6] = 'h'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 85;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 81;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_9] = 'w'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER