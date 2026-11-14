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

// Function: sub_00195050
// Address: 0x195050 - 0x1950d0
void sub_00195050_0x195050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195050_0x195050");
#endif

    switch (ctx->pc) {
        case 0x195084u: goto label_195084;
        case 0x195094u: goto label_195094;
        case 0x1950b4u: goto label_1950b4;
        default: break;
    }

    ctx->pc = 0x195050u;

    // 0x195050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19505c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x19505cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x195060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195064: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x195064u;
    {
        const bool branch_taken_0x195064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195064) {
            ctx->pc = 0x1950B4u;
            goto label_1950b4;
        }
    }
    ctx->pc = 0x19506Cu;
    // 0x19506c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195074: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x195074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x195078: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x195078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19507c: 0xc065460  jal         func_195180
    ctx->pc = 0x19507Cu;
    SET_GPR_U32(ctx, 31, 0x195084u);
    ctx->pc = 0x195180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195180u, 0x19507Cu, 0x195084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195084u;
label_195084:
    // 0x195084: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19508c: 0xc065434  jal         func_1950D0
    ctx->pc = 0x19508Cu;
    SET_GPR_U32(ctx, 31, 0x195094u);
    ctx->pc = 0x1950D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1950D0u, 0x19508Cu, 0x195094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195094u;
label_195094:
    // 0x195094: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x195094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195098: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x195098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19509c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19509cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1950a0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1950A0u;
    {
        const bool branch_taken_0x1950a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1950a0) {
            ctx->pc = 0x1950B4u;
            goto label_1950b4;
        }
    }
    ctx->pc = 0x1950A8u;
    // 0x1950a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1950a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1950ac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1950ACu;
    SET_GPR_U32(ctx, 31, 0x1950B4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1950ACu, 0x1950B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1950B4u;
label_1950b4:
    // 0x1950b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1950b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1950b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1950b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1950bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1950bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1950c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1950C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1950C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1950C8u;
    // 0x1950c8: 0x0  nop
    ctx->pc = 0x1950c8u;
    // NOP
    // 0x1950cc: 0x0  nop
    ctx->pc = 0x1950ccu;
    // NOP
    ctx->pc = 0x1950d0u;
}
