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

// Function: sub_00281810
// Address: 0x281810 - 0x281870
void sub_00281810_0x281810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281810_0x281810");
#endif

    switch (ctx->pc) {
        case 0x281834u: goto label_281834;
        case 0x28185cu: goto label_28185c;
        default: break;
    }

    ctx->pc = 0x281810u;

    // 0x281810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281818: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x281818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28181c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28181cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x281820: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x281820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x281824: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x281824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281828: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x281828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28182c: 0xc0a0644  jal         func_281910
    ctx->pc = 0x28182Cu;
    SET_GPR_U32(ctx, 31, 0x281834u);
    ctx->pc = 0x281910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281910u, 0x28182Cu, 0x281834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281834u;
label_281834:
    // 0x281834: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x281834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281838: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x281838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x28183c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281840: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x281840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281844: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x281844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x281848: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x281848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28184c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x28184cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x281850: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x281850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281854: 0xc0a061c  jal         func_281870
    ctx->pc = 0x281854u;
    SET_GPR_U32(ctx, 31, 0x28185Cu);
    ctx->pc = 0x281870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281870u, 0x281854u, 0x28185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28185Cu;
label_28185c:
    // 0x28185c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28185cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281864: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x281864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x281868: 0x3e00008  jr          $ra
    ctx->pc = 0x281868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281870u;
}
