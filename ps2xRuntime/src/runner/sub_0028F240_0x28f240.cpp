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

// Function: sub_0028F240
// Address: 0x28f240 - 0x28f2d0
void sub_0028F240_0x28f240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F240_0x28f240");
#endif

    switch (ctx->pc) {
        case 0x28f25cu: goto label_28f25c;
        case 0x28f268u: goto label_28f268;
        case 0x28f278u: goto label_28f278;
        case 0x28f284u: goto label_28f284;
        case 0x28f298u: goto label_28f298;
        case 0x28f2acu: goto label_28f2ac;
        default: break;
    }

    ctx->pc = 0x28f240u;

label_28f240:
    // 0x28f240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28f240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28f244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28f244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28f248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f24c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28f24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28f250: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28f250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28f254: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28F254u;
    {
        const bool branch_taken_0x28f254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f254) {
            ctx->pc = 0x28F2B0u;
            goto label_28f2b0;
        }
    }
    ctx->pc = 0x28F25Cu;
label_28f25c:
    // 0x28f25c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x28f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f260: 0xc0a3c48  jal         func_28F120
    ctx->pc = 0x28F260u;
    SET_GPR_U32(ctx, 31, 0x28F268u);
    ctx->pc = 0x28F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F120u, 0x28F260u, 0x28F268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F268u;
label_28f268:
    // 0x28f268: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28f268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f26c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f270: 0xc0a3c90  jal         func_28F240
    ctx->pc = 0x28F270u;
    SET_GPR_U32(ctx, 31, 0x28F278u);
    ctx->pc = 0x28F240u;
    goto label_28f240;
    ctx->pc = 0x28F278u;
label_28f278:
    // 0x28f278: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x28f278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f27c: 0xc0a3c50  jal         func_28F140
    ctx->pc = 0x28F27Cu;
    SET_GPR_U32(ctx, 31, 0x28F284u);
    ctx->pc = 0x28F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F140u, 0x28F27Cu, 0x28F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F284u;
label_28f284:
    // 0x28f284: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28f284u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f288: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f28c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x28f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x28f290: 0xc0a2348  jal         func_288D20
    ctx->pc = 0x28F290u;
    SET_GPR_U32(ctx, 31, 0x28F298u);
    ctx->pc = 0x288D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288D20u, 0x28F290u, 0x28F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F298u;
label_28f298:
    // 0x28f298: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28f298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f29c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28f29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f2a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28f2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f2a4: 0xc0a37f0  jal         func_28DFC0
    ctx->pc = 0x28F2A4u;
    SET_GPR_U32(ctx, 31, 0x28F2ACu);
    ctx->pc = 0x28DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DFC0u, 0x28F2A4u, 0x28F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F2ACu;
label_28f2ac:
    // 0x28f2ac: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x28f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_28f2b0:
    // 0x28f2b0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f2b4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x28F2B4u;
    {
        const bool branch_taken_0x28f2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f2b4) {
            ctx->pc = 0x28F25Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f25c;
        }
    }
    ctx->pc = 0x28F2BCu;
    // 0x28f2bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28f2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f2c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f2c4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28f2c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28f2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x28F2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F2D0u;
}
