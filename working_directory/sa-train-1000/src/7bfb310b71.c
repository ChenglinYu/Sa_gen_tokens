#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    entity_1 = 94;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    char entity_0[85];                                   // Tag.BODY
    if (entity_2 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 59;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 25; entity_6 < entity_2; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_6] = 'C';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER