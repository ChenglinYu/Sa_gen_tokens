#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_7 = 97;            // Tag.BODY
    entity_8 = 96;            // Tag.BODY
    char entity_4[56];        // Tag.BODY
    entity_9 = 72;            // Tag.BODY
    char entity_3[7];         // Tag.BODY
    if(entity_9 < entity_7){  // Tag.BODY
    entity_9 = 49;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 94;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_9] = 'W'; // Tag.BUFWRITE_COND_UNSAFE
    entity_4[entity_8] = 'w'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER