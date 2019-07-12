#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_4 = 59;                                       // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_1 = 34;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_7[85];                                   // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    char entity_6[11];                                   // Tag.BODY
    if (entity_9 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 17;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 50; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_7[entity_2] = 'A';                            // Tag.BUFWRITE_COND_SAFE
    entity_6[entity_1] = '2';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0 = 87;                                       // Tag.BODY
    char entity_3[29];                                   // Tag.BODY
    entity_3[entity_0] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER