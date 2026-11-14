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

// Function: sub_00482490
// Address: 0x482490 - 0x482550
void sub_00482490_0x482490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482490_0x482490");
#endif

    switch (ctx->pc) {
        case 0x4824b4u: goto label_4824b4;
        case 0x4824c8u: goto label_4824c8;
        case 0x4824d4u: goto label_4824d4;
        case 0x4824e8u: goto label_4824e8;
        case 0x482508u: goto label_482508;
        case 0x482520u: goto label_482520;
        default: break;
    }

    ctx->pc = 0x482490u;

    // 0x482490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x482490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x482494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x482494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x482498: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x482498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48249c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4824a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4824a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4824a4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x4824a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x4824a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4824a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4824ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4824ACu;
    {
        const bool branch_taken_0x4824ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4824ac) {
            ctx->pc = 0x482510u;
            goto label_482510;
        }
    }
    ctx->pc = 0x4824B4u;
label_4824b4:
    // 0x4824b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4824b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4824b8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4824b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4824bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4824bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4824c0: 0xc04e51c  jal         func_139470
    ctx->pc = 0x4824C0u;
    SET_GPR_U32(ctx, 31, 0x4824C8u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x4824C0u, 0x4824C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4824C8u;
label_4824c8:
    // 0x4824c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4824c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4824cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4824CCu;
    {
        const bool branch_taken_0x4824cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4824cc) {
            ctx->pc = 0x4824ECu;
            goto label_4824ec;
        }
    }
    ctx->pc = 0x4824D4u;
label_4824d4:
    // 0x4824d4: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x4824d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4824d8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x4824d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4824dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4824dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4824e0: 0xc0a095c  jal         func_282570
    ctx->pc = 0x4824E0u;
    SET_GPR_U32(ctx, 31, 0x4824E8u);
    ctx->pc = 0x282570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282570u, 0x4824E0u, 0x4824E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4824E8u;
label_4824e8:
    // 0x4824e8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x4824e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4824ec:
    // 0x4824ec: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4824ECu;
    {
        const bool branch_taken_0x4824ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4824ec) {
            ctx->pc = 0x4824D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4824d4;
        }
    }
    ctx->pc = 0x4824F4u;
    // 0x4824f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4824f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4824f8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4824f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4824fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4824fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482500: 0xc04e51c  jal         func_139470
    ctx->pc = 0x482500u;
    SET_GPR_U32(ctx, 31, 0x482508u);
    ctx->pc = 0x139470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139470u, 0x482500u, 0x482508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482508u;
label_482508:
    // 0x482508: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x482508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x48250c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x48250cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_482510:
    // 0x482510: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x482510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x482514: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x482514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x482518: 0xc04e50c  jal         func_139430
    ctx->pc = 0x482518u;
    SET_GPR_U32(ctx, 31, 0x482520u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x482518u, 0x482520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482520u;
label_482520:
    // 0x482520: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x482520u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x482524: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x482524u;
    {
        const bool branch_taken_0x482524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x482524) {
            ctx->pc = 0x4824B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4824b4;
        }
    }
    ctx->pc = 0x48252Cu;
    // 0x48252c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x48252cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x482530: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x482530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x482534: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x482534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482538: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x482538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48253c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48253cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482544: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x482544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x482548: 0x3e00008  jr          $ra
    ctx->pc = 0x482548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482550u;
}
