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

// Function: sub_004E4140
// Address: 0x4e4140 - 0x4e4160
void sub_004E4140_0x4e4140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4140_0x4e4140");
#endif

    switch (ctx->pc) {
        case 0x4e4148u: goto label_4e4148;
        default: break;
    }

    ctx->pc = 0x4e4140u;

    // 0x4e4140: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e4140u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e4144: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e4144u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e4148:
    // 0x4e4148: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e4148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e414c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E414Cu;
    {
        const bool branch_taken_0x4e414c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e414c) {
            ctx->pc = 0x4E4150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E414Cu;
            // 0x4e4150: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E4150 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF2E4u;
            return;
        }
    }
    ctx->pc = 0x4E4154u;
    // 0x4e4154: 0x74647263  .word       0x74647263                   # INVALID     $v1, $a0, 0x7263 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4154u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4154 raw=0x74647263");
    // 0x4e4158: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4158u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4158 raw=0x7478742E");
    // 0x4e415c: 0x0  nop
    ctx->pc = 0x4e415cu;
    // NOP
    ctx->pc = 0x4e4160u;
}
