#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_4 = 64;            // Tag.BODY
    char entity_7[70];        // Tag.BODY
    entity_8 = 8;             // Tag.BODY
    if(entity_8 < entity_4){  // Tag.BODY
    entity_8 = 91;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 14;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_8] = 'P'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER