#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_5[17];        // Tag.BODY
    entity_8 = 23;            // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_1 = 42;            // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    char entity_6[53];        // Tag.BODY
    if(entity_9 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 13;            // Tag.BODY
    entity_6[entity_1] = 'p'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    char entity_3[92];        // Tag.BODY
    entity_5[entity_9] = 'j'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_4;             // Tag.BODY
    entity_4 = 16;            // Tag.BODY
    entity_3[entity_4] = 'E'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER