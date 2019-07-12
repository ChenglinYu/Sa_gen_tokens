#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_1 = 25;            // Tag.BODY
    char entity_5[89];        // Tag.BODY
    entity_0 = 78;            // Tag.BODY
    if(entity_0 < entity_1){  // Tag.BODY
    entity_0 = 47;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 6;             // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_0] = '8'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER