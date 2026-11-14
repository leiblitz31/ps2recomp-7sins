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

// Function: sub_002579D0
// Address: 0x2579d0 - 0x257a60
void sub_002579D0_0x2579d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002579D0_0x2579d0");
#endif

    switch (ctx->pc) {
        case 0x2579ecu: goto label_2579ec;
        case 0x2579f8u: goto label_2579f8;
        case 0x257a08u: goto label_257a08;
        case 0x257a14u: goto label_257a14;
        case 0x257a28u: goto label_257a28;
        case 0x257a3cu: goto label_257a3c;
        default: break;
    }

    ctx->pc = 0x2579d0u;

label_2579d0:
    // 0x2579d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2579d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2579d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2579d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2579d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2579d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2579dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2579dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2579e0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2579e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2579e4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2579E4u;
    {
        const bool branch_taken_0x2579e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2579e4) {
            ctx->pc = 0x257A40u;
            goto label_257a40;
        }
    }
    ctx->pc = 0x2579ECu;
label_2579ec:
    // 0x2579ec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2579ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2579f0: 0xc095e40  jal         func_257900
    ctx->pc = 0x2579F0u;
    SET_GPR_U32(ctx, 31, 0x2579F8u);
    ctx->pc = 0x257900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257900u, 0x2579F0u, 0x2579F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2579F8u;
label_2579f8:
    // 0x2579f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2579f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2579fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2579fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257a00: 0xc095e74  jal         func_2579D0
    ctx->pc = 0x257A00u;
    SET_GPR_U32(ctx, 31, 0x257A08u);
    ctx->pc = 0x2579D0u;
    goto label_2579d0;
    ctx->pc = 0x257A08u;
label_257a08:
    // 0x257a08: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x257a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257a0c: 0xc095e48  jal         func_257920
    ctx->pc = 0x257A0Cu;
    SET_GPR_U32(ctx, 31, 0x257A14u);
    ctx->pc = 0x257920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257920u, 0x257A0Cu, 0x257A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A14u;
label_257a14:
    // 0x257a14: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x257a14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257a18: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257a1c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x257a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x257a20: 0xc095e98  jal         func_257A60
    ctx->pc = 0x257A20u;
    SET_GPR_U32(ctx, 31, 0x257A28u);
    ctx->pc = 0x257A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257A60u, 0x257A20u, 0x257A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A28u;
label_257a28:
    // 0x257a28: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x257a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257a2c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x257a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257a30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x257a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257a34: 0xc095c74  jal         func_2571D0
    ctx->pc = 0x257A34u;
    SET_GPR_U32(ctx, 31, 0x257A3Cu);
    ctx->pc = 0x2571D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571D0u, 0x257A34u, 0x257A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A3Cu;
label_257a3c:
    // 0x257a3c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x257a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_257a40:
    // 0x257a40: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x257a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257a44: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x257A44u;
    {
        const bool branch_taken_0x257a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257a44) {
            ctx->pc = 0x2579ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2579ec;
        }
    }
    ctx->pc = 0x257A4Cu;
    // 0x257a4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257a50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257a50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257a54: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x257a54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x257a58: 0x3e00008  jr          $ra
    ctx->pc = 0x257A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257A60u;
}
