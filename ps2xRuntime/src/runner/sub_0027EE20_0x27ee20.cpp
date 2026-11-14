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

// Function: sub_0027EE20
// Address: 0x27ee20 - 0x27eed0
void sub_0027EE20_0x27ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027EE20_0x27ee20");
#endif

    switch (ctx->pc) {
        case 0x27ee90u: goto label_27ee90;
        case 0x27eeb0u: goto label_27eeb0;
        default: break;
    }

    ctx->pc = 0x27ee20u;

    // 0x27ee20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27ee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27ee24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ee28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27ee2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27ee2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x27ee30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ee34: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27EE34u;
    {
        const bool branch_taken_0x27ee34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ee34) {
            ctx->pc = 0x27EEB0u;
            goto label_27eeb0;
        }
    }
    ctx->pc = 0x27EE3Cu;
    // 0x27ee3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ee40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ee44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27EE44u;
    {
        const bool branch_taken_0x27ee44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ee44) {
            ctx->pc = 0x27EE90u;
            goto label_27ee90;
        }
    }
    ctx->pc = 0x27EE4Cu;
    // 0x27ee4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ee50: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x27ee50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ee54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ee58: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x27ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27ee5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ee60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ee64: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ee68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27ee6c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x27ee6cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x27ee70: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27EE70u;
    {
        const bool branch_taken_0x27ee70 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27ee70) {
            ctx->pc = 0x27EE80u;
            goto label_27ee80;
        }
    }
    ctx->pc = 0x27EE78u;
    // 0x27ee78: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x27ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x27ee7c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x27ee7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_27ee80:
    // 0x27ee80: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x27ee80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27ee84: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x27ee84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27ee88: 0xc0a084c  jal         func_282130
    ctx->pc = 0x27EE88u;
    SET_GPR_U32(ctx, 31, 0x27EE90u);
    ctx->pc = 0x282130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282130u, 0x27EE88u, 0x27EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EE90u;
label_27ee90:
    // 0x27ee90: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x27ee90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ee94: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27ee94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27ee98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27ee98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27ee9c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27EE9Cu;
    {
        const bool branch_taken_0x27ee9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27ee9c) {
            ctx->pc = 0x27EEB0u;
            goto label_27eeb0;
        }
    }
    ctx->pc = 0x27EEA4u;
    // 0x27eea4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27eea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27eea8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x27EEA8u;
    SET_GPR_U32(ctx, 31, 0x27EEB0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x27EEA8u, 0x27EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EEB0u;
label_27eeb0:
    // 0x27eeb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27eeb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27eeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27eeb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27eebc: 0x3e00008  jr          $ra
    ctx->pc = 0x27EEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EEC4u;
    // 0x27eec4: 0x0  nop
    ctx->pc = 0x27eec4u;
    // NOP
    // 0x27eec8: 0x0  nop
    ctx->pc = 0x27eec8u;
    // NOP
    // 0x27eecc: 0x0  nop
    ctx->pc = 0x27eeccu;
    // NOP
    ctx->pc = 0x27eed0u;
}
