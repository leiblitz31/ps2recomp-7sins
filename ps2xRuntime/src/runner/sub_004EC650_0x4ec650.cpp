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

// Function: sub_004EC650
// Address: 0x4ec650 - 0x4ec670
void sub_004EC650_0x4ec650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC650_0x4ec650");
#endif

    ctx->pc = 0x4ec650u;

    // 0x4ec650: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec654: 0x65732e6c  daddiu      $s3, $t3, 0x2E6C
    ctx->pc = 0x4ec654u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11884);
    // 0x4ec658: 0x75656972  .word       0x75656972                   # INVALID     $t3, $a1, 0x6972 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec658u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC658 raw=0x75656972");
    // 0x4ec65c: 0x65732e78  daddiu      $s3, $t3, 0x2E78
    ctx->pc = 0x4ec65cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11896);
    // 0x4ec660: 0x7469736e  .word       0x7469736E                   # INVALID     $v1, $t1, 0x736E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec660u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC660 raw=0x7469736E");
    // 0x4ec664: 0x74697669  .word       0x74697669                   # INVALID     $v1, $t1, 0x7669 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec664u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC664 raw=0x74697669");
    // 0x4ec668: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec668u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4EC668 raw=0x00000079");
    // 0x4ec66c: 0x0  nop
    ctx->pc = 0x4ec66cu;
    // NOP
    ctx->pc = 0x4ec670u;
}
