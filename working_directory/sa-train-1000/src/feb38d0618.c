#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    entity_7 = 31;            // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    char entity_5[59];        // Tag.BODY
    char entity_8[21];        // Tag.BODY
    entity_0 = 41;            // Tag.BODY
    entity_9 = 55;            // Tag.BODY
    char entity_4[15];        // Tag.BODY
    entity_4[entity_9] = 'X'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_2 < entity_7){  // Tag.BODY
    entity_5[entity_0] = 'D'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_2 = 82;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_2] = 'G'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER