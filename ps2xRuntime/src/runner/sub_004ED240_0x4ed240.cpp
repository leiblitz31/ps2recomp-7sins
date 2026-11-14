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

// Function: sub_004ED240
// Address: 0x4ed240 - 0x4ed260
void sub_004ED240_0x4ed240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED240_0x4ed240");
#endif

    switch (ctx->pc) {
        case 0x4ed258u: goto label_4ed258;
        default: break;
    }

    ctx->pc = 0x4ed240u;

    // 0x4ed240: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed240u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4ED240 raw=0x732E7866");
    // 0x4ed244: 0x69736e65  ldl         $s3, 0x6E65($t3)
    ctx->pc = 0x4ed244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x4ed248: 0x696c6962  ldl         $t4, 0x6962($t3)
    ctx->pc = 0x4ed248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26978); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x4ed24c: 0x652e7974  daddiu      $t6, $t1, 0x7974
    ctx->pc = 0x4ed24cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)31092);
    // 0x4ed250: 0x79766e  .word       0x0079766E                   # dsub        $t6, $v1, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 25); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
    // 0x4ed254: 0x0  nop
    ctx->pc = 0x4ed254u;
    // NOP
label_4ed258:
    // 0x4ed258: 0x0  nop
    ctx->pc = 0x4ed258u;
    // NOP
    // 0x4ed25c: 0x0  nop
    ctx->pc = 0x4ed25cu;
    // NOP
    ctx->pc = 0x4ed260u;
}
