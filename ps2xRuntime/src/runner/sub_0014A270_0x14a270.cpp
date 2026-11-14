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

// Function: sub_0014A270
// Address: 0x14a270 - 0x14a2e0
void sub_0014A270_0x14a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A270_0x14a270");
#endif

    switch (ctx->pc) {
        case 0x14a2a4u: goto label_14a2a4;
        case 0x14a2c4u: goto label_14a2c4;
        default: break;
    }

    ctx->pc = 0x14a270u;

    // 0x14a270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a27c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x14a27cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x14a280: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a284: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14A284u;
    {
        const bool branch_taken_0x14a284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a284) {
            ctx->pc = 0x14A2C4u;
            goto label_14a2c4;
        }
    }
    ctx->pc = 0x14A28Cu;
    // 0x14a28c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a290: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a294: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14a294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a298: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14a298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a29c: 0xc054708  jal         func_151C20
    ctx->pc = 0x14A29Cu;
    SET_GPR_U32(ctx, 31, 0x14A2A4u);
    ctx->pc = 0x151C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C20u, 0x14A29Cu, 0x14A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2A4u;
label_14a2a4:
    // 0x14a2a4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x14a2a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a2a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14a2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14a2ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14a2acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14a2b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A2B0u;
    {
        const bool branch_taken_0x14a2b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14a2b0) {
            ctx->pc = 0x14A2C4u;
            goto label_14a2c4;
        }
    }
    ctx->pc = 0x14A2B8u;
    // 0x14a2b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a2bc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x14A2BCu;
    SET_GPR_U32(ctx, 31, 0x14A2C4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x14A2BCu, 0x14A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2C4u;
label_14a2c4:
    // 0x14a2c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a2cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14a2ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14a2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x14A2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A2D8u;
    // 0x14a2d8: 0x0  nop
    ctx->pc = 0x14a2d8u;
    // NOP
    // 0x14a2dc: 0x0  nop
    ctx->pc = 0x14a2dcu;
    // NOP
    ctx->pc = 0x14a2e0u;
}
