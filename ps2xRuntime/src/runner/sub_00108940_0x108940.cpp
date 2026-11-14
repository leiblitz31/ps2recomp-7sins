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

// Function: sub_00108940
// Address: 0x108940 - 0x108990
void sub_00108940_0x108940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108940_0x108940");
#endif

    switch (ctx->pc) {
        case 0x108978u: goto label_108978;
        default: break;
    }

    ctx->pc = 0x108940u;

    // 0x108940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x108948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10894c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10894cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x108950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108954: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x108954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x108958: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10895c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x10895cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x108960: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108964: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x108964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x108968: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x108968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10896c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10896cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108970: 0xc042264  jal         func_108990
    ctx->pc = 0x108970u;
    SET_GPR_U32(ctx, 31, 0x108978u);
    ctx->pc = 0x108990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108990u, 0x108970u, 0x108978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108978u;
label_108978:
    // 0x108978: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x108978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10897c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10897cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108980: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x108980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x108984: 0x3e00008  jr          $ra
    ctx->pc = 0x108984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10898Cu;
    // 0x10898c: 0x0  nop
    ctx->pc = 0x10898cu;
    // NOP
    ctx->pc = 0x108990u;
}
