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

// Function: sub_004E2960
// Address: 0x4e2960 - 0x4e2980
void sub_004E2960_0x4e2960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2960_0x4e2960");
#endif

    switch (ctx->pc) {
        case 0x4e2964u: goto label_4e2964;
        default: break;
    }

    ctx->pc = 0x4e2960u;

    // 0x4e2960: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e2960u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_4e2964:
    // 0x4e2964: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e2964u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e2968: 0x76656c5c  .word       0x76656C5C                   # INVALID     $s3, $a1, 0x6C5C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2968u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2968 raw=0x76656C5C");
    // 0x4e296c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E296Cu;
    {
        const bool branch_taken_0x4e296c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e296c) {
            ctx->pc = 0x4E2970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E296Cu;
            // 0x4e2970: 0x2e70616d  sltiu       $s0, $s3, 0x616D (Delay Slot)
            SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FDB04u;
            return;
        }
    }
    ctx->pc = 0x4E2974u;
    // 0x4e2974: 0x733774  teq         $v1, $s3, 221
    ctx->pc = 0x4e2974u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e2978: 0x0  nop
    ctx->pc = 0x4e2978u;
    // NOP
    // 0x4e297c: 0x0  nop
    ctx->pc = 0x4e297cu;
    // NOP
    ctx->pc = 0x4e2980u;
}
