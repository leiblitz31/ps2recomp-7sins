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

// Function: sub_004A8770
// Address: 0x4a8770 - 0x4a8860
void sub_004A8770_0x4a8770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8770_0x4a8770");
#endif

    switch (ctx->pc) {
        case 0x4a87acu: goto label_4a87ac;
        case 0x4a87c0u: goto label_4a87c0;
        case 0x4a87f8u: goto label_4a87f8;
        default: break;
    }

    ctx->pc = 0x4a8770u;

    // 0x4a8770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a8770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a8774: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a8774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a8778: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a8778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a877c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a877cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4a8780: 0x2644002c  addiu       $a0, $s2, 0x2C
    ctx->pc = 0x4a8780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x4a8784: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a8784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4a8788: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a8788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a878c: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x4a878cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x4a8790: 0xa5880b  movn        $s1, $a1, $a1
    ctx->pc = 0x4a8790u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x4a8794: 0xc6980b  movn        $s3, $a2, $a2
    ctx->pc = 0x4a8794u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
    // 0x4a8798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a8798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a879c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4a87a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a87a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a87a4: 0xc12931a  jal         func_4A4C68
    ctx->pc = 0x4A87A4u;
    SET_GPR_U32(ctx, 31, 0x4A87ACu);
    ctx->pc = 0x4A87A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A87A4u;
    // 0x4a87a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4C68u, 0x4A87A4u, 0x4A87ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A87ACu;
label_4a87ac:
    // 0x4a87ac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a87acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a87b0: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x4a87b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x4a87b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a87b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a87b8: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A87B8u;
    SET_GPR_U32(ctx, 31, 0x4A87C0u);
    ctx->pc = 0x4A87BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A87B8u;
    // 0x4a87bc: 0x24a52630  addiu       $a1, $a1, 0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A87B8u, 0x4A87C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A87C0u;
label_4a87c0:
    // 0x4a87c0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A87C0u;
    {
        const bool branch_taken_0x4a87c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A87C0u;
        // 0x4a87c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a87c0) {
            ctx->pc = 0x4A87ECu;
            goto label_4a87ec;
        }
    }
    ctx->pc = 0x4A87C8u;
    // 0x4a87c8: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x4a87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x4a87cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A87CCu;
    {
        const bool branch_taken_0x4a87cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A87D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A87CCu;
        // 0x4a87d0: 0x26030060  addiu       $v1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a87cc) {
            ctx->pc = 0x4A87ECu;
            goto label_4a87ec;
        }
    }
    ctx->pc = 0x4A87D4u;
    // 0x4a87d4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x4a87d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4a87d8: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x4a87d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4a87dc: 0x648023  subu        $s0, $v1, $a0
    ctx->pc = 0x4a87dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a87e0: 0x26020060  addiu       $v0, $s0, 0x60
    ctx->pc = 0x4a87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x4a87e4: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x4a87e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a87e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a87e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a87ec:
    // 0x4a87ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a87ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a87f0: 0xc12a218  jal         func_4A8860
    ctx->pc = 0x4A87F0u;
    SET_GPR_U32(ctx, 31, 0x4A87F8u);
    ctx->pc = 0x4A87F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A87F0u;
    // 0x4a87f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8860u, 0x4A87F0u, 0x4A87F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A87F8u;
label_4a87f8:
    // 0x4a87f8: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x4a87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x4a87fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a87fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a8800: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a8800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a8804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a8804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4a8808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a8808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a880c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a880cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a8810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a8810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8814: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8814u;
        // 0x4a8818: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A881Cu;
    // 0x4a881c: 0x0  nop
    ctx->pc = 0x4a881cu;
    // NOP
    // 0x4a8820: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A8820u;
    {
        const bool branch_taken_0x4a8820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a8820) {
            ctx->pc = 0x4A8824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A8820u;
            // 0x4a8824: 0x8c830054  lw          $v1, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A8838u;
            goto label_4a8838;
        }
    }
    ctx->pc = 0x4A8828u;
    // 0x4a8828: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x4a8828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x4a882c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x4a882cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x4a8830: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8830u;
        // 0x4a8834: 0xac820054  sw          $v0, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8838u;
label_4a8838:
    // 0x4a8838: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a8838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a883c: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x4a883cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x4a8840: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a8840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a8844: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8844u;
        // 0x4a8848: 0xac830054  sw          $v1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A884Cu;
    // 0x4a884c: 0x0  nop
    ctx->pc = 0x4a884cu;
    // NOP
    // 0x4a8850: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x4a8850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x4a8854: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4a8854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x4a8858: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8858u;
        // 0x4a885c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8860u;
}
