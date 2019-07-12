#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_4[34];        // Tag.BODY
    entity_5 = 44;            // Tag.BODY
    entity_1 = 49;            // Tag.BODY
    if(entity_1 < entity_5){  // Tag.BODY
    entity_1 = 72;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 59;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_1] = 'G'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER