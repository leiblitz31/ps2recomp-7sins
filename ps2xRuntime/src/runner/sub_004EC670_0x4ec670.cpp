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

// Function: sub_004EC670
// Address: 0x4ec670 - 0x4ec690
void sub_004EC670_0x4ec670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC670_0x4ec670");
#endif

    ctx->pc = 0x4ec670u;

    // 0x4ec670: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec674: 0x75632e6c  .word       0x75632E6C                   # INVALID     $t3, $v1, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec674u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC674 raw=0x75632E6C");
    // 0x4ec678: 0x7275746c  .word       0x7275746C                   # INVALID     $s3, $s5, 0x746C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec678u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4EC678 raw=0x7275746C");
    // 0x4ec67c: 0x65732e65  daddiu      $s3, $t3, 0x2E65
    ctx->pc = 0x4ec67cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11877);
    // 0x4ec680: 0x7469736e  .word       0x7469736E                   # INVALID     $v1, $t1, 0x736E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec680u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC680 raw=0x7469736E");
    // 0x4ec684: 0x74697669  .word       0x74697669                   # INVALID     $v1, $t1, 0x7669 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec684u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC684 raw=0x74697669");
    // 0x4ec688: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ec688u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4EC688 raw=0x00000079");
    // 0x4ec68c: 0x0  nop
    ctx->pc = 0x4ec68cu;
    // NOP
    ctx->pc = 0x4ec690u;
}
