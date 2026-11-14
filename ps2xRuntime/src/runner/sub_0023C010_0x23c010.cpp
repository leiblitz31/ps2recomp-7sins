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

// Function: sub_0023C010
// Address: 0x23c010 - 0x23c0b0
void sub_0023C010_0x23c010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C010_0x23c010");
#endif

    switch (ctx->pc) {
        case 0x23c03cu: goto label_23c03c;
        case 0x23c04cu: goto label_23c04c;
        case 0x23c060u: goto label_23c060;
        case 0x23c070u: goto label_23c070;
        case 0x23c088u: goto label_23c088;
        default: break;
    }

    ctx->pc = 0x23c010u;

    // 0x23c010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23c014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23c018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23c018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23c01c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23c01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23c020: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23c020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c024: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x23c024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23c028: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x23C028u;
    {
        const bool branch_taken_0x23c028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c028) {
            ctx->pc = 0x23C094u;
            goto label_23c094;
        }
    }
    ctx->pc = 0x23C030u;
    // 0x23c030: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c034: 0xc08f03c  jal         func_23C0F0
    ctx->pc = 0x23C034u;
    SET_GPR_U32(ctx, 31, 0x23C03Cu);
    ctx->pc = 0x23C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0F0u, 0x23C034u, 0x23C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C03Cu;
label_23c03c:
    // 0x23c03c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c040: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23c040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c044: 0xc08fb2c  jal         func_23ECB0
    ctx->pc = 0x23C044u;
    SET_GPR_U32(ctx, 31, 0x23C04Cu);
    ctx->pc = 0x23ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ECB0u, 0x23C044u, 0x23C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C04Cu;
label_23c04c:
    // 0x23c04c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c050: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23c050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c054: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c058: 0xc08f034  jal         func_23C0D0
    ctx->pc = 0x23C058u;
    SET_GPR_U32(ctx, 31, 0x23C060u);
    ctx->pc = 0x23C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0D0u, 0x23C058u, 0x23C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C060u;
label_23c060:
    // 0x23c060: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23c060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x23c064: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c068: 0xc08f03c  jal         func_23C0F0
    ctx->pc = 0x23C068u;
    SET_GPR_U32(ctx, 31, 0x23C070u);
    ctx->pc = 0x23C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0F0u, 0x23C068u, 0x23C070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C070u;
label_23c070:
    // 0x23c070: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23c070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23c074: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23c074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c078: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23c078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c07c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c080: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x23C080u;
    SET_GPR_U32(ctx, 31, 0x23C088u);
    ctx->pc = 0x23C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0B0u, 0x23C080u, 0x23C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C088u;
label_23c088:
    // 0x23c088: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23c088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x23c08c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x23c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c090: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23c090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_23c094:
    // 0x23c094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23c094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23c098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c09c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23c09cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23c0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x23C0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C0A8u;
    // 0x23c0a8: 0x0  nop
    ctx->pc = 0x23c0a8u;
    // NOP
    // 0x23c0ac: 0x0  nop
    ctx->pc = 0x23c0acu;
    // NOP
    ctx->pc = 0x23c0b0u;
}
