#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    char entity_1[86];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 55;                                       // Tag.BODY
    entity_3 = 14;                                       // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_4[99];                                   // Tag.BODY
    for(entity_6 = 83; entity_6 < entity_8; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_3] = '4';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_6] = 'h';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER