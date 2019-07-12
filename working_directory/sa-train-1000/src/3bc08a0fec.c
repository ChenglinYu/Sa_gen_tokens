#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_3 = 6;             // Tag.BODY
    char entity_7[19];        // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_5[19];        // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_0 = 93;            // Tag.BODY
    entity_5[entity_3] = 'p'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_1 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 16;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_1] = 'I'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER