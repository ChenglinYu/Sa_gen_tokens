#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_6[78];        // Tag.BODY
    entity_0 = 40;            // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 20;            // Tag.BODY
    entity_5 = 54;            // Tag.BODY
    char entity_3[36];        // Tag.BODY
    if(entity_0 < entity_4){  // Tag.BODY
    entity_6[entity_5] = '0'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 28;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 40;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_3[entity_0] = 'V'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[7];         // Tag.BODY
    entity_2 = 25;            // Tag.BODY
    entity_9[entity_2] = '4'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER