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

// Function: sub_00284E70
// Address: 0x284e70 - 0x284f10
void sub_00284E70_0x284e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284E70_0x284e70");
#endif

    switch (ctx->pc) {
        case 0x284e9cu: goto label_284e9c;
        case 0x284eacu: goto label_284eac;
        case 0x284ec0u: goto label_284ec0;
        case 0x284ed0u: goto label_284ed0;
        case 0x284ee8u: goto label_284ee8;
        default: break;
    }

    ctx->pc = 0x284e70u;

    // 0x284e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284e74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x284e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x284e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284e7c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x284e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x284e80: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x284e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284e84: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x284e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x284e88: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x284E88u;
    {
        const bool branch_taken_0x284e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x284e88) {
            ctx->pc = 0x284EF4u;
            goto label_284ef4;
        }
    }
    ctx->pc = 0x284E90u;
    // 0x284e90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x284e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284e94: 0xc0a13d4  jal         func_284F50
    ctx->pc = 0x284E94u;
    SET_GPR_U32(ctx, 31, 0x284E9Cu);
    ctx->pc = 0x284F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F50u, 0x284E94u, 0x284E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284E9Cu;
label_284e9c:
    // 0x284e9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x284e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284ea0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x284ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284ea4: 0xc0a3c90  jal         func_28F240
    ctx->pc = 0x284EA4u;
    SET_GPR_U32(ctx, 31, 0x284EACu);
    ctx->pc = 0x28F240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F240u, 0x284EA4u, 0x284EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284EACu;
label_284eac:
    // 0x284eac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x284eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284eb0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x284eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284eb4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x284eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284eb8: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x284EB8u;
    SET_GPR_U32(ctx, 31, 0x284EC0u);
    ctx->pc = 0x284F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F30u, 0x284EB8u, 0x284EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284EC0u;
label_284ec0:
    // 0x284ec0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x284ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x284ec4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x284ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284ec8: 0xc0a13d4  jal         func_284F50
    ctx->pc = 0x284EC8u;
    SET_GPR_U32(ctx, 31, 0x284ED0u);
    ctx->pc = 0x284F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F50u, 0x284EC8u, 0x284ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284ED0u;
label_284ed0:
    // 0x284ed0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x284ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x284ed4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x284ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284ed8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x284ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284edc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x284edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284ee0: 0xc0a13c4  jal         func_284F10
    ctx->pc = 0x284EE0u;
    SET_GPR_U32(ctx, 31, 0x284EE8u);
    ctx->pc = 0x284F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F10u, 0x284EE0u, 0x284EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284EE8u;
label_284ee8:
    // 0x284ee8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x284ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x284eec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x284eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284ef0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x284ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_284ef4:
    // 0x284ef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x284ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284ef8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284ef8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284efc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284efcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284f00: 0x3e00008  jr          $ra
    ctx->pc = 0x284F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284F08u;
    // 0x284f08: 0x0  nop
    ctx->pc = 0x284f08u;
    // NOP
    // 0x284f0c: 0x0  nop
    ctx->pc = 0x284f0cu;
    // NOP
    ctx->pc = 0x284f10u;
}
