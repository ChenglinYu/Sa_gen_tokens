#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    char entity_1[30];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_9 = 16;            // Tag.BODY
    entity_8 = 79;            // Tag.BODY
    if(entity_8 < entity_9){  // Tag.BODY
    entity_8 = 27;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 31;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_8] = '3'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER