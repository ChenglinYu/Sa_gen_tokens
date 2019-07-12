#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    char entity_0[88];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_7 = 34;                                       // Tag.BODY
    char entity_1[75];                                   // Tag.BODY
    entity_9 = 95;                                       // Tag.BODY
    entity_0[entity_9] = 'Q';                            // Tag.BUFWRITE_TAUT_UNSAFE
    for(entity_6 = 13; entity_6 < entity_7; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_6] = 'Y';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER