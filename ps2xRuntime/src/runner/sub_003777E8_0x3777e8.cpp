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

// Function: sub_003777E8
// Address: 0x3777e8 - 0x377890
void sub_003777E8_0x3777e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003777E8_0x3777e8");
#endif

    switch (ctx->pc) {
        case 0x3777e8u: goto label_3777e8;
        case 0x3777ecu: goto label_3777ec;
        case 0x3777f0u: goto label_3777f0;
        case 0x3777f4u: goto label_3777f4;
        case 0x3777f8u: goto label_3777f8;
        case 0x3777fcu: goto label_3777fc;
        case 0x377800u: goto label_377800;
        case 0x377804u: goto label_377804;
        case 0x377808u: goto label_377808;
        case 0x37780cu: goto label_37780c;
        case 0x377810u: goto label_377810;
        case 0x377814u: goto label_377814;
        case 0x377818u: goto label_377818;
        case 0x37781cu: goto label_37781c;
        case 0x377820u: goto label_377820;
        case 0x377824u: goto label_377824;
        case 0x377828u: goto label_377828;
        case 0x37782cu: goto label_37782c;
        case 0x377830u: goto label_377830;
        case 0x377834u: goto label_377834;
        case 0x377838u: goto label_377838;
        case 0x37783cu: goto label_37783c;
        case 0x377840u: goto label_377840;
        case 0x377844u: goto label_377844;
        case 0x377848u: goto label_377848;
        case 0x37784cu: goto label_37784c;
        case 0x377850u: goto label_377850;
        case 0x377854u: goto label_377854;
        case 0x377858u: goto label_377858;
        case 0x37785cu: goto label_37785c;
        case 0x377860u: goto label_377860;
        case 0x377864u: goto label_377864;
        case 0x377868u: goto label_377868;
        case 0x37786cu: goto label_37786c;
        case 0x377870u: goto label_377870;
        case 0x377874u: goto label_377874;
        case 0x377878u: goto label_377878;
        case 0x37787cu: goto label_37787c;
        case 0x377880u: goto label_377880;
        case 0x377884u: goto label_377884;
        case 0x377888u: goto label_377888;
        case 0x37788cu: goto label_37788c;
        default: break;
    }

    ctx->pc = 0x3777e8u;

label_3777e8:
    // 0x3777e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3777e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3777ec:
    // 0x3777ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3777ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3777f0:
    // 0x3777f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3777f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3777f4:
    // 0x3777f4: 0x2443c430  addiu       $v1, $v0, -0x3BD0
    ctx->pc = 0x3777f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_3777f8:
    // 0x3777f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3777f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3777fc:
    // 0x3777fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3777fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_377800:
    // 0x377800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_377804:
    // 0x377804: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x377804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377808:
    // 0x377808: 0x8c46c430  lw          $a2, -0x3BD0($v0)
    ctx->pc = 0x377808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951984)));
label_37780c:
    // 0x37780c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x37780cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_377810:
    // 0x377810: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x377810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_377814:
    // 0x377814: 0x2448021  addu        $s0, $s2, $a0
    ctx->pc = 0x377814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_377818:
    // 0x377818: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x377818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_37781c:
    // 0x37781c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_377820:
    if (ctx->pc == 0x377820u) {
        ctx->pc = 0x377820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37781Cu;
        // 0x377820: 0xc58821  addu        $s1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377824u;
        goto label_377824;
    }
    ctx->pc = 0x37781Cu;
    {
        const bool branch_taken_0x37781c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37781Cu;
        // 0x377820: 0xc58821  addu        $s1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37781c) {
            ctx->pc = 0x377874u;
            goto label_377874;
        }
    }
    ctx->pc = 0x377824u;
label_377824:
    // 0x377824: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x377824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_377828:
    // 0x377828: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x377828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37782c:
    // 0x37782c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x37782cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_377830:
    // 0x377830: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x377830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_377834:
    // 0x377834: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x377834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_377838:
    // 0x377838: 0x34a5012a  ori         $a1, $a1, 0x12A
    ctx->pc = 0x377838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
label_37783c:
    // 0x37783c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x37783cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_377840:
    // 0x377840: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x377840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_377844:
    // 0x377844: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x377844u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_377848:
    // 0x377848: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x377848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_37784c:
    // 0x37784c: 0x40f809  jalr        $v0
label_377850:
    if (ctx->pc == 0x377850u) {
        ctx->pc = 0x377850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37784Cu;
        // 0x377850: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377854u;
        goto label_377854;
    }
    ctx->pc = 0x37784Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x377854u);
        ctx->pc = 0x377850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37784Cu;
        // 0x377850: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37784Cu, 0x377854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x377854u;
label_377854:
    // 0x377854: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x377854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_377858:
    // 0x377858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x377858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37785c:
    // 0x37785c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x37785cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_377860:
    // 0x377860: 0xc0bb7e6  jal         func_2EDF98
label_377864:
    if (ctx->pc == 0x377864u) {
        ctx->pc = 0x377864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377860u;
        // 0x377864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377868u;
        goto label_377868;
    }
    ctx->pc = 0x377860u;
    SET_GPR_U32(ctx, 31, 0x377868u);
    ctx->pc = 0x377864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377860u;
    // 0x377864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x377860u, 0x377868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377868u;
label_377868:
    // 0x377868: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x377868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_37786c:
    // 0x37786c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_377870:
    // 0x377870: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x377870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_377874:
    // 0x377874: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x377874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_377878:
    // 0x377878: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x377878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37787c:
    // 0x37787c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37787cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_377880:
    // 0x377880: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x377880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377884:
    // 0x377884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_377888:
    // 0x377888: 0x3e00008  jr          $ra
label_37788c:
    if (ctx->pc == 0x37788Cu) {
        ctx->pc = 0x37788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377888u;
        // 0x37788c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377890u;
        goto label_fallthrough_0x377888;
    }
    ctx->pc = 0x377888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377888u;
        // 0x37788c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x377888:
    ctx->pc = 0x377890u;
}
