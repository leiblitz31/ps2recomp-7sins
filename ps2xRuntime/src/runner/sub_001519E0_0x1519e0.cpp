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

// Function: sub_001519E0
// Address: 0x1519e0 - 0x151a70
void sub_001519E0_0x1519e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001519E0_0x1519e0");
#endif

    switch (ctx->pc) {
        case 0x1519fcu: goto label_1519fc;
        case 0x151a08u: goto label_151a08;
        case 0x151a18u: goto label_151a18;
        case 0x151a24u: goto label_151a24;
        case 0x151a38u: goto label_151a38;
        case 0x151a4cu: goto label_151a4c;
        default: break;
    }

    ctx->pc = 0x1519e0u;

label_1519e0:
    // 0x1519e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1519e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1519e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1519e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1519e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1519e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1519ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1519ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1519f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1519f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1519f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1519F4u;
    {
        const bool branch_taken_0x1519f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1519f4) {
            ctx->pc = 0x151A50u;
            goto label_151a50;
        }
    }
    ctx->pc = 0x1519FCu;
label_1519fc:
    // 0x1519fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1519fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151a00: 0xc052bac  jal         func_14AEB0
    ctx->pc = 0x151A00u;
    SET_GPR_U32(ctx, 31, 0x151A08u);
    ctx->pc = 0x14AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AEB0u, 0x151A00u, 0x151A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A08u;
label_151a08:
    // 0x151a08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x151a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151a0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x151a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151a10: 0xc054678  jal         func_1519E0
    ctx->pc = 0x151A10u;
    SET_GPR_U32(ctx, 31, 0x151A18u);
    ctx->pc = 0x1519E0u;
    goto label_1519e0;
    ctx->pc = 0x151A18u;
label_151a18:
    // 0x151a18: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x151a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151a1c: 0xc052bb4  jal         func_14AED0
    ctx->pc = 0x151A1Cu;
    SET_GPR_U32(ctx, 31, 0x151A24u);
    ctx->pc = 0x14AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AED0u, 0x151A1Cu, 0x151A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A24u;
label_151a24:
    // 0x151a24: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x151a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151a28: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x151a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151a2c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x151a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x151a30: 0xc052d90  jal         func_14B640
    ctx->pc = 0x151A30u;
    SET_GPR_U32(ctx, 31, 0x151A38u);
    ctx->pc = 0x14B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B640u, 0x151A30u, 0x151A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A38u;
label_151a38:
    // 0x151a38: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x151a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151a3c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x151a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151a40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x151a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151a44: 0xc054708  jal         func_151C20
    ctx->pc = 0x151A44u;
    SET_GPR_U32(ctx, 31, 0x151A4Cu);
    ctx->pc = 0x151C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C20u, 0x151A44u, 0x151A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A4Cu;
label_151a4c:
    // 0x151a4c: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x151a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_151a50:
    // 0x151a50: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x151a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151a54: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x151A54u;
    {
        const bool branch_taken_0x151a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151a54) {
            ctx->pc = 0x1519FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1519fc;
        }
    }
    ctx->pc = 0x151A5Cu;
    // 0x151a5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x151a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151a64: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x151a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151a68: 0x3e00008  jr          $ra
    ctx->pc = 0x151A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151A70u;
}
