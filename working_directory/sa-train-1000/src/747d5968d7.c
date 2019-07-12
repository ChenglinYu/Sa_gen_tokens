#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_3[31];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_4 = 0;                                        // Tag.BODY
    entity_7 = 52;                                       // Tag.BODY
    char entity_1[15];                                   // Tag.BODY
    for(entity_2 = 41; entity_2 < entity_7; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_2] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;                                        // Tag.BODY
    entity_1[entity_4] = 'j';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_0[47];                                   // Tag.BODY
    entity_9 = 11;                                       // Tag.BODY
    entity_0[entity_9] = 'W';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER