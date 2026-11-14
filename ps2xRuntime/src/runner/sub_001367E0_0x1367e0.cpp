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

// Function: sub_001367E0
// Address: 0x1367e0 - 0x136820
void sub_001367E0_0x1367e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001367E0_0x1367e0");
#endif

    switch (ctx->pc) {
        case 0x136804u: goto label_136804;
        default: break;
    }

    ctx->pc = 0x1367e0u;

    // 0x1367e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1367e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1367e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1367e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1367e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1367e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1367ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1367ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1367f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1367f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1367f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1367f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1367f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1367f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1367fc: 0xc04da08  jal         func_136820
    ctx->pc = 0x1367FCu;
    SET_GPR_U32(ctx, 31, 0x136804u);
    ctx->pc = 0x136820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136820u, 0x1367FCu, 0x136804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136804u;
label_136804:
    // 0x136804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136808: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x136808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13680c: 0x3e00008  jr          $ra
    ctx->pc = 0x13680Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13680Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136814u;
    // 0x136814: 0x0  nop
    ctx->pc = 0x136814u;
    // NOP
    // 0x136818: 0x0  nop
    ctx->pc = 0x136818u;
    // NOP
    // 0x13681c: 0x0  nop
    ctx->pc = 0x13681cu;
    // NOP
    ctx->pc = 0x136820u;
}
