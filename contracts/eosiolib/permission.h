/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */
#pragma once
#include <eosiolib/types.h>

extern "C" {
   /**
       *  Verify if a set of public keys can authorize an account permission
       *  @brief Verify if a set of public keys can authorize an account permission
       *  @param account - the account that owns the permission
       *  @param permission - the permission name to check for authorization
       *  @param pubkeys - a pointer to an array of public keys (public_key)
       *  @param pubkeys_len - the lenght of the array of public keys
       *  @return 1 if the account permission can be authorized with the set of public keys, 0 otherwise
   */
   int32_t verify_permission( account_name account, permission_name permission, char* pubkeys, uint32_t pubkeys_len );
}

   
