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

// Function: sub_00418CC8
// Address: 0x418cc8 - 0x418d50
void sub_00418CC8_0x418cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418CC8_0x418cc8");
#endif

    switch (ctx->pc) {
        case 0x418cc8u: goto label_418cc8;
        case 0x418cccu: goto label_418ccc;
        case 0x418cd0u: goto label_418cd0;
        case 0x418cd4u: goto label_418cd4;
        case 0x418cd8u: goto label_418cd8;
        case 0x418cdcu: goto label_418cdc;
        case 0x418ce0u: goto label_418ce0;
        case 0x418ce4u: goto label_418ce4;
        case 0x418ce8u: goto label_418ce8;
        case 0x418cecu: goto label_418cec;
        case 0x418cf0u: goto label_418cf0;
        case 0x418cf4u: goto label_418cf4;
        case 0x418cf8u: goto label_418cf8;
        case 0x418cfcu: goto label_418cfc;
        case 0x418d00u: goto label_418d00;
        case 0x418d04u: goto label_418d04;
        case 0x418d08u: goto label_418d08;
        case 0x418d0cu: goto label_418d0c;
        case 0x418d10u: goto label_418d10;
        case 0x418d14u: goto label_418d14;
        case 0x418d18u: goto label_418d18;
        case 0x418d1cu: goto label_418d1c;
        case 0x418d20u: goto label_418d20;
        case 0x418d24u: goto label_418d24;
        case 0x418d28u: goto label_418d28;
        case 0x418d2cu: goto label_418d2c;
        case 0x418d30u: goto label_418d30;
        case 0x418d34u: goto label_418d34;
        case 0x418d38u: goto label_418d38;
        case 0x418d3cu: goto label_418d3c;
        case 0x418d40u: goto label_418d40;
        case 0x418d44u: goto label_418d44;
        case 0x418d48u: goto label_418d48;
        case 0x418d4cu: goto label_418d4c;
        default: break;
    }

    ctx->pc = 0x418cc8u;

label_418cc8:
    // 0x418cc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x418cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_418ccc:
    // 0x418ccc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x418cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_418cd0:
    // 0x418cd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x418cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_418cd4:
    // 0x418cd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x418cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418cd8:
    // 0x418cd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x418cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_418cdc:
    // 0x418cdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418ce0:
    // 0x418ce0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x418ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_418ce4:
    // 0x418ce4: 0x2451e890  addiu       $s1, $v0, -0x1770
    ctx->pc = 0x418ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
label_418ce8:
    // 0x418ce8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418cec:
    // 0x418cec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x418cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_418cf0:
    // 0x418cf0: 0x40f809  jalr        $v0
label_418cf4:
    if (ctx->pc == 0x418CF4u) {
        ctx->pc = 0x418CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418CF0u;
        // 0x418cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418CF8u;
        goto label_418cf8;
    }
    ctx->pc = 0x418CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418CF8u);
        ctx->pc = 0x418CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418CF0u;
        // 0x418cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418CF0u, 0x418CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418CF8u;
label_418cf8:
    // 0x418cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x418cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_418cfc:
    // 0x418cfc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_418d00:
    if (ctx->pc == 0x418D00u) {
        ctx->pc = 0x418D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418CFCu;
        // 0x418d00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418D04u;
        goto label_418d04;
    }
    ctx->pc = 0x418CFCu;
    {
        const bool branch_taken_0x418cfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x418D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418CFCu;
        // 0x418d00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418cfc) {
            ctx->pc = 0x418D20u;
            goto label_418d20;
        }
    }
    ctx->pc = 0x418D04u;
label_418d04:
    // 0x418d04: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x418d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_418d08:
    // 0x418d08: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x418d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_418d0c:
    // 0x418d0c: 0xc1035f6  jal         func_40D7D8
label_418d10:
    if (ctx->pc == 0x418D10u) {
        ctx->pc = 0x418D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418D0Cu;
        // 0x418d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418D14u;
        goto label_418d14;
    }
    ctx->pc = 0x418D0Cu;
    SET_GPR_U32(ctx, 31, 0x418D14u);
    ctx->pc = 0x418D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418D0Cu;
    // 0x418d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x418D0Cu, 0x418D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418D14u;
label_418d14:
    // 0x418d14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x418d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_418d18:
    // 0x418d18: 0xc103628  jal         func_40D8A0
label_418d1c:
    if (ctx->pc == 0x418D1Cu) {
        ctx->pc = 0x418D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418D18u;
        // 0x418d1c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418D20u;
        goto label_418d20;
    }
    ctx->pc = 0x418D18u;
    SET_GPR_U32(ctx, 31, 0x418D20u);
    ctx->pc = 0x418D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418D18u;
    // 0x418d1c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x418D18u, 0x418D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418D20u;
label_418d20:
    // 0x418d20: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_418d24:
    if (ctx->pc == 0x418D24u) {
        ctx->pc = 0x418D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418D20u;
        // 0x418d24: 0x8f82ad80  lw          $v0, -0x5280($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418D28u;
        goto label_418d28;
    }
    ctx->pc = 0x418D20u;
    {
        const bool branch_taken_0x418d20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x418D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418D20u;
        // 0x418d24: 0x8f82ad80  lw          $v0, -0x5280($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418d20) {
            ctx->pc = 0x418D38u;
            goto label_418d38;
        }
    }
    ctx->pc = 0x418D28u;
label_418d28:
    // 0x418d28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x418d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418d2c:
    // 0x418d2c: 0xae230114  sw          $v1, 0x114($s1)
    ctx->pc = 0x418d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 3));
label_418d30:
    // 0x418d30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x418d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_418d34:
    // 0x418d34: 0xaf82ad80  sw          $v0, -0x5280($gp)
    ctx->pc = 0x418d34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946176), GPR_U32(ctx, 2));
label_418d38:
    // 0x418d38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x418d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_418d3c:
    // 0x418d3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x418d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_418d40:
    // 0x418d40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x418d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_418d44:
    // 0x418d44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x418d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_418d48:
    // 0x418d48: 0x3e00008  jr          $ra
label_418d4c:
    if (ctx->pc == 0x418D4Cu) {
        ctx->pc = 0x418D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418D48u;
        // 0x418d4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418D50u;
        goto label_fallthrough_0x418d48;
    }
    ctx->pc = 0x418D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418D48u;
        // 0x418d4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x418d48:
    ctx->pc = 0x418D50u;
}
