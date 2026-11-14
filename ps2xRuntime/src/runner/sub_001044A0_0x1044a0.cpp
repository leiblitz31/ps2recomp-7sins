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

// Function: sub_001044A0
// Address: 0x1044a0 - 0x1044e0
void sub_001044A0_0x1044a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001044A0_0x1044a0");
#endif

    switch (ctx->pc) {
        case 0x1044bcu: goto label_1044bc;
        case 0x1044ccu: goto label_1044cc;
        default: break;
    }

    ctx->pc = 0x1044a0u;

    // 0x1044a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1044a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1044a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1044a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1044a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1044a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1044ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1044acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1044b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1044b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1044b4: 0xc041144  jal         func_104510
    ctx->pc = 0x1044B4u;
    SET_GPR_U32(ctx, 31, 0x1044BCu);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x1044B4u, 0x1044BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1044BCu;
label_1044bc:
    // 0x1044bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1044bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1044c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1044c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1044c4: 0xc041138  jal         func_1044E0
    ctx->pc = 0x1044C4u;
    SET_GPR_U32(ctx, 31, 0x1044CCu);
    ctx->pc = 0x1044E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044E0u, 0x1044C4u, 0x1044CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1044CCu;
label_1044cc:
    // 0x1044cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1044ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1044d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1044d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1044d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1044D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1044D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1044DCu;
    // 0x1044dc: 0x0  nop
    ctx->pc = 0x1044dcu;
    // NOP
    ctx->pc = 0x1044e0u;
}
