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

// Function: sub_002CBAE0
// Address: 0x2cbae0 - 0x2cbb40
void sub_002CBAE0_0x2cbae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBAE0_0x2cbae0");
#endif

    switch (ctx->pc) {
        case 0x2cbb0cu: goto label_2cbb0c;
        case 0x2cbb2cu: goto label_2cbb2c;
        default: break;
    }

    ctx->pc = 0x2cbae0u;

    // 0x2cbae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cbae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cbae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cbaec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2cbaecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cbaf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cbaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbaf4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CBAF4u;
    {
        const bool branch_taken_0x2cbaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbaf4) {
            ctx->pc = 0x2CBB2Cu;
            goto label_2cbb2c;
        }
    }
    ctx->pc = 0x2CBAFCu;
    // 0x2cbafc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cbafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbb00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cbb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cbb04: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2CBB04u;
    SET_GPR_U32(ctx, 31, 0x2CBB0Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CBB04u, 0x2CBB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB0Cu;
label_2cbb0c:
    // 0x2cbb0c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2cbb0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cbb10: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cbb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cbb14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cbb14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cbb18: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBB18u;
    {
        const bool branch_taken_0x2cbb18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cbb18) {
            ctx->pc = 0x2CBB2Cu;
            goto label_2cbb2c;
        }
    }
    ctx->pc = 0x2CBB20u;
    // 0x2cbb20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cbb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbb24: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2CBB24u;
    SET_GPR_U32(ctx, 31, 0x2CBB2Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2CBB24u, 0x2CBB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBB2Cu;
label_2cbb2c:
    // 0x2cbb2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cbb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cbb30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbb34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cbb34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cbb38: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBB40u;
}
