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

// Function: sub_00282440
// Address: 0x282440 - 0x282570
void sub_00282440_0x282440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282440_0x282440");
#endif

    switch (ctx->pc) {
        case 0x282484u: goto label_282484;
        case 0x28249cu: goto label_28249c;
        case 0x2824c0u: goto label_2824c0;
        case 0x2824d4u: goto label_2824d4;
        case 0x2824f8u: goto label_2824f8;
        case 0x282518u: goto label_282518;
        default: break;
    }

    ctx->pc = 0x282440u;

    // 0x282440: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x282440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x282444: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x282444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x282448: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x282448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28244c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28244cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x282450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x282450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x282454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28245c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x28245cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x282460: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x282460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x282464: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x282464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x282468: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x282468u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28246c: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x28246Cu;
    {
        const bool branch_taken_0x28246c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28246c) {
            ctx->pc = 0x282540u;
            goto label_282540;
        }
    }
    ctx->pc = 0x282474u;
    // 0x282474: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x282474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282478: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x282478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x28247c: 0xc0a0978  jal         func_2825E0
    ctx->pc = 0x28247Cu;
    SET_GPR_U32(ctx, 31, 0x282484u);
    ctx->pc = 0x2825E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2825E0u, 0x28247Cu, 0x282484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282484u;
label_282484:
    // 0x282484: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x282484u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282488: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x282488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28248c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x28248cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x282490: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x282490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282494: 0xc04e51c  jal         func_139470
    ctx->pc = 0x282494u;
    SET_GPR_U32(ctx, 31, 0x28249Cu);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x282494u, 0x28249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28249Cu;
label_28249c:
    // 0x28249c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28249cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2824a0: 0x16120012  bne         $s0, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2824A0u;
    {
        const bool branch_taken_0x2824a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x2824a0) {
            ctx->pc = 0x2824ECu;
            goto label_2824ec;
        }
    }
    ctx->pc = 0x2824A8u;
    // 0x2824a8: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x2824a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2824ac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2824acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2824b0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2824b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2824b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2824b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824b8: 0xc04e51c  jal         func_139470
    ctx->pc = 0x2824B8u;
    SET_GPR_U32(ctx, 31, 0x2824C0u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x2824B8u, 0x2824C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2824C0u;
label_2824c0:
    // 0x2824c0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x2824c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x2824c4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2824c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2824c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2824c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2824cc: 0xc0a095c  jal         func_282570
    ctx->pc = 0x2824CCu;
    SET_GPR_U32(ctx, 31, 0x2824D4u);
    ctx->pc = 0x282570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282570u, 0x2824CCu, 0x2824D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2824D4u;
label_2824d4:
    // 0x2824d4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2824d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2824d8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2824d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2824dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2824dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2824e0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2824e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2824e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2824E4u;
    {
        const bool branch_taken_0x2824e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2824e4) {
            ctx->pc = 0x282540u;
            goto label_282540;
        }
    }
    ctx->pc = 0x2824ECu;
label_2824ec:
    // 0x2824ec: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2824ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2824f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2824F0u;
    {
        const bool branch_taken_0x2824f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2824f0) {
            ctx->pc = 0x282538u;
            goto label_282538;
        }
    }
    ctx->pc = 0x2824F8u;
label_2824f8:
    // 0x2824f8: 0x1632000d  bne         $s1, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2824F8u;
    {
        const bool branch_taken_0x2824f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x2824f8) {
            ctx->pc = 0x282530u;
            goto label_282530;
        }
    }
    ctx->pc = 0x282500u;
    // 0x282500: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x282500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x282504: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x282504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x282508: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x282508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28250c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28250cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282510: 0xc0a095c  jal         func_282570
    ctx->pc = 0x282510u;
    SET_GPR_U32(ctx, 31, 0x282518u);
    ctx->pc = 0x282570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282570u, 0x282510u, 0x282518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282518u;
label_282518:
    // 0x282518: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x282518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28251c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x28251cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x282520: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x282520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x282524: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x282524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x282528: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x282528u;
    {
        const bool branch_taken_0x282528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282528) {
            ctx->pc = 0x282540u;
            goto label_282540;
        }
    }
    ctx->pc = 0x282530u;
label_282530:
    // 0x282530: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x282530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282534: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x282534u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_282538:
    // 0x282538: 0x1620ffef  bnez        $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x282538u;
    {
        const bool branch_taken_0x282538 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x282538) {
            ctx->pc = 0x2824F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2824f8;
        }
    }
    ctx->pc = 0x282540u;
label_282540:
    // 0x282540: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x282540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282544: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x282544u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282548: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x282548u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28254c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28254cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282558: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x282558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28255c: 0x3e00008  jr          $ra
    ctx->pc = 0x28255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28255Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282564u;
    // 0x282564: 0x0  nop
    ctx->pc = 0x282564u;
    // NOP
    // 0x282568: 0x0  nop
    ctx->pc = 0x282568u;
    // NOP
    // 0x28256c: 0x0  nop
    ctx->pc = 0x28256cu;
    // NOP
    ctx->pc = 0x282570u;
}
