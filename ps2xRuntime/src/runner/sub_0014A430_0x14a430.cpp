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

// Function: sub_0014A430
// Address: 0x14a430 - 0x14a490
void sub_0014A430_0x14a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A430_0x14a430");
#endif

    switch (ctx->pc) {
        case 0x14a454u: goto label_14a454;
        case 0x14a47cu: goto label_14a47c;
        default: break;
    }

    ctx->pc = 0x14a430u;

    // 0x14a430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14a430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14a434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a43c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x14a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x14a440: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x14a440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x14a444: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a448: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x14a448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a44c: 0xc05294c  jal         func_14A530
    ctx->pc = 0x14A44Cu;
    SET_GPR_U32(ctx, 31, 0x14A454u);
    ctx->pc = 0x14A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A530u, 0x14A44Cu, 0x14A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A454u;
label_14a454:
    // 0x14a454: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a458: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14a458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x14a45c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a460: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a464: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x14a464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x14a468: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x14a468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a46c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x14a46cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a470: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a474: 0xc052924  jal         func_14A490
    ctx->pc = 0x14A474u;
    SET_GPR_U32(ctx, 31, 0x14A47Cu);
    ctx->pc = 0x14A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A490u, 0x14A474u, 0x14A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A47Cu;
label_14a47c:
    // 0x14a47c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a484: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14a484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14a488: 0x3e00008  jr          $ra
    ctx->pc = 0x14A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A490u;
}
