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

// Function: sub_00466A80
// Address: 0x466a80 - 0x466ae0
void sub_00466A80_0x466a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466A80_0x466a80");
#endif

    switch (ctx->pc) {
        case 0x466ac8u: goto label_466ac8;
        default: break;
    }

    ctx->pc = 0x466a80u;

    // 0x466a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x466a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x466a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466a88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x466a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x466a8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x466a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x466a90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x466a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466a94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x466A94u;
    {
        const bool branch_taken_0x466a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466a94) {
            ctx->pc = 0x466AC8u;
            goto label_466ac8;
        }
    }
    ctx->pc = 0x466A9Cu;
    // 0x466a9c: 0x8f82c008  lw          $v0, -0x3FF8($gp)
    ctx->pc = 0x466a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x466aa0: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x466aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x466aa4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x466aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x466aa8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x466aa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x466aac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x466aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x466ab0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x466ab0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x466ab4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x466AB4u;
    {
        const bool branch_taken_0x466ab4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x466ab4) {
            ctx->pc = 0x466AC8u;
            goto label_466ac8;
        }
    }
    ctx->pc = 0x466ABCu;
    // 0x466abc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x466abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466ac0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x466AC0u;
    SET_GPR_U32(ctx, 31, 0x466AC8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x466AC0u, 0x466AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466AC8u;
label_466ac8:
    // 0x466ac8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x466ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466acc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466ad0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x466ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x466ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x466AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466ADCu;
    // 0x466adc: 0x0  nop
    ctx->pc = 0x466adcu;
    // NOP
    ctx->pc = 0x466ae0u;
}
