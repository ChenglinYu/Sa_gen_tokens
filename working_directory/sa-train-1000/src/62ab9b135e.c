#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 90;            // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    char entity_6[7];         // Tag.BODY
    if(entity_1 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 39;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_1] = 'W'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER