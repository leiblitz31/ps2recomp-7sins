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

// Function: sub_0014A2E0
// Address: 0x14a2e0 - 0x14a380
void sub_0014A2E0_0x14a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A2E0_0x14a2e0");
#endif

    switch (ctx->pc) {
        case 0x14a30cu: goto label_14a30c;
        case 0x14a31cu: goto label_14a31c;
        case 0x14a330u: goto label_14a330;
        case 0x14a340u: goto label_14a340;
        case 0x14a358u: goto label_14a358;
        default: break;
    }

    ctx->pc = 0x14a2e0u;

    // 0x14a2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a2e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a2e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a2ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14a2f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x14a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a2f4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x14a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14a2f8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14A2F8u;
    {
        const bool branch_taken_0x14a2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a2f8) {
            ctx->pc = 0x14A364u;
            goto label_14a364;
        }
    }
    ctx->pc = 0x14A300u;
    // 0x14a300: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a304: 0xc0528e8  jal         func_14A3A0
    ctx->pc = 0x14A304u;
    SET_GPR_U32(ctx, 31, 0x14A30Cu);
    ctx->pc = 0x14A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3A0u, 0x14A304u, 0x14A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A30Cu;
label_14a30c:
    // 0x14a30c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14a30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a310: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14a310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a314: 0xc054678  jal         func_1519E0
    ctx->pc = 0x14A314u;
    SET_GPR_U32(ctx, 31, 0x14A31Cu);
    ctx->pc = 0x1519E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1519E0u, 0x14A314u, 0x14A31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A31Cu;
label_14a31c:
    // 0x14a31c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a320: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14a320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a324: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14a324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a328: 0xc047058  jal         func_11C160
    ctx->pc = 0x14A328u;
    SET_GPR_U32(ctx, 31, 0x14A330u);
    ctx->pc = 0x11C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C160u, 0x14A328u, 0x14A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A330u;
label_14a330:
    // 0x14a330: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x14a330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x14a334: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14a334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a338: 0xc0528e8  jal         func_14A3A0
    ctx->pc = 0x14A338u;
    SET_GPR_U32(ctx, 31, 0x14A340u);
    ctx->pc = 0x14A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3A0u, 0x14A338u, 0x14A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A340u;
label_14a340:
    // 0x14a340: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14a340u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14a344: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a348: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14a348u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a34c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a350: 0xc0528e0  jal         func_14A380
    ctx->pc = 0x14A350u;
    SET_GPR_U32(ctx, 31, 0x14A358u);
    ctx->pc = 0x14A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A380u, 0x14A350u, 0x14A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A358u;
label_14a358:
    // 0x14a358: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x14a358u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x14a35c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x14a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a360: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x14a360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_14a364:
    // 0x14a364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a36c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14a36cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14a370: 0x3e00008  jr          $ra
    ctx->pc = 0x14A370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A378u;
    // 0x14a378: 0x0  nop
    ctx->pc = 0x14a378u;
    // NOP
    // 0x14a37c: 0x0  nop
    ctx->pc = 0x14a37cu;
    // NOP
    ctx->pc = 0x14a380u;
}
