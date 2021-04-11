#ifndef HEADER_SM2_CREATE_KEY_PAIR_H
  #define HEADER_SM2_CREATE_KEY_PAIR_H

typedef struct sm2_key_pair_structure {

	unsigned char pri_key[32];

	unsigned char pub_key[65]; 
} SM2_KEY_PAIR;

#ifdef  __cplusplus
  extern "C" {
#endif

int sm2_create_key_pair(SM2_KEY_PAIR *key_pair);

#ifdef  __cplusplus
  }
#endif

#endif  
