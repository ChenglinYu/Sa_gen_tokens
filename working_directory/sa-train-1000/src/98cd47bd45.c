#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_4[98];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_7[82];        // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_5 = 98;            // Tag.BODY
    entity_0 = 0;             // Tag.BODY
    entity_4[entity_5] = 'U'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_8 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 15;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_7[entity_8] = '8'; // Tag.BUFWRITE_COND_SAFE
    char entity_6[42];        // Tag.BODY
    entity_2 = 21;            // Tag.BODY
    entity_6[entity_2] = 'U'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER