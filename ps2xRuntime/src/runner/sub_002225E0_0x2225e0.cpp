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

// Function: sub_002225E0
// Address: 0x2225e0 - 0x222640
void sub_002225E0_0x2225e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002225E0_0x2225e0");
#endif

    switch (ctx->pc) {
        case 0x222604u: goto label_222604;
        case 0x22262cu: goto label_22262c;
        default: break;
    }

    ctx->pc = 0x2225e0u;

    // 0x2225e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2225e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2225e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2225e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2225e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2225e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2225ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2225ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2225f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2225f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2225f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2225f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2225f8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2225f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2225fc: 0xc0889b8  jal         func_2226E0
    ctx->pc = 0x2225FCu;
    SET_GPR_U32(ctx, 31, 0x222604u);
    ctx->pc = 0x2226E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2226E0u, 0x2225FCu, 0x222604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222604u;
label_222604:
    // 0x222604: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222608: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x222608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22260c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222610: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x222610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222614: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x222614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x222618: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x222618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22261c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x22261cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x222620: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222624: 0xc088990  jal         func_222640
    ctx->pc = 0x222624u;
    SET_GPR_U32(ctx, 31, 0x22262Cu);
    ctx->pc = 0x222640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222640u, 0x222624u, 0x22262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22262Cu;
label_22262c:
    // 0x22262c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222634: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x222634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x222638: 0x3e00008  jr          $ra
    ctx->pc = 0x222638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222640u;
}
