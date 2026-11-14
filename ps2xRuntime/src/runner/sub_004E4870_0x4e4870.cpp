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

// Function: sub_004E4870
// Address: 0x4e4870 - 0x4e48a0
void sub_004E4870_0x4e4870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4870_0x4e4870");
#endif

    switch (ctx->pc) {
        case 0x4e4880u: goto label_4e4880;
        default: break;
    }

    ctx->pc = 0x4e4870u;

    // 0x4e4870: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e4870u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e4874: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e4874u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e4878: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e4878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e487c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_4e4880:
    if (ctx->pc == 0x4E4880u) {
        ctx->pc = 0x4E4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E487Cu;
        // 0x4e4880: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x4E4880 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4884u;
        goto label_fallthrough_0x4e487c;
    }
    ctx->pc = 0x4E487Cu;
    {
        const bool branch_taken_0x4e487c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e487c) {
            ctx->pc = 0x4E4880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E487Cu;
            // 0x4e4880: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E4880 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFA14u;
            return;
        }
    }
label_fallthrough_0x4e487c:
    ctx->pc = 0x4E4884u;
    // 0x4e4884: 0x6f6e6f6d  ldr         $t6, 0x6F6D($k1)
    ctx->pc = 0x4e4884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x4e4888: 0x6f726863  ldr         $s2, 0x6863($k1)
    ctx->pc = 0x4e4888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x4e488c: 0x742e656d  .word       0x742E656D                   # INVALID     $at, $t6, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e488cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E488C raw=0x742E656D");
    // 0x4e4890: 0x7478  dsll        $t6, $zero, 17
    ctx->pc = 0x4e4890u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 17);
    // 0x4e4894: 0x0  nop
    ctx->pc = 0x4e4894u;
    // NOP
    // 0x4e4898: 0x0  nop
    ctx->pc = 0x4e4898u;
    // NOP
    // 0x4e489c: 0x0  nop
    ctx->pc = 0x4e489cu;
    // NOP
    ctx->pc = 0x4e48a0u;
}
