#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[80];        // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 70;            // Tag.BODY
    entity_9 = 63;            // Tag.BODY
    if(entity_6 < entity_9){  // Tag.BODY
    entity_6 = 61;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 98;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_6] = 'g'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER