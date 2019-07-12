#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[77];                                   // Tag.BODY
    char entity_0[53];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 53;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_9[66];                                   // Tag.BODY
    entity_3 = 74;                                       // Tag.BODY
    entity_4 = 15;                                       // Tag.BODY
    entity_0[entity_3] = 'D';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_6 = 58; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_4] = '8';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_1[entity_6] = 'X';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER