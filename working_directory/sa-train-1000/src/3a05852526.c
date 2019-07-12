#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    char entity_4[64];                                   // Tag.BODY
    char entity_5[99];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_8 = 45;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_3 = 67;                                       // Tag.BODY
    if (entity_7 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 39;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 60; entity_2 < entity_7; entity_2++){ // Tag.BODY
    entity_4[entity_3] = 'l';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_5[entity_2] = 't';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER