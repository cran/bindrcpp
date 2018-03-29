// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/bindrcpp.h"
#include "../inst/include/bindrcpp_types.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// create_env_string_typed_imp
Environment create_env_string_typed_imp(CharacterVector names, bindrcpp::GETTER_FUNC_STRING_TYPED fun, bindrcpp::PAYLOAD payload, Environment enclos);
static SEXP _bindrcpp_create_env_string_typed_imp_try(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_STRING_TYPED >::type fun(funSEXP);
    Rcpp::traits::input_parameter< bindrcpp::PAYLOAD >::type payload(payloadSEXP);
    Rcpp::traits::input_parameter< Environment >::type enclos(enclosSEXP);
    rcpp_result_gen = Rcpp::wrap(create_env_string_typed_imp(names, fun, payload, enclos));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bindrcpp_create_env_string_typed_imp(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bindrcpp_create_env_string_typed_imp_try(namesSEXP, funSEXP, payloadSEXP, enclosSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// populate_env_string_typed_imp
Environment populate_env_string_typed_imp(Environment env, CharacterVector names, bindrcpp::GETTER_FUNC_STRING_TYPED fun, bindrcpp::PAYLOAD payload);
static SEXP _bindrcpp_populate_env_string_typed_imp_try(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_STRING_TYPED >::type fun(funSEXP);
    Rcpp::traits::input_parameter< bindrcpp::PAYLOAD >::type payload(payloadSEXP);
    rcpp_result_gen = Rcpp::wrap(populate_env_string_typed_imp(env, names, fun, payload));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bindrcpp_populate_env_string_typed_imp(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bindrcpp_populate_env_string_typed_imp_try(envSEXP, namesSEXP, funSEXP, payloadSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// create_env_symbol_typed_imp
Environment create_env_symbol_typed_imp(CharacterVector names, bindrcpp::GETTER_FUNC_SYMBOL_TYPED fun, bindrcpp::PAYLOAD payload, Environment enclos);
static SEXP _bindrcpp_create_env_symbol_typed_imp_try(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_SYMBOL_TYPED >::type fun(funSEXP);
    Rcpp::traits::input_parameter< bindrcpp::PAYLOAD >::type payload(payloadSEXP);
    Rcpp::traits::input_parameter< Environment >::type enclos(enclosSEXP);
    rcpp_result_gen = Rcpp::wrap(create_env_symbol_typed_imp(names, fun, payload, enclos));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bindrcpp_create_env_symbol_typed_imp(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bindrcpp_create_env_symbol_typed_imp_try(namesSEXP, funSEXP, payloadSEXP, enclosSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// populate_env_symbol_typed_imp
Environment populate_env_symbol_typed_imp(Environment env, CharacterVector names, bindrcpp::GETTER_FUNC_SYMBOL_TYPED fun, bindrcpp::PAYLOAD payload);
static SEXP _bindrcpp_populate_env_symbol_typed_imp_try(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_SYMBOL_TYPED >::type fun(funSEXP);
    Rcpp::traits::input_parameter< bindrcpp::PAYLOAD >::type payload(payloadSEXP);
    rcpp_result_gen = Rcpp::wrap(populate_env_symbol_typed_imp(env, names, fun, payload));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bindrcpp_populate_env_symbol_typed_imp(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bindrcpp_populate_env_symbol_typed_imp_try(envSEXP, namesSEXP, funSEXP, payloadSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// create_env_string_wrapped_imp
Environment create_env_string_wrapped_imp(CharacterVector names, bindrcpp::GETTER_FUNC_STRING_WRAPPED fun, List payload, Environment enclos);
static SEXP _bindrcpp_create_env_string_wrapped_imp_try(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_STRING_WRAPPED >::type fun(funSEXP);
    Rcpp::traits::input_parameter< List >::type payload(payloadSEXP);
    Rcpp::traits::input_parameter< Environment >::type enclos(enclosSEXP);
    rcpp_result_gen = Rcpp::wrap(create_env_string_wrapped_imp(names, fun, payload, enclos));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bindrcpp_create_env_string_wrapped_imp(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bindrcpp_create_env_string_wrapped_imp_try(namesSEXP, funSEXP, payloadSEXP, enclosSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// populate_env_string_wrapped_imp
Environment populate_env_string_wrapped_imp(Environment env, CharacterVector names, bindrcpp::GETTER_FUNC_STRING_WRAPPED fun, List payload);
static SEXP _bindrcpp_populate_env_string_wrapped_imp_try(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_STRING_WRAPPED >::type fun(funSEXP);
    Rcpp::traits::input_parameter< List >::type payload(payloadSEXP);
    rcpp_result_gen = Rcpp::wrap(populate_env_string_wrapped_imp(env, names, fun, payload));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bindrcpp_populate_env_string_wrapped_imp(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bindrcpp_populate_env_string_wrapped_imp_try(envSEXP, namesSEXP, funSEXP, payloadSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// create_env_symbol_wrapped_imp
Environment create_env_symbol_wrapped_imp(CharacterVector names, bindrcpp::GETTER_FUNC_SYMBOL_WRAPPED fun, List payload, Environment enclos);
static SEXP _bindrcpp_create_env_symbol_wrapped_imp_try(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_SYMBOL_WRAPPED >::type fun(funSEXP);
    Rcpp::traits::input_parameter< List >::type payload(payloadSEXP);
    Rcpp::traits::input_parameter< Environment >::type enclos(enclosSEXP);
    rcpp_result_gen = Rcpp::wrap(create_env_symbol_wrapped_imp(names, fun, payload, enclos));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bindrcpp_create_env_symbol_wrapped_imp(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bindrcpp_create_env_symbol_wrapped_imp_try(namesSEXP, funSEXP, payloadSEXP, enclosSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// populate_env_symbol_wrapped_imp
Environment populate_env_symbol_wrapped_imp(Environment env, CharacterVector names, bindrcpp::GETTER_FUNC_SYMBOL_WRAPPED fun, List payload);
static SEXP _bindrcpp_populate_env_symbol_wrapped_imp_try(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_SYMBOL_WRAPPED >::type fun(funSEXP);
    Rcpp::traits::input_parameter< List >::type payload(payloadSEXP);
    rcpp_result_gen = Rcpp::wrap(populate_env_symbol_wrapped_imp(env, names, fun, payload));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bindrcpp_populate_env_symbol_wrapped_imp(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bindrcpp_populate_env_symbol_wrapped_imp_try(envSEXP, namesSEXP, funSEXP, payloadSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// create_env_string_imp
Environment create_env_string_imp(CharacterVector names, bindrcpp::GETTER_FUNC_STRING fun, bindrcpp::PAYLOAD payload, Environment enclos);
static SEXP _bindrcpp_create_env_string_imp_try(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_STRING >::type fun(funSEXP);
    Rcpp::traits::input_parameter< bindrcpp::PAYLOAD >::type payload(payloadSEXP);
    Rcpp::traits::input_parameter< Environment >::type enclos(enclosSEXP);
    rcpp_result_gen = Rcpp::wrap(create_env_string_imp(names, fun, payload, enclos));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bindrcpp_create_env_string_imp(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bindrcpp_create_env_string_imp_try(namesSEXP, funSEXP, payloadSEXP, enclosSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// populate_env_string_imp
Environment populate_env_string_imp(Environment env, CharacterVector names, bindrcpp::GETTER_FUNC_STRING fun, bindrcpp::PAYLOAD payload);
static SEXP _bindrcpp_populate_env_string_imp_try(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_STRING >::type fun(funSEXP);
    Rcpp::traits::input_parameter< bindrcpp::PAYLOAD >::type payload(payloadSEXP);
    rcpp_result_gen = Rcpp::wrap(populate_env_string_imp(env, names, fun, payload));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bindrcpp_populate_env_string_imp(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bindrcpp_populate_env_string_imp_try(envSEXP, namesSEXP, funSEXP, payloadSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// create_env_symbol_imp
Environment create_env_symbol_imp(CharacterVector names, bindrcpp::GETTER_FUNC_SYMBOL fun, bindrcpp::PAYLOAD payload, Environment enclos);
static SEXP _bindrcpp_create_env_symbol_imp_try(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_SYMBOL >::type fun(funSEXP);
    Rcpp::traits::input_parameter< bindrcpp::PAYLOAD >::type payload(payloadSEXP);
    Rcpp::traits::input_parameter< Environment >::type enclos(enclosSEXP);
    rcpp_result_gen = Rcpp::wrap(create_env_symbol_imp(names, fun, payload, enclos));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bindrcpp_create_env_symbol_imp(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bindrcpp_create_env_symbol_imp_try(namesSEXP, funSEXP, payloadSEXP, enclosSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// populate_env_symbol_imp
Environment populate_env_symbol_imp(Environment env, CharacterVector names, bindrcpp::GETTER_FUNC_SYMBOL fun, bindrcpp::PAYLOAD payload);
static SEXP _bindrcpp_populate_env_symbol_imp_try(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_SYMBOL >::type fun(funSEXP);
    Rcpp::traits::input_parameter< bindrcpp::PAYLOAD >::type payload(payloadSEXP);
    rcpp_result_gen = Rcpp::wrap(populate_env_symbol_imp(env, names, fun, payload));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _bindrcpp_populate_env_symbol_imp(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_bindrcpp_populate_env_symbol_imp_try(envSEXP, namesSEXP, funSEXP, payloadSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// init_logging
void init_logging(const std::string& log_level);
RcppExport SEXP _bindrcpp_init_logging(SEXP log_levelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type log_level(log_levelSEXP);
    init_logging(log_level);
    return R_NilValue;
END_RCPP
}
// callback_string_typed
SEXP callback_string_typed(Symbol name, bindrcpp::GETTER_FUNC_STRING_TYPED fun, bindrcpp::PAYLOAD payload);
RcppExport SEXP _bindrcpp_callback_string_typed(SEXP nameSEXP, SEXP funSEXP, SEXP payloadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_STRING_TYPED >::type fun(funSEXP);
    Rcpp::traits::input_parameter< bindrcpp::PAYLOAD >::type payload(payloadSEXP);
    rcpp_result_gen = Rcpp::wrap(callback_string_typed(name, fun, payload));
    return rcpp_result_gen;
END_RCPP
}
// callback_symbol_typed
SEXP callback_symbol_typed(Symbol name, bindrcpp::GETTER_FUNC_SYMBOL_TYPED fun, bindrcpp::PAYLOAD payload);
RcppExport SEXP _bindrcpp_callback_symbol_typed(SEXP nameSEXP, SEXP funSEXP, SEXP payloadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_SYMBOL_TYPED >::type fun(funSEXP);
    Rcpp::traits::input_parameter< bindrcpp::PAYLOAD >::type payload(payloadSEXP);
    rcpp_result_gen = Rcpp::wrap(callback_symbol_typed(name, fun, payload));
    return rcpp_result_gen;
END_RCPP
}
// callback_string_wrapped
SEXP callback_string_wrapped(Symbol name, bindrcpp::GETTER_FUNC_STRING_WRAPPED fun, List payload);
RcppExport SEXP _bindrcpp_callback_string_wrapped(SEXP nameSEXP, SEXP funSEXP, SEXP payloadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_STRING_WRAPPED >::type fun(funSEXP);
    Rcpp::traits::input_parameter< List >::type payload(payloadSEXP);
    rcpp_result_gen = Rcpp::wrap(callback_string_wrapped(name, fun, payload));
    return rcpp_result_gen;
END_RCPP
}
// callback_symbol_wrapped
SEXP callback_symbol_wrapped(Symbol name, bindrcpp::GETTER_FUNC_SYMBOL_WRAPPED fun, List payload);
RcppExport SEXP _bindrcpp_callback_symbol_wrapped(SEXP nameSEXP, SEXP funSEXP, SEXP payloadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bindrcpp::GETTER_FUNC_SYMBOL_WRAPPED >::type fun(funSEXP);
    Rcpp::traits::input_parameter< List >::type payload(payloadSEXP);
    rcpp_result_gen = Rcpp::wrap(callback_symbol_wrapped(name, fun, payload));
    return rcpp_result_gen;
END_RCPP
}
// do_test_create_environment
Environment do_test_create_environment(CharacterVector names, String xform, Environment parent);
RcppExport SEXP _bindrcpp_do_test_create_environment(SEXP namesSEXP, SEXP xformSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< String >::type xform(xformSEXP);
    Rcpp::traits::input_parameter< Environment >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(do_test_create_environment(names, xform, parent));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _bindrcpp_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Environment(*create_env_string_typed)(CharacterVector,bindrcpp::GETTER_FUNC_STRING_TYPED,bindrcpp::PAYLOAD,Environment)");
        signatures.insert("Environment(*populate_env_string_typed)(Environment,CharacterVector,bindrcpp::GETTER_FUNC_STRING_TYPED,bindrcpp::PAYLOAD)");
        signatures.insert("Environment(*create_env_symbol_typed)(CharacterVector,bindrcpp::GETTER_FUNC_SYMBOL_TYPED,bindrcpp::PAYLOAD,Environment)");
        signatures.insert("Environment(*populate_env_symbol_typed)(Environment,CharacterVector,bindrcpp::GETTER_FUNC_SYMBOL_TYPED,bindrcpp::PAYLOAD)");
        signatures.insert("Environment(*create_env_string_wrapped)(CharacterVector,bindrcpp::GETTER_FUNC_STRING_WRAPPED,List,Environment)");
        signatures.insert("Environment(*populate_env_string_wrapped)(Environment,CharacterVector,bindrcpp::GETTER_FUNC_STRING_WRAPPED,List)");
        signatures.insert("Environment(*create_env_symbol_wrapped)(CharacterVector,bindrcpp::GETTER_FUNC_SYMBOL_WRAPPED,List,Environment)");
        signatures.insert("Environment(*populate_env_symbol_wrapped)(Environment,CharacterVector,bindrcpp::GETTER_FUNC_SYMBOL_WRAPPED,List)");
        signatures.insert("Environment(*create_env_string)(CharacterVector,bindrcpp::GETTER_FUNC_STRING,bindrcpp::PAYLOAD,Environment)");
        signatures.insert("Environment(*populate_env_string)(Environment,CharacterVector,bindrcpp::GETTER_FUNC_STRING,bindrcpp::PAYLOAD)");
        signatures.insert("Environment(*create_env_symbol)(CharacterVector,bindrcpp::GETTER_FUNC_SYMBOL,bindrcpp::PAYLOAD,Environment)");
        signatures.insert("Environment(*populate_env_symbol)(Environment,CharacterVector,bindrcpp::GETTER_FUNC_SYMBOL,bindrcpp::PAYLOAD)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _bindrcpp_RcppExport_registerCCallable() { 
    R_RegisterCCallable("bindrcpp", "_bindrcpp_create_env_string_typed", (DL_FUNC)_bindrcpp_create_env_string_typed_imp_try);
    R_RegisterCCallable("bindrcpp", "_bindrcpp_populate_env_string_typed", (DL_FUNC)_bindrcpp_populate_env_string_typed_imp_try);
    R_RegisterCCallable("bindrcpp", "_bindrcpp_create_env_symbol_typed", (DL_FUNC)_bindrcpp_create_env_symbol_typed_imp_try);
    R_RegisterCCallable("bindrcpp", "_bindrcpp_populate_env_symbol_typed", (DL_FUNC)_bindrcpp_populate_env_symbol_typed_imp_try);
    R_RegisterCCallable("bindrcpp", "_bindrcpp_create_env_string_wrapped", (DL_FUNC)_bindrcpp_create_env_string_wrapped_imp_try);
    R_RegisterCCallable("bindrcpp", "_bindrcpp_populate_env_string_wrapped", (DL_FUNC)_bindrcpp_populate_env_string_wrapped_imp_try);
    R_RegisterCCallable("bindrcpp", "_bindrcpp_create_env_symbol_wrapped", (DL_FUNC)_bindrcpp_create_env_symbol_wrapped_imp_try);
    R_RegisterCCallable("bindrcpp", "_bindrcpp_populate_env_symbol_wrapped", (DL_FUNC)_bindrcpp_populate_env_symbol_wrapped_imp_try);
    R_RegisterCCallable("bindrcpp", "_bindrcpp_create_env_string", (DL_FUNC)_bindrcpp_create_env_string_imp_try);
    R_RegisterCCallable("bindrcpp", "_bindrcpp_populate_env_string", (DL_FUNC)_bindrcpp_populate_env_string_imp_try);
    R_RegisterCCallable("bindrcpp", "_bindrcpp_create_env_symbol", (DL_FUNC)_bindrcpp_create_env_symbol_imp_try);
    R_RegisterCCallable("bindrcpp", "_bindrcpp_populate_env_symbol", (DL_FUNC)_bindrcpp_populate_env_symbol_imp_try);
    R_RegisterCCallable("bindrcpp", "_bindrcpp_RcppExport_validate", (DL_FUNC)_bindrcpp_RcppExport_validate);
    R_RegisterCCallable("bindrcpp", "bindrcpp_create_env_string", (DL_FUNC)_bindrcpp_create_env_string_imp_try);
    R_RegisterCCallable("bindrcpp", "bindrcpp_populate_env_string", (DL_FUNC)_bindrcpp_populate_env_string_imp_try);
    R_RegisterCCallable("bindrcpp", "bindrcpp_create_env_symbol", (DL_FUNC)_bindrcpp_create_env_symbol_imp_try);
    R_RegisterCCallable("bindrcpp", "bindrcpp_populate_env_symbol", (DL_FUNC)_bindrcpp_populate_env_symbol_imp_try);
    R_RegisterCCallable("bindrcpp", "bindrcpp_RcppExport_validate", (DL_FUNC)_bindrcpp_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_bindrcpp_create_env_string_typed_imp", (DL_FUNC) &_bindrcpp_create_env_string_typed_imp, 4},
    {"_bindrcpp_populate_env_string_typed_imp", (DL_FUNC) &_bindrcpp_populate_env_string_typed_imp, 4},
    {"_bindrcpp_create_env_symbol_typed_imp", (DL_FUNC) &_bindrcpp_create_env_symbol_typed_imp, 4},
    {"_bindrcpp_populate_env_symbol_typed_imp", (DL_FUNC) &_bindrcpp_populate_env_symbol_typed_imp, 4},
    {"_bindrcpp_create_env_string_wrapped_imp", (DL_FUNC) &_bindrcpp_create_env_string_wrapped_imp, 4},
    {"_bindrcpp_populate_env_string_wrapped_imp", (DL_FUNC) &_bindrcpp_populate_env_string_wrapped_imp, 4},
    {"_bindrcpp_create_env_symbol_wrapped_imp", (DL_FUNC) &_bindrcpp_create_env_symbol_wrapped_imp, 4},
    {"_bindrcpp_populate_env_symbol_wrapped_imp", (DL_FUNC) &_bindrcpp_populate_env_symbol_wrapped_imp, 4},
    {"_bindrcpp_create_env_string_imp", (DL_FUNC) &_bindrcpp_create_env_string_imp, 4},
    {"_bindrcpp_populate_env_string_imp", (DL_FUNC) &_bindrcpp_populate_env_string_imp, 4},
    {"_bindrcpp_create_env_symbol_imp", (DL_FUNC) &_bindrcpp_create_env_symbol_imp, 4},
    {"_bindrcpp_populate_env_symbol_imp", (DL_FUNC) &_bindrcpp_populate_env_symbol_imp, 4},
    {"_bindrcpp_init_logging", (DL_FUNC) &_bindrcpp_init_logging, 1},
    {"_bindrcpp_callback_string_typed", (DL_FUNC) &_bindrcpp_callback_string_typed, 3},
    {"_bindrcpp_callback_symbol_typed", (DL_FUNC) &_bindrcpp_callback_symbol_typed, 3},
    {"_bindrcpp_callback_string_wrapped", (DL_FUNC) &_bindrcpp_callback_string_wrapped, 3},
    {"_bindrcpp_callback_symbol_wrapped", (DL_FUNC) &_bindrcpp_callback_symbol_wrapped, 3},
    {"_bindrcpp_do_test_create_environment", (DL_FUNC) &_bindrcpp_do_test_create_environment, 3},
    {"_bindrcpp_RcppExport_registerCCallable", (DL_FUNC) &_bindrcpp_RcppExport_registerCCallable, 0},
    {"bindrcpp_create_env_string_imp", (DL_FUNC) &_bindrcpp_create_env_string_imp, 4},
    {"bindrcpp_populate_env_string_imp", (DL_FUNC) &_bindrcpp_populate_env_string_imp, 4},
    {"bindrcpp_create_env_symbol_imp", (DL_FUNC) &_bindrcpp_create_env_symbol_imp, 4},
    {"bindrcpp_populate_env_symbol_imp", (DL_FUNC) &_bindrcpp_populate_env_symbol_imp, 4},
    {"bindrcpp_init_logging", (DL_FUNC) &_bindrcpp_init_logging, 1},
    {"bindrcpp_callback_string", (DL_FUNC) &_bindrcpp_callback_string_typed, 3},
    {"bindrcpp_callback_symbol", (DL_FUNC) &_bindrcpp_callback_symbol_typed, 3},
    {"bindrcpp_do_test_create_environment", (DL_FUNC) &_bindrcpp_do_test_create_environment, 3},
    {"bindrcpp_RcppExport_registerCCallable", (DL_FUNC) &_bindrcpp_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_bindrcpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
