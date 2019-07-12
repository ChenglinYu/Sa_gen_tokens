#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_7 = 97;                                       // Tag.BODY
    char entity_5[92];                                   // Tag.BODY
    if (entity_2 < entity_7){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 38;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 20; entity_4 < entity_2; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_4] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER