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

// Function: sub_003E2B88
// Address: 0x3e2b88 - 0x3e2c08
void sub_003E2B88_0x3e2b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2B88_0x3e2b88");
#endif

    switch (ctx->pc) {
        case 0x3e2b88u: goto label_3e2b88;
        case 0x3e2b8cu: goto label_3e2b8c;
        case 0x3e2b90u: goto label_3e2b90;
        case 0x3e2b94u: goto label_3e2b94;
        case 0x3e2b98u: goto label_3e2b98;
        case 0x3e2b9cu: goto label_3e2b9c;
        case 0x3e2ba0u: goto label_3e2ba0;
        case 0x3e2ba4u: goto label_3e2ba4;
        case 0x3e2ba8u: goto label_3e2ba8;
        case 0x3e2bacu: goto label_3e2bac;
        case 0x3e2bb0u: goto label_3e2bb0;
        case 0x3e2bb4u: goto label_3e2bb4;
        case 0x3e2bb8u: goto label_3e2bb8;
        case 0x3e2bbcu: goto label_3e2bbc;
        case 0x3e2bc0u: goto label_3e2bc0;
        case 0x3e2bc4u: goto label_3e2bc4;
        case 0x3e2bc8u: goto label_3e2bc8;
        case 0x3e2bccu: goto label_3e2bcc;
        case 0x3e2bd0u: goto label_3e2bd0;
        case 0x3e2bd4u: goto label_3e2bd4;
        case 0x3e2bd8u: goto label_3e2bd8;
        case 0x3e2bdcu: goto label_3e2bdc;
        case 0x3e2be0u: goto label_3e2be0;
        case 0x3e2be4u: goto label_3e2be4;
        case 0x3e2be8u: goto label_3e2be8;
        case 0x3e2becu: goto label_3e2bec;
        case 0x3e2bf0u: goto label_3e2bf0;
        case 0x3e2bf4u: goto label_3e2bf4;
        case 0x3e2bf8u: goto label_3e2bf8;
        case 0x3e2bfcu: goto label_3e2bfc;
        case 0x3e2c00u: goto label_3e2c00;
        case 0x3e2c04u: goto label_3e2c04;
        default: break;
    }

    ctx->pc = 0x3e2b88u;

label_3e2b88:
    // 0x3e2b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e2b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e2b8c:
    // 0x3e2b8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e2b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3e2b90:
    // 0x3e2b90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e2b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e2b94:
    // 0x3e2b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e2b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e2b98:
    // 0x3e2b98: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_3e2b9c:
    if (ctx->pc == 0x3E2B9Cu) {
        ctx->pc = 0x3E2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2B98u;
        // 0x3e2b9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2BA0u;
        goto label_3e2ba0;
    }
    ctx->pc = 0x3E2B98u;
    {
        const bool branch_taken_0x3e2b98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2B98u;
        // 0x3e2b9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2b98) {
            ctx->pc = 0x3E2BA8u;
            goto label_3e2ba8;
        }
    }
    ctx->pc = 0x3E2BA0u;
label_3e2ba0:
    // 0x3e2ba0: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_3e2ba4:
    if (ctx->pc == 0x3E2BA4u) {
        ctx->pc = 0x3E2BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BA0u;
        // 0x3e2ba4: 0x8e0202ec  lw          $v0, 0x2EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2BA8u;
        goto label_3e2ba8;
    }
    ctx->pc = 0x3E2BA0u;
    {
        const bool branch_taken_0x3e2ba0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2ba0) {
            ctx->pc = 0x3E2BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E2BA0u;
            // 0x3e2ba4: 0x8e0202ec  lw          $v0, 0x2EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 748)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E2BB0u;
            goto label_3e2bb0;
        }
    }
    ctx->pc = 0x3E2BA8u;
label_3e2ba8:
    // 0x3e2ba8: 0x10000012  b           . + 4 + (0x12 << 2)
label_3e2bac:
    if (ctx->pc == 0x3E2BACu) {
        ctx->pc = 0x3E2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BA8u;
        // 0x3e2bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2BB0u;
        goto label_3e2bb0;
    }
    ctx->pc = 0x3E2BA8u;
    {
        const bool branch_taken_0x3e2ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BA8u;
        // 0x3e2bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2ba8) {
            ctx->pc = 0x3E2BF4u;
            goto label_3e2bf4;
        }
    }
    ctx->pc = 0x3E2BB0u;
label_3e2bb0:
    // 0x3e2bb0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3e2bb4:
    if (ctx->pc == 0x3E2BB4u) {
        ctx->pc = 0x3E2BB8u;
        goto label_3e2bb8;
    }
    ctx->pc = 0x3E2BB0u;
    {
        const bool branch_taken_0x3e2bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2bb0) {
            ctx->pc = 0x3E2BECu;
            goto label_3e2bec;
        }
    }
    ctx->pc = 0x3E2BB8u;
label_3e2bb8:
    // 0x3e2bb8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3e2bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_3e2bbc:
    // 0x3e2bbc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3e2bbcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_3e2bc0:
    // 0x3e2bc0: 0x40f809  jalr        $v0
label_3e2bc4:
    if (ctx->pc == 0x3E2BC4u) {
        ctx->pc = 0x3E2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BC0u;
        // 0x3e2bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2BC8u;
        goto label_3e2bc8;
    }
    ctx->pc = 0x3E2BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E2BC8u);
        ctx->pc = 0x3E2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BC0u;
        // 0x3e2bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2BC0u, 0x3E2BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E2BC8u;
label_3e2bc8:
    // 0x3e2bc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3e2bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e2bcc:
    // 0x3e2bcc: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_3e2bd0:
    if (ctx->pc == 0x3E2BD0u) {
        ctx->pc = 0x3E2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BCCu;
        // 0x3e2bd0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2BD4u;
        goto label_3e2bd4;
    }
    ctx->pc = 0x3E2BCCu;
    {
        const bool branch_taken_0x3e2bcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BCCu;
        // 0x3e2bd0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2bcc) {
            ctx->pc = 0x3E2BF4u;
            goto label_3e2bf4;
        }
    }
    ctx->pc = 0x3E2BD4u;
label_3e2bd4:
    // 0x3e2bd4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3e2bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3e2bd8:
    // 0x3e2bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e2bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e2bdc:
    // 0x3e2bdc: 0xc0f86f2  jal         func_3E1BC8
label_3e2be0:
    if (ctx->pc == 0x3E2BE0u) {
        ctx->pc = 0x3E2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BDCu;
        // 0x3e2be0: 0x24a5e310  addiu       $a1, $a1, -0x1CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2BE4u;
        goto label_3e2be4;
    }
    ctx->pc = 0x3E2BDCu;
    SET_GPR_U32(ctx, 31, 0x3E2BE4u);
    ctx->pc = 0x3E2BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2BDCu;
    // 0x3e2be0: 0x24a5e310  addiu       $a1, $a1, -0x1CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3E2BDCu, 0x3E2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2BE4u;
label_3e2be4:
    // 0x3e2be4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e2be8:
    if (ctx->pc == 0x3E2BE8u) {
        ctx->pc = 0x3E2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BE4u;
        // 0x3e2be8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2BECu;
        goto label_3e2bec;
    }
    ctx->pc = 0x3E2BE4u;
    {
        const bool branch_taken_0x3e2be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BE4u;
        // 0x3e2be8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2be4) {
            ctx->pc = 0x3E2BF4u;
            goto label_3e2bf4;
        }
    }
    ctx->pc = 0x3E2BECu;
label_3e2bec:
    // 0x3e2bec: 0xc0f8b14  jal         func_3E2C50
label_3e2bf0:
    if (ctx->pc == 0x3E2BF0u) {
        ctx->pc = 0x3E2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2BECu;
        // 0x3e2bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2BF4u;
        goto label_3e2bf4;
    }
    ctx->pc = 0x3E2BECu;
    SET_GPR_U32(ctx, 31, 0x3E2BF4u);
    ctx->pc = 0x3E2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2BECu;
    // 0x3e2bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C50u, 0x3E2BECu, 0x3E2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2BF4u;
label_3e2bf4:
    // 0x3e2bf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e2bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e2bf8:
    // 0x3e2bf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e2bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e2bfc:
    // 0x3e2bfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2c00:
    // 0x3e2c00: 0x3e00008  jr          $ra
label_3e2c04:
    if (ctx->pc == 0x3E2C04u) {
        ctx->pc = 0x3E2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C00u;
        // 0x3e2c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E2C08u;
        goto label_fallthrough_0x3e2c00;
    }
    ctx->pc = 0x3E2C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2C00u;
        // 0x3e2c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e2c00:
    ctx->pc = 0x3E2C08u;
}
