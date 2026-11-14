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

// Function: sub_003017F8
// Address: 0x3017f8 - 0x3018c8
void sub_003017F8_0x3017f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003017F8_0x3017f8");
#endif

    switch (ctx->pc) {
        case 0x30181cu: goto label_30181c;
        case 0x301848u: goto label_301848;
        case 0x301884u: goto label_301884;
        default: break;
    }

    ctx->pc = 0x3017f8u;

    // 0x3017f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3017f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3017fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3017fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x301800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x301800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x301804: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x301804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x301808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30180c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x30180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x301810: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x301810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x301814: 0xc0c04ec  jal         func_3013B0
    ctx->pc = 0x301814u;
    SET_GPR_U32(ctx, 31, 0x30181Cu);
    ctx->pc = 0x301818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301814u;
    // 0x301818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3013B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3013B0u, 0x301814u, 0x30181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30181Cu;
label_30181c:
    // 0x30181c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30181cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301820: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x301820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x301824: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x301824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x301828: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x301828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x30182c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x30182cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x301830: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x301830u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x301834: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x301834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x301838: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x301838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30183c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x30183cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x301840: 0xc0c05da  jal         func_301768
    ctx->pc = 0x301840u;
    SET_GPR_U32(ctx, 31, 0x301848u);
    ctx->pc = 0x301844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301840u;
    // 0x301844: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301768u, 0x301840u, 0x301848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301848u;
label_301848:
    // 0x301848: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x301848u;
    {
        const bool branch_taken_0x301848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x301848) {
            ctx->pc = 0x30184Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301848u;
            // 0x30184c: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30185Cu;
            goto label_30185c;
        }
    }
    ctx->pc = 0x301850u;
    // 0x301850: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x301850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x301854: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x301854u;
    {
        const bool branch_taken_0x301854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x301858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301854u;
        // 0x301858: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301854) {
            ctx->pc = 0x301864u;
            goto label_301864;
        }
    }
    ctx->pc = 0x30185Cu;
label_30185c:
    // 0x30185c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x30185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x301860: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x301860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_301864:
    // 0x301864: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x301864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x301868: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x301868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30186c: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x30186cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x301870: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x301870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x301874: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x301874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301878: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x301878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30187c: 0xc0c03ba  jal         func_300EE8
    ctx->pc = 0x30187Cu;
    SET_GPR_U32(ctx, 31, 0x301884u);
    ctx->pc = 0x301880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30187Cu;
    // 0x301880: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300EE8u, 0x30187Cu, 0x301884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301884u;
label_301884:
    // 0x301884: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x301884u;
    {
        const bool branch_taken_0x301884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x301888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301884u;
        // 0x301888: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301884) {
            ctx->pc = 0x3018B0u;
            goto label_3018b0;
        }
    }
    ctx->pc = 0x30188Cu;
    // 0x30188c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x30188cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301890: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x301890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x301894: 0x24a517b8  addiu       $a1, $a1, 0x17B8
    ctx->pc = 0x301894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6072));
    // 0x301898: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x301898u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30189c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x30189cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3018a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3018a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3018a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3018a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3018a8: 0x80c2678  j           func_3099E0
    ctx->pc = 0x3018A8u;
    ctx->pc = 0x3018ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3018A8u;
    // 0x3018ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3099E0u, 0x3018A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3018B0u;
label_3018b0:
    // 0x3018b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3018b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3018b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3018b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3018b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3018b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3018bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3018BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3018C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3018BCu;
        // 0x3018c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3018BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3018C4u;
    // 0x3018c4: 0x0  nop
    ctx->pc = 0x3018c4u;
    // NOP
    ctx->pc = 0x3018c8u;
}
