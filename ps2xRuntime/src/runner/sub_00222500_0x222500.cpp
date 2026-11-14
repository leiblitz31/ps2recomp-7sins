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

// Function: sub_00222500
// Address: 0x222500 - 0x2225a0
void sub_00222500_0x222500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222500_0x222500");
#endif

    switch (ctx->pc) {
        case 0x22252cu: goto label_22252c;
        case 0x22253cu: goto label_22253c;
        case 0x222550u: goto label_222550;
        case 0x222560u: goto label_222560;
        case 0x222578u: goto label_222578;
        default: break;
    }

    ctx->pc = 0x222500u;

    // 0x222500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x222504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x222508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x222508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22250c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22250cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x222510: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x222510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222514: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x222514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x222518: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x222518u;
    {
        const bool branch_taken_0x222518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222518) {
            ctx->pc = 0x222584u;
            goto label_222584;
        }
    }
    ctx->pc = 0x222520u;
    // 0x222520: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x222520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222524: 0xc0863ac  jal         func_218EB0
    ctx->pc = 0x222524u;
    SET_GPR_U32(ctx, 31, 0x22252Cu);
    ctx->pc = 0x218EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EB0u, 0x222524u, 0x22252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22252Cu;
label_22252c:
    // 0x22252c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222530: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x222530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222534: 0xc0896d8  jal         func_225B60
    ctx->pc = 0x222534u;
    SET_GPR_U32(ctx, 31, 0x22253Cu);
    ctx->pc = 0x225B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B60u, 0x222534u, 0x22253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22253Cu;
label_22253c:
    // 0x22253c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222540: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x222540u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222544: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x222544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222548: 0xc086228  jal         func_2188A0
    ctx->pc = 0x222548u;
    SET_GPR_U32(ctx, 31, 0x222550u);
    ctx->pc = 0x2188A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2188A0u, 0x222548u, 0x222550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222550u;
label_222550:
    // 0x222550: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x222550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x222554: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x222554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222558: 0xc0863ac  jal         func_218EB0
    ctx->pc = 0x222558u;
    SET_GPR_U32(ctx, 31, 0x222560u);
    ctx->pc = 0x218EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EB0u, 0x222558u, 0x222560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222560u;
label_222560:
    // 0x222560: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x222560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x222564: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x222564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222568: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x222568u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22256c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22256cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222570: 0xc0883a8  jal         func_220EA0
    ctx->pc = 0x222570u;
    SET_GPR_U32(ctx, 31, 0x222578u);
    ctx->pc = 0x220EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220EA0u, 0x222570u, 0x222578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222578u;
label_222578:
    // 0x222578: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x222578u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x22257c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x22257cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222580: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x222580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_222584:
    // 0x222584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x222584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x222588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22258c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22258cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x222590: 0x3e00008  jr          $ra
    ctx->pc = 0x222590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222598u;
    // 0x222598: 0x0  nop
    ctx->pc = 0x222598u;
    // NOP
    // 0x22259c: 0x0  nop
    ctx->pc = 0x22259cu;
    // NOP
    ctx->pc = 0x2225a0u;
}
