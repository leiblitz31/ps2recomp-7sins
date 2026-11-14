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

// Function: sub_005DEF60
// Address: 0x5def60 - 0x5def80
void sub_005DEF60_0x5def60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEF60_0x5def60");
#endif

    switch (ctx->pc) {
        case 0x5def6cu: goto label_5def6c;
        default: break;
    }

    ctx->pc = 0x5def60u;

    // 0x5def60: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5def60u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x5def64: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5def64u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5def68: 0x4d435444  .word       0x4D435444                   # INVALID     $t2, $v1, 0x5444 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5def68u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEF68 raw=0x4D435444");
label_5def6c:
    // 0x5def6c: 0x41434d45  .word       0x41434D45                   # INVALID     $t2, $v1, 0x4D45 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5def6cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5DEF6C raw=0x41434D45");
    // 0x5def70: 0x54534452  bnel        $v0, $s3, . + 4 + (0x4452 << 2)
    ctx->pc = 0x5DEF70u;
    {
        const bool branch_taken_0x5def70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x5def70) {
            ctx->pc = 0x5DEF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DEF70u;
            // 0x5def74: 0x455441  .word       0x00455441                   # INVALID     $v0, $a1, 0x5441 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DEF74 raw=0x00455441");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F00BCu;
            return;
        }
    }
    ctx->pc = 0x5DEF78u;
    // 0x5def78: 0x0  nop
    ctx->pc = 0x5def78u;
    // NOP
    // 0x5def7c: 0x0  nop
    ctx->pc = 0x5def7cu;
    // NOP
    ctx->pc = 0x5def80u;
}
