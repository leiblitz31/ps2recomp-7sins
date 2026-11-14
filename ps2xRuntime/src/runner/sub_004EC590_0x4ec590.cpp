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

// Function: sub_004EC590
// Address: 0x4ec590 - 0x4ec5a0
void sub_004EC590_0x4ec590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC590_0x4ec590");
#endif

    ctx->pc = 0x4ec590u;

    // 0x4ec590: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec594: 0x75632e6c  .word       0x75632E6C                   # INVALID     $t3, $v1, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec594u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC594 raw=0x75632E6C");
    // 0x4ec598: 0x7275746c  .word       0x7275746C                   # INVALID     $s3, $s5, 0x746C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec598u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4EC598 raw=0x7275746C");
    // 0x4ec59c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec59cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x4ec5a0u;
}
