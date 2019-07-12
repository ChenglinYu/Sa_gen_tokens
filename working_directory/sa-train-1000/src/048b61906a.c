#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_8[24];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_2 = 4;             // Tag.BODY
    entity_4 = 85;            // Tag.BODY
    if(entity_4 < entity_2){  // Tag.BODY
    entity_4 = 44;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 82;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_4] = 'R'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER