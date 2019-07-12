#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    entity_1 = 56;            // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    char entity_9[2];         // Tag.BODY
    if(entity_4 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 74;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_4] = 't'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER