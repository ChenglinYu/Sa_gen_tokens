#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_3[94];                                   // Tag.BODY
    entity_7 = 4;                                        // Tag.BODY
    for(entity_5 = 16; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_2[45];                                   // Tag.BODY
    entity_3[entity_5] = 'C';                            // Tag.BUFWRITE_COND_SAFE
    int entity_8;                                        // Tag.BODY
    entity_8 = 34;                                       // Tag.BODY
    entity_2[entity_8] = 'J';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER