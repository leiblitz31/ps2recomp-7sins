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

// Function: sub_004EC750
// Address: 0x4ec750 - 0x4ec770
void sub_004EC750_0x4ec750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC750_0x4ec750");
#endif

    ctx->pc = 0x4ec750u;

    // 0x4ec750: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec754: 0x656a2e6c  daddiu      $t2, $t3, 0x2E6C
    ctx->pc = 0x4ec754u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11884);
    // 0x4ec758: 0x65732d74  daddiu      $s3, $t3, 0x2D74
    ctx->pc = 0x4ec758u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11636);
    // 0x4ec75c: 0x65732e74  daddiu      $s3, $t3, 0x2E74
    ctx->pc = 0x4ec75cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11892);
    // 0x4ec760: 0x7469736e  .word       0x7469736E                   # INVALID     $v1, $t1, 0x736E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec760u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC760 raw=0x7469736E");
    // 0x4ec764: 0x74697669  .word       0x74697669                   # INVALID     $v1, $t1, 0x7669 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec764u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC764 raw=0x74697669");
    // 0x4ec768: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec768u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4EC768 raw=0x00000079");
    // 0x4ec76c: 0x0  nop
    ctx->pc = 0x4ec76cu;
    // NOP
    ctx->pc = 0x4ec770u;
}
