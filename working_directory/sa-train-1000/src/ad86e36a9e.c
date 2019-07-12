#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_1[53];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_6 = 70;                                       // Tag.BODY
    for(entity_2 = 59; entity_2 < entity_6; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_0[99];                                   // Tag.BODY
    char entity_4[8];                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_1[entity_2] = 'w';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 58;                                       // Tag.BODY
    entity_5 = 33;                                       // Tag.BODY
    entity_0[entity_9] = 'C';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_5] = 'c';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER