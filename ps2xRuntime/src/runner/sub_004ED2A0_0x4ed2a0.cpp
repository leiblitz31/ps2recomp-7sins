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

// Function: sub_004ED2A0
// Address: 0x4ed2a0 - 0x4ed2b8
void sub_004ED2A0_0x4ed2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED2A0_0x4ed2a0");
#endif

    switch (ctx->pc) {
        case 0x4ed2b4u: goto label_4ed2b4;
        default: break;
    }

    ctx->pc = 0x4ed2a0u;

    // 0x4ed2a0: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed2a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4ED2A0 raw=0x732E7866");
    // 0x4ed2a4: 0x69736e65  ldl         $s3, 0x6E65($t3)
    ctx->pc = 0x4ed2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x4ed2a8: 0x696c6962  ldl         $t4, 0x6962($t3)
    ctx->pc = 0x4ed2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26978); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x4ed2ac: 0x762e7974  .word       0x762E7974                   # INVALID     $s1, $t6, 0x7974 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed2acu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED2AC raw=0x762E7974");
    // 0x4ed2b0: 0x656c6f69  daddiu      $t4, $t3, 0x6F69
    ctx->pc = 0x4ed2b0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28521);
label_4ed2b4:
    // 0x4ed2b4: 0x65636e  .word       0x0065636E                   # dsub        $t4, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed2b4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    ctx->pc = 0x4ed2b8u;
}
