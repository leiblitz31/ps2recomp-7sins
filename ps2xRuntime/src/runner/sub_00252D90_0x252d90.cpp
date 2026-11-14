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

// Function: sub_00252D90
// Address: 0x252d90 - 0x252e00
void sub_00252D90_0x252d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252D90_0x252d90");
#endif

    switch (ctx->pc) {
        case 0x252dc0u: goto label_252dc0;
        case 0x252de0u: goto label_252de0;
        default: break;
    }

    ctx->pc = 0x252d90u;

    // 0x252d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252d98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x252d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x252d9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x252d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x252da0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252da4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x252DA4u;
    {
        const bool branch_taken_0x252da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252da4) {
            ctx->pc = 0x252DE0u;
            goto label_252de0;
        }
    }
    ctx->pc = 0x252DACu;
    // 0x252dac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252db0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x252db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x252db4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x252db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252db8: 0xc0923d4  jal         func_248F50
    ctx->pc = 0x252DB8u;
    SET_GPR_U32(ctx, 31, 0x252DC0u);
    ctx->pc = 0x248F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248F50u, 0x252DB8u, 0x252DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DC0u;
label_252dc0:
    // 0x252dc0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x252dc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252dc4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x252dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x252dc8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x252dc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x252dcc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x252DCCu;
    {
        const bool branch_taken_0x252dcc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x252dcc) {
            ctx->pc = 0x252DE0u;
            goto label_252de0;
        }
    }
    ctx->pc = 0x252DD4u;
    // 0x252dd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x252dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252dd8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x252DD8u;
    SET_GPR_U32(ctx, 31, 0x252DE0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x252DD8u, 0x252DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DE0u;
label_252de0:
    // 0x252de0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x252de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252de8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x252de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x252dec: 0x3e00008  jr          $ra
    ctx->pc = 0x252DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252DF4u;
    // 0x252df4: 0x0  nop
    ctx->pc = 0x252df4u;
    // NOP
    // 0x252df8: 0x0  nop
    ctx->pc = 0x252df8u;
    // NOP
    // 0x252dfc: 0x0  nop
    ctx->pc = 0x252dfcu;
    // NOP
    ctx->pc = 0x252e00u;
}
