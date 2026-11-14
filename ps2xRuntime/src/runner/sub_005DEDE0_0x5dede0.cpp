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

// Function: sub_005DEDE0
// Address: 0x5dede0 - 0x5dedf0
void sub_005DEDE0_0x5dede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEDE0_0x5dede0");
#endif

    ctx->pc = 0x5dede0u;

    // 0x5dede0: 0x72506f62  .word       0x72506F62                   # INVALID     $s2, $s0, 0x6F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dede0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x5DEDE0 raw=0x72506F62");
    // 0x5dede4: 0x6e6f6365  ldr         $t7, 0x6365($s3)
    ctx->pc = 0x5dede4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25445); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x5dede8: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dede8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x5dedec: 0x0  nop
    ctx->pc = 0x5dedecu;
    // NOP
    ctx->pc = 0x5dedf0u;
}
