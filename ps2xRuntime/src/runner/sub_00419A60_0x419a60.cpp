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

// Function: sub_00419A60
// Address: 0x419a60 - 0x419b08
void sub_00419A60_0x419a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419A60_0x419a60");
#endif

    switch (ctx->pc) {
        case 0x419a60u: goto label_419a60;
        case 0x419a64u: goto label_419a64;
        case 0x419a68u: goto label_419a68;
        case 0x419a6cu: goto label_419a6c;
        case 0x419a70u: goto label_419a70;
        case 0x419a74u: goto label_419a74;
        case 0x419a78u: goto label_419a78;
        case 0x419a7cu: goto label_419a7c;
        case 0x419a80u: goto label_419a80;
        case 0x419a84u: goto label_419a84;
        case 0x419a88u: goto label_419a88;
        case 0x419a8cu: goto label_419a8c;
        case 0x419a90u: goto label_419a90;
        case 0x419a94u: goto label_419a94;
        case 0x419a98u: goto label_419a98;
        case 0x419a9cu: goto label_419a9c;
        case 0x419aa0u: goto label_419aa0;
        case 0x419aa4u: goto label_419aa4;
        case 0x419aa8u: goto label_419aa8;
        case 0x419aacu: goto label_419aac;
        case 0x419ab0u: goto label_419ab0;
        case 0x419ab4u: goto label_419ab4;
        case 0x419ab8u: goto label_419ab8;
        case 0x419abcu: goto label_419abc;
        case 0x419ac0u: goto label_419ac0;
        case 0x419ac4u: goto label_419ac4;
        case 0x419ac8u: goto label_419ac8;
        case 0x419accu: goto label_419acc;
        case 0x419ad0u: goto label_419ad0;
        case 0x419ad4u: goto label_419ad4;
        case 0x419ad8u: goto label_419ad8;
        case 0x419adcu: goto label_419adc;
        case 0x419ae0u: goto label_419ae0;
        case 0x419ae4u: goto label_419ae4;
        case 0x419ae8u: goto label_419ae8;
        case 0x419aecu: goto label_419aec;
        case 0x419af0u: goto label_419af0;
        case 0x419af4u: goto label_419af4;
        case 0x419af8u: goto label_419af8;
        case 0x419afcu: goto label_419afc;
        case 0x419b00u: goto label_419b00;
        case 0x419b04u: goto label_419b04;
        default: break;
    }

    ctx->pc = 0x419a60u;

label_419a60:
    // 0x419a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x419a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_419a64:
    // 0x419a64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x419a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_419a68:
    // 0x419a68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x419a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_419a6c:
    // 0x419a6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x419a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_419a70:
    // 0x419a70: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_419a74:
    if (ctx->pc == 0x419A74u) {
        ctx->pc = 0x419A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A70u;
        // 0x419a74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419A78u;
        goto label_419a78;
    }
    ctx->pc = 0x419A70u;
    {
        const bool branch_taken_0x419a70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x419A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A70u;
        // 0x419a74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419a70) {
            ctx->pc = 0x419AF0u;
            goto label_419af0;
        }
    }
    ctx->pc = 0x419A78u;
label_419a78:
    // 0x419a78: 0x8e300098  lw          $s0, 0x98($s1)
    ctx->pc = 0x419a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_419a7c:
    // 0x419a7c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_419a80:
    if (ctx->pc == 0x419A80u) {
        ctx->pc = 0x419A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A7Cu;
        // 0x419a80: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419A84u;
        goto label_419a84;
    }
    ctx->pc = 0x419A7Cu;
    {
        const bool branch_taken_0x419a7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x419A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A7Cu;
        // 0x419a80: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419a7c) {
            ctx->pc = 0x419A9Cu;
            goto label_419a9c;
        }
    }
    ctx->pc = 0x419A84u;
label_419a84:
    // 0x419a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x419a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419a88:
    // 0x419a88: 0xc1068f6  jal         func_41A3D8
label_419a8c:
    if (ctx->pc == 0x419A8Cu) {
        ctx->pc = 0x419A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A88u;
        // 0x419a8c: 0x8e10009c  lw          $s0, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419A90u;
        goto label_419a90;
    }
    ctx->pc = 0x419A88u;
    SET_GPR_U32(ctx, 31, 0x419A90u);
    ctx->pc = 0x419A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419A88u;
    // 0x419a8c: 0x8e10009c  lw          $s0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A3D8u, 0x419A88u, 0x419A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419A90u;
label_419a90:
    // 0x419a90: 0x5600fffd  bnel        $s0, $zero, . + 4 + (-0x3 << 2)
label_419a94:
    if (ctx->pc == 0x419A94u) {
        ctx->pc = 0x419A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419A90u;
        // 0x419a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419A98u;
        goto label_419a98;
    }
    ctx->pc = 0x419A90u;
    {
        const bool branch_taken_0x419a90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x419a90) {
            ctx->pc = 0x419A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x419A90u;
            // 0x419a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x419A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_419a88;
        }
    }
    ctx->pc = 0x419A98u;
label_419a98:
    // 0x419a98: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x419a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_419a9c:
    // 0x419a9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x419a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_419aa0:
    // 0x419aa0: 0xc104ca6  jal         func_413298
label_419aa4:
    if (ctx->pc == 0x419AA4u) {
        ctx->pc = 0x419AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419AA0u;
        // 0x419aa4: 0x2484c9c8  addiu       $a0, $a0, -0x3638 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419AA8u;
        goto label_419aa8;
    }
    ctx->pc = 0x419AA0u;
    SET_GPR_U32(ctx, 31, 0x419AA8u);
    ctx->pc = 0x419AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419AA0u;
    // 0x419aa4: 0x2484c9c8  addiu       $a0, $a0, -0x3638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x419AA0u, 0x419AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419AA8u;
label_419aa8:
    // 0x419aa8: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x419aa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_419aac:
    // 0x419aac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x419aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_419ab0:
    // 0x419ab0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_419ab4:
    if (ctx->pc == 0x419AB4u) {
        ctx->pc = 0x419AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419AB0u;
        // 0x419ab4: 0x8f83be00  lw          $v1, -0x4200($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419AB8u;
        goto label_419ab8;
    }
    ctx->pc = 0x419AB0u;
    {
        const bool branch_taken_0x419ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x419AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419AB0u;
        // 0x419ab4: 0x8f83be00  lw          $v1, -0x4200($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419ab0) {
            ctx->pc = 0x419AD4u;
            goto label_419ad4;
        }
    }
    ctx->pc = 0x419AB8u;
label_419ab8:
    // 0x419ab8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x419ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_419abc:
    // 0x419abc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x419abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_419ac0:
    // 0x419ac0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x419ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_419ac4:
    // 0x419ac4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x419ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_419ac8:
    // 0x419ac8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x419ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_419acc:
    // 0x419acc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x419accu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_419ad0:
    // 0x419ad0: 0x8f83be00  lw          $v1, -0x4200($gp)
    ctx->pc = 0x419ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950400)));
label_419ad4:
    // 0x419ad4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x419ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_419ad8:
    // 0x419ad8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x419ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_419adc:
    // 0x419adc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x419adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_419ae0:
    // 0x419ae0: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x419ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_419ae4:
    // 0x419ae4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x419ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_419ae8:
    // 0x419ae8: 0x40f809  jalr        $v0
label_419aec:
    if (ctx->pc == 0x419AECu) {
        ctx->pc = 0x419AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419AE8u;
        // 0x419aec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419AF0u;
        goto label_419af0;
    }
    ctx->pc = 0x419AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x419AF0u);
        ctx->pc = 0x419AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419AE8u;
        // 0x419aec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419AE8u, 0x419AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x419AF0u;
label_419af0:
    // 0x419af0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x419af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_419af4:
    // 0x419af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x419af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_419af8:
    // 0x419af8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x419af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_419afc:
    // 0x419afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_419b00:
    // 0x419b00: 0x3e00008  jr          $ra
label_419b04:
    if (ctx->pc == 0x419B04u) {
        ctx->pc = 0x419B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B00u;
        // 0x419b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419B08u;
        goto label_fallthrough_0x419b00;
    }
    ctx->pc = 0x419B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419B00u;
        // 0x419b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x419b00:
    ctx->pc = 0x419B08u;
}
