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

// Function: sub_00349D98
// Address: 0x349d98 - 0x349e30
void sub_00349D98_0x349d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349D98_0x349d98");
#endif

    switch (ctx->pc) {
        case 0x349dd8u: goto label_349dd8;
        case 0x349de0u: goto label_349de0;
        case 0x349df4u: goto label_349df4;
        default: break;
    }

    ctx->pc = 0x349d98u;

    // 0x349d98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x349d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x349d9c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x349d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x349da0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x349da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x349da4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x349da4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349da8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x349da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x349dac: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x349dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x349db0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x349db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x349db4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x349db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349dbc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x349dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x349dc0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x349dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x349dc4: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x349DC4u;
    {
        const bool branch_taken_0x349dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x349DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349DC4u;
        // 0x349dc8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349dc4) {
            ctx->pc = 0x349E04u;
            goto label_349e04;
        }
    }
    ctx->pc = 0x349DCCu;
    // 0x349dcc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x349dccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x349dd0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x349dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349dd4: 0x0  nop
    ctx->pc = 0x349dd4u;
    // NOP
label_349dd8:
    // 0x349dd8: 0xc0d052e  jal         func_3414B8
    ctx->pc = 0x349DD8u;
    SET_GPR_U32(ctx, 31, 0x349DE0u);
    ctx->pc = 0x349DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349DD8u;
    // 0x349ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3414B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3414B8u, 0x349DD8u, 0x349DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349DE0u;
label_349de0:
    // 0x349de0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x349DE0u;
    {
        const bool branch_taken_0x349de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x349DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349DE0u;
        // 0x349de4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349de0) {
            ctx->pc = 0x349DF8u;
            goto label_349df8;
        }
    }
    ctx->pc = 0x349DE8u;
    // 0x349de8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x349de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349dec: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x349DECu;
    SET_GPR_U32(ctx, 31, 0x349DF4u);
    ctx->pc = 0x349DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349DECu;
    // 0x349df0: 0xac520008  sw          $s2, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x349DECu, 0x349DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349DF4u;
label_349df4:
    // 0x349df4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x349df4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_349df8:
    // 0x349df8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x349df8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x349dfc: 0x1611fff6  bne         $s0, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x349DFCu;
    {
        const bool branch_taken_0x349dfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x349dfc) {
            ctx->pc = 0x349DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349dd8;
        }
    }
    ctx->pc = 0x349E04u;
label_349e04:
    // 0x349e04: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x349e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x349e08: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x349e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e0c: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x349e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x349e10: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x349e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x349e14: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x349e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349e18: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x349e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349e1c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x349e1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349e20: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x349e20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349e28: 0x3e00008  jr          $ra
    ctx->pc = 0x349E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E28u;
        // 0x349e2c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349E30u;
}
