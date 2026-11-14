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

// Function: sub_00445A88
// Address: 0x445a88 - 0x445b18
void sub_00445A88_0x445a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00445A88_0x445a88");
#endif

    switch (ctx->pc) {
        case 0x445a88u: goto label_445a88;
        case 0x445a8cu: goto label_445a8c;
        case 0x445a90u: goto label_445a90;
        case 0x445a94u: goto label_445a94;
        case 0x445a98u: goto label_445a98;
        case 0x445a9cu: goto label_445a9c;
        case 0x445aa0u: goto label_445aa0;
        case 0x445aa4u: goto label_445aa4;
        case 0x445aa8u: goto label_445aa8;
        case 0x445aacu: goto label_445aac;
        case 0x445ab0u: goto label_445ab0;
        case 0x445ab4u: goto label_445ab4;
        case 0x445ab8u: goto label_445ab8;
        case 0x445abcu: goto label_445abc;
        case 0x445ac0u: goto label_445ac0;
        case 0x445ac4u: goto label_445ac4;
        case 0x445ac8u: goto label_445ac8;
        case 0x445accu: goto label_445acc;
        case 0x445ad0u: goto label_445ad0;
        case 0x445ad4u: goto label_445ad4;
        case 0x445ad8u: goto label_445ad8;
        case 0x445adcu: goto label_445adc;
        case 0x445ae0u: goto label_445ae0;
        case 0x445ae4u: goto label_445ae4;
        case 0x445ae8u: goto label_445ae8;
        case 0x445aecu: goto label_445aec;
        case 0x445af0u: goto label_445af0;
        case 0x445af4u: goto label_445af4;
        case 0x445af8u: goto label_445af8;
        case 0x445afcu: goto label_445afc;
        case 0x445b00u: goto label_445b00;
        case 0x445b04u: goto label_445b04;
        case 0x445b08u: goto label_445b08;
        case 0x445b0cu: goto label_445b0c;
        case 0x445b10u: goto label_445b10;
        case 0x445b14u: goto label_445b14;
        default: break;
    }

    ctx->pc = 0x445a88u;

label_445a88:
    // 0x445a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x445a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_445a8c:
    // 0x445a8c: 0x8f83bf20  lw          $v1, -0x40E0($gp)
    ctx->pc = 0x445a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
label_445a90:
    // 0x445a90: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x445a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_445a94:
    // 0x445a94: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x445a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_445a98:
    // 0x445a98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x445a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_445a9c:
    // 0x445a9c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x445a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_445aa0:
    // 0x445aa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x445aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_445aa4:
    // 0x445aa4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x445aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_445aa8:
    // 0x445aa8: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x445aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_445aac:
    // 0x445aac: 0x34a50409  ori         $a1, $a1, 0x409
    ctx->pc = 0x445aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
label_445ab0:
    // 0x445ab0: 0x40f809  jalr        $v0
label_445ab4:
    if (ctx->pc == 0x445AB4u) {
        ctx->pc = 0x445AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445AB0u;
        // 0x445ab4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445AB8u;
        goto label_445ab8;
    }
    ctx->pc = 0x445AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x445AB8u);
        ctx->pc = 0x445AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445AB0u;
        // 0x445ab4: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445AB0u, 0x445AB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x445AB8u;
label_445ab8:
    // 0x445ab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x445ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_445abc:
    // 0x445abc: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_445ac0:
    if (ctx->pc == 0x445AC0u) {
        ctx->pc = 0x445AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445ABCu;
        // 0x445ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445AC4u;
        goto label_445ac4;
    }
    ctx->pc = 0x445ABCu;
    {
        const bool branch_taken_0x445abc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x445AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445ABCu;
        // 0x445ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445abc) {
            ctx->pc = 0x445AF0u;
            goto label_445af0;
        }
    }
    ctx->pc = 0x445AC4u;
label_445ac4:
    // 0x445ac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x445ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_445ac8:
    // 0x445ac8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x445ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_445acc:
    // 0x445acc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x445accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_445ad0:
    // 0x445ad0: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x445ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_445ad4:
    // 0x445ad4: 0xc1035f6  jal         func_40D7D8
label_445ad8:
    if (ctx->pc == 0x445AD8u) {
        ctx->pc = 0x445AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445AD4u;
        // 0x445ad8: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445ADCu;
        goto label_445adc;
    }
    ctx->pc = 0x445AD4u;
    SET_GPR_U32(ctx, 31, 0x445ADCu);
    ctx->pc = 0x445AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445AD4u;
    // 0x445ad8: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x445AD4u, 0x445ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445ADCu;
label_445adc:
    // 0x445adc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x445adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_445ae0:
    // 0x445ae0: 0xc103628  jal         func_40D8A0
label_445ae4:
    if (ctx->pc == 0x445AE4u) {
        ctx->pc = 0x445AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445AE0u;
        // 0x445ae4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445AE8u;
        goto label_445ae8;
    }
    ctx->pc = 0x445AE0u;
    SET_GPR_U32(ctx, 31, 0x445AE8u);
    ctx->pc = 0x445AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445AE0u;
    // 0x445ae4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x445AE0u, 0x445AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445AE8u;
label_445ae8:
    // 0x445ae8: 0x10000007  b           . + 4 + (0x7 << 2)
label_445aec:
    if (ctx->pc == 0x445AECu) {
        ctx->pc = 0x445AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445AE8u;
        // 0x445aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445AF0u;
        goto label_445af0;
    }
    ctx->pc = 0x445AE8u;
    {
        const bool branch_taken_0x445ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x445AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445AE8u;
        // 0x445aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x445ae8) {
            ctx->pc = 0x445B08u;
            goto label_445b08;
        }
    }
    ctx->pc = 0x445AF0u;
label_445af0:
    // 0x445af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x445af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_445af4:
    // 0x445af4: 0xc0bb7e6  jal         func_2EDF98
label_445af8:
    if (ctx->pc == 0x445AF8u) {
        ctx->pc = 0x445AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445AF4u;
        // 0x445af8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445AFCu;
        goto label_445afc;
    }
    ctx->pc = 0x445AF4u;
    SET_GPR_U32(ctx, 31, 0x445AFCu);
    ctx->pc = 0x445AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x445AF4u;
    // 0x445af8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x445AF4u, 0x445AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x445AFCu;
label_445afc:
    // 0x445afc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x445afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_445b00:
    // 0x445b00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x445b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_445b04:
    // 0x445b04: 0x0  nop
    ctx->pc = 0x445b04u;
    // NOP
label_445b08:
    // 0x445b08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x445b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_445b0c:
    // 0x445b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x445b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_445b10:
    // 0x445b10: 0x3e00008  jr          $ra
label_445b14:
    if (ctx->pc == 0x445B14u) {
        ctx->pc = 0x445B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B10u;
        // 0x445b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x445B18u;
        goto label_fallthrough_0x445b10;
    }
    ctx->pc = 0x445B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x445B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x445B10u;
        // 0x445b14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x445B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x445b10:
    ctx->pc = 0x445B18u;
}
