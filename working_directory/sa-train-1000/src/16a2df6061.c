#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_1 = 4;                                        // Tag.BODY
    char entity_0[54];                                   // Tag.BODY
    entity_0[entity_1] = 'T';                            // Tag.BUFWRITE_TAUT_SAFE
    int entity_5;                                        // Tag.BODY
    char entity_4[24];                                   // Tag.BODY
    entity_6 = 70;                                       // Tag.BODY
    for(entity_5 = 96; entity_5 < entity_6; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_4[entity_5] = 'b';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 10;                                       // Tag.BODY
    char entity_2[0];                                    // Tag.BODY
    entity_2[entity_3] = 's';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER