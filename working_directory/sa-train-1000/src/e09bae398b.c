#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_3[41];        // Tag.BODY
    entity_7 = 60;            // Tag.BODY
    entity_9 = 78;            // Tag.BODY
    if(entity_9 < entity_7){  // Tag.BODY
    entity_9 = 87;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 70;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_9] = 'W'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER