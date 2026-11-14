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

// Function: sub_00213E90
// Address: 0x213e90 - 0x213ed0
void sub_00213E90_0x213e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213E90_0x213e90");
#endif

    switch (ctx->pc) {
        case 0x213ea8u: goto label_213ea8;
        case 0x213eb8u: goto label_213eb8;
        default: break;
    }

    ctx->pc = 0x213e90u;

    // 0x213e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213e98: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x213e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x213e9c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x213e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x213ea0: 0xc084ff4  jal         func_213FD0
    ctx->pc = 0x213EA0u;
    SET_GPR_U32(ctx, 31, 0x213EA8u);
    ctx->pc = 0x213FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213FD0u, 0x213EA0u, 0x213EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EA8u;
label_213ea8:
    // 0x213ea8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x213ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213eac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x213eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213eb0: 0xc084fb4  jal         func_213ED0
    ctx->pc = 0x213EB0u;
    SET_GPR_U32(ctx, 31, 0x213EB8u);
    ctx->pc = 0x213ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213ED0u, 0x213EB0u, 0x213EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EB8u;
label_213eb8:
    // 0x213eb8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x213eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213ec0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x213ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x213ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x213EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213ECCu;
    // 0x213ecc: 0x0  nop
    ctx->pc = 0x213eccu;
    // NOP
    ctx->pc = 0x213ed0u;
}
