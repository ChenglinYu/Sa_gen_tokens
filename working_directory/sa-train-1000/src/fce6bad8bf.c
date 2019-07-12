#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_6[35];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_0 = 66;            // Tag.BODY
    if(entity_5 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 89;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_5] = 'W'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER