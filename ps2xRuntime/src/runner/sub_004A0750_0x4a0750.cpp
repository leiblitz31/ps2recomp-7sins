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

// Function: sub_004A0750
// Address: 0x4a0750 - 0x4a0840
void sub_004A0750_0x4a0750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0750_0x4a0750");
#endif

    switch (ctx->pc) {
        case 0x4a07a8u: goto label_4a07a8;
        case 0x4a07bcu: goto label_4a07bc;
        case 0x4a07c0u: goto label_4a07c0;
        case 0x4a07d0u: goto label_4a07d0;
        case 0x4a07ecu: goto label_4a07ec;
        case 0x4a0800u: goto label_4a0800;
        case 0x4a0818u: goto label_4a0818;
        default: break;
    }

    ctx->pc = 0x4a0750u;

    // 0x4a0750: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a0750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4a0754: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a0754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4a0758: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x4a0758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x4a075c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a075cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0760: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4a0760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x4a0764: 0x2676000c  addiu       $s6, $s3, 0xC
    ctx->pc = 0x4a0764u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x4a0768: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4a0768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x4a076c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4a076cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4a0770: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4a0770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x4a0774: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4a0774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x4a0778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a077c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x4a077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4a0780: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x4a0780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x4a0784: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a0784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a0788: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x4a0788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x4a078c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x4a078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x4a0790: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4a0790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x4a0794: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x4a0794u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4a0798: 0x12560017  beq         $s2, $s6, . + 4 + (0x17 << 2)
    ctx->pc = 0x4A0798u;
    {
        const bool branch_taken_0x4a0798 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        ctx->pc = 0x4A079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0798u;
        // 0x4a079c: 0x8f90c1f0  lw          $s0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0798) {
            ctx->pc = 0x4A07F8u;
            goto label_4a07f8;
        }
    }
    ctx->pc = 0x4A07A0u;
    // 0x4a07a0: 0x2795c1f0  addiu       $s5, $gp, -0x3E10
    ctx->pc = 0x4a07a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
    // 0x4a07a4: 0x0  nop
    ctx->pc = 0x4a07a4u;
    // NOP
label_4a07a8:
    // 0x4a07a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a07a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a07ac: 0x16150004  bne         $s0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A07ACu;
    {
        const bool branch_taken_0x4a07ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        ctx->pc = 0x4A07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A07ACu;
        // 0x4a07b0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a07ac) {
            ctx->pc = 0x4A07C0u;
            goto label_4a07c0;
        }
    }
    ctx->pc = 0x4A07B4u;
    // 0x4a07b4: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x4A07B4u;
    SET_GPR_U32(ctx, 31, 0x4A07BCu);
    ctx->pc = 0x4A07B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A07B4u;
    // 0x4a07b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x4A07B4u, 0x4A07BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A07BCu;
label_4a07bc:
    // 0x4a07bc: 0x0  nop
    ctx->pc = 0x4a07bcu;
    // NOP
label_4a07c0:
    // 0x4a07c0: 0x12150006  beq         $s0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A07C0u;
    {
        const bool branch_taken_0x4a07c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x4A07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A07C0u;
        // 0x4a07c4: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a07c0) {
            ctx->pc = 0x4A07DCu;
            goto label_4a07dc;
        }
    }
    ctx->pc = 0x4A07C8u;
    // 0x4a07c8: 0xc1282be  jal         func_4A0AF8
    ctx->pc = 0x4A07C8u;
    SET_GPR_U32(ctx, 31, 0x4A07D0u);
    ctx->pc = 0x4A07CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A07C8u;
    // 0x4a07cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0AF8u, 0x4A07C8u, 0x4A07D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A07D0u;
label_4a07d0:
    // 0x4a07d0: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4A07D0u;
    {
        const bool branch_taken_0x4a07d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a07d0) {
            ctx->pc = 0x4A07D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A07D0u;
            // 0x4a07d4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A07C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a07c0;
        }
    }
    ctx->pc = 0x4A07D8u;
    // 0x4a07d8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4a07d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a07dc:
    // 0x4a07dc: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A07DCu;
    {
        const bool branch_taken_0x4a07dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a07dc) {
            ctx->pc = 0x4A07E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A07DCu;
            // 0x4a07e0: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A07F0u;
            goto label_4a07f0;
        }
    }
    ctx->pc = 0x4A07E4u;
    // 0x4a07e4: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x4A07E4u;
    SET_GPR_U32(ctx, 31, 0x4A07ECu);
    ctx->pc = 0x4A07E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A07E4u;
    // 0x4a07e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x4A07E4u, 0x4A07ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A07ECu;
label_4a07ec:
    // 0x4a07ec: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x4a07ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a07f0:
    // 0x4a07f0: 0x1656ffed  bne         $s2, $s6, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4A07F0u;
    {
        const bool branch_taken_0x4a07f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x4A07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A07F0u;
        // 0x4a07f4: 0x8f90c1f0  lw          $s0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a07f0) {
            ctx->pc = 0x4A07A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a07a8;
        }
    }
    ctx->pc = 0x4A07F8u;
label_4a07f8:
    // 0x4a07f8: 0xc12aba0  jal         func_4AAE80
    ctx->pc = 0x4A07F8u;
    SET_GPR_U32(ctx, 31, 0x4A0800u);
    ctx->pc = 0x4A07FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A07F8u;
    // 0x4a07fc: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE80u, 0x4A07F8u, 0x4A0800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0800u;
label_4a0800:
    // 0x4a0800: 0x8f82b844  lw          $v0, -0x47BC($gp)
    ctx->pc = 0x4a0800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948932)));
    // 0x4a0804: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4A0804u;
    {
        const bool branch_taken_0x4a0804 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A0808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0804u;
        // 0x4a0808: 0x8f82b840  lw          $v0, -0x47C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0804) {
            ctx->pc = 0x4A0810u;
            goto label_4a0810;
        }
    }
    ctx->pc = 0x4A080Cu;
    // 0x4a080c: 0xaf82b844  sw          $v0, -0x47BC($gp)
    ctx->pc = 0x4a080cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
label_4a0810:
    // 0x4a0810: 0xc128486  jal         func_4A1218
    ctx->pc = 0x4A0810u;
    SET_GPR_U32(ctx, 31, 0x4A0818u);
    ctx->pc = 0x4A0814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0810u;
    // 0x4a0814: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1218u, 0x4A0810u, 0x4A0818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0818u;
label_4a0818:
    // 0x4a0818: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4a0818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a081c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4a081cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a0820: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4a0820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a0824: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a0824u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a0828: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4a0828u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a082c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4a082cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0830: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x4a0830u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0838: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0838u;
        // 0x4a083c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0840u;
}
