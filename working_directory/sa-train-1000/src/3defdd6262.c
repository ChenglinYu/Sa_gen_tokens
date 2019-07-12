#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_0 = 77;            // Tag.BODY
    char entity_7[66];        // Tag.BODY
    entity_3 = 56;            // Tag.BODY
    if(entity_3 < entity_0){  // Tag.BODY
    entity_3 = 3;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 78;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_3] = 'T'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER