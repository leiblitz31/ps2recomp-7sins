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

// Function: sub_0027BE00
// Address: 0x27be00 - 0x27be40
void sub_0027BE00_0x27be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BE00_0x27be00");
#endif

    switch (ctx->pc) {
        case 0x27be20u: goto label_27be20;
        case 0x27be30u: goto label_27be30;
        default: break;
    }

    ctx->pc = 0x27be00u;

    // 0x27be00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27be04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27be04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27be08: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27be08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x27be0c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x27be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x27be10: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x27be10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x27be14: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x27be14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27be18: 0xc0643d4  jal         func_190F50
    ctx->pc = 0x27BE18u;
    SET_GPR_U32(ctx, 31, 0x27BE20u);
    ctx->pc = 0x190F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190F50u, 0x27BE18u, 0x27BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE20u;
label_27be20:
    // 0x27be20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x27be20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27be24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27be24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27be28: 0xc09ef90  jal         func_27BE40
    ctx->pc = 0x27BE28u;
    SET_GPR_U32(ctx, 31, 0x27BE30u);
    ctx->pc = 0x27BE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE40u, 0x27BE28u, 0x27BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BE30u;
label_27be30:
    // 0x27be30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27be30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27be34: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27be34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27be38: 0x3e00008  jr          $ra
    ctx->pc = 0x27BE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BE40u;
}
