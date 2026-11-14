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

// Function: sub_00459A40
// Address: 0x459a40 - 0x459af0
void sub_00459A40_0x459a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459A40_0x459a40");
#endif

    switch (ctx->pc) {
        case 0x459ab0u: goto label_459ab0;
        case 0x459ad0u: goto label_459ad0;
        default: break;
    }

    ctx->pc = 0x459a40u;

    // 0x459a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x459a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x459a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459a48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x459a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x459a4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x459a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x459a50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459a54: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x459A54u;
    {
        const bool branch_taken_0x459a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459a54) {
            ctx->pc = 0x459AD0u;
            goto label_459ad0;
        }
    }
    ctx->pc = 0x459A5Cu;
    // 0x459a5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459a60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x459a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x459a64: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x459A64u;
    {
        const bool branch_taken_0x459a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459a64) {
            ctx->pc = 0x459AB0u;
            goto label_459ab0;
        }
    }
    ctx->pc = 0x459A6Cu;
    // 0x459a6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x459a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459a70: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x459a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459a74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459a78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x459a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x459a7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459a80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x459a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x459a84: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x459a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x459a88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x459a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x459a8c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x459a8cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x459a90: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x459A90u;
    {
        const bool branch_taken_0x459a90 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x459a90) {
            ctx->pc = 0x459AA0u;
            goto label_459aa0;
        }
    }
    ctx->pc = 0x459A98u;
    // 0x459a98: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x459a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x459a9c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x459a9cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_459aa0:
    // 0x459aa0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x459aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x459aa4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x459aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x459aa8: 0xc116c2c  jal         func_45B0B0
    ctx->pc = 0x459AA8u;
    SET_GPR_U32(ctx, 31, 0x459AB0u);
    ctx->pc = 0x45B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B0B0u, 0x459AA8u, 0x459AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459AB0u;
label_459ab0:
    // 0x459ab0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x459ab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459ab4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x459ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x459ab8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x459ab8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x459abc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x459ABCu;
    {
        const bool branch_taken_0x459abc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x459abc) {
            ctx->pc = 0x459AD0u;
            goto label_459ad0;
        }
    }
    ctx->pc = 0x459AC4u;
    // 0x459ac4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x459ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459ac8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x459AC8u;
    SET_GPR_U32(ctx, 31, 0x459AD0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x459AC8u, 0x459AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459AD0u;
label_459ad0:
    // 0x459ad0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459ad8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x459ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x459adc: 0x3e00008  jr          $ra
    ctx->pc = 0x459ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459AE4u;
    // 0x459ae4: 0x0  nop
    ctx->pc = 0x459ae4u;
    // NOP
    // 0x459ae8: 0x0  nop
    ctx->pc = 0x459ae8u;
    // NOP
    // 0x459aec: 0x0  nop
    ctx->pc = 0x459aecu;
    // NOP
    ctx->pc = 0x459af0u;
}
