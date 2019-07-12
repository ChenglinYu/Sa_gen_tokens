#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[35];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_6[67];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_7 = 12;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_8[42];                                   // Tag.BODY
    entity_5 = 87;                                       // Tag.BODY
    entity_9 = 63;                                       // Tag.BODY
    entity_6[entity_9] = '9';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_1 = 87; entity_1 < entity_7; entity_1++){ // Tag.BODY
    entity_8[entity_5] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_3[entity_1] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER