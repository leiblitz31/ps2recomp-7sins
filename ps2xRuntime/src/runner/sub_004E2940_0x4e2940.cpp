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

// Function: sub_004E2940
// Address: 0x4e2940 - 0x4e2960
void sub_004E2940_0x4e2940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2940_0x4e2940");
#endif

    ctx->pc = 0x4e2940u;

    // 0x4e2940: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e2940u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e2944: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e2944u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e2948: 0x76656c5c  .word       0x76656C5C                   # INVALID     $s3, $a1, 0x6C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2948u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2948 raw=0x76656C5C");
    // 0x4e294c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E294Cu;
    {
        const bool branch_taken_0x4e294c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e294c) {
            ctx->pc = 0x4E2950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E294Cu;
            // 0x4e2950: 0x61657261  daddi       $a1, $t3, 0x7261 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FDAE4u;
            return;
        }
    }
    ctx->pc = 0x4E2954u;
    // 0x4e2954: 0x7475745f  .word       0x7475745F                   # INVALID     $v1, $s5, 0x745F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2954u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2954 raw=0x7475745F");
    // 0x4e2958: 0x37742e6f  ori         $s4, $k1, 0x2E6F
    ctx->pc = 0x4e2958u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 27) | (uint64_t)(uint16_t)11887);
    // 0x4e295c: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e295cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e2960u;
}
