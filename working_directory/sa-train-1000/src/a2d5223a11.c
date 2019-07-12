#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_2 = 72;            // Tag.BODY
    char entity_0[11];        // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    if(entity_7 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 89;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_7] = '2'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER