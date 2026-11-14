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

// Function: sub_00377B38
// Address: 0x377b38 - 0x377bd0
void sub_00377B38_0x377b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377B38_0x377b38");
#endif

    switch (ctx->pc) {
        case 0x377b38u: goto label_377b38;
        case 0x377b3cu: goto label_377b3c;
        case 0x377b40u: goto label_377b40;
        case 0x377b44u: goto label_377b44;
        case 0x377b48u: goto label_377b48;
        case 0x377b4cu: goto label_377b4c;
        case 0x377b50u: goto label_377b50;
        case 0x377b54u: goto label_377b54;
        case 0x377b58u: goto label_377b58;
        case 0x377b5cu: goto label_377b5c;
        case 0x377b60u: goto label_377b60;
        case 0x377b64u: goto label_377b64;
        case 0x377b68u: goto label_377b68;
        case 0x377b6cu: goto label_377b6c;
        case 0x377b70u: goto label_377b70;
        case 0x377b74u: goto label_377b74;
        case 0x377b78u: goto label_377b78;
        case 0x377b7cu: goto label_377b7c;
        case 0x377b80u: goto label_377b80;
        case 0x377b84u: goto label_377b84;
        case 0x377b88u: goto label_377b88;
        case 0x377b8cu: goto label_377b8c;
        case 0x377b90u: goto label_377b90;
        case 0x377b94u: goto label_377b94;
        case 0x377b98u: goto label_377b98;
        case 0x377b9cu: goto label_377b9c;
        case 0x377ba0u: goto label_377ba0;
        case 0x377ba4u: goto label_377ba4;
        case 0x377ba8u: goto label_377ba8;
        case 0x377bacu: goto label_377bac;
        case 0x377bb0u: goto label_377bb0;
        case 0x377bb4u: goto label_377bb4;
        case 0x377bb8u: goto label_377bb8;
        case 0x377bbcu: goto label_377bbc;
        case 0x377bc0u: goto label_377bc0;
        case 0x377bc4u: goto label_377bc4;
        case 0x377bc8u: goto label_377bc8;
        case 0x377bccu: goto label_377bcc;
        default: break;
    }

    ctx->pc = 0x377b38u;

label_377b38:
    // 0x377b38: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x377b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_377b3c:
    // 0x377b3c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_377b40:
    // 0x377b40: 0x8c43c438  lw          $v1, -0x3BC8($v0)
    ctx->pc = 0x377b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951992)));
label_377b44:
    // 0x377b44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_377b48:
    // 0x377b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_377b4c:
    // 0x377b4c: 0xc38021  addu        $s0, $a2, $v1
    ctx->pc = 0x377b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_377b50:
    // 0x377b50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377b54:
    // 0x377b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_377b58:
    // 0x377b58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x377b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_377b5c:
    // 0x377b5c: 0xc103468  jal         func_40D1A0
label_377b60:
    if (ctx->pc == 0x377B60u) {
        ctx->pc = 0x377B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B5Cu;
        // 0x377b60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377B64u;
        goto label_377b64;
    }
    ctx->pc = 0x377B5Cu;
    SET_GPR_U32(ctx, 31, 0x377B64u);
    ctx->pc = 0x377B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377B5Cu;
    // 0x377b60: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x377B5Cu, 0x377B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377B64u;
label_377b64:
    // 0x377b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377b68:
    // 0x377b68: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x377b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_377b6c:
    // 0x377b6c: 0xc103468  jal         func_40D1A0
label_377b70:
    if (ctx->pc == 0x377B70u) {
        ctx->pc = 0x377B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B6Cu;
        // 0x377b70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377B74u;
        goto label_377b74;
    }
    ctx->pc = 0x377B6Cu;
    SET_GPR_U32(ctx, 31, 0x377B74u);
    ctx->pc = 0x377B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377B6Cu;
    // 0x377b70: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x377B6Cu, 0x377B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377B74u;
label_377b74:
    // 0x377b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377b78:
    // 0x377b78: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x377b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_377b7c:
    // 0x377b7c: 0xc103468  jal         func_40D1A0
label_377b80:
    if (ctx->pc == 0x377B80u) {
        ctx->pc = 0x377B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B7Cu;
        // 0x377b80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377B84u;
        goto label_377b84;
    }
    ctx->pc = 0x377B7Cu;
    SET_GPR_U32(ctx, 31, 0x377B84u);
    ctx->pc = 0x377B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377B7Cu;
    // 0x377b80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x377B7Cu, 0x377B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377B84u;
label_377b84:
    // 0x377b84: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x377b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_377b88:
    // 0x377b88: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_377b8c:
    if (ctx->pc == 0x377B8Cu) {
        ctx->pc = 0x377B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B88u;
        // 0x377b8c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377B90u;
        goto label_377b90;
    }
    ctx->pc = 0x377B88u;
    {
        const bool branch_taken_0x377b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x377B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B88u;
        // 0x377b8c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377b88) {
            ctx->pc = 0x377BB8u;
            goto label_377bb8;
        }
    }
    ctx->pc = 0x377B90u;
label_377b90:
    // 0x377b90: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x377b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_377b94:
    // 0x377b94: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x377b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_377b98:
    // 0x377b98: 0x40f809  jalr        $v0
label_377b9c:
    if (ctx->pc == 0x377B9Cu) {
        ctx->pc = 0x377B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B98u;
        // 0x377b9c: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        ctx->pc = 0x377BA0u;
        goto label_377ba0;
    }
    ctx->pc = 0x377B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x377BA0u);
        ctx->pc = 0x377B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B98u;
        // 0x377b9c: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377B98u, 0x377BA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x377BA0u;
label_377ba0:
    // 0x377ba0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x377ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_377ba4:
    // 0x377ba4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_377ba8:
    if (ctx->pc == 0x377BA8u) {
        ctx->pc = 0x377BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377BA4u;
        // 0x377ba8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377BACu;
        goto label_377bac;
    }
    ctx->pc = 0x377BA4u;
    {
        const bool branch_taken_0x377ba4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x377BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377BA4u;
        // 0x377ba8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377ba4) {
            ctx->pc = 0x377BB8u;
            goto label_377bb8;
        }
    }
    ctx->pc = 0x377BACu;
label_377bac:
    // 0x377bac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x377bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_377bb0:
    // 0x377bb0: 0xc10480a  jal         func_412028
label_377bb4:
    if (ctx->pc == 0x377BB4u) {
        ctx->pc = 0x377BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377BB0u;
        // 0x377bb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377BB8u;
        goto label_377bb8;
    }
    ctx->pc = 0x377BB0u;
    SET_GPR_U32(ctx, 31, 0x377BB8u);
    ctx->pc = 0x377BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377BB0u;
    // 0x377bb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x377BB0u, 0x377BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377BB8u;
label_377bb8:
    // 0x377bb8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x377bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377bbc:
    // 0x377bbc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x377bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_377bc0:
    // 0x377bc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377bc4:
    // 0x377bc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_377bc8:
    // 0x377bc8: 0x3e00008  jr          $ra
label_377bcc:
    if (ctx->pc == 0x377BCCu) {
        ctx->pc = 0x377BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377BC8u;
        // 0x377bcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377BD0u;
        goto label_fallthrough_0x377bc8;
    }
    ctx->pc = 0x377BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377BC8u;
        // 0x377bcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x377bc8:
    ctx->pc = 0x377BD0u;
}
