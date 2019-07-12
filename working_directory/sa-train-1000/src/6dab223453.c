#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 40;            // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_5 = 30;            // Tag.BODY
    char entity_6[96];        // Tag.BODY
    entity_7 = 50;            // Tag.BODY
    char entity_4[7];         // Tag.BODY
    if(entity_7 < entity_1){  // Tag.BODY
    entity_7 = 46;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 21;            // Tag.BODY
    entity_4[entity_5] = 'D'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    entity_6[entity_7] = '6'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER