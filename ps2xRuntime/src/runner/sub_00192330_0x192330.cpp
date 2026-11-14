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

// Function: sub_00192330
// Address: 0x192330 - 0x192370
void sub_00192330_0x192330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192330_0x192330");
#endif

    switch (ctx->pc) {
        case 0x192358u: goto label_192358;
        default: break;
    }

    ctx->pc = 0x192330u;

    // 0x192330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x192330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x192334: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192338: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x192338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19233c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19233cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x192340: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x192340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x192344: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x192344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192348: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x192348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19234c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x19234cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192350: 0xc04f1e8  jal         func_13C7A0
    ctx->pc = 0x192350u;
    SET_GPR_U32(ctx, 31, 0x192358u);
    ctx->pc = 0x13C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7A0u, 0x192350u, 0x192358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192358u;
label_192358:
    // 0x192358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19235c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19235cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x192360: 0x3e00008  jr          $ra
    ctx->pc = 0x192360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192368u;
    // 0x192368: 0x0  nop
    ctx->pc = 0x192368u;
    // NOP
    // 0x19236c: 0x0  nop
    ctx->pc = 0x19236cu;
    // NOP
    ctx->pc = 0x192370u;
}
