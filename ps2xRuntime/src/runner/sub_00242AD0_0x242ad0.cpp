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

// Function: sub_00242AD0
// Address: 0x242ad0 - 0x242b80
void sub_00242AD0_0x242ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242AD0_0x242ad0");
#endif

    switch (ctx->pc) {
        case 0x242b30u: goto label_242b30;
        case 0x242b40u: goto label_242b40;
        case 0x242b60u: goto label_242b60;
        default: break;
    }

    ctx->pc = 0x242ad0u;

    // 0x242ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x242ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x242ad4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x242ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x242ad8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x242ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242adc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x242adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x242AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242AE8u;
    // 0x242ae8: 0x0  nop
    ctx->pc = 0x242ae8u;
    // NOP
    // 0x242aec: 0x0  nop
    ctx->pc = 0x242aecu;
    // NOP
    // 0x242af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242af8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x242af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x242afc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x242afcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x242b00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242b04: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x242B04u;
    {
        const bool branch_taken_0x242b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242b04) {
            ctx->pc = 0x242B60u;
            goto label_242b60;
        }
    }
    ctx->pc = 0x242B0Cu;
    // 0x242b0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x242b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x242b10: 0x246356e0  addiu       $v1, $v1, 0x56E0
    ctx->pc = 0x242b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22240));
    // 0x242b14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242b18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x242b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x242b1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242b20: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x242b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x242b24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x242b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242b28: 0xc0909c4  jal         func_242710
    ctx->pc = 0x242B28u;
    SET_GPR_U32(ctx, 31, 0x242B30u);
    ctx->pc = 0x242710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242710u, 0x242B28u, 0x242B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B30u;
label_242b30:
    // 0x242b30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x242b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b38: 0xc091188  jal         func_244620
    ctx->pc = 0x242B38u;
    SET_GPR_U32(ctx, 31, 0x242B40u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x242B38u, 0x242B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B40u;
label_242b40:
    // 0x242b40: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x242b40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x242b44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x242b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x242b48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x242b48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x242b4c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242B4Cu;
    {
        const bool branch_taken_0x242b4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x242b4c) {
            ctx->pc = 0x242B60u;
            goto label_242b60;
        }
    }
    ctx->pc = 0x242B54u;
    // 0x242b54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x242b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242b58: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x242B58u;
    SET_GPR_U32(ctx, 31, 0x242B60u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x242B58u, 0x242B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B60u;
label_242b60:
    // 0x242b60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x242b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242b68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x242b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x242b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x242B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242B74u;
    // 0x242b74: 0x0  nop
    ctx->pc = 0x242b74u;
    // NOP
    // 0x242b78: 0x0  nop
    ctx->pc = 0x242b78u;
    // NOP
    // 0x242b7c: 0x0  nop
    ctx->pc = 0x242b7cu;
    // NOP
    ctx->pc = 0x242b80u;
}
