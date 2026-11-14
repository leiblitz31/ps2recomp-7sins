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

// Function: sub_00222800
// Address: 0x222800 - 0x222840
void sub_00222800_0x222800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222800_0x222800");
#endif

    switch (ctx->pc) {
        case 0x222818u: goto label_222818;
        case 0x222828u: goto label_222828;
        default: break;
    }

    ctx->pc = 0x222800u;

    // 0x222800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222808: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x222808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22280c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x22280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x222810: 0xc088a9c  jal         func_222A70
    ctx->pc = 0x222810u;
    SET_GPR_U32(ctx, 31, 0x222818u);
    ctx->pc = 0x222A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A70u, 0x222810u, 0x222818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222818u;
label_222818:
    // 0x222818: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x222818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22281c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22281cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222820: 0xc088a5c  jal         func_222970
    ctx->pc = 0x222820u;
    SET_GPR_U32(ctx, 31, 0x222828u);
    ctx->pc = 0x222970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222970u, 0x222820u, 0x222828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222828u;
label_222828:
    // 0x222828: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x222828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22282c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22282cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222830: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x222830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x222834: 0x3e00008  jr          $ra
    ctx->pc = 0x222834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22283Cu;
    // 0x22283c: 0x0  nop
    ctx->pc = 0x22283cu;
    // NOP
    ctx->pc = 0x222840u;
}
