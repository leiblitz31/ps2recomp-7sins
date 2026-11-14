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

// Function: sub_001A7710
// Address: 0x1a7710 - 0x1a7750
void sub_001A7710_0x1a7710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7710_0x1a7710");
#endif

    switch (ctx->pc) {
        case 0x1a772cu: goto label_1a772c;
        case 0x1a773cu: goto label_1a773c;
        default: break;
    }

    ctx->pc = 0x1a7710u;

    // 0x1a7710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a7718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a771c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7720: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1a7720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a7724: 0xc069e44  jal         func_1A7910
    ctx->pc = 0x1A7724u;
    SET_GPR_U32(ctx, 31, 0x1A772Cu);
    ctx->pc = 0x1A7910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7910u, 0x1A7724u, 0x1A772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A772Cu;
label_1a772c:
    // 0x1a772c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a772cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7730: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x1a7730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x1a7734: 0xc069dd4  jal         func_1A7750
    ctx->pc = 0x1A7734u;
    SET_GPR_U32(ctx, 31, 0x1A773Cu);
    ctx->pc = 0x1A7750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7750u, 0x1A7734u, 0x1A773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A773Cu;
label_1a773c:
    // 0x1a773c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a773cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7740: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a7740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a7744: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A774Cu;
    // 0x1a774c: 0x0  nop
    ctx->pc = 0x1a774cu;
    // NOP
    ctx->pc = 0x1a7750u;
}
