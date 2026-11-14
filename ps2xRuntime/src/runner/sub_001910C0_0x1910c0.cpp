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

// Function: sub_001910C0
// Address: 0x1910c0 - 0x191150
void sub_001910C0_0x1910c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001910C0_0x1910c0");
#endif

    switch (ctx->pc) {
        case 0x1910dcu: goto label_1910dc;
        case 0x1910e8u: goto label_1910e8;
        case 0x1910f8u: goto label_1910f8;
        case 0x191104u: goto label_191104;
        case 0x191118u: goto label_191118;
        case 0x19112cu: goto label_19112c;
        default: break;
    }

    ctx->pc = 0x1910c0u;

label_1910c0:
    // 0x1910c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1910c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1910c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1910c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1910c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1910c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1910cc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1910ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1910d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1910d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1910d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1910D4u;
    {
        const bool branch_taken_0x1910d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1910d4) {
            ctx->pc = 0x191130u;
            goto label_191130;
        }
    }
    ctx->pc = 0x1910DCu;
label_1910dc:
    // 0x1910dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1910dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1910e0: 0xc0643fc  jal         func_190FF0
    ctx->pc = 0x1910E0u;
    SET_GPR_U32(ctx, 31, 0x1910E8u);
    ctx->pc = 0x190FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190FF0u, 0x1910E0u, 0x1910E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1910E8u;
label_1910e8:
    // 0x1910e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1910e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1910ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1910ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1910f0: 0xc064430  jal         func_1910C0
    ctx->pc = 0x1910F0u;
    SET_GPR_U32(ctx, 31, 0x1910F8u);
    ctx->pc = 0x1910C0u;
    goto label_1910c0;
    ctx->pc = 0x1910F8u;
label_1910f8:
    // 0x1910f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1910f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1910fc: 0xc064404  jal         func_191010
    ctx->pc = 0x1910FCu;
    SET_GPR_U32(ctx, 31, 0x191104u);
    ctx->pc = 0x191010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191010u, 0x1910FCu, 0x191104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191104u;
label_191104:
    // 0x191104: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191108: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x191108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19110c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x19110cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x191110: 0xc04febc  jal         func_13FAF0
    ctx->pc = 0x191110u;
    SET_GPR_U32(ctx, 31, 0x191118u);
    ctx->pc = 0x13FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAF0u, 0x191110u, 0x191118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191118u;
label_191118:
    // 0x191118: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x191118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19111c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19111cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191120: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x191120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x191124: 0xc064300  jal         func_190C00
    ctx->pc = 0x191124u;
    SET_GPR_U32(ctx, 31, 0x19112Cu);
    ctx->pc = 0x190C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C00u, 0x191124u, 0x19112Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19112Cu;
label_19112c:
    // 0x19112c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x19112cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_191130:
    // 0x191130: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x191130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191134: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x191134u;
    {
        const bool branch_taken_0x191134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x191134) {
            ctx->pc = 0x1910DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1910dc;
        }
    }
    ctx->pc = 0x19113Cu;
    // 0x19113c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19113cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191140: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191144: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x191144u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x191148: 0x3e00008  jr          $ra
    ctx->pc = 0x191148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191150u;
}
