#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_9[74];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_1 = 69;                                       // Tag.BODY
    char entity_3[96];                                   // Tag.BODY
    entity_6 = 16;                                       // Tag.BODY
    for(entity_5 = 27; entity_5 < entity_1; entity_5++){ // Tag.BODY
    entity_9[entity_6] = 'B';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_4[39];                                   // Tag.BODY
    entity_3[entity_5] = 'H';                            // Tag.BUFWRITE_COND_SAFE
    entity_2 = 64;                                       // Tag.BODY
    entity_4[entity_2] = 'c';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER