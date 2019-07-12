#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_4[1];         // Tag.BODY
    entity_8 = 9;             // Tag.BODY
    entity_7 = 29;            // Tag.BODY
    if(entity_8 < entity_7){  // Tag.BODY
    entity_8 = 27;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 94;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_8] = 'z'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER