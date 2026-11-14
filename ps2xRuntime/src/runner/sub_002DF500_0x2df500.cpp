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

// Function: sub_002DF500
// Address: 0x2df500 - 0x2df550
void sub_002DF500_0x2df500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF500_0x2df500");
#endif

    switch (ctx->pc) {
        case 0x2df538u: goto label_2df538;
        default: break;
    }

    ctx->pc = 0x2df500u;

    // 0x2df500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2df500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2df504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2df508: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2df508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2df50c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2df50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2df510: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df514: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2df514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2df518: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df51c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2df51cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2df520: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df524: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2df524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2df528: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2df528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df52c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2df52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df530: 0xc0b7d54  jal         func_2DF550
    ctx->pc = 0x2DF530u;
    SET_GPR_U32(ctx, 31, 0x2DF538u);
    ctx->pc = 0x2DF550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF550u, 0x2DF530u, 0x2DF538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF538u;
label_2df538:
    // 0x2df538: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2df538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df53c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df540: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df544: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF54Cu;
    // 0x2df54c: 0x0  nop
    ctx->pc = 0x2df54cu;
    // NOP
    ctx->pc = 0x2df550u;
}
