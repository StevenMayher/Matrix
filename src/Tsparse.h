#ifndef MATRIX_TSPARSE_H
#define MATRIX_TSPARSE_H

#include "Mutils.h"

SEXP Tsparse_validate(SEXP x);
SEXP Tsparse_diagU2N(SEXP x);

/* MJ: no longer needed ... prefer Tsparse_as_CRsparse() */
#if 0
SEXP Tsparse_to_Csparse(SEXP x, SEXP tri);
#endif /* MJ */

/* MJ: unused */
#if 0
SEXP Tsparse_to_tCsparse(SEXP x, SEXP uplo, SEXP diag);
#endif /* MJ */

#endif
