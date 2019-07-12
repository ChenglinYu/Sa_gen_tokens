#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_3[21];                                   // Tag.BODY
    char entity_1[52];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = 16;                                       // Tag.BODY
    entity_0 = 78;                                       // Tag.BODY
    for(entity_2 = 99; entity_2 < entity_0; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_2] = 'a';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_3[entity_6] = 'Q';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER