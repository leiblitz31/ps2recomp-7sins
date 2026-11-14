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

// Function: sub_00194660
// Address: 0x194660 - 0x194710
void sub_00194660_0x194660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194660_0x194660");
#endif

    switch (ctx->pc) {
        case 0x1946a0u: goto label_1946a0;
        case 0x1946c0u: goto label_1946c0;
        default: break;
    }

    ctx->pc = 0x194660u;

    // 0x194660: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194664: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x194664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194668: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19466c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19466cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x194670: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x194670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x194674: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x194674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x194678: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x194678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19467c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194680: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194680u;
    {
        const bool branch_taken_0x194680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194680) {
            ctx->pc = 0x194694u;
            goto label_194694;
        }
    }
    ctx->pc = 0x194688u;
    // 0x194688: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x194688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19468c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x19468Cu;
    {
        const bool branch_taken_0x19468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19468c) {
            ctx->pc = 0x1946FCu;
            goto label_1946fc;
        }
    }
    ctx->pc = 0x194694u;
label_194694:
    // 0x194694: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x194694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194698: 0xc04e240  jal         func_138900
    ctx->pc = 0x194698u;
    SET_GPR_U32(ctx, 31, 0x1946A0u);
    ctx->pc = 0x138900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138900u, 0x194698u, 0x1946A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1946A0u;
label_1946a0:
    // 0x1946a0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1946a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1946a4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1946a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1946a8: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1946a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1946ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1946acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1946b0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1946b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1946b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1946b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946b8: 0xc11929c  jal         func_464A70
    ctx->pc = 0x1946B8u;
    SET_GPR_U32(ctx, 31, 0x1946C0u);
    ctx->pc = 0x464A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464A70u, 0x1946B8u, 0x1946C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1946C0u;
label_1946c0:
    // 0x1946c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1946c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1946c4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1946C4u;
    {
        const bool branch_taken_0x1946c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1946c4) {
            ctx->pc = 0x1946D8u;
            goto label_1946d8;
        }
    }
    ctx->pc = 0x1946CCu;
    // 0x1946cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1946ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1946d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1946D0u;
    {
        const bool branch_taken_0x1946d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1946d0) {
            ctx->pc = 0x1946FCu;
            goto label_1946fc;
        }
    }
    ctx->pc = 0x1946D8u;
label_1946d8:
    // 0x1946d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1946d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1946dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1946dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1946e0: 0x2021823  subu        $v1, $s0, $v0
    ctx->pc = 0x1946e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1946e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1946e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1946e8: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1946e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1946ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1946ECu;
    {
        const bool branch_taken_0x1946ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1946ec) {
            ctx->pc = 0x1946FCu;
            goto label_1946fc;
        }
    }
    ctx->pc = 0x1946F4u;
    // 0x1946f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1946f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1946f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1946f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1946fc:
    // 0x1946fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1946fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194704: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x194704u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x194708: 0x3e00008  jr          $ra
    ctx->pc = 0x194708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194710u;
}
