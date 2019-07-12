#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[37];        // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 42;            // Tag.BODY
    entity_4 = 30;            // Tag.BODY
    if(entity_5 < entity_4){  // Tag.BODY
    entity_5 = 65;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 10;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_5] = 'C'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER