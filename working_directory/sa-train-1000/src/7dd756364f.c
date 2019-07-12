#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_1 = 42;            // Tag.BODY
    entity_8 = 93;            // Tag.BODY
    char entity_0[13];        // Tag.BODY
    if(entity_8 < entity_1){  // Tag.BODY
    entity_8 = 59;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 68;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_8] = 'R'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER