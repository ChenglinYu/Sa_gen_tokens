#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    entity_1 = 29;            // Tag.BODY
    char entity_9[35];        // Tag.BODY
    if(entity_5 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 14;            // Tag.BODY
    }                         // Tag.BODY
    char entity_4[10];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_9[entity_5] = 'S'; // Tag.BUFWRITE_COND_SAFE
    entity_3 = 65;            // Tag.BODY
    entity_4[entity_3] = 'Y'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER