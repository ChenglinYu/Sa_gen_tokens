#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[74];                                   // Tag.BODY
    char entity_4[56];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 46;                                       // Tag.BODY
    entity_1[entity_9] = 'H';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_2;                                        // Tag.BODY
    entity_5 = 92;                                       // Tag.BODY
    for(entity_2 = 13; entity_2 < entity_5; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_2] = 'j';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER