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

// Function: sub_004EC560
// Address: 0x4ec560 - 0x4ec570
void sub_004EC560_0x4ec560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC560_0x4ec560");
#endif

    ctx->pc = 0x4ec560u;

    // 0x4ec560: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec564: 0x72662e6c  .word       0x72662E6C                   # INVALID     $s3, $a2, 0x2E6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec564u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4EC564 raw=0x72662E6C");
    // 0x4ec568: 0x6c696761  ldr         $t1, 0x6761($v1)
    ctx->pc = 0x4ec568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26465); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec56c: 0x657469  .word       0x00657469                   # mtsa        $v1 # 00057440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ec56cu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    ctx->pc = 0x4ec570u;
}
