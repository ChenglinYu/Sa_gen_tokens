#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_8[88];                                   // Tag.BODY
    char entity_6[39];                                   // Tag.BODY
    char entity_1[42];                                   // Tag.BODY
    entity_5 = 76;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_2 = 96;                                       // Tag.BODY
    entity_8[entity_5] = '7';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 39;                                       // Tag.BODY
    entity_1[entity_7] = 'M';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_0 = 11; entity_0 < entity_2; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_0] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER