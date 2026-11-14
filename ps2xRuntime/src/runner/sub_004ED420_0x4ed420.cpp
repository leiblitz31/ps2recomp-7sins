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

// Function: sub_004ED420
// Address: 0x4ed420 - 0x4ed440
void sub_004ED420_0x4ed420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED420_0x4ed420");
#endif

    ctx->pc = 0x4ed420u;

    // 0x4ed420: 0x706d746c  .word       0x706D746C                   # INVALID     $v1, $t5, 0x746C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed420u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4ED420 raw=0x706D746C");
    // 0x4ed424: 0x3f303030  .word       0x3F303030                   # lui         $s0, 0x3030 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed424u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12336 << 16));
    // 0x4ed428: 0x0  nop
    ctx->pc = 0x4ed428u;
    // NOP
    // 0x4ed42c: 0x0  nop
    ctx->pc = 0x4ed42cu;
    // NOP
    // 0x4ed430: 0x0  nop
    ctx->pc = 0x4ed430u;
    // NOP
    // 0x4ed434: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4ed434u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x4ED434 raw=0x43C80000");
    // 0x4ed438: 0x0  nop
    ctx->pc = 0x4ed438u;
    // NOP
    // 0x4ed43c: 0x0  nop
    ctx->pc = 0x4ed43cu;
    // NOP
    ctx->pc = 0x4ed440u;
}
