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

// Function: sub_00229810
// Address: 0x229810 - 0x229850
void sub_00229810_0x229810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229810_0x229810");
#endif

    switch (ctx->pc) {
        case 0x229834u: goto label_229834;
        default: break;
    }

    ctx->pc = 0x229810u;

    // 0x229810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x229810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x229814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229818: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x229818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22981c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22981cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229820: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x229820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x229824: 0x24a56e50  addiu       $a1, $a1, 0x6E50
    ctx->pc = 0x229824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28240));
    // 0x229828: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x229828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22982c: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x22982Cu;
    SET_GPR_U32(ctx, 31, 0x229834u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x22982Cu, 0x229834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229834u;
label_229834:
    // 0x229834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229838: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x229838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22983c: 0x3e00008  jr          $ra
    ctx->pc = 0x22983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22983Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229844u;
    // 0x229844: 0x0  nop
    ctx->pc = 0x229844u;
    // NOP
    // 0x229848: 0x0  nop
    ctx->pc = 0x229848u;
    // NOP
    // 0x22984c: 0x0  nop
    ctx->pc = 0x22984cu;
    // NOP
    ctx->pc = 0x229850u;
}
