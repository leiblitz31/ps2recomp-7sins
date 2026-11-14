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

// Function: sub_00310B48
// Address: 0x310b48 - 0x310c18
void sub_00310B48_0x310b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310B48_0x310b48");
#endif

    switch (ctx->pc) {
        case 0x310b58u: goto label_310b58;
        case 0x310b70u: goto label_310b70;
        case 0x310b98u: goto label_310b98;
        case 0x310bb0u: goto label_310bb0;
        case 0x310bc0u: goto label_310bc0;
        case 0x310bd8u: goto label_310bd8;
        case 0x310c00u: goto label_310c00;
        default: break;
    }

    ctx->pc = 0x310b48u;

    // 0x310b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310b4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310b50: 0xc0c4254  jal         func_310950
    ctx->pc = 0x310B50u;
    SET_GPR_U32(ctx, 31, 0x310B58u);
    ctx->pc = 0x310950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310950u, 0x310B50u, 0x310B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B58u;
label_310b58:
    // 0x310b58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310B58u;
    {
        const bool branch_taken_0x310b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B58u;
        // 0x310b5c: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b58) {
            ctx->pc = 0x310B68u;
            goto label_310b68;
        }
    }
    ctx->pc = 0x310B60u;
    // 0x310b60: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x310B60u;
    {
        const bool branch_taken_0x310b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B60u;
        // 0x310b64: 0x904222b6  lbu         $v0, 0x22B6($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8886)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b60) {
            ctx->pc = 0x310BA4u;
            goto label_310ba4;
        }
    }
    ctx->pc = 0x310B68u;
label_310b68:
    // 0x310b68: 0xc0bf704  jal         func_2FDC10
    ctx->pc = 0x310B68u;
    SET_GPR_U32(ctx, 31, 0x310B70u);
    ctx->pc = 0x310B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B68u;
    // 0x310b6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC10u, 0x310B68u, 0x310B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B70u;
label_310b70:
    // 0x310b70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x310b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310b74: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x310b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x310b78: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x310b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x310b7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310B7Cu;
    {
        const bool branch_taken_0x310b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B7Cu;
        // 0x310b80: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b7c) {
            ctx->pc = 0x310B8Cu;
            goto label_310b8c;
        }
    }
    ctx->pc = 0x310B84u;
    // 0x310b84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x310B84u;
    {
        const bool branch_taken_0x310b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B84u;
        // 0x310b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b84) {
            ctx->pc = 0x310BA4u;
            goto label_310ba4;
        }
    }
    ctx->pc = 0x310B8Cu;
label_310b8c:
    // 0x310b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x310b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310b90: 0xc0bf79c  jal         func_2FDE70
    ctx->pc = 0x310B90u;
    SET_GPR_U32(ctx, 31, 0x310B98u);
    ctx->pc = 0x310B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310B90u;
    // 0x310b94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDE70u, 0x310B90u, 0x310B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310B98u;
label_310b98:
    // 0x310b98: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x310b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x310b9c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x310b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x310ba0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x310ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_310ba4:
    // 0x310ba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x310BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BA8u;
        // 0x310bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310BB0u;
label_310bb0:
    // 0x310bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310bb8: 0xc0c4254  jal         func_310950
    ctx->pc = 0x310BB8u;
    SET_GPR_U32(ctx, 31, 0x310BC0u);
    ctx->pc = 0x310950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310950u, 0x310BB8u, 0x310BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310BC0u;
label_310bc0:
    // 0x310bc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310BC0u;
    {
        const bool branch_taken_0x310bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BC0u;
        // 0x310bc4: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bc0) {
            ctx->pc = 0x310BD0u;
            goto label_310bd0;
        }
    }
    ctx->pc = 0x310BC8u;
    // 0x310bc8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x310BC8u;
    {
        const bool branch_taken_0x310bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BC8u;
        // 0x310bcc: 0x904222b7  lbu         $v0, 0x22B7($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8887)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bc8) {
            ctx->pc = 0x310C0Cu;
            goto label_310c0c;
        }
    }
    ctx->pc = 0x310BD0u;
label_310bd0:
    // 0x310bd0: 0xc0bf704  jal         func_2FDC10
    ctx->pc = 0x310BD0u;
    SET_GPR_U32(ctx, 31, 0x310BD8u);
    ctx->pc = 0x310BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310BD0u;
    // 0x310bd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDC10u, 0x310BD0u, 0x310BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310BD8u;
label_310bd8:
    // 0x310bd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x310bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310bdc: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x310bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x310be0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x310be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x310be4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310BE4u;
    {
        const bool branch_taken_0x310be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BE4u;
        // 0x310be8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310be4) {
            ctx->pc = 0x310BF4u;
            goto label_310bf4;
        }
    }
    ctx->pc = 0x310BECu;
    // 0x310bec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x310BECu;
    {
        const bool branch_taken_0x310bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BECu;
        // 0x310bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bec) {
            ctx->pc = 0x310C0Cu;
            goto label_310c0c;
        }
    }
    ctx->pc = 0x310BF4u;
label_310bf4:
    // 0x310bf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x310bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310bf8: 0xc0bf79c  jal         func_2FDE70
    ctx->pc = 0x310BF8u;
    SET_GPR_U32(ctx, 31, 0x310C00u);
    ctx->pc = 0x310BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310BF8u;
    // 0x310bfc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDE70u, 0x310BF8u, 0x310C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310C00u;
label_310c00:
    // 0x310c00: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x310c00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x310c04: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x310c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x310c08: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x310c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_310c0c:
    // 0x310c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310c10: 0x3e00008  jr          $ra
    ctx->pc = 0x310C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C10u;
        // 0x310c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310C18u;
}
