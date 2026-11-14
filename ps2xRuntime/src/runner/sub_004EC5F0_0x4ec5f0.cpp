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

// Function: sub_004EC5F0
// Address: 0x4ec5f0 - 0x4ec600
void sub_004EC5F0_0x4ec5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC5F0_0x4ec5f0");
#endif

    ctx->pc = 0x4ec5f0u;

    // 0x4ec5f0: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec5f4: 0x72642e6c  .word       0x72642E6C                   # INVALID     $s3, $a0, 0x2E6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec5f4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4EC5F4 raw=0x72642E6C");
    // 0x4ec5f8: 0x6575676f  daddiu      $s5, $t3, 0x676F
    ctx->pc = 0x4ec5f8u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26479);
    // 0x4ec5fc: 0x0  nop
    ctx->pc = 0x4ec5fcu;
    // NOP
    ctx->pc = 0x4ec600u;
}
