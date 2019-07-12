#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    entity_6 = 47;            // Tag.BODY
    char entity_4[9];         // Tag.BODY
    if(entity_9 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 20;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_9] = 'n'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER