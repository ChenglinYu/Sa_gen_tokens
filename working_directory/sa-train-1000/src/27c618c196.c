#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_0 = 83;                                       // Tag.BODY
    char entity_4[15];                                   // Tag.BODY
    for(entity_5 = 76; entity_5 < entity_0; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_5] = 'u';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER