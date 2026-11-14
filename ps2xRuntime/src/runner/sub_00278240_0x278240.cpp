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

// Function: sub_00278240
// Address: 0x278240 - 0x278280
void sub_00278240_0x278240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278240_0x278240");
#endif

    switch (ctx->pc) {
        case 0x278254u: goto label_278254;
        case 0x278264u: goto label_278264;
        default: break;
    }

    ctx->pc = 0x278240u;

    // 0x278240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278248: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27824c: 0xc12246c  jal         func_4891B0
    ctx->pc = 0x27824Cu;
    SET_GPR_U32(ctx, 31, 0x278254u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27824Cu, 0x278254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278254u;
label_278254:
    // 0x278254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x278254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278258: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x278258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27825c: 0xc1204a4  jal         func_481290
    ctx->pc = 0x27825Cu;
    SET_GPR_U32(ctx, 31, 0x278264u);
    ctx->pc = 0x481290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x481290u, 0x27825Cu, 0x278264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278264u;
label_278264:
    // 0x278264: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27826c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27826cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278270: 0x3e00008  jr          $ra
    ctx->pc = 0x278270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278278u;
    // 0x278278: 0x0  nop
    ctx->pc = 0x278278u;
    // NOP
    // 0x27827c: 0x0  nop
    ctx->pc = 0x27827cu;
    // NOP
    ctx->pc = 0x278280u;
}
