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

// Function: sub_002DDE50
// Address: 0x2dde50 - 0x2ddf00
void sub_002DDE50_0x2dde50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDE50_0x2dde50");
#endif

    switch (ctx->pc) {
        case 0x2ddec0u: goto label_2ddec0;
        case 0x2ddee0u: goto label_2ddee0;
        default: break;
    }

    ctx->pc = 0x2dde50u;

    // 0x2dde50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dde50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dde54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dde54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dde58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dde58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dde5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2dde5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dde60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dde60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dde64: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DDE64u;
    {
        const bool branch_taken_0x2dde64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dde64) {
            ctx->pc = 0x2DDEE0u;
            goto label_2ddee0;
        }
    }
    ctx->pc = 0x2DDE6Cu;
    // 0x2dde6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dde6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dde70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dde70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dde74: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DDE74u;
    {
        const bool branch_taken_0x2dde74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dde74) {
            ctx->pc = 0x2DDEC0u;
            goto label_2ddec0;
        }
    }
    ctx->pc = 0x2DDE7Cu;
    // 0x2dde7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dde7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dde80: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2dde80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dde84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dde84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dde88: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2dde88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dde8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dde8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dde90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dde90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dde94: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2dde94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dde98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dde98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dde9c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2dde9cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2ddea0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDEA0u;
    {
        const bool branch_taken_0x2ddea0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2ddea0) {
            ctx->pc = 0x2DDEB0u;
            goto label_2ddeb0;
        }
    }
    ctx->pc = 0x2DDEA8u;
    // 0x2ddea8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2ddea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2ddeac: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2ddeacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2ddeb0:
    // 0x2ddeb0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2ddeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ddeb4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2ddeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ddeb8: 0xc0b799c  jal         func_2DE670
    ctx->pc = 0x2DDEB8u;
    SET_GPR_U32(ctx, 31, 0x2DDEC0u);
    ctx->pc = 0x2DE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE670u, 0x2DDEB8u, 0x2DDEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDEC0u;
label_2ddec0:
    // 0x2ddec0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2ddec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddec4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2ddec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2ddec8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ddec8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ddecc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDECCu;
    {
        const bool branch_taken_0x2ddecc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ddecc) {
            ctx->pc = 0x2DDEE0u;
            goto label_2ddee0;
        }
    }
    ctx->pc = 0x2DDED4u;
    // 0x2dded4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dded4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dded8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DDED8u;
    SET_GPR_U32(ctx, 31, 0x2DDEE0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DDED8u, 0x2DDEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDEE0u;
label_2ddee0:
    // 0x2ddee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ddee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ddee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddee8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ddee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ddeec: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDEF4u;
    // 0x2ddef4: 0x0  nop
    ctx->pc = 0x2ddef4u;
    // NOP
    // 0x2ddef8: 0x0  nop
    ctx->pc = 0x2ddef8u;
    // NOP
    // 0x2ddefc: 0x0  nop
    ctx->pc = 0x2ddefcu;
    // NOP
    ctx->pc = 0x2ddf00u;
}
