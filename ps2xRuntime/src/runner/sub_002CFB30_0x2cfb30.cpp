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

// Function: sub_002CFB30
// Address: 0x2cfb30 - 0x2cfbb0
void sub_002CFB30_0x2cfb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFB30_0x2cfb30");
#endif

    switch (ctx->pc) {
        case 0x2cfb60u: goto label_2cfb60;
        case 0x2cfb70u: goto label_2cfb70;
        case 0x2cfb90u: goto label_2cfb90;
        default: break;
    }

    ctx->pc = 0x2cfb30u;

    // 0x2cfb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cfb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cfb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfb38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cfb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cfb3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2cfb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cfb40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cfb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfb44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CFB44u;
    {
        const bool branch_taken_0x2cfb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfb44) {
            ctx->pc = 0x2CFB90u;
            goto label_2cfb90;
        }
    }
    ctx->pc = 0x2CFB4Cu;
    // 0x2cfb4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cfb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfb50: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2cfb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2cfb54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cfb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cfb58: 0xc0b3e10  jal         func_2CF840
    ctx->pc = 0x2CFB58u;
    SET_GPR_U32(ctx, 31, 0x2CFB60u);
    ctx->pc = 0x2CF840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF840u, 0x2CFB58u, 0x2CFB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB60u;
label_2cfb60:
    // 0x2cfb60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cfb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfb64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cfb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cfb68: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2CFB68u;
    SET_GPR_U32(ctx, 31, 0x2CFB70u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CFB68u, 0x2CFB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB70u;
label_2cfb70:
    // 0x2cfb70: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2cfb70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfb74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cfb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cfb78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cfb78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cfb7c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFB7Cu;
    {
        const bool branch_taken_0x2cfb7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cfb7c) {
            ctx->pc = 0x2CFB90u;
            goto label_2cfb90;
        }
    }
    ctx->pc = 0x2CFB84u;
    // 0x2cfb84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cfb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfb88: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2CFB88u;
    SET_GPR_U32(ctx, 31, 0x2CFB90u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2CFB88u, 0x2CFB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFB90u;
label_2cfb90:
    // 0x2cfb90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfb94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfb98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cfb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cfb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFBA4u;
    // 0x2cfba4: 0x0  nop
    ctx->pc = 0x2cfba4u;
    // NOP
    // 0x2cfba8: 0x0  nop
    ctx->pc = 0x2cfba8u;
    // NOP
    // 0x2cfbac: 0x0  nop
    ctx->pc = 0x2cfbacu;
    // NOP
    ctx->pc = 0x2cfbb0u;
}
