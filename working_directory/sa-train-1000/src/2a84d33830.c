#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[65];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_8 = 7;                                        // Tag.BODY
    for(entity_1 = 80; entity_1 < entity_8; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_6 = 65;                                       // Tag.BODY
    char entity_9[72];                                   // Tag.BODY
    entity_7[entity_1] = 'I';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[6];                                    // Tag.BODY
    entity_5[entity_6] = '4';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 2;                                        // Tag.BODY
    entity_9[entity_0] = 'C';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER