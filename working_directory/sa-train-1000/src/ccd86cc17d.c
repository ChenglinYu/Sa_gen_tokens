#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_7 = 75;            // Tag.BODY
    entity_6 = 54;            // Tag.BODY
    char entity_5[14];        // Tag.BODY
    if(entity_7 < entity_6){  // Tag.BODY
    entity_7 = 99;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 14;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_7] = 'J'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER