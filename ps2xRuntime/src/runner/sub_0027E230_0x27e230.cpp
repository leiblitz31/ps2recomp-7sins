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

// Function: sub_0027E230
// Address: 0x27e230 - 0x27e270
void sub_0027E230_0x27e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E230_0x27e230");
#endif

    switch (ctx->pc) {
        case 0x27e250u: goto label_27e250;
        case 0x27e260u: goto label_27e260;
        default: break;
    }

    ctx->pc = 0x27e230u;

    // 0x27e230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27e230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27e234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e238: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27e238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x27e23c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x27e23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x27e240: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x27e240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x27e244: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x27e244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27e248: 0xc09f8c8  jal         func_27E320
    ctx->pc = 0x27E248u;
    SET_GPR_U32(ctx, 31, 0x27E250u);
    ctx->pc = 0x27E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E320u, 0x27E248u, 0x27E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E250u;
label_27e250:
    // 0x27e250: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27e250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27e254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e258: 0xc09f89c  jal         func_27E270
    ctx->pc = 0x27E258u;
    SET_GPR_U32(ctx, 31, 0x27E260u);
    ctx->pc = 0x27E270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E270u, 0x27E258u, 0x27E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E260u;
label_27e260:
    // 0x27e260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e264: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27e264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e268: 0x3e00008  jr          $ra
    ctx->pc = 0x27E268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E270u;
}
