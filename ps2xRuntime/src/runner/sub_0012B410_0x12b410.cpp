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

// Function: sub_0012B410
// Address: 0x12b410 - 0x12b450
void sub_0012B410_0x12b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B410_0x12b410");
#endif

    switch (ctx->pc) {
        case 0x12b430u: goto label_12b430;
        default: break;
    }

    ctx->pc = 0x12b410u;

    // 0x12b410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b418: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12b418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12b41c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x12b420: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12b420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b424: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x12b424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b428: 0xc04ad14  jal         func_12B450
    ctx->pc = 0x12B428u;
    SET_GPR_U32(ctx, 31, 0x12B430u);
    ctx->pc = 0x12B450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B450u, 0x12B428u, 0x12B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B430u;
label_12b430:
    // 0x12b430: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b438: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b43c: 0x3e00008  jr          $ra
    ctx->pc = 0x12B43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B444u;
    // 0x12b444: 0x0  nop
    ctx->pc = 0x12b444u;
    // NOP
    // 0x12b448: 0x0  nop
    ctx->pc = 0x12b448u;
    // NOP
    // 0x12b44c: 0x0  nop
    ctx->pc = 0x12b44cu;
    // NOP
    ctx->pc = 0x12b450u;
}
