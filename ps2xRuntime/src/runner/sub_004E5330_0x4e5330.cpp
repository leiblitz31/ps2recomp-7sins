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

// Function: sub_004E5330
// Address: 0x4e5330 - 0x4e5340
void sub_004E5330_0x4e5330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5330_0x4e5330");
#endif

    switch (ctx->pc) {
        case 0x4e5334u: goto label_4e5334;
        default: break;
    }

    ctx->pc = 0x4e5330u;

    // 0x4e5330: 0x67756167  daddiu      $s5, $k1, 0x6167
    ctx->pc = 0x4e5330u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
label_4e5334:
    // 0x4e5334: 0x6e695f65  ldr         $t1, 0x5F65($s3)
    ctx->pc = 0x4e5334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24421); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e5338: 0x6f66  .word       0x00006F66                   # xor         $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5338u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
    // 0x4e533c: 0x0  nop
    ctx->pc = 0x4e533cu;
    // NOP
    ctx->pc = 0x4e5340u;
}
