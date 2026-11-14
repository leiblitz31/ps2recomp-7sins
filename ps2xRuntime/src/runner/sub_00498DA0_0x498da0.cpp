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

// Function: sub_00498DA0
// Address: 0x498da0 - 0x498df8
void sub_00498DA0_0x498da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498DA0_0x498da0");
#endif

    switch (ctx->pc) {
        case 0x498da0u: goto label_498da0;
        case 0x498da4u: goto label_498da4;
        case 0x498da8u: goto label_498da8;
        case 0x498dacu: goto label_498dac;
        case 0x498db0u: goto label_498db0;
        case 0x498db4u: goto label_498db4;
        case 0x498db8u: goto label_498db8;
        case 0x498dbcu: goto label_498dbc;
        case 0x498dc0u: goto label_498dc0;
        case 0x498dc4u: goto label_498dc4;
        case 0x498dc8u: goto label_498dc8;
        case 0x498dccu: goto label_498dcc;
        case 0x498dd0u: goto label_498dd0;
        case 0x498dd4u: goto label_498dd4;
        case 0x498dd8u: goto label_498dd8;
        case 0x498ddcu: goto label_498ddc;
        case 0x498de0u: goto label_498de0;
        case 0x498de4u: goto label_498de4;
        case 0x498de8u: goto label_498de8;
        case 0x498decu: goto label_498dec;
        case 0x498df0u: goto label_498df0;
        case 0x498df4u: goto label_498df4;
        default: break;
    }

    ctx->pc = 0x498da0u;

label_498da0:
    // 0x498da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_498da4:
    // 0x498da4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x498da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_498da8:
    // 0x498da8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x498da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_498dac:
    // 0x498dac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_498db0:
    // 0x498db0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x498db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_498db4:
    // 0x498db4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_498db8:
    if (ctx->pc == 0x498DB8u) {
        ctx->pc = 0x498DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498DB4u;
        // 0x498db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498DBCu;
        goto label_498dbc;
    }
    ctx->pc = 0x498DB4u;
    {
        const bool branch_taken_0x498db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x498DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498DB4u;
        // 0x498db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498db4) {
            ctx->pc = 0x498DE8u;
            goto label_498de8;
        }
    }
    ctx->pc = 0x498DBCu;
label_498dbc:
    // 0x498dbc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x498dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_498dc0:
    // 0x498dc0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x498dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_498dc4:
    // 0x498dc4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x498dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_498dc8:
    // 0x498dc8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x498dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_498dcc:
    // 0x498dcc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x498dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_498dd0:
    // 0x498dd0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x498dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_498dd4:
    // 0x498dd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x498dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_498dd8:
    // 0x498dd8: 0x40f809  jalr        $v0
label_498ddc:
    if (ctx->pc == 0x498DDCu) {
        ctx->pc = 0x498DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498DD8u;
        // 0x498ddc: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498DE0u;
        goto label_498de0;
    }
    ctx->pc = 0x498DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x498DE0u);
        ctx->pc = 0x498DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498DD8u;
        // 0x498ddc: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498DD8u, 0x498DE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x498DE0u;
label_498de0:
    // 0x498de0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x498de0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_498de4:
    // 0x498de4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x498de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_498de8:
    // 0x498de8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x498de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_498dec:
    // 0x498dec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x498decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_498df0:
    // 0x498df0: 0x3e00008  jr          $ra
label_498df4:
    if (ctx->pc == 0x498DF4u) {
        ctx->pc = 0x498DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498DF0u;
        // 0x498df4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x498DF8u;
        goto label_fallthrough_0x498df0;
    }
    ctx->pc = 0x498DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498DF0u;
        // 0x498df4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x498df0:
    ctx->pc = 0x498DF8u;
}
