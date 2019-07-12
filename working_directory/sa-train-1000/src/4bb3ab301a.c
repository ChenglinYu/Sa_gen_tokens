#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_6[95];                                   // Tag.BODY
    entity_2 = 50;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 6;                                        // Tag.BODY
    char entity_8[67];                                   // Tag.BODY
    for(entity_5 = 29; entity_5 < entity_2; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_8[entity_5] = 'I';                            // Tag.BUFWRITE_COND_SAFE
    char entity_7[84];                                   // Tag.BODY
    entity_6[entity_3] = 'h';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1 = 19;                                       // Tag.BODY
    entity_7[entity_1] = 'b';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER