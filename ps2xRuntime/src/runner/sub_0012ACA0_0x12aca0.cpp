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

// Function: sub_0012ACA0
// Address: 0x12aca0 - 0x12adb0
void sub_0012ACA0_0x12aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012ACA0_0x12aca0");
#endif

    switch (ctx->pc) {
        case 0x12acbcu: goto label_12acbc;
        case 0x12ace0u: goto label_12ace0;
        case 0x12ad2cu: goto label_12ad2c;
        case 0x12ad7cu: goto label_12ad7c;
        case 0x12ad9cu: goto label_12ad9c;
        default: break;
    }

    ctx->pc = 0x12aca0u;

    // 0x12aca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12aca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12aca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12aca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12aca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12acac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12acacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12acb0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x12acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12acb4: 0xc047074  jal         func_11C1D0
    ctx->pc = 0x12ACB4u;
    SET_GPR_U32(ctx, 31, 0x12ACBCu);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x12ACB4u, 0x12ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ACBCu;
label_12acbc:
    // 0x12acbc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x12acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x12acc0: 0x246336b0  addiu       $v1, $v1, 0x36B0
    ctx->pc = 0x12acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14000));
    // 0x12acc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12acc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12accc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12acccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12acd0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x12acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x12acd4: 0x24a52508  addiu       $a1, $a1, 0x2508
    ctx->pc = 0x12acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9480));
    // 0x12acd8: 0xc04322c  jal         func_10C8B0
    ctx->pc = 0x12ACD8u;
    SET_GPR_U32(ctx, 31, 0x12ACE0u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x12ACD8u, 0x12ACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ACE0u;
label_12ace0:
    // 0x12ace0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ace4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ace4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ace8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12ace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12acec: 0x3e00008  jr          $ra
    ctx->pc = 0x12ACECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ACECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ACF4u;
    // 0x12acf4: 0x0  nop
    ctx->pc = 0x12acf4u;
    // NOP
    // 0x12acf8: 0x0  nop
    ctx->pc = 0x12acf8u;
    // NOP
    // 0x12acfc: 0x0  nop
    ctx->pc = 0x12acfcu;
    // NOP
    // 0x12ad00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ad04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ad08: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x12ad08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x12ad0c: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x12ad0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ad10: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12ad10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12ad14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ad18: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AD18u;
    {
        const bool branch_taken_0x12ad18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x12ad18) {
            ctx->pc = 0x12AD2Cu;
            goto label_12ad2c;
        }
    }
    ctx->pc = 0x12AD20u;
    // 0x12ad20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12ad20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad24: 0xc0401c8  jal         func_100720
    ctx->pc = 0x12AD24u;
    SET_GPR_U32(ctx, 31, 0x12AD2Cu);
    ctx->pc = 0x100720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100720u, 0x12AD24u, 0x12AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD2Cu;
label_12ad2c:
    // 0x12ad2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ad2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ad30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12ad30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12ad34: 0x3e00008  jr          $ra
    ctx->pc = 0x12AD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AD3Cu;
    // 0x12ad3c: 0x0  nop
    ctx->pc = 0x12ad3cu;
    // NOP
    // 0x12ad40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ad44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ad48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12ad4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12ad4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x12ad50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ad54: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12AD54u;
    {
        const bool branch_taken_0x12ad54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ad54) {
            ctx->pc = 0x12AD9Cu;
            goto label_12ad9c;
        }
    }
    ctx->pc = 0x12AD5Cu;
    // 0x12ad5c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x12ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x12ad60: 0x246336b0  addiu       $v1, $v1, 0x36B0
    ctx->pc = 0x12ad60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14000));
    // 0x12ad64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ad68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12ad6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ad70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ad70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ad74: 0xc047088  jal         func_11C220
    ctx->pc = 0x12AD74u;
    SET_GPR_U32(ctx, 31, 0x12AD7Cu);
    ctx->pc = 0x11C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C220u, 0x12AD74u, 0x12AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD7Cu;
label_12ad7c:
    // 0x12ad7c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12ad7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ad80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12ad80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12ad84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12ad84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12ad88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AD88u;
    {
        const bool branch_taken_0x12ad88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12ad88) {
            ctx->pc = 0x12AD9Cu;
            goto label_12ad9c;
        }
    }
    ctx->pc = 0x12AD90u;
    // 0x12ad90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ad94: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x12AD94u;
    SET_GPR_U32(ctx, 31, 0x12AD9Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x12AD94u, 0x12AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD9Cu;
label_12ad9c:
    // 0x12ad9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ada0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ada0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ada4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12ada4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12ada8: 0x3e00008  jr          $ra
    ctx->pc = 0x12ADA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ADA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ADB0u;
}
