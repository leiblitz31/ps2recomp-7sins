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

// Function: sub_0025F500
// Address: 0x25f500 - 0x25f540
void sub_0025F500_0x25f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F500_0x25f500");
#endif

    switch (ctx->pc) {
        case 0x25f518u: goto label_25f518;
        case 0x25f528u: goto label_25f528;
        default: break;
    }

    ctx->pc = 0x25f500u;

    // 0x25f500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25f500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25f504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f508: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25f508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25f50c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x25f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x25f510: 0xc097d90  jal         func_25F640
    ctx->pc = 0x25F510u;
    SET_GPR_U32(ctx, 31, 0x25F518u);
    ctx->pc = 0x25F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F640u, 0x25F510u, 0x25F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F518u;
label_25f518:
    // 0x25f518: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25f518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f51c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25f51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f520: 0xc097d50  jal         func_25F540
    ctx->pc = 0x25F520u;
    SET_GPR_U32(ctx, 31, 0x25F528u);
    ctx->pc = 0x25F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F540u, 0x25F520u, 0x25F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F528u;
label_25f528:
    // 0x25f528: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25f528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25f52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f530: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25f530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25f534: 0x3e00008  jr          $ra
    ctx->pc = 0x25F534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F53Cu;
    // 0x25f53c: 0x0  nop
    ctx->pc = 0x25f53cu;
    // NOP
    ctx->pc = 0x25f540u;
}
