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

// Function: sub_004E2800
// Address: 0x4e2800 - 0x4e2818
void sub_004E2800_0x4e2800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2800_0x4e2800");
#endif

    ctx->pc = 0x4e2800u;

    // 0x4e2800: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e2800u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e2804: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e2804u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e2808: 0x76656c5c  .word       0x76656C5C                   # INVALID     $s3, $a1, 0x6C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2808u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2808 raw=0x76656C5C");
    // 0x4e280c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E280Cu;
    {
        const bool branch_taken_0x4e280c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e280c) {
            ctx->pc = 0x4FD9A4u;
            return;
        }
    }
    ctx->pc = 0x4E2814u;
    // 0x4e2814: 0x0  nop
    ctx->pc = 0x4e2814u;
    // NOP
    ctx->pc = 0x4e2818u;
}
