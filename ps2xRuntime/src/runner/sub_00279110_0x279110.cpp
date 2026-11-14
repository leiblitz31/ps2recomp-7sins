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

// Function: sub_00279110
// Address: 0x279110 - 0x279160
void sub_00279110_0x279110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279110_0x279110");
#endif

    switch (ctx->pc) {
        case 0x279148u: goto label_279148;
        default: break;
    }

    ctx->pc = 0x279110u;

    // 0x279110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279118: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27911c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27911cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x279120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279124: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x279124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x279128: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27912c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27912cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x279130: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279134: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x279134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x279138: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x279138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27913c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27913cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279140: 0xc09e458  jal         func_279160
    ctx->pc = 0x279140u;
    SET_GPR_U32(ctx, 31, 0x279148u);
    ctx->pc = 0x279160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279160u, 0x279140u, 0x279148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279148u;
label_279148:
    // 0x279148: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27914c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27914cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279150: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x279150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x279154: 0x3e00008  jr          $ra
    ctx->pc = 0x279154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27915Cu;
    // 0x27915c: 0x0  nop
    ctx->pc = 0x27915cu;
    // NOP
    ctx->pc = 0x279160u;
}
