#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_1[3];                                    // Tag.BODY
    char entity_9[20];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 30;                                       // Tag.BODY
    entity_4 = 32;                                       // Tag.BODY
    entity_9[entity_3] = '4';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_0 = 31; entity_0 < entity_4; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_0] = 'G';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER