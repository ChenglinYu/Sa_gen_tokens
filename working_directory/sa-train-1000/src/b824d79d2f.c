#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_4 = 94;            // Tag.BODY
    entity_7 = 44;            // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    char entity_2[10];        // Tag.BODY
    entity_2[entity_4] = 'M'; // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_5[93];        // Tag.BODY
    if(entity_3 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 93;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_5[entity_3] = 'u'; // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 67;            // Tag.BODY
    char entity_6[42];        // Tag.BODY
    entity_6[entity_1] = 'U'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER