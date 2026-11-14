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

// Function: sub_00113270
// Address: 0x113270 - 0x113310
void sub_00113270_0x113270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113270_0x113270");
#endif

    switch (ctx->pc) {
        case 0x11329cu: goto label_11329c;
        case 0x1132acu: goto label_1132ac;
        case 0x1132c0u: goto label_1132c0;
        case 0x1132d0u: goto label_1132d0;
        case 0x1132e8u: goto label_1132e8;
        default: break;
    }

    ctx->pc = 0x113270u;

    // 0x113270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x113278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11327c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x11327cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x113280: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x113280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113284: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x113284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x113288: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x113288u;
    {
        const bool branch_taken_0x113288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x113288) {
            ctx->pc = 0x1132F4u;
            goto label_1132f4;
        }
    }
    ctx->pc = 0x113290u;
    // 0x113290: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x113290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113294: 0xc044cd4  jal         func_113350
    ctx->pc = 0x113294u;
    SET_GPR_U32(ctx, 31, 0x11329Cu);
    ctx->pc = 0x113350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113350u, 0x113294u, 0x11329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11329Cu;
label_11329c:
    // 0x11329c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x11329cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1132a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1132a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1132a4: 0xc045990  jal         func_116640
    ctx->pc = 0x1132A4u;
    SET_GPR_U32(ctx, 31, 0x1132ACu);
    ctx->pc = 0x116640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116640u, 0x1132A4u, 0x1132ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132ACu;
label_1132ac:
    // 0x1132ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1132acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1132b0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1132b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1132b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1132b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1132b8: 0xc044ccc  jal         func_113330
    ctx->pc = 0x1132B8u;
    SET_GPR_U32(ctx, 31, 0x1132C0u);
    ctx->pc = 0x113330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113330u, 0x1132B8u, 0x1132C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132C0u;
label_1132c0:
    // 0x1132c0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1132c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1132c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1132c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1132c8: 0xc044cd4  jal         func_113350
    ctx->pc = 0x1132C8u;
    SET_GPR_U32(ctx, 31, 0x1132D0u);
    ctx->pc = 0x113350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113350u, 0x1132C8u, 0x1132D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132D0u;
label_1132d0:
    // 0x1132d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1132d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1132d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1132d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1132d8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1132d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1132dc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1132dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1132e0: 0xc044cc4  jal         func_113310
    ctx->pc = 0x1132E0u;
    SET_GPR_U32(ctx, 31, 0x1132E8u);
    ctx->pc = 0x113310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113310u, 0x1132E0u, 0x1132E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132E8u;
label_1132e8:
    // 0x1132e8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1132e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1132ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1132ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1132f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1132f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1132f4:
    // 0x1132f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1132f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1132f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1132f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1132fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1132fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x113300: 0x3e00008  jr          $ra
    ctx->pc = 0x113300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113308u;
    // 0x113308: 0x0  nop
    ctx->pc = 0x113308u;
    // NOP
    // 0x11330c: 0x0  nop
    ctx->pc = 0x11330cu;
    // NOP
    ctx->pc = 0x113310u;
}
