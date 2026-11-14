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

// Function: sub_00116640
// Address: 0x116640 - 0x1166d0
void sub_00116640_0x116640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116640_0x116640");
#endif

    switch (ctx->pc) {
        case 0x11665cu: goto label_11665c;
        case 0x116668u: goto label_116668;
        case 0x116678u: goto label_116678;
        case 0x116684u: goto label_116684;
        case 0x116698u: goto label_116698;
        case 0x1166acu: goto label_1166ac;
        default: break;
    }

    ctx->pc = 0x116640u;

label_116640:
    // 0x116640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x116644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x116648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11664c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x11664cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x116650: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x116650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x116654: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x116654u;
    {
        const bool branch_taken_0x116654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116654) {
            ctx->pc = 0x1166B0u;
            goto label_1166b0;
        }
    }
    ctx->pc = 0x11665Cu;
label_11665c:
    // 0x11665c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x11665cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x116660: 0xc044ea4  jal         func_113A90
    ctx->pc = 0x116660u;
    SET_GPR_U32(ctx, 31, 0x116668u);
    ctx->pc = 0x113A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A90u, 0x116660u, 0x116668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116668u;
label_116668:
    // 0x116668: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x116668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11666c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11666cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116670: 0xc045990  jal         func_116640
    ctx->pc = 0x116670u;
    SET_GPR_U32(ctx, 31, 0x116678u);
    ctx->pc = 0x116640u;
    goto label_116640;
    ctx->pc = 0x116678u;
label_116678:
    // 0x116678: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x116678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11667c: 0xc044eac  jal         func_113AB0
    ctx->pc = 0x11667Cu;
    SET_GPR_U32(ctx, 31, 0x116684u);
    ctx->pc = 0x113AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AB0u, 0x11667Cu, 0x116684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116684u;
label_116684:
    // 0x116684: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x116684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116688: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x116688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11668c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x11668cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x116690: 0xc045170  jal         func_1145C0
    ctx->pc = 0x116690u;
    SET_GPR_U32(ctx, 31, 0x116698u);
    ctx->pc = 0x1145C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1145C0u, 0x116690u, 0x116698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116698u;
label_116698:
    // 0x116698: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x116698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11669c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x11669cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1166a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1166a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1166a4: 0xc045a34  jal         func_1168D0
    ctx->pc = 0x1166A4u;
    SET_GPR_U32(ctx, 31, 0x1166ACu);
    ctx->pc = 0x1168D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168D0u, 0x1166A4u, 0x1166ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166ACu;
label_1166ac:
    // 0x1166ac: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x1166acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_1166b0:
    // 0x1166b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1166b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1166b4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1166B4u;
    {
        const bool branch_taken_0x1166b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1166b4) {
            ctx->pc = 0x11665Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11665c;
        }
    }
    ctx->pc = 0x1166BCu;
    // 0x1166bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1166bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1166c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1166c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1166c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1166c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1166c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1166C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1166C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1166D0u;
}
