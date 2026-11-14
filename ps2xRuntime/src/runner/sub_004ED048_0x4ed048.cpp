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

// Function: sub_004ED048
// Address: 0x4ed048 - 0x4ed060
void sub_004ED048_0x4ed048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED048_0x4ed048");
#endif

    ctx->pc = 0x4ed048u;

    // 0x4ed048: 0x652e7866  daddiu      $t6, $t1, 0x7866
    ctx->pc = 0x4ed048u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)30822);
    // 0x4ed04c: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed04cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4ED04C raw=0x7265746E");
    // 0x4ed050: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4ed050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ed054: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed054u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x4ed058: 0x0  nop
    ctx->pc = 0x4ed058u;
    // NOP
    // 0x4ed05c: 0x0  nop
    ctx->pc = 0x4ed05cu;
    // NOP
    ctx->pc = 0x4ed060u;
}
