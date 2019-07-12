#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 38;                                       // Tag.BODY
    char entity_4[77];                                   // Tag.BODY
    for(entity_3 = 40; entity_3 < entity_8; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_2[27];                                   // Tag.BODY
    entity_4[entity_3] = '9';                            // Tag.BUFWRITE_COND_SAFE
    entity_9 = 33;                                       // Tag.BODY
    entity_2[entity_9] = 'O';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER