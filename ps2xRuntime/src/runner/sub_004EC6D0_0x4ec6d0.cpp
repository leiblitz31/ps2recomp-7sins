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

// Function: sub_004EC6D0
// Address: 0x4ec6d0 - 0x4ec6f0
void sub_004EC6D0_0x4ec6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC6D0_0x4ec6d0");
#endif

    ctx->pc = 0x4ec6d0u;

    // 0x4ec6d0: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec6d4: 0x6c662e6c  ldr         $a2, 0x2E6C($v1)
    ctx->pc = 0x4ec6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11884); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ec6d8: 0x65747461  daddiu      $s4, $t3, 0x7461
    ctx->pc = 0x4ec6d8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29793);
    // 0x4ec6dc: 0x2e656972  sltiu       $a1, $s3, 0x6972
    ctx->pc = 0x4ec6dcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26994) ? 1 : 0);
    // 0x4ec6e0: 0x736e6573  .word       0x736E6573                   # INVALID     $k1, $t6, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec6e0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4EC6E0 raw=0x736E6573");
    // 0x4ec6e4: 0x76697469  .word       0x76697469                   # INVALID     $s3, $t1, 0x7469 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec6e4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC6E4 raw=0x76697469");
    // 0x4ec6e8: 0x797469  .word       0x00797469                   # mtsa        $v1 # 00197440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ec6e8u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    // 0x4ec6ec: 0x0  nop
    ctx->pc = 0x4ec6ecu;
    // NOP
    ctx->pc = 0x4ec6f0u;
}
