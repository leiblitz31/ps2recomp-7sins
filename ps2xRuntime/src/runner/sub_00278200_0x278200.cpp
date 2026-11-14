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

// Function: sub_00278200
// Address: 0x278200 - 0x278240
void sub_00278200_0x278200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278200_0x278200");
#endif

    switch (ctx->pc) {
        case 0x278214u: goto label_278214;
        case 0x278228u: goto label_278228;
        default: break;
    }

    ctx->pc = 0x278200u;

    // 0x278200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278208: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27820c: 0xc12246c  jal         func_4891B0
    ctx->pc = 0x27820Cu;
    SET_GPR_U32(ctx, 31, 0x278214u);
    ctx->pc = 0x4891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891B0u, 0x27820Cu, 0x278214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278214u;
label_278214:
    // 0x278214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x278214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278218: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x278218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27821c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27821cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278220: 0xc12052c  jal         func_4814B0
    ctx->pc = 0x278220u;
    SET_GPR_U32(ctx, 31, 0x278228u);
    ctx->pc = 0x4814B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4814B0u, 0x278220u, 0x278228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278228u;
label_278228:
    // 0x278228: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27822c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27822cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278230: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278234: 0x3e00008  jr          $ra
    ctx->pc = 0x278234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27823Cu;
    // 0x27823c: 0x0  nop
    ctx->pc = 0x27823cu;
    // NOP
    ctx->pc = 0x278240u;
}
