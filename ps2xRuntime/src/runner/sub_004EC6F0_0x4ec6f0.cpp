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

// Function: sub_004EC6F0
// Address: 0x4ec6f0 - 0x4ec710
void sub_004EC6F0_0x4ec6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC6F0_0x4ec6f0");
#endif

    ctx->pc = 0x4ec6f0u;

    // 0x4ec6f0: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec6f4: 0x656e2e6c  daddiu      $t6, $t3, 0x2E6C
    ctx->pc = 0x4ec6f4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11884);
    // 0x4ec6f8: 0x67612d77  daddiu      $at, $k1, 0x2D77
    ctx->pc = 0x4ec6f8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)11639);
    // 0x4ec6fc: 0x65732e65  daddiu      $s3, $t3, 0x2E65
    ctx->pc = 0x4ec6fcu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11877);
    // 0x4ec700: 0x7469736e  .word       0x7469736E                   # INVALID     $v1, $t1, 0x736E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec700u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC700 raw=0x7469736E");
    // 0x4ec704: 0x74697669  .word       0x74697669                   # INVALID     $v1, $t1, 0x7669 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec704u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC704 raw=0x74697669");
    // 0x4ec708: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec708u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4EC708 raw=0x00000079");
    // 0x4ec70c: 0x0  nop
    ctx->pc = 0x4ec70cu;
    // NOP
    ctx->pc = 0x4ec710u;
}
