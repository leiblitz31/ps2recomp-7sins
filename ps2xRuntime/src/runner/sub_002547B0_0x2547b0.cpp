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

// Function: sub_002547B0
// Address: 0x2547b0 - 0x254810
void sub_002547B0_0x2547b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002547B0_0x2547b0");
#endif

    switch (ctx->pc) {
        case 0x2547d4u: goto label_2547d4;
        case 0x2547fcu: goto label_2547fc;
        default: break;
    }

    ctx->pc = 0x2547b0u;

    // 0x2547b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2547b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2547b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2547b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2547b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2547b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2547bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2547bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2547c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2547c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2547c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2547c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2547c8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2547c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2547cc: 0xc09522c  jal         func_2548B0
    ctx->pc = 0x2547CCu;
    SET_GPR_U32(ctx, 31, 0x2547D4u);
    ctx->pc = 0x2548B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548B0u, 0x2547CCu, 0x2547D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547D4u;
label_2547d4:
    // 0x2547d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2547d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2547d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2547d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2547dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2547dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2547e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2547e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2547e4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2547e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2547e8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2547e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2547ec: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2547ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2547f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2547f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2547f4: 0xc095204  jal         func_254810
    ctx->pc = 0x2547F4u;
    SET_GPR_U32(ctx, 31, 0x2547FCu);
    ctx->pc = 0x254810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254810u, 0x2547F4u, 0x2547FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547FCu;
label_2547fc:
    // 0x2547fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2547fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254804: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x254804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x254808: 0x3e00008  jr          $ra
    ctx->pc = 0x254808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254810u;
}
