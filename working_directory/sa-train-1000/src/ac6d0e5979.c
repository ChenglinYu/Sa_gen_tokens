#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_6[87];        // Tag.BODY
    entity_9 = 69;            // Tag.BODY
    entity_3 = 87;            // Tag.BODY
    entity_5 = 58;            // Tag.BODY
    char entity_2[72];        // Tag.BODY
    if(entity_5 < entity_9){  // Tag.BODY
    entity_5 = 48;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 26;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_5] = 'K'; // Tag.BUFWRITE_COND_SAFE
    entity_2[entity_3] = 'g'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER