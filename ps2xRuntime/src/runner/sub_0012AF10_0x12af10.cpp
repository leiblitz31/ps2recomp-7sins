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

// Function: sub_0012AF10
// Address: 0x12af10 - 0x12afc0
void sub_0012AF10_0x12af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AF10_0x12af10");
#endif

    switch (ctx->pc) {
        case 0x12af80u: goto label_12af80;
        case 0x12afa0u: goto label_12afa0;
        default: break;
    }

    ctx->pc = 0x12af10u;

    // 0x12af10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12af14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12af18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12af18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12af1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12af1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x12af20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12af20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12af24: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12AF24u;
    {
        const bool branch_taken_0x12af24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12af24) {
            ctx->pc = 0x12AFA0u;
            goto label_12afa0;
        }
    }
    ctx->pc = 0x12AF2Cu;
    // 0x12af2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12af30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12af30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12af34: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12AF34u;
    {
        const bool branch_taken_0x12af34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12af34) {
            ctx->pc = 0x12AF80u;
            goto label_12af80;
        }
    }
    ctx->pc = 0x12AF3Cu;
    // 0x12af3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12af40: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x12af40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12af44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12af44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12af48: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12af48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12af4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12af50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12af50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12af54: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12af54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12af58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x12af58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12af5c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x12af5cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x12af60: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AF60u;
    {
        const bool branch_taken_0x12af60 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x12af60) {
            ctx->pc = 0x12AF70u;
            goto label_12af70;
        }
    }
    ctx->pc = 0x12AF68u;
    // 0x12af68: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x12af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x12af6c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x12af6cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_12af70:
    // 0x12af70: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x12af70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x12af74: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x12af74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12af78: 0xc04c630  jal         func_1318C0
    ctx->pc = 0x12AF78u;
    SET_GPR_U32(ctx, 31, 0x12AF80u);
    ctx->pc = 0x1318C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1318C0u, 0x12AF78u, 0x12AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF80u;
label_12af80:
    // 0x12af80: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12af80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12af84: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12af84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12af88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12af88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12af8c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AF8Cu;
    {
        const bool branch_taken_0x12af8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12af8c) {
            ctx->pc = 0x12AFA0u;
            goto label_12afa0;
        }
    }
    ctx->pc = 0x12AF94u;
    // 0x12af94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12af94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12af98: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x12AF98u;
    SET_GPR_U32(ctx, 31, 0x12AFA0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x12AF98u, 0x12AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AFA0u;
label_12afa0:
    // 0x12afa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12afa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12afa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12afa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12afa8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12afa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12afac: 0x3e00008  jr          $ra
    ctx->pc = 0x12AFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AFB4u;
    // 0x12afb4: 0x0  nop
    ctx->pc = 0x12afb4u;
    // NOP
    // 0x12afb8: 0x0  nop
    ctx->pc = 0x12afb8u;
    // NOP
    // 0x12afbc: 0x0  nop
    ctx->pc = 0x12afbcu;
    // NOP
    ctx->pc = 0x12afc0u;
}
