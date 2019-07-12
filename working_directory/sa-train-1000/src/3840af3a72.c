#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_8[54];                                   // Tag.BODY
    entity_4 = 72;                                       // Tag.BODY
    entity_2 = 37;                                       // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_7[31];                                   // Tag.BODY
    entity_7[entity_4] = 'E';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_5 = 53; entity_5 < entity_2; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_6[62];                                   // Tag.BODY
    entity_8[entity_5] = 'Z';                            // Tag.BUFWRITE_COND_SAFE
    int entity_3;                                        // Tag.BODY
    entity_3 = 76;                                       // Tag.BODY
    entity_6[entity_3] = 'P';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER