#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    char entity_6[75];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_5[81];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_0 = 21;                                       // Tag.BODY
    char entity_2[58];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_1 = 83;                                       // Tag.BODY
    entity_7 = 48;                                       // Tag.BODY
    entity_2[entity_1] = '4';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_9 = 21; entity_9 < entity_0; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_7] = 'k';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_9] = 'p';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER