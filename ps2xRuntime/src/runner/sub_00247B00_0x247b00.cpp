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

// Function: sub_00247B00
// Address: 0x247b00 - 0x247ba0
void sub_00247B00_0x247b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247B00_0x247b00");
#endif

    switch (ctx->pc) {
        case 0x247b2cu: goto label_247b2c;
        case 0x247b3cu: goto label_247b3c;
        case 0x247b50u: goto label_247b50;
        case 0x247b60u: goto label_247b60;
        case 0x247b78u: goto label_247b78;
        default: break;
    }

    ctx->pc = 0x247b00u;

    // 0x247b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247b04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x247b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x247b08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x247b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x247b0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x247b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x247b10: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x247b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247b14: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x247b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x247b18: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x247B18u;
    {
        const bool branch_taken_0x247b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247b18) {
            ctx->pc = 0x247B84u;
            goto label_247b84;
        }
    }
    ctx->pc = 0x247B20u;
    // 0x247b20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247b24: 0xc053ccc  jal         func_14F330
    ctx->pc = 0x247B24u;
    SET_GPR_U32(ctx, 31, 0x247B2Cu);
    ctx->pc = 0x14F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F330u, 0x247B24u, 0x247B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B2Cu;
label_247b2c:
    // 0x247b2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247b30: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x247b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247b34: 0xc093cb8  jal         func_24F2E0
    ctx->pc = 0x247B34u;
    SET_GPR_U32(ctx, 31, 0x247B3Cu);
    ctx->pc = 0x24F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F2E0u, 0x247B34u, 0x247B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B3Cu;
label_247b3c:
    // 0x247b3c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247b40: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x247b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247b44: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247b48: 0xc064084  jal         func_190210
    ctx->pc = 0x247B48u;
    SET_GPR_U32(ctx, 31, 0x247B50u);
    ctx->pc = 0x190210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190210u, 0x247B48u, 0x247B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B50u;
label_247b50:
    // 0x247b50: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x247b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x247b54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247b58: 0xc053ccc  jal         func_14F330
    ctx->pc = 0x247B58u;
    SET_GPR_U32(ctx, 31, 0x247B60u);
    ctx->pc = 0x14F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F330u, 0x247B58u, 0x247B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B60u;
label_247b60:
    // 0x247b60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x247b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x247b64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247b68: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x247b68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247b6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247b70: 0xc091ee8  jal         func_247BA0
    ctx->pc = 0x247B70u;
    SET_GPR_U32(ctx, 31, 0x247B78u);
    ctx->pc = 0x247BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247BA0u, 0x247B70u, 0x247B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247B78u;
label_247b78:
    // 0x247b78: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x247b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x247b7c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x247b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247b80: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x247b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_247b84:
    // 0x247b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x247b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247b8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247b8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247b90: 0x3e00008  jr          $ra
    ctx->pc = 0x247B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247B98u;
    // 0x247b98: 0x0  nop
    ctx->pc = 0x247b98u;
    // NOP
    // 0x247b9c: 0x0  nop
    ctx->pc = 0x247b9cu;
    // NOP
    ctx->pc = 0x247ba0u;
}
