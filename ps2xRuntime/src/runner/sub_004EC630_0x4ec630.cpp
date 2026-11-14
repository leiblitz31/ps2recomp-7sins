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

// Function: sub_004EC630
// Address: 0x4ec630 - 0x4ec650
void sub_004EC630_0x4ec630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC630_0x4ec630");
#endif

    ctx->pc = 0x4ec630u;

    // 0x4ec630: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec634: 0x616d2e6c  daddi       $t5, $t3, 0x2E6C
    ctx->pc = 0x4ec634u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11884; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x4ec638: 0x2e6f6863  sltiu       $t7, $s3, 0x6863
    ctx->pc = 0x4ec638u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26723) ? 1 : 0);
    // 0x4ec63c: 0x736e6573  .word       0x736E6573                   # INVALID     $k1, $t6, 0x6573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec63cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4EC63C raw=0x736E6573");
    // 0x4ec640: 0x76697469  .word       0x76697469                   # INVALID     $s3, $t1, 0x7469 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec640u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC640 raw=0x76697469");
    // 0x4ec644: 0x797469  .word       0x00797469                   # mtsa        $v1 # 00197440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ec644u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    // 0x4ec648: 0x0  nop
    ctx->pc = 0x4ec648u;
    // NOP
    // 0x4ec64c: 0x0  nop
    ctx->pc = 0x4ec64cu;
    // NOP
    ctx->pc = 0x4ec650u;
}
