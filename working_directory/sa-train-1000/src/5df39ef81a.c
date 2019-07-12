#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_3[20];        // Tag.BODY
    entity_0 = 98;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 28;            // Tag.BODY
    if(entity_0 < entity_6){  // Tag.BODY
    entity_0 = 95;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 77;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_0] = 'y'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER