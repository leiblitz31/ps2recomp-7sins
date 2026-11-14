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

// Function: sub_005E0C00
// Address: 0x5e0c00 - 0x5e0c40
void sub_005E0C00_0x5e0c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005E0C00_0x5e0c00");
#endif

    switch (ctx->pc) {
        case 0x5e0c34u: goto label_5e0c34;
        default: break;
    }

    ctx->pc = 0x5e0c00u;

    // 0x5e0c00: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0C00u;
    {
        const bool branch_taken_0x5e0c00 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0c00) {
            ctx->pc = 0x5E0C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0C00u;
            // 0x5e0c04: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDD94u;
            return;
        }
    }
    ctx->pc = 0x5E0C08u;
    // 0x5e0c08: 0x65526432  daddiu      $s2, $t2, 0x6432
    ctx->pc = 0x5e0c08u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25650);
    // 0x5e0c0c: 0x3a3a7463  xori        $k0, $s1, 0x7463
    ctx->pc = 0x5e0c0cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29795);
    // 0x5e0c10: 0x53677464  beql        $k1, $a3, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5E0C10u;
    {
        const bool branch_taken_0x5e0c10 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 7));
        if (branch_taken_0x5e0c10) {
            ctx->pc = 0x5E0C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0C10u;
            // 0x5e0c14: 0x65706168  daddiu      $s0, $t3, 0x6168 (Delay Slot)
            SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDDA4u;
            return;
        }
    }
    ctx->pc = 0x5E0C18u;
    // 0x5e0c18: 0x65526432  daddiu      $s2, $t2, 0x6432
    ctx->pc = 0x5e0c18u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25650);
    // 0x5e0c1c: 0x2d207463  sltiu       $zero, $t1, 0x7463
    ctx->pc = 0x5e0c1cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)29795) ? 1 : 0);
    // 0x5e0c20: 0x52203e2d  beql        $s1, $zero, . + 4 + (0x3E2D << 2)
    ctx->pc = 0x5E0C20u;
    {
        const bool branch_taken_0x5e0c20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5e0c20) {
            ctx->pc = 0x5E0C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0C20u;
            // 0x5e0c24: 0x53643274  beql        $k1, $a0, . + 4 + (0x3274 << 2) (Delay Slot)
            // Likely branch instruction at 0x5E0C24 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F04D8u;
            return;
        }
    }
    ctx->pc = 0x5E0C28u;
    // 0x5e0c28: 0x65706168  daddiu      $s0, $t3, 0x6168
    ctx->pc = 0x5e0c28u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24936);
    // 0x5e0c2c: 0x4e646441  .word       0x4E646441                   # INVALID     $s3, $a0, 0x6441 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5e0c2cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5E0C2C raw=0x4E646441");
    // 0x5e0c30: 0x2065646f  addi        $a1, $v1, 0x646F
    ctx->pc = 0x5e0c30u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25711, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5e0c34:
    // 0x5e0c34: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x5e0c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5e0c38: 0xa6465  .word       0x000A6465                   # or          $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5e0c38u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
    // 0x5e0c3c: 0x0  nop
    ctx->pc = 0x5e0c3cu;
    // NOP
    ctx->pc = 0x5e0c40u;
}
