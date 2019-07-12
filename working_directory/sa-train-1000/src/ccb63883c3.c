#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[5];         // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 39;            // Tag.BODY
    entity_1 = 59;            // Tag.BODY
    if(entity_1 < entity_6){  // Tag.BODY
    entity_1 = 80;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 9;             // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_1] = 'P'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER