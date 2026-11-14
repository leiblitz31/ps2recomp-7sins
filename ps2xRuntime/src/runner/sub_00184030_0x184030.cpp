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

// Function: sub_00184030
// Address: 0x184030 - 0x184090
void sub_00184030_0x184030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184030_0x184030");
#endif

    switch (ctx->pc) {
        case 0x184054u: goto label_184054;
        case 0x18407cu: goto label_18407c;
        default: break;
    }

    ctx->pc = 0x184030u;

    // 0x184030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x184030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x184034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184038: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x184038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18403c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18403cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x184040: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x184040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x184044: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x184044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184048: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x184048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18404c: 0xc06104c  jal         func_184130
    ctx->pc = 0x18404Cu;
    SET_GPR_U32(ctx, 31, 0x184054u);
    ctx->pc = 0x184130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184130u, 0x18404Cu, 0x184054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184054u;
label_184054:
    // 0x184054: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184058: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x184058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x18405c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18405cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184060: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x184060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184064: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x184064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x184068: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x184068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18406c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x18406cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x184070: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x184070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184074: 0xc061024  jal         func_184090
    ctx->pc = 0x184074u;
    SET_GPR_U32(ctx, 31, 0x18407Cu);
    ctx->pc = 0x184090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184090u, 0x184074u, 0x18407Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18407Cu;
label_18407c:
    // 0x18407c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184084: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x184084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x184088: 0x3e00008  jr          $ra
    ctx->pc = 0x184088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184090u;
}
