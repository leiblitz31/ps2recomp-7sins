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

// Function: sub_00279720
// Address: 0x279720 - 0x279780
void sub_00279720_0x279720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279720_0x279720");
#endif

    switch (ctx->pc) {
        case 0x279744u: goto label_279744;
        case 0x27976cu: goto label_27976c;
        default: break;
    }

    ctx->pc = 0x279720u;

    // 0x279720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x279724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27972c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27972cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x279730: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x279730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x279734: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279738: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x279738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27973c: 0xc09e608  jal         func_279820
    ctx->pc = 0x27973Cu;
    SET_GPR_U32(ctx, 31, 0x279744u);
    ctx->pc = 0x279820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279820u, 0x27973Cu, 0x279744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279744u;
label_279744:
    // 0x279744: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279748: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x279748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27974c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x27974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279750: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x279750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279754: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x279754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x279758: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x279758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27975c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x27975cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x279760: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279764: 0xc09e5e0  jal         func_279780
    ctx->pc = 0x279764u;
    SET_GPR_U32(ctx, 31, 0x27976Cu);
    ctx->pc = 0x279780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279780u, 0x279764u, 0x27976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27976Cu;
label_27976c:
    // 0x27976c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279774: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x279774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x279778: 0x3e00008  jr          $ra
    ctx->pc = 0x279778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279780u;
}
