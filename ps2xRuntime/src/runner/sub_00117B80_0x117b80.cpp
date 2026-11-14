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

// Function: sub_00117B80
// Address: 0x117b80 - 0x117c10
void sub_00117B80_0x117b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117B80_0x117b80");
#endif

    switch (ctx->pc) {
        case 0x117b9cu: goto label_117b9c;
        case 0x117ba8u: goto label_117ba8;
        case 0x117bb8u: goto label_117bb8;
        case 0x117bc4u: goto label_117bc4;
        case 0x117bd8u: goto label_117bd8;
        case 0x117becu: goto label_117bec;
        default: break;
    }

    ctx->pc = 0x117b80u;

label_117b80:
    // 0x117b80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x117b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x117b8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x117b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x117b90: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x117b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x117b94: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x117B94u;
    {
        const bool branch_taken_0x117b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117b94) {
            ctx->pc = 0x117BF0u;
            goto label_117bf0;
        }
    }
    ctx->pc = 0x117B9Cu;
label_117b9c:
    // 0x117b9c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x117b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117ba0: 0xc045eac  jal         func_117AB0
    ctx->pc = 0x117BA0u;
    SET_GPR_U32(ctx, 31, 0x117BA8u);
    ctx->pc = 0x117AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AB0u, 0x117BA0u, 0x117BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117BA8u;
label_117ba8:
    // 0x117ba8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x117ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117bac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x117bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117bb0: 0xc045ee0  jal         func_117B80
    ctx->pc = 0x117BB0u;
    SET_GPR_U32(ctx, 31, 0x117BB8u);
    ctx->pc = 0x117B80u;
    goto label_117b80;
    ctx->pc = 0x117BB8u;
label_117bb8:
    // 0x117bb8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x117bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117bbc: 0xc045eb4  jal         func_117AD0
    ctx->pc = 0x117BBCu;
    SET_GPR_U32(ctx, 31, 0x117BC4u);
    ctx->pc = 0x117AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AD0u, 0x117BBCu, 0x117BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117BC4u;
label_117bc4:
    // 0x117bc4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x117bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117bc8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x117bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117bcc: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x117bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x117bd0: 0xc045f04  jal         func_117C10
    ctx->pc = 0x117BD0u;
    SET_GPR_U32(ctx, 31, 0x117BD8u);
    ctx->pc = 0x117C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C10u, 0x117BD0u, 0x117BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117BD8u;
label_117bd8:
    // 0x117bd8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x117bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117bdc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x117bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117be0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x117be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117be4: 0xc0459e0  jal         func_116780
    ctx->pc = 0x117BE4u;
    SET_GPR_U32(ctx, 31, 0x117BECu);
    ctx->pc = 0x116780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116780u, 0x117BE4u, 0x117BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117BECu;
label_117bec:
    // 0x117bec: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x117becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
label_117bf0:
    // 0x117bf0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x117bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117bf4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x117BF4u;
    {
        const bool branch_taken_0x117bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x117bf4) {
            ctx->pc = 0x117B9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117b9c;
        }
    }
    ctx->pc = 0x117BFCu;
    // 0x117bfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117c04: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x117c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x117c08: 0x3e00008  jr          $ra
    ctx->pc = 0x117C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117C10u;
}
