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

// Function: sub_00300708
// Address: 0x300708 - 0x300848
void sub_00300708_0x300708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300708_0x300708");
#endif

    switch (ctx->pc) {
        case 0x300734u: goto label_300734;
        case 0x300758u: goto label_300758;
        case 0x300784u: goto label_300784;
        case 0x300790u: goto label_300790;
        case 0x3007ccu: goto label_3007cc;
        case 0x3007d8u: goto label_3007d8;
        case 0x3007fcu: goto label_3007fc;
        case 0x300820u: goto label_300820;
        case 0x300830u: goto label_300830;
        default: break;
    }

    ctx->pc = 0x300708u;

    // 0x300708: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x300708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x30070c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30070cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x300710: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x300710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x300714: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x300714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x300718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30071c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x30071cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x300720: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x300720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x300724: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x300724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x300728: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x300728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x30072c: 0xc0bfe52  jal         func_2FF948
    ctx->pc = 0x30072Cu;
    SET_GPR_U32(ctx, 31, 0x300734u);
    ctx->pc = 0x300730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30072Cu;
    // 0x300730: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF948u, 0x30072Cu, 0x300734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300734u;
label_300734:
    // 0x300734: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x300734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x300738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x300738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30073c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30073cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300740: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x300740u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x300744: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x300744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x300748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x300748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30074c: 0x3e00008  jr          $ra
    ctx->pc = 0x30074Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30074Cu;
        // 0x300750: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30074Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300754u;
    // 0x300754: 0x0  nop
    ctx->pc = 0x300754u;
    // NOP
label_300758:
    // 0x300758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x300758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30075c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x30075cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300760: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x300760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x300764: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x300764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300768: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x300768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30076c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x30076cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300770: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x300770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x300774: 0x24840660  addiu       $a0, $a0, 0x660
    ctx->pc = 0x300774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1632));
    // 0x300778: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x300778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30077c: 0xc0bfe52  jal         func_2FF948
    ctx->pc = 0x30077Cu;
    SET_GPR_U32(ctx, 31, 0x300784u);
    ctx->pc = 0x300780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30077Cu;
    // 0x300780: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF948u, 0x30077Cu, 0x300784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300784u;
label_300784:
    // 0x300784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x300784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300788: 0x3e00008  jr          $ra
    ctx->pc = 0x300788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300788u;
        // 0x30078c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300790u;
label_300790:
    // 0x300790: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x300790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x300794: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x300794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x300798: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x300798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x30079c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x30079cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3007a0: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x3007a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x3007a4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3007a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3007a8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3007a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3007ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3007acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3007b0: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x3007b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x3007b4: 0x24840660  addiu       $a0, $a0, 0x660
    ctx->pc = 0x3007b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1632));
    // 0x3007b8: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x3007b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x3007bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3007bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3007c0: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x3007c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x3007c4: 0xc0bfe52  jal         func_2FF948
    ctx->pc = 0x3007C4u;
    SET_GPR_U32(ctx, 31, 0x3007CCu);
    ctx->pc = 0x3007C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3007C4u;
    // 0x3007c8: 0x27a80068  addiu       $t0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF948u, 0x3007C4u, 0x3007CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3007CCu;
label_3007cc:
    // 0x3007cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3007ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3007d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3007D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3007D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007D0u;
        // 0x3007d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3007D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3007D8u;
label_3007d8:
    // 0x3007d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3007d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3007dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3007dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3007e0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3007e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3007e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3007e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3007e8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3007e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3007ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3007ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3007f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3007f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3007f4: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x3007F4u;
    SET_GPR_U32(ctx, 31, 0x3007FCu);
    ctx->pc = 0x3007F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3007F4u;
    // 0x3007f8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x3007F4u, 0x3007FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3007FCu;
label_3007fc:
    // 0x3007fc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3007fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300800: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x300800u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x300804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300808: 0x248406b8  addiu       $a0, $a0, 0x6B8
    ctx->pc = 0x300808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1720));
    // 0x30080c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x30080cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300810: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x300810u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300814: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x300814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300818: 0xc0bfe52  jal         func_2FF948
    ctx->pc = 0x300818u;
    SET_GPR_U32(ctx, 31, 0x300820u);
    ctx->pc = 0x30081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300818u;
    // 0x30081c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF948u, 0x300818u, 0x300820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300820u;
label_300820:
    // 0x300820: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x300820u;
    {
        const bool branch_taken_0x300820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x300824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300820u;
        // 0x300824: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300820) {
            ctx->pc = 0x300834u;
            goto label_300834;
        }
    }
    ctx->pc = 0x300828u;
    // 0x300828: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x300828u;
    SET_GPR_U32(ctx, 31, 0x300830u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x300828u, 0x300830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300830u;
label_300830:
    // 0x300830: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x300830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_300834:
    // 0x300834: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x300834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300838: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x300838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30083c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30083cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300840: 0x3e00008  jr          $ra
    ctx->pc = 0x300840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300840u;
        // 0x300844: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300848u;
}
