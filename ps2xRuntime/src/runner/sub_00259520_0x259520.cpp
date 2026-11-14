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

// Function: sub_00259520
// Address: 0x259520 - 0x259560
void sub_00259520_0x259520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259520_0x259520");
#endif

    switch (ctx->pc) {
        case 0x259538u: goto label_259538;
        case 0x259548u: goto label_259548;
        default: break;
    }

    ctx->pc = 0x259520u;

    // 0x259520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259528: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x259528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25952c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x25952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x259530: 0xc096598  jal         func_259660
    ctx->pc = 0x259530u;
    SET_GPR_U32(ctx, 31, 0x259538u);
    ctx->pc = 0x259660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259660u, 0x259530u, 0x259538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259538u;
label_259538:
    // 0x259538: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x259538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25953c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25953cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259540: 0xc096558  jal         func_259560
    ctx->pc = 0x259540u;
    SET_GPR_U32(ctx, 31, 0x259548u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x259540u, 0x259548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259548u;
label_259548:
    // 0x259548: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x259548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25954c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25954cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259550: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x259550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259554: 0x3e00008  jr          $ra
    ctx->pc = 0x259554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25955Cu;
    // 0x25955c: 0x0  nop
    ctx->pc = 0x25955cu;
    // NOP
    ctx->pc = 0x259560u;
}
