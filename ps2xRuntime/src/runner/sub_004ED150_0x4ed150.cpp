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

// Function: sub_004ED150
// Address: 0x4ed150 - 0x4ed168
void sub_004ED150_0x4ed150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED150_0x4ed150");
#endif

    switch (ctx->pc) {
        case 0x4ed160u: goto label_4ed160;
        default: break;
    }

    ctx->pc = 0x4ed150u;

    // 0x4ed150: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ed150u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ed154: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ed154u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4ed158: 0x76656c5c  .word       0x76656C5C                   # INVALID     $s3, $a1, 0x6C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed158u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED158 raw=0x76656C5C");
    // 0x4ed15c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4ed160:
    if (ctx->pc == 0x4ED160u) {
        ctx->pc = 0x4ED164u;
        goto label_fallthrough_0x4ed15c;
    }
    ctx->pc = 0x4ED15Cu;
    {
        const bool branch_taken_0x4ed15c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4ed15c) {
            ctx->pc = 0x5082F4u;
            return;
        }
    }
label_fallthrough_0x4ed15c:
    ctx->pc = 0x4ED164u;
    // 0x4ed164: 0x0  nop
    ctx->pc = 0x4ed164u;
    // NOP
    ctx->pc = 0x4ed168u;
}
