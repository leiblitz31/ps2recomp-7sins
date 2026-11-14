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

// Function: sub_002DD270
// Address: 0x2dd270 - 0x2dd2e0
void sub_002DD270_0x2dd270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD270_0x2dd270");
#endif

    switch (ctx->pc) {
        case 0x2dd2a0u: goto label_2dd2a0;
        case 0x2dd2c0u: goto label_2dd2c0;
        default: break;
    }

    ctx->pc = 0x2dd270u;

    // 0x2dd270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dd278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dd27c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2dd27cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dd280: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dd280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd284: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2DD284u;
    {
        const bool branch_taken_0x2dd284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd284) {
            ctx->pc = 0x2DD2C0u;
            goto label_2dd2c0;
        }
    }
    ctx->pc = 0x2DD28Cu;
    // 0x2dd28c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dd28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd290: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2dd290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2dd294: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2dd294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dd298: 0xc081fd0  jal         func_207F40
    ctx->pc = 0x2DD298u;
    SET_GPR_U32(ctx, 31, 0x2DD2A0u);
    ctx->pc = 0x207F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207F40u, 0x2DD298u, 0x2DD2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD2A0u;
label_2dd2a0:
    // 0x2dd2a0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2dd2a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd2a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dd2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dd2a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dd2a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dd2ac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD2ACu;
    {
        const bool branch_taken_0x2dd2ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dd2ac) {
            ctx->pc = 0x2DD2C0u;
            goto label_2dd2c0;
        }
    }
    ctx->pc = 0x2DD2B4u;
    // 0x2dd2b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dd2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd2b8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DD2B8u;
    SET_GPR_U32(ctx, 31, 0x2DD2C0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DD2B8u, 0x2DD2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD2C0u;
label_2dd2c0:
    // 0x2dd2c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd2c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd2c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dd2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dd2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD2D4u;
    // 0x2dd2d4: 0x0  nop
    ctx->pc = 0x2dd2d4u;
    // NOP
    // 0x2dd2d8: 0x0  nop
    ctx->pc = 0x2dd2d8u;
    // NOP
    // 0x2dd2dc: 0x0  nop
    ctx->pc = 0x2dd2dcu;
    // NOP
    ctx->pc = 0x2dd2e0u;
}
