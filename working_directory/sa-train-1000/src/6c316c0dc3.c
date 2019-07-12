#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_3[89];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_1 = 30;            // Tag.BODY
    entity_5 = 72;            // Tag.BODY
    if(entity_1 < entity_5){  // Tag.BODY
    entity_1 = 2;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 6;             // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_1] = '4'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER