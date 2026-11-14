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

// Function: sub_004206C0
// Address: 0x4206c0 - 0x420778
void sub_004206C0_0x4206c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004206C0_0x4206c0");
#endif

    switch (ctx->pc) {
        case 0x4206c0u: goto label_4206c0;
        case 0x4206c4u: goto label_4206c4;
        case 0x4206c8u: goto label_4206c8;
        case 0x4206ccu: goto label_4206cc;
        case 0x4206d0u: goto label_4206d0;
        case 0x4206d4u: goto label_4206d4;
        case 0x4206d8u: goto label_4206d8;
        case 0x4206dcu: goto label_4206dc;
        case 0x4206e0u: goto label_4206e0;
        case 0x4206e4u: goto label_4206e4;
        case 0x4206e8u: goto label_4206e8;
        case 0x4206ecu: goto label_4206ec;
        case 0x4206f0u: goto label_4206f0;
        case 0x4206f4u: goto label_4206f4;
        case 0x4206f8u: goto label_4206f8;
        case 0x4206fcu: goto label_4206fc;
        case 0x420700u: goto label_420700;
        case 0x420704u: goto label_420704;
        case 0x420708u: goto label_420708;
        case 0x42070cu: goto label_42070c;
        case 0x420710u: goto label_420710;
        case 0x420714u: goto label_420714;
        case 0x420718u: goto label_420718;
        case 0x42071cu: goto label_42071c;
        case 0x420720u: goto label_420720;
        case 0x420724u: goto label_420724;
        case 0x420728u: goto label_420728;
        case 0x42072cu: goto label_42072c;
        case 0x420730u: goto label_420730;
        case 0x420734u: goto label_420734;
        case 0x420738u: goto label_420738;
        case 0x42073cu: goto label_42073c;
        case 0x420740u: goto label_420740;
        case 0x420744u: goto label_420744;
        case 0x420748u: goto label_420748;
        case 0x42074cu: goto label_42074c;
        case 0x420750u: goto label_420750;
        case 0x420754u: goto label_420754;
        case 0x420758u: goto label_420758;
        case 0x42075cu: goto label_42075c;
        case 0x420760u: goto label_420760;
        case 0x420764u: goto label_420764;
        case 0x420768u: goto label_420768;
        case 0x42076cu: goto label_42076c;
        case 0x420770u: goto label_420770;
        case 0x420774u: goto label_420774;
        default: break;
    }

    ctx->pc = 0x4206c0u;

label_4206c0:
    // 0x4206c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4206c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4206c4:
    // 0x4206c4: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x4206c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_4206c8:
    // 0x4206c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4206c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4206cc:
    // 0x4206cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4206ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4206d0:
    // 0x4206d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4206d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4206d4:
    // 0x4206d4: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x4206d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_4206d8:
    // 0x4206d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4206d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4206dc:
    // 0x4206dc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4206dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4206e0:
    // 0x4206e0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4206e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4206e4:
    // 0x4206e4: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x4206e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_4206e8:
    // 0x4206e8: 0x34a50016  ori         $a1, $a1, 0x16
    ctx->pc = 0x4206e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)22);
label_4206ec:
    // 0x4206ec: 0x40f809  jalr        $v0
label_4206f0:
    if (ctx->pc == 0x4206F0u) {
        ctx->pc = 0x4206F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206ECu;
        // 0x4206f0: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4206F4u;
        goto label_4206f4;
    }
    ctx->pc = 0x4206ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4206F4u);
        ctx->pc = 0x4206F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206ECu;
        // 0x4206f0: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4206ECu, 0x4206F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4206F4u;
label_4206f4:
    // 0x4206f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4206f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4206f8:
    // 0x4206f8: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_4206fc:
    if (ctx->pc == 0x4206FCu) {
        ctx->pc = 0x4206FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206F8u;
        // 0x4206fc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420700u;
        goto label_420700;
    }
    ctx->pc = 0x4206F8u;
    {
        const bool branch_taken_0x4206f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4206FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4206F8u;
        // 0x4206fc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4206f8) {
            ctx->pc = 0x42075Cu;
            goto label_42075c;
        }
    }
    ctx->pc = 0x420700u;
label_420700:
    // 0x420700: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x420700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_420704:
    // 0x420704: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x420704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_420708:
    // 0x420708: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x420708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_42070c:
    // 0x42070c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x42070cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_420710:
    // 0x420710: 0x26080008  addiu       $t0, $s0, 0x8
    ctx->pc = 0x420710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_420714:
    // 0x420714: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x420714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_420718:
    // 0x420718: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x420718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_42071c:
    // 0x42071c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x42071cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_420720:
    // 0x420720: 0x2484ca28  addiu       $a0, $a0, -0x35D8
    ctx->pc = 0x420720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953512));
label_420724:
    // 0x420724: 0x8f83be18  lw          $v1, -0x41E8($gp)
    ctx->pc = 0x420724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950424)));
label_420728:
    // 0x420728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x420728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42072c:
    // 0x42072c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x42072cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_420730:
    // 0x420730: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x420730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_420734:
    // 0x420734: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x420734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_420738:
    // 0x420738: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x420738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_42073c:
    // 0x42073c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x42073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_420740:
    // 0x420740: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x420740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_420744:
    // 0x420744: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x420744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_420748:
    // 0x420748: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x420748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
label_42074c:
    // 0x42074c: 0xc104c80  jal         func_413200
label_420750:
    if (ctx->pc == 0x420750u) {
        ctx->pc = 0x420750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42074Cu;
        // 0x420750: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420754u;
        goto label_420754;
    }
    ctx->pc = 0x42074Cu;
    SET_GPR_U32(ctx, 31, 0x420754u);
    ctx->pc = 0x420750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42074Cu;
    // 0x420750: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x42074Cu, 0x420754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420754u;
label_420754:
    // 0x420754: 0x10000002  b           . + 4 + (0x2 << 2)
label_420758:
    if (ctx->pc == 0x420758u) {
        ctx->pc = 0x420758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420754u;
        // 0x420758: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42075Cu;
        goto label_42075c;
    }
    ctx->pc = 0x420754u;
    {
        const bool branch_taken_0x420754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420754u;
        // 0x420758: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420754) {
            ctx->pc = 0x420760u;
            goto label_420760;
        }
    }
    ctx->pc = 0x42075Cu;
label_42075c:
    // 0x42075c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x42075cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420760:
    // 0x420760: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x420760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_420764:
    // 0x420764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x420764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_420768:
    // 0x420768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42076c:
    // 0x42076c: 0x3e00008  jr          $ra
label_420770:
    if (ctx->pc == 0x420770u) {
        ctx->pc = 0x420770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42076Cu;
        // 0x420770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420774u;
        goto label_420774;
    }
    ctx->pc = 0x42076Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42076Cu;
        // 0x420770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42076Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420774u;
label_420774:
    // 0x420774: 0x0  nop
    ctx->pc = 0x420774u;
    // NOP
    ctx->pc = 0x420778u;
}
