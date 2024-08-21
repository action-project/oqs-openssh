#ifndef OQS_UTIL_H
#define OQS_UTIL_H

#include "includes.h"
#include "sshkey.h"

// OQS-TODO: Replace these macros with the functions below
///// OQS_TEMPLATE_FRAGMENT_DEFINE_KEY_CASE_MACROS_START
#define CASE_KEY_OQS \
	case KEY_FALCON_512: \
	case KEY_FALCON_1024: \
	case KEY_SPHINCS_SHA2_128F_SIMPLE: \
	case KEY_SPHINCS_SHA2_256F_SIMPLE: \
	case KEY_ML_DSA_44: \
	case KEY_ML_DSA_65: \
	case KEY_ML_DSA_87: \
	case KEY_MAYO_2: \
	case KEY_MAYO_3: \
	case KEY_MAYO_5

#define CASE_KEY_RSA_HYBRID \
	case KEY_RSA3072_FALCON_512: \
	case KEY_RSA3072_SPHINCS_SHA2_128F_SIMPLE: \
	case KEY_RSA3072_ML_DSA_44: \
	case KEY_RSA3072_MAYO_2

#define CASE_KEY_ECDSA_HYBRID \
	case KEY_ECDSA_NISTP256_FALCON_512: \
	case KEY_ECDSA_NISTP521_FALCON_1024: \
	case KEY_ECDSA_NISTP256_SPHINCS_SHA2_128F_SIMPLE: \
	case KEY_ECDSA_NISTP521_SPHINCS_SHA2_256F_SIMPLE: \
	case KEY_ECDSA_NISTP256_ML_DSA_44: \
	case KEY_ECDSA_NISTP384_ML_DSA_65: \
	case KEY_ECDSA_NISTP521_ML_DSA_87: \
	case KEY_ECDSA_NISTP256_MAYO_2: \
	case KEY_ECDSA_NISTP384_MAYO_3: \
	case KEY_ECDSA_NISTP521_MAYO_5
///// OQS_TEMPLATE_FRAGMENT_DEFINE_KEY_CASE_MACROS_END

#define CASE_KEY_HYBRID \
	CASE_KEY_RSA_HYBRID: \
	CASE_KEY_ECDSA_HYBRID

int oqs_utils_is_rsa_hybrid(int keytype);
int oqs_utils_is_ecdsa_hybrid(int keytype);
int oqs_utils_is_hybrid(int keytype);

#endif /* OQS_UTIL_H */
