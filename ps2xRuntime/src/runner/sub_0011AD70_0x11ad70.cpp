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

// Function: sub_0011AD70
// Address: 0x11ad70 - 0x11ae30
void sub_0011AD70_0x11ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AD70_0x11ad70");
#endif

    switch (ctx->pc) {
        case 0x11ad84u: goto label_11ad84;
        case 0x11ad90u: goto label_11ad90;
        case 0x11adb0u: goto label_11adb0;
        case 0x11adc8u: goto label_11adc8;
        case 0x11addcu: goto label_11addc;
        case 0x11ae10u: goto label_11ae10;
        default: break;
    }

    ctx->pc = 0x11ad70u;

    // 0x11ad70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11ad74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ad78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11ad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11ad7c: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x11AD7Cu;
    SET_GPR_U32(ctx, 31, 0x11AD84u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x11AD7Cu, 0x11AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD84u;
label_11ad84:
    // 0x11ad84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad88: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x11AD88u;
    SET_GPR_U32(ctx, 31, 0x11AD90u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x11AD88u, 0x11AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD90u;
label_11ad90:
    // 0x11ad90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ad90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ad94: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x11AD94u;
    {
        const bool branch_taken_0x11ad94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11ad94) {
            ctx->pc = 0x11AE10u;
            goto label_11ae10;
        }
    }
    ctx->pc = 0x11AD9Cu;
    // 0x11ad9c: 0x8f82b9d0  lw          $v0, -0x4630($gp)
    ctx->pc = 0x11ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949328)));
    // 0x11ada0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x11ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11ada4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11ada4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11ada8: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x11ADA8u;
    SET_GPR_U32(ctx, 31, 0x11ADB0u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11ADA8u, 0x11ADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ADB0u;
label_11adb0:
    // 0x11adb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11adb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11adb4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11ADB4u;
    {
        const bool branch_taken_0x11adb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11adb4) {
            ctx->pc = 0x11AE10u;
            goto label_11ae10;
        }
    }
    ctx->pc = 0x11ADBCu;
    // 0x11adbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11adbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11adc0: 0xc0413bc  jal         func_104EF0
    ctx->pc = 0x11ADC0u;
    SET_GPR_U32(ctx, 31, 0x11ADC8u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x11ADC0u, 0x11ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ADC8u;
label_11adc8:
    // 0x11adc8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11ADC8u;
    {
        const bool branch_taken_0x11adc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11adc8) {
            ctx->pc = 0x11AE10u;
            goto label_11ae10;
        }
    }
    ctx->pc = 0x11ADD0u;
    // 0x11add0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11add0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11add4: 0xc057d30  jal         func_15F4C0
    ctx->pc = 0x11ADD4u;
    SET_GPR_U32(ctx, 31, 0x11ADDCu);
    ctx->pc = 0x15F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F4C0u, 0x11ADD4u, 0x11ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ADDCu;
label_11addc:
    // 0x11addc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11addcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11ade0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ade4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11ADE4u;
    {
        const bool branch_taken_0x11ade4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ade4) {
            ctx->pc = 0x11AE10u;
            goto label_11ae10;
        }
    }
    ctx->pc = 0x11ADECu;
    // 0x11adec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11adecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x11adf0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11adf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11adf4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x11adf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x11adf8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11adf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x11adfc: 0x24a51c68  addiu       $a1, $a1, 0x1C68
    ctx->pc = 0x11adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7272));
    // 0x11ae00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ae00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae04: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x11ae04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11ae08: 0xc08f558  jal         func_23D560
    ctx->pc = 0x11AE08u;
    SET_GPR_U32(ctx, 31, 0x11AE10u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x11AE08u, 0x11AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE10u;
label_11ae10:
    // 0x11ae10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ae14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ae14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ae18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ae18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ae1c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11ae1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11ae20: 0x3e00008  jr          $ra
    ctx->pc = 0x11AE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AE28u;
    // 0x11ae28: 0x0  nop
    ctx->pc = 0x11ae28u;
    // NOP
    // 0x11ae2c: 0x0  nop
    ctx->pc = 0x11ae2cu;
    // NOP
    ctx->pc = 0x11ae30u;
}
