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

// Function: sub_005DEFB0
// Address: 0x5defb0 - 0x5defd0
void sub_005DEFB0_0x5defb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEFB0_0x5defb0");
#endif

    switch (ctx->pc) {
        case 0x5defbcu: goto label_5defbc;
        case 0x5defc0u: goto label_5defc0;
        default: break;
    }

    ctx->pc = 0x5defb0u;

    // 0x5defb0: 0x6f636e49  ldr         $v1, 0x6E49($k1)
    ctx->pc = 0x5defb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x5defb4: 0x63657272  daddi       $a1, $k1, 0x7272
    ctx->pc = 0x5defb4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29298; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x5defb8: 0x6e662074  ldr         $a2, 0x2074($s3)
    ctx->pc = 0x5defb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_5defbc:
    // 0x5defbc: 0x67657220  daddiu      $a1, $k1, 0x7220
    ctx->pc = 0x5defbcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29216);
label_5defc0:
    // 0x5defc0: 0x65747369  daddiu      $s4, $t3, 0x7369
    ctx->pc = 0x5defc0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29545);
    // 0x5defc4: 0x646572  tlt         $v1, $a0, 405
    ctx->pc = 0x5defc4u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
    // 0x5defc8: 0x0  nop
    ctx->pc = 0x5defc8u;
    // NOP
    // 0x5defcc: 0x0  nop
    ctx->pc = 0x5defccu;
    // NOP
    ctx->pc = 0x5defd0u;
}
