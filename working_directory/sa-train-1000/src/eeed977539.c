#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    entity_1 = 66;            // Tag.BODY
    char entity_4[85];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 62;            // Tag.BODY
    if(entity_2 < entity_1){  // Tag.BODY
    entity_2 = 82;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 34;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_2] = 'g'; // Tag.BUFWRITE_COND_SAFE
    int entity_6;             // Tag.BODY
    entity_6 = 83;            // Tag.BODY
    char entity_3[45];        // Tag.BODY
    entity_3[entity_6] = '5'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER