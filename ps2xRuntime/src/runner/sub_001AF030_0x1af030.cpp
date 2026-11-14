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

// Function: sub_001AF030
// Address: 0x1af030 - 0x1af0b0
void sub_001AF030_0x1af030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF030_0x1af030");
#endif

    switch (ctx->pc) {
        case 0x1af064u: goto label_1af064;
        case 0x1af074u: goto label_1af074;
        case 0x1af094u: goto label_1af094;
        default: break;
    }

    ctx->pc = 0x1af030u;

    // 0x1af030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1af034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1af038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1af03c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1af03cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1af040: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af044: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AF044u;
    {
        const bool branch_taken_0x1af044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af044) {
            ctx->pc = 0x1AF094u;
            goto label_1af094;
        }
    }
    ctx->pc = 0x1AF04Cu;
    // 0x1af04c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1af04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af050: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af054: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1af054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af058: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1af058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1af05c: 0xc06bc58  jal         func_1AF160
    ctx->pc = 0x1AF05Cu;
    SET_GPR_U32(ctx, 31, 0x1AF064u);
    ctx->pc = 0x1AF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF160u, 0x1AF05Cu, 0x1AF064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF064u;
label_1af064:
    // 0x1af064: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af06c: 0xc06bc2c  jal         func_1AF0B0
    ctx->pc = 0x1AF06Cu;
    SET_GPR_U32(ctx, 31, 0x1AF074u);
    ctx->pc = 0x1AF0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF0B0u, 0x1AF06Cu, 0x1AF074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF074u;
label_1af074:
    // 0x1af074: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1af074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af078: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1af078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1af07c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1af07cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1af080: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF080u;
    {
        const bool branch_taken_0x1af080 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1af080) {
            ctx->pc = 0x1AF094u;
            goto label_1af094;
        }
    }
    ctx->pc = 0x1AF088u;
    // 0x1af088: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1af088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af08c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1AF08Cu;
    SET_GPR_U32(ctx, 31, 0x1AF094u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1AF08Cu, 0x1AF094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF094u;
label_1af094:
    // 0x1af094: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af09c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1af09cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1af0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF0A8u;
    // 0x1af0a8: 0x0  nop
    ctx->pc = 0x1af0a8u;
    // NOP
    // 0x1af0ac: 0x0  nop
    ctx->pc = 0x1af0acu;
    // NOP
    ctx->pc = 0x1af0b0u;
}
