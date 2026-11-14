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

// Function: sub_005DF2B0
// Address: 0x5df2b0 - 0x5df2d0
void sub_005DF2B0_0x5df2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF2B0_0x5df2b0");
#endif

    switch (ctx->pc) {
        case 0x5df2bcu: goto label_5df2bc;
        default: break;
    }

    ctx->pc = 0x5df2b0u;

    // 0x5df2b0: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5df2b0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x5df2b4: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5df2b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5df2b8: 0x446d756e  .word       0x446D756E                   # INVALID     $v1, $t5, 0x756E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df2b8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x2E at 0x5DF2B8 raw=0x446D756E");
label_5df2bc:
    // 0x5df2bc: 0x54737269  bnel        $v1, $s3, . + 4 + (0x7269 << 2)
    ctx->pc = 0x5DF2BCu;
    {
        const bool branch_taken_0x5df2bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x5df2bc) {
            ctx->pc = 0x5DF2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF2BCu;
            // 0x5df2c0: 0x696b536f  ldl         $t3, 0x536F($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 21359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FBC64u;
            return;
        }
    }
    ctx->pc = 0x5DF2C4u;
    // 0x5df2c4: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x5df2c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5df2c8: 0x0  nop
    ctx->pc = 0x5df2c8u;
    // NOP
    // 0x5df2cc: 0x0  nop
    ctx->pc = 0x5df2ccu;
    // NOP
    ctx->pc = 0x5df2d0u;
}
