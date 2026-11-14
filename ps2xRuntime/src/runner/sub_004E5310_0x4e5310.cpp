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

// Function: sub_004E5310
// Address: 0x4e5310 - 0x4e5320
void sub_004E5310_0x4e5310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5310_0x4e5310");
#endif

    ctx->pc = 0x4e5310u;

    // 0x4e5310: 0x6e75616c  ldr         $s5, 0x616C($s3)
    ctx->pc = 0x4e5310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x4e5314: 0x64656863  daddiu      $a1, $v1, 0x6863
    ctx->pc = 0x4e5314u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26723);
    // 0x4e5318: 0x7463615f  .word       0x7463615F                   # INVALID     $v1, $v1, 0x615F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e5318u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E5318 raw=0x7463615F");
    // 0x4e531c: 0x6e6f69  .word       0x006E6F69                   # mtsa        $v1 # 000E6F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e531cu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    ctx->pc = 0x4e5320u;
}
