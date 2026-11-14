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

// Function: sub_004E6A60
// Address: 0x4e6a60 - 0x4e6a78
void sub_004E6A60_0x4e6a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6A60_0x4e6a60");
#endif

    ctx->pc = 0x4e6a60u;

    // 0x4e6a60: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6a60u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6A60 raw=0x465F474D");
    // 0x4e6a64: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6a64u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6A64 raw=0x74686769");
    // 0x4e6a68: 0x6c75565f  ldr         $s5, 0x565F($v1)
    ctx->pc = 0x4e6a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 22111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x4e6a6c: 0x6172656e  daddi       $s2, $t3, 0x656E
    ctx->pc = 0x4e6a6cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25966; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
    // 0x4e6a70: 0x656c62  .word       0x00656C62                   # sub         $t5, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6a70u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 5), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x4e6a74: 0x0  nop
    ctx->pc = 0x4e6a74u;
    // NOP
    ctx->pc = 0x4e6a78u;
}
