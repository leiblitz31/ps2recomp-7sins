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

// Function: sub_0041CC18
// Address: 0x41cc18 - 0x41cc70
void sub_0041CC18_0x41cc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041CC18_0x41cc18");
#endif

    switch (ctx->pc) {
        case 0x41cc18u: goto label_41cc18;
        case 0x41cc1cu: goto label_41cc1c;
        case 0x41cc20u: goto label_41cc20;
        case 0x41cc24u: goto label_41cc24;
        case 0x41cc28u: goto label_41cc28;
        case 0x41cc2cu: goto label_41cc2c;
        case 0x41cc30u: goto label_41cc30;
        case 0x41cc34u: goto label_41cc34;
        case 0x41cc38u: goto label_41cc38;
        case 0x41cc3cu: goto label_41cc3c;
        case 0x41cc40u: goto label_41cc40;
        case 0x41cc44u: goto label_41cc44;
        case 0x41cc48u: goto label_41cc48;
        case 0x41cc4cu: goto label_41cc4c;
        case 0x41cc50u: goto label_41cc50;
        case 0x41cc54u: goto label_41cc54;
        case 0x41cc58u: goto label_41cc58;
        case 0x41cc5cu: goto label_41cc5c;
        case 0x41cc60u: goto label_41cc60;
        case 0x41cc64u: goto label_41cc64;
        case 0x41cc68u: goto label_41cc68;
        case 0x41cc6cu: goto label_41cc6c;
        default: break;
    }

    ctx->pc = 0x41cc18u;

label_41cc18:
    // 0x41cc18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41cc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41cc1c:
    // 0x41cc1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41cc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41cc20:
    // 0x41cc20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41cc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41cc24:
    // 0x41cc24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41cc24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41cc28:
    // 0x41cc28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41cc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41cc2c:
    // 0x41cc2c: 0xc0f0b92  jal         func_3C2E48
label_41cc30:
    if (ctx->pc == 0x41CC30u) {
        ctx->pc = 0x41CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC2Cu;
        // 0x41cc30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CC34u;
        goto label_41cc34;
    }
    ctx->pc = 0x41CC2Cu;
    SET_GPR_U32(ctx, 31, 0x41CC34u);
    ctx->pc = 0x41CC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41CC2Cu;
    // 0x41cc30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2E48u, 0x41CC2Cu, 0x41CC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41CC34u;
label_41cc34:
    // 0x41cc34: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_41cc38:
    if (ctx->pc == 0x41CC38u) {
        ctx->pc = 0x41CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC34u;
        // 0x41cc38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CC3Cu;
        goto label_41cc3c;
    }
    ctx->pc = 0x41CC34u;
    {
        const bool branch_taken_0x41cc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41cc34) {
            ctx->pc = 0x41CC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41CC34u;
            // 0x41cc38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41CC5Cu;
            goto label_41cc5c;
        }
    }
    ctx->pc = 0x41CC3Cu;
label_41cc3c:
    // 0x41cc3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x41cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41cc40:
    // 0x41cc40: 0x40f809  jalr        $v0
label_41cc44:
    if (ctx->pc == 0x41CC44u) {
        ctx->pc = 0x41CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC40u;
        // 0x41cc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CC48u;
        goto label_41cc48;
    }
    ctx->pc = 0x41CC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41CC48u);
        ctx->pc = 0x41CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC40u;
        // 0x41cc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CC40u, 0x41CC48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41CC48u;
label_41cc48:
    // 0x41cc48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x41cc48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41cc4c:
    // 0x41cc4c: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x41cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_41cc50:
    // 0x41cc50: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_41cc54:
    if (ctx->pc == 0x41CC54u) {
        ctx->pc = 0x41CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC50u;
        // 0x41cc54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CC58u;
        goto label_41cc58;
    }
    ctx->pc = 0x41CC50u;
    {
        const bool branch_taken_0x41cc50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC50u;
        // 0x41cc54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41cc50) {
            ctx->pc = 0x41CC5Cu;
            goto label_41cc5c;
        }
    }
    ctx->pc = 0x41CC58u;
label_41cc58:
    // 0x41cc58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41cc58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41cc5c:
    // 0x41cc5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41cc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41cc60:
    // 0x41cc60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41cc60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41cc64:
    // 0x41cc64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41cc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41cc68:
    // 0x41cc68: 0x3e00008  jr          $ra
label_41cc6c:
    if (ctx->pc == 0x41CC6Cu) {
        ctx->pc = 0x41CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC68u;
        // 0x41cc6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41CC70u;
        goto label_fallthrough_0x41cc68;
    }
    ctx->pc = 0x41CC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41CC68u;
        // 0x41cc6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41CC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41cc68:
    ctx->pc = 0x41CC70u;
}
