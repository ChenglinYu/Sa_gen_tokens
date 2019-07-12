#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_9[88];        // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 36;            // Tag.BODY
    entity_6 = 21;            // Tag.BODY
    entity_4 = 73;            // Tag.BODY
    char entity_0[15];        // Tag.BODY
    entity_0[entity_4] = 'W'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_2 < entity_6){  // Tag.BODY
    entity_2 = 10;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 92;            // Tag.BODY
    }                         // Tag.BODY
    char entity_1[20];        // Tag.BODY
    entity_9[entity_2] = 'I'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;             // Tag.BODY
    entity_7 = 37;            // Tag.BODY
    entity_1[entity_7] = 'l'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER