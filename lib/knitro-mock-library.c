#include "../include/knitro.h"

KTR_context_ptr KNITRO_API KTR_new(void) {
	return 0;
}

int  KNITRO_API KTR_load_param_file (KTR_context_ptr  kc, const char * const  filename) {
	return 1;
}

int  KNITRO_API KTR_get_int_param_by_name(KTR_context_ptr  kc, const char * const  name, int * const  value) {
	return 1;
}

int  KNITRO_API KTR_set_int_param_by_name(KTR_context_ptr  kc, const char * const  name, const int  value) {
	return 2;
}

int  KNITRO_API KTR_set_func_callback (KTR_context_ptr       kc,
                                       KTR_callback * const  fnPtr) {
	return 3;
}

int  KNITRO_API KTR_set_grad_callback (KTR_context_ptr       kc,
                                       KTR_callback * const  fnPtr) {
  return 3;
}


int  KNITRO_API KTR_init_problem (KTR_context_ptr       kc,
                                  const int             n,
                                  const int             objGoal,
                                  const int             objType,
                                  const double * const  xLoBnds,
                                  const double * const  xUpBnds,
                                  const int             m,
                                  const int    * const  cType,
                                  const double * const  cLoBnds,
                                  const double * const  cUpBnds,
                                  const int             nnzJ,
                                  const int    * const  jacIndexVars,
                                  const int    * const  jacIndexCons,
                                  const int             nnzH,
                                  const int    * const  hessIndexRows,
                                  const int    * const  hessIndexCols,
                                  const double * const  xInitial,
                                  const double * const  lambdaInitial) {
	return 1;
}


int  KNITRO_API KTR_solve ( KTR_context_ptr      kc,
                                 double * const  x,
                                 double * const  lambda,
                           const int             evalStatus,
                                 double * const  obj,
                           const double * const  c,
                                 double * const  objGrad,
                                 double * const  jac,
                           const double * const  hess,
                                 double * const  hessVector,
                                 void   * const  userParams) {
	return 5;
}

int  KNITRO_API KTR_get_number_iters (const KTR_context_ptr  kc) {
	return 3;
}

int  KNITRO_API KTR_get_number_FC_evals (const KTR_context_ptr  kc) {
	return 4;
}

int  KNITRO_API KTR_get_number_GA_evals (const KTR_context_ptr  kc) {
	return 5;
}

int  KNITRO_API KTR_free (KTR_context_ptr *  kc_handle) {
	return 3;
}