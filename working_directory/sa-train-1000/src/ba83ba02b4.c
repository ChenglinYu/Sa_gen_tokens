#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_7[37];        // Tag.BODY
    entity_9 = 10;            // Tag.BODY
    if(entity_2 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 24;            // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_7[entity_2] = 'z'; // Tag.BUFWRITE_COND_SAFE
    entity_3 = 45;            // Tag.BODY
    char entity_8[3];         // Tag.BODY
    entity_8[entity_3] = 'm'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER