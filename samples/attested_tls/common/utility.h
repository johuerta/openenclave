// Copyright (c) Open Enclave SDK contributors.
// Licensed under the MIT License.

#include <mbedtls/pk.h>
#include <mbedtls/rsa.h>
#include <mbedtls/sha256.h>
#include <mbedtls/x509_crt.h>
#include <openenclave/attestation/verifier.h>
#include <openenclave/enclave.h>
#include "common.h"

oe_result_t generate_certificate_and_pkey(
    mbedtls_x509_crt* cert,
    mbedtls_pk_context* private_key);

bool verify_signer_id(
    const char* siging_public_key_buf,
    size_t siging_public_key_buf_size,
    uint8_t* signer_id_buf,
    size_t signer_id_buf_size);

const oe_claim_t* find_claim(
    const oe_claim_t* claims,
    size_t claims_size,
    const char* name);
