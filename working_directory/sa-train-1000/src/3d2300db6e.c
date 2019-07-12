#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_7[85];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_9 = 42;                                       // Tag.BODY
    for(entity_5 = 10; entity_5 < entity_9; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_8[24];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_7[entity_5] = 'F';                            // Tag.BUFWRITE_COND_SAFE
    entity_0 = 46;                                       // Tag.BODY
    entity_8[entity_0] = 'w';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER