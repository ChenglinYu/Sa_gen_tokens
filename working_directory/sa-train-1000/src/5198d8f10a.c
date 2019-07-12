#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_5[6];         // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    entity_2 = 10;            // Tag.BODY
    if(entity_0 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 69;            // Tag.BODY
    }                         // Tag.BODY
    char entity_7[43];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_5[entity_0] = 'f'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;             // Tag.BODY
    char entity_4[24];        // Tag.BODY
    entity_1 = 23;            // Tag.BODY
    entity_4[entity_1] = 'l'; // Tag.BUFWRITE_TAUT_SAFE
    entity_9 = 44;            // Tag.BODY
    entity_7[entity_9] = 'b'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER