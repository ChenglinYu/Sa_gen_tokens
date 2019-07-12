#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_2[24];        // Tag.BODY
    entity_1 = 82;            // Tag.BODY
    entity_8 = 36;            // Tag.BODY
    char entity_7[18];        // Tag.BODY
    entity_3 = 20;            // Tag.BODY
    if(entity_1 < entity_3){  // Tag.BODY
    entity_1 = 80;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 60;            // Tag.BODY
    entity_2[entity_8] = 'b'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_7[entity_1] = 'p'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[59];        // Tag.BODY
    entity_4 = 76;            // Tag.BODY
    entity_9[entity_4] = 'x'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER