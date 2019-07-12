#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_0 = 34;            // Tag.BODY
    char entity_3[0];         // Tag.BODY
    entity_8 = 19;            // Tag.BODY
    if(entity_0 < entity_8){  // Tag.BODY
    entity_0 = 38;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 3;             // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_0] = 'G'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER