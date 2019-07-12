#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_5 = 93;            // Tag.BODY
    char entity_0[18];        // Tag.BODY
    entity_6 = 67;            // Tag.BODY
    if(entity_6 < entity_5){  // Tag.BODY
    entity_6 = 68;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 59;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_6] = '7'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER