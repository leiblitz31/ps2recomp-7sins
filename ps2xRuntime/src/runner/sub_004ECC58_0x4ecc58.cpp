#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ECC58
// Address: 0x4ecc58 - 0x4ecc68
void sub_004ECC58_0x4ecc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECC58_0x4ecc58");
#endif

    ctx->pc = 0x4ecc58u;

    // 0x4ecc58: 0x63696f76  daddi       $t1, $k1, 0x6F76
    ctx->pc = 0x4ecc58u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28534; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
    // 0x4ecc5c: 0x73253d65  .word       0x73253D65                   # INVALID     $t9, $a1, 0x3D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ecc5cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4ECC5C raw=0x73253D65");
    // 0x4ecc60: 0x0  nop
    ctx->pc = 0x4ecc60u;
    // NOP
    // 0x4ecc64: 0x0  nop
    ctx->pc = 0x4ecc64u;
    // NOP
    ctx->pc = 0x4ecc68u;
}
