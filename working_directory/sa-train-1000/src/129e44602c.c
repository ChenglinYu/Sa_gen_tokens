#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 77;            // Tag.BODY
    char entity_2[12];        // Tag.BODY
    entity_9 = 32;            // Tag.BODY
    if(entity_9 < entity_7){  // Tag.BODY
    entity_9 = 82;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 95;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_9] = 'p'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER