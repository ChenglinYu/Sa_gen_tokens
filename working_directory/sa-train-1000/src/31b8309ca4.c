#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    entity_2 = 66;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_0[98];                                   // Tag.BODY
    for(entity_7 = 44; entity_7 < entity_2; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_9[29];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 77;                                       // Tag.BODY
    entity_9[entity_1] = 'D';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0[entity_7] = 'X';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER