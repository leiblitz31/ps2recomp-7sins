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

// Function: sub_004EC690
// Address: 0x4ec690 - 0x4ec6b0
void sub_004EC690_0x4ec690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC690_0x4ec690");
#endif

    ctx->pc = 0x4ec690u;

    // 0x4ec690: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec694: 0x75632e6c  .word       0x75632E6C                   # INVALID     $t3, $v1, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec694u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC694 raw=0x75632E6C");
    // 0x4ec698: 0x65732e6c  daddiu      $s3, $t3, 0x2E6C
    ctx->pc = 0x4ec698u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11884);
    // 0x4ec69c: 0x7469736e  .word       0x7469736E                   # INVALID     $v1, $t1, 0x736E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec69cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC69C raw=0x7469736E");
    // 0x4ec6a0: 0x74697669  .word       0x74697669                   # INVALID     $v1, $t1, 0x7669 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec6a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC6A0 raw=0x74697669");
    // 0x4ec6a4: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec6a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4EC6A4 raw=0x00000079");
    // 0x4ec6a8: 0x0  nop
    ctx->pc = 0x4ec6a8u;
    // NOP
    // 0x4ec6ac: 0x0  nop
    ctx->pc = 0x4ec6acu;
    // NOP
    ctx->pc = 0x4ec6b0u;
}
