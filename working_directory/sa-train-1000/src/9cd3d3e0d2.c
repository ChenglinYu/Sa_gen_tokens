#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_8 = 97;                                       // Tag.BODY
    char entity_6[65];                                   // Tag.BODY
    char entity_4[29];                                   // Tag.BODY
    entity_2 = 32;                                       // Tag.BODY
    for(entity_3 = 21; entity_3 < entity_8; entity_3++){ // Tag.BODY
    entity_6[entity_2] = 'X';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_4[entity_3] = 'C';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 50;                                       // Tag.BODY
    char entity_5[42];                                   // Tag.BODY
    entity_5[entity_9] = '2';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER