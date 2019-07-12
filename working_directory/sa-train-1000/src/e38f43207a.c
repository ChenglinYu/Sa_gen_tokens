#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_1 = 85;            // Tag.BODY
    char entity_7[17];        // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    if(entity_9 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 92;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_9] = 'F'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER