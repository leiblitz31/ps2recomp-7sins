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

// Function: sub_005DEED0
// Address: 0x5deed0 - 0x5deef0
void sub_005DEED0_0x5deed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEED0_0x5deed0");
#endif

    ctx->pc = 0x5deed0u;

    // 0x5deed0: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5deed0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x5deed4: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5deed4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5deed8: 0x74697773  .word       0x74697773                   # INVALID     $v1, $t1, 0x7773 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5deed8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEED8 raw=0x74697773");
    // 0x5deedc: 0x61206863  daddi       $zero, $t1, 0x6863
    ctx->pc = 0x5deedcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)26723; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5deee0: 0x6d756772  ldr         $s5, 0x6772($t3)
    ctx->pc = 0x5deee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26482); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x5deee4: 0x746e65  .word       0x00746E65                   # or          $t5, $v1, $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5deee4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x5deee8: 0x0  nop
    ctx->pc = 0x5deee8u;
    // NOP
    // 0x5deeec: 0x0  nop
    ctx->pc = 0x5deeecu;
    // NOP
    ctx->pc = 0x5deef0u;
}
