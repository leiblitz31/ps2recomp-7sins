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

// Function: sub_00159380
// Address: 0x159380 - 0x159410
void sub_00159380_0x159380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159380_0x159380");
#endif

    switch (ctx->pc) {
        case 0x15939cu: goto label_15939c;
        case 0x1593a8u: goto label_1593a8;
        case 0x1593b8u: goto label_1593b8;
        case 0x1593c4u: goto label_1593c4;
        case 0x1593d8u: goto label_1593d8;
        case 0x1593ecu: goto label_1593ec;
        default: break;
    }

    ctx->pc = 0x159380u;

label_159380:
    // 0x159380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x159384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x159388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15938c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15938cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x159390: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x159390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x159394: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x159394u;
    {
        const bool branch_taken_0x159394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159394) {
            ctx->pc = 0x1593F0u;
            goto label_1593f0;
        }
    }
    ctx->pc = 0x15939Cu;
label_15939c:
    // 0x15939c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x15939cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1593a0: 0xc0564ac  jal         func_1592B0
    ctx->pc = 0x1593A0u;
    SET_GPR_U32(ctx, 31, 0x1593A8u);
    ctx->pc = 0x1592B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592B0u, 0x1593A0u, 0x1593A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593A8u;
label_1593a8:
    // 0x1593a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1593a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1593ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1593acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1593b0: 0xc0564e0  jal         func_159380
    ctx->pc = 0x1593B0u;
    SET_GPR_U32(ctx, 31, 0x1593B8u);
    ctx->pc = 0x159380u;
    goto label_159380;
    ctx->pc = 0x1593B8u;
label_1593b8:
    // 0x1593b8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1593b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1593bc: 0xc0564b4  jal         func_1592D0
    ctx->pc = 0x1593BCu;
    SET_GPR_U32(ctx, 31, 0x1593C4u);
    ctx->pc = 0x1592D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1592D0u, 0x1593BCu, 0x1593C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593C4u;
label_1593c4:
    // 0x1593c4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1593c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1593c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1593c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1593cc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1593ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1593d0: 0xc056504  jal         func_159410
    ctx->pc = 0x1593D0u;
    SET_GPR_U32(ctx, 31, 0x1593D8u);
    ctx->pc = 0x159410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159410u, 0x1593D0u, 0x1593D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593D8u;
label_1593d8:
    // 0x1593d8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1593d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1593dc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1593dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1593e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1593e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1593e4: 0xc056320  jal         func_158C80
    ctx->pc = 0x1593E4u;
    SET_GPR_U32(ctx, 31, 0x1593ECu);
    ctx->pc = 0x158C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158C80u, 0x1593E4u, 0x1593ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593ECu;
label_1593ec:
    // 0x1593ec: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x1593ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_1593f0:
    // 0x1593f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1593f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1593f4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1593F4u;
    {
        const bool branch_taken_0x1593f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1593f4) {
            ctx->pc = 0x15939Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15939c;
        }
    }
    ctx->pc = 0x1593FCu;
    // 0x1593fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1593fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159404: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x159404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x159408: 0x3e00008  jr          $ra
    ctx->pc = 0x159408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159410u;
}
