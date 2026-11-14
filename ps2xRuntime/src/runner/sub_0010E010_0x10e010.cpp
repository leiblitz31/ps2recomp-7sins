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

// Function: sub_0010E010
// Address: 0x10e010 - 0x10e0b0
void sub_0010E010_0x10e010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E010_0x10e010");
#endif

    switch (ctx->pc) {
        case 0x10e03cu: goto label_10e03c;
        case 0x10e04cu: goto label_10e04c;
        case 0x10e060u: goto label_10e060;
        case 0x10e070u: goto label_10e070;
        case 0x10e088u: goto label_10e088;
        default: break;
    }

    ctx->pc = 0x10e010u;

    // 0x10e010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10e018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10e01c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10e020: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10e020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e024: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x10e024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10e028: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x10E028u;
    {
        const bool branch_taken_0x10e028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e028) {
            ctx->pc = 0x10E094u;
            goto label_10e094;
        }
    }
    ctx->pc = 0x10E030u;
    // 0x10e030: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10e030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e034: 0xc04383c  jal         func_10E0F0
    ctx->pc = 0x10E034u;
    SET_GPR_U32(ctx, 31, 0x10E03Cu);
    ctx->pc = 0x10E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0F0u, 0x10E034u, 0x10E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E03Cu;
label_10e03c:
    // 0x10e03c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e040: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10e040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e044: 0xc044a8c  jal         func_112A30
    ctx->pc = 0x10E044u;
    SET_GPR_U32(ctx, 31, 0x10E04Cu);
    ctx->pc = 0x112A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112A30u, 0x10E044u, 0x10E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E04Cu;
label_10e04c:
    // 0x10e04c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e050: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10e050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e054: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10e054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e058: 0xc043834  jal         func_10E0D0
    ctx->pc = 0x10E058u;
    SET_GPR_U32(ctx, 31, 0x10E060u);
    ctx->pc = 0x10E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0D0u, 0x10E058u, 0x10E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E060u;
label_10e060:
    // 0x10e060: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10e060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x10e064: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10e064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e068: 0xc04383c  jal         func_10E0F0
    ctx->pc = 0x10E068u;
    SET_GPR_U32(ctx, 31, 0x10E070u);
    ctx->pc = 0x10E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0F0u, 0x10E068u, 0x10E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E070u;
label_10e070:
    // 0x10e070: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10e070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10e074: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10e074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e078: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x10e078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e07c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e080: 0xc04382c  jal         func_10E0B0
    ctx->pc = 0x10E080u;
    SET_GPR_U32(ctx, 31, 0x10E088u);
    ctx->pc = 0x10E0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0B0u, 0x10E080u, 0x10E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E088u;
label_10e088:
    // 0x10e088: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10e088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x10e08c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e090: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10e090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_10e094:
    // 0x10e094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10e098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e09c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10e09cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10E0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E0A8u;
    // 0x10e0a8: 0x0  nop
    ctx->pc = 0x10e0a8u;
    // NOP
    // 0x10e0ac: 0x0  nop
    ctx->pc = 0x10e0acu;
    // NOP
    ctx->pc = 0x10e0b0u;
}
