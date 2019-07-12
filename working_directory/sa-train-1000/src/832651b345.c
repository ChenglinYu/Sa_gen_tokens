#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    char entity_6[41];        // Tag.BODY
    entity_9 = 76;            // Tag.BODY
    if(entity_5 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 25;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_5] = 'n'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER