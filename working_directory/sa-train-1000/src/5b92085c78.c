#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_7[63];        // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_2 = 30;            // Tag.BODY
    entity_9 = 36;            // Tag.BODY
    if(entity_9 < entity_2){  // Tag.BODY
    entity_9 = 27;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 13;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_7[entity_9] = 'o'; // Tag.BUFWRITE_COND_SAFE
    int entity_4;             // Tag.BODY
    entity_4 = 91;            // Tag.BODY
    char entity_1[2];         // Tag.BODY
    char entity_5[62];        // Tag.BODY
    entity_5[entity_4] = 'P'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 97;            // Tag.BODY
    entity_1[entity_0] = '1'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER