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

// Function: sub_0015ACD0
// Address: 0x15acd0 - 0x15b340
void sub_0015ACD0_0x15acd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ACD0_0x15acd0");
#endif

    switch (ctx->pc) {
        case 0x15ad10u: goto label_15ad10;
        case 0x15ad24u: goto label_15ad24;
        case 0x15ad38u: goto label_15ad38;
        case 0x15ad4cu: goto label_15ad4c;
        case 0x15ad60u: goto label_15ad60;
        case 0x15ad7cu: goto label_15ad7c;
        case 0x15ad90u: goto label_15ad90;
        case 0x15ada8u: goto label_15ada8;
        case 0x15adbcu: goto label_15adbc;
        case 0x15add4u: goto label_15add4;
        case 0x15ade8u: goto label_15ade8;
        case 0x15ae08u: goto label_15ae08;
        case 0x15ae50u: goto label_15ae50;
        case 0x15ae64u: goto label_15ae64;
        case 0x15ae78u: goto label_15ae78;
        case 0x15ae8cu: goto label_15ae8c;
        case 0x15aea0u: goto label_15aea0;
        case 0x15aeb8u: goto label_15aeb8;
        case 0x15aeccu: goto label_15aecc;
        case 0x15aee4u: goto label_15aee4;
        case 0x15aef8u: goto label_15aef8;
        case 0x15af1cu: goto label_15af1c;
        case 0x15af34u: goto label_15af34;
        case 0x15af48u: goto label_15af48;
        case 0x15af64u: goto label_15af64;
        case 0x15afacu: goto label_15afac;
        case 0x15afc0u: goto label_15afc0;
        case 0x15afd8u: goto label_15afd8;
        case 0x15afecu: goto label_15afec;
        case 0x15b004u: goto label_15b004;
        case 0x15b018u: goto label_15b018;
        case 0x15b048u: goto label_15b048;
        case 0x15b0a0u: goto label_15b0a0;
        case 0x15b0c0u: goto label_15b0c0;
        case 0x15b0d4u: goto label_15b0d4;
        case 0x15b110u: goto label_15b110;
        case 0x15b160u: goto label_15b160;
        case 0x15b194u: goto label_15b194;
        case 0x15b1acu: goto label_15b1ac;
        case 0x15b1b8u: goto label_15b1b8;
        case 0x15b1ccu: goto label_15b1cc;
        case 0x15b1ecu: goto label_15b1ec;
        case 0x15b248u: goto label_15b248;
        case 0x15b25cu: goto label_15b25c;
        case 0x15b278u: goto label_15b278;
        case 0x15b294u: goto label_15b294;
        case 0x15b2a8u: goto label_15b2a8;
        case 0x15b2c4u: goto label_15b2c4;
        case 0x15b2d8u: goto label_15b2d8;
        case 0x15b2f8u: goto label_15b2f8;
        case 0x15b30cu: goto label_15b30c;
        case 0x15b32cu: goto label_15b32c;
        default: break;
    }

    ctx->pc = 0x15acd0u;

label_15acd0:
    // 0x15acd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15acd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15acd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15acd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15acd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15acd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15acdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15acdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ace0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x15ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x15ace4: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x15ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x15ace8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x15ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15acec: 0x14020042  bne         $zero, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x15ACECu;
    {
        const bool branch_taken_0x15acec = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x15acec) {
            ctx->pc = 0x15ADF8u;
            goto label_15adf8;
        }
    }
    ctx->pc = 0x15ACF4u;
    // 0x15acf4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15acf8: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x15acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 0));
    // 0x15acfc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ad00: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15ad04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ad04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad08: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AD08u;
    SET_GPR_U32(ctx, 31, 0x15AD10u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AD08u, 0x15AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD10u;
label_15ad10:
    // 0x15ad10: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ad14: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ad18: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15ad1c: 0xc08c910  jal         func_232440
    ctx->pc = 0x15AD1Cu;
    SET_GPR_U32(ctx, 31, 0x15AD24u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x15AD1Cu, 0x15AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD24u;
label_15ad24:
    // 0x15ad24: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ad28: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15ad28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15ad2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ad30: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AD30u;
    SET_GPR_U32(ctx, 31, 0x15AD38u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AD30u, 0x15AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD38u;
label_15ad38:
    // 0x15ad38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ad3c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ad40: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15ad44: 0xc08c910  jal         func_232440
    ctx->pc = 0x15AD44u;
    SET_GPR_U32(ctx, 31, 0x15AD4Cu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x15AD44u, 0x15AD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD4Cu;
label_15ad4c:
    // 0x15ad4c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ad50: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15ad50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15ad54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ad58: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AD58u;
    SET_GPR_U32(ctx, 31, 0x15AD60u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AD58u, 0x15AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD60u;
label_15ad60:
    // 0x15ad60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ad60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ad64: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ad68: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15ad68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15ad6c: 0x27868df0  addiu       $a2, $gp, -0x7210
    ctx->pc = 0x15ad6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938096));
    // 0x15ad70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ad70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad74: 0xc08c800  jal         func_232000
    ctx->pc = 0x15AD74u;
    SET_GPR_U32(ctx, 31, 0x15AD7Cu);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x15AD74u, 0x15AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD7Cu;
label_15ad7c:
    // 0x15ad7c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ad80: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15ad84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ad84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad88: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AD88u;
    SET_GPR_U32(ctx, 31, 0x15AD90u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AD88u, 0x15AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD90u;
label_15ad90:
    // 0x15ad90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ad90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ad94: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ad98: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15ad98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15ad9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ad9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ada0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x15ADA0u;
    SET_GPR_U32(ctx, 31, 0x15ADA8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x15ADA0u, 0x15ADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ADA8u;
label_15ada8:
    // 0x15ada8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15adac: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15adacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15adb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15adb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15adb4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15ADB4u;
    SET_GPR_U32(ctx, 31, 0x15ADBCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15ADB4u, 0x15ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ADBCu;
label_15adbc:
    // 0x15adbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15adbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15adc0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15adc4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15adc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15adc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15adc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adcc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x15ADCCu;
    SET_GPR_U32(ctx, 31, 0x15ADD4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x15ADCCu, 0x15ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ADD4u;
label_15add4:
    // 0x15add4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x15add4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x15add8: 0x24842f70  addiu       $a0, $a0, 0x2F70
    ctx->pc = 0x15add8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12144));
    // 0x15addc: 0x27858df8  addiu       $a1, $gp, -0x7208
    ctx->pc = 0x15addcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938104));
    // 0x15ade0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x15ADE0u;
    SET_GPR_U32(ctx, 31, 0x15ADE8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x15ADE0u, 0x15ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ADE8u;
label_15ade8:
    // 0x15ade8: 0xa3808dec  sb          $zero, -0x7214($gp)
    ctx->pc = 0x15ade8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938092), (uint8_t)GPR_U32(ctx, 0));
    // 0x15adec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15adecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15adf0: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x15ADF0u;
    {
        const bool branch_taken_0x15adf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15adf0) {
            ctx->pc = 0x15B124u;
            goto label_15b124;
        }
    }
    ctx->pc = 0x15ADF8u;
label_15adf8:
    // 0x15adf8: 0x27848dfc  addiu       $a0, $gp, -0x7204
    ctx->pc = 0x15adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938108));
    // 0x15adfc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x15adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15ae00: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x15AE00u;
    SET_GPR_U32(ctx, 31, 0x15AE08u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x15AE00u, 0x15AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE08u;
label_15ae08:
    // 0x15ae08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AE08u;
    {
        const bool branch_taken_0x15ae08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ae08) {
            ctx->pc = 0x15AE1Cu;
            goto label_15ae1c;
        }
    }
    ctx->pc = 0x15AE10u;
    // 0x15ae10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15ae10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae14: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x15AE14u;
    {
        const bool branch_taken_0x15ae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ae14) {
            ctx->pc = 0x15B124u;
            goto label_15b124;
        }
    }
    ctx->pc = 0x15AE1Cu;
label_15ae1c:
    // 0x15ae1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15ae1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ae20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ae24: 0x0  nop
    ctx->pc = 0x15ae24u;
    // NOP
    // 0x15ae28: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x15ae28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x15ae2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15ae30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ae30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ae34: 0x0  nop
    ctx->pc = 0x15ae34u;
    // NOP
    // 0x15ae38: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x15ae38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x15ae3c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ae40: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15ae44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ae44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae48: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AE48u;
    SET_GPR_U32(ctx, 31, 0x15AE50u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AE48u, 0x15AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE50u;
label_15ae50:
    // 0x15ae50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ae50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ae54: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ae58: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15ae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15ae5c: 0xc08c910  jal         func_232440
    ctx->pc = 0x15AE5Cu;
    SET_GPR_U32(ctx, 31, 0x15AE64u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x15AE5Cu, 0x15AE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE64u;
label_15ae64:
    // 0x15ae64: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ae68: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15ae68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15ae6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ae70: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AE70u;
    SET_GPR_U32(ctx, 31, 0x15AE78u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AE70u, 0x15AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE78u;
label_15ae78:
    // 0x15ae78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ae78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ae7c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ae80: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15ae84: 0xc08c910  jal         func_232440
    ctx->pc = 0x15AE84u;
    SET_GPR_U32(ctx, 31, 0x15AE8Cu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x15AE84u, 0x15AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE8Cu;
label_15ae8c:
    // 0x15ae8c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ae90: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15ae90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15ae94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ae94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae98: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AE98u;
    SET_GPR_U32(ctx, 31, 0x15AEA0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AE98u, 0x15AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AEA0u;
label_15aea0:
    // 0x15aea0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15aea4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15aea8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15aea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15aeac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15aeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aeb0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x15AEB0u;
    SET_GPR_U32(ctx, 31, 0x15AEB8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x15AEB0u, 0x15AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AEB8u;
label_15aeb8:
    // 0x15aeb8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15aebc: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15aec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15aec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15aec4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AEC4u;
    SET_GPR_U32(ctx, 31, 0x15AECCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AEC4u, 0x15AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AECCu;
label_15aecc:
    // 0x15aecc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15aeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15aed0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15aed4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15aed8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15aed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aedc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x15AEDCu;
    SET_GPR_U32(ctx, 31, 0x15AEE4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x15AEDCu, 0x15AEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AEE4u;
label_15aee4:
    // 0x15aee4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x15aee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x15aee8: 0x24842f70  addiu       $a0, $a0, 0x2F70
    ctx->pc = 0x15aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12144));
    // 0x15aeec: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x15aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15aef0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x15AEF0u;
    SET_GPR_U32(ctx, 31, 0x15AEF8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x15AEF0u, 0x15AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AEF8u;
label_15aef8:
    // 0x15aef8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15AEF8u;
    {
        const bool branch_taken_0x15aef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aef8) {
            ctx->pc = 0x15AF84u;
            goto label_15af84;
        }
    }
    ctx->pc = 0x15AF00u;
    // 0x15af00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15af00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15af04: 0xa3828dec  sb          $v0, -0x7214($gp)
    ctx->pc = 0x15af04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938092), (uint8_t)GPR_U32(ctx, 2));
    // 0x15af08: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x15af08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x15af0c: 0x24842f70  addiu       $a0, $a0, 0x2F70
    ctx->pc = 0x15af0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12144));
    // 0x15af10: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x15af10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15af14: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x15AF14u;
    SET_GPR_U32(ctx, 31, 0x15AF1Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x15AF14u, 0x15AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF1Cu;
label_15af1c:
    // 0x15af1c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15af20: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15af20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x15af24: 0x24a52fb0  addiu       $a1, $a1, 0x2FB0
    ctx->pc = 0x15af24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12208));
    // 0x15af28: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x15af28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15af2c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x15AF2Cu;
    SET_GPR_U32(ctx, 31, 0x15AF34u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x15AF2Cu, 0x15AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF34u;
label_15af34:
    // 0x15af34: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15af34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15af38: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15af38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15af3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15af40: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AF40u;
    SET_GPR_U32(ctx, 31, 0x15AF48u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AF40u, 0x15AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF48u;
label_15af48:
    // 0x15af48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15af48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15af4c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15af50: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15af50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15af54: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15af54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15af58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15af58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af5c: 0xc08c800  jal         func_232000
    ctx->pc = 0x15AF5Cu;
    SET_GPR_U32(ctx, 31, 0x15AF64u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x15AF5Cu, 0x15AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF64u;
label_15af64:
    // 0x15af64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15af64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15af68: 0x93828dec  lbu         $v0, -0x7214($gp)
    ctx->pc = 0x15af68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938092)));
    // 0x15af6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15af6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15af70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15af70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15af74: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x15af74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15af78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15af78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x15af7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15af7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x15af80: 0xa3828dec  sb          $v0, -0x7214($gp)
    ctx->pc = 0x15af80u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938092), (uint8_t)GPR_U32(ctx, 2));
label_15af84:
    // 0x15af84: 0x93828dec  lbu         $v0, -0x7214($gp)
    ctx->pc = 0x15af84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938092)));
    // 0x15af88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15af88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15af8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15AF8Cu;
    {
        const bool branch_taken_0x15af8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15af8c) {
            ctx->pc = 0x15AFA0u;
            goto label_15afa0;
        }
    }
    ctx->pc = 0x15AF94u;
    // 0x15af94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15af94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af98: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x15AF98u;
    {
        const bool branch_taken_0x15af98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15af98) {
            ctx->pc = 0x15B124u;
            goto label_15b124;
        }
    }
    ctx->pc = 0x15AFA0u;
label_15afa0:
    // 0x15afa0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15afa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afa4: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x15AFA4u;
    {
        const bool branch_taken_0x15afa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15afa4) {
            ctx->pc = 0x15B114u;
            goto label_15b114;
        }
    }
    ctx->pc = 0x15AFACu;
label_15afac:
    // 0x15afac: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15afacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15afb0: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15afb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15afb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afb8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AFB8u;
    SET_GPR_U32(ctx, 31, 0x15AFC0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AFB8u, 0x15AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFC0u;
label_15afc0:
    // 0x15afc0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15afc4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15afc8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15afcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15afccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15afd0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x15AFD0u;
    SET_GPR_U32(ctx, 31, 0x15AFD8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x15AFD0u, 0x15AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFD8u;
label_15afd8:
    // 0x15afd8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15afdc: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15afe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15afe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15afe4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15AFE4u;
    SET_GPR_U32(ctx, 31, 0x15AFECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15AFE4u, 0x15AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFECu;
label_15afec:
    // 0x15afec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15afecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15aff0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15aff4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15aff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15aff8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15aff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15affc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x15AFFCu;
    SET_GPR_U32(ctx, 31, 0x15B004u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x15AFFCu, 0x15B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B004u;
label_15b004:
    // 0x15b004: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15b004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15b008: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15b008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15b00c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b010: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15B010u;
    SET_GPR_U32(ctx, 31, 0x15B018u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15B010u, 0x15B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B018u;
label_15b018:
    // 0x15b018: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15b018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b01c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15b020: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x15b020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x15b024: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15b024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15b028: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15b028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15b02c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15b02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b030: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x15b030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15b034: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x15b034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b038: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15b038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b03c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15b03cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b040: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15B040u;
    SET_GPR_U32(ctx, 31, 0x15B048u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15B040u, 0x15B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B048u;
label_15b048:
    // 0x15b048: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x15b048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x15b04c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x15b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x15b050: 0x2442be00  addiu       $v0, $v0, -0x4200
    ctx->pc = 0x15b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950400));
    // 0x15b054: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15b054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b058: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x15b058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15b05c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b060: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x15b060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b064: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x15b064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15b068: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x15b068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15b06c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x15b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x15b070: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x15b070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x15b074: 0x2442be10  addiu       $v0, $v0, -0x41F0
    ctx->pc = 0x15b074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950416));
    // 0x15b078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b07c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15b07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b080: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x15b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b084: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15b084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15b088: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x15b088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x15b08c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15b090: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15b090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15b094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b098: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15B098u;
    SET_GPR_U32(ctx, 31, 0x15B0A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15B098u, 0x15B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B0A0u;
label_15b0a0:
    // 0x15b0a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b0a4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15b0a8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15b0ac: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x15b0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b0b0: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x15b0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15b0b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0b8: 0xc08c208  jal         func_230820
    ctx->pc = 0x15B0B8u;
    SET_GPR_U32(ctx, 31, 0x15B0C0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x15B0B8u, 0x15B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B0C0u;
label_15b0c0:
    // 0x15b0c0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15b0c4: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15b0c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0cc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15B0CCu;
    SET_GPR_U32(ctx, 31, 0x15B0D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15B0CCu, 0x15B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B0D4u;
label_15b0d4:
    // 0x15b0d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b0d8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15b0dc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x15b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x15b0e0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x15b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x15b0e4: 0x2442be00  addiu       $v0, $v0, -0x4200
    ctx->pc = 0x15b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950400));
    // 0x15b0e8: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x15b0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b0ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15b0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b0f0: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x15b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x15b0f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15b0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15b0f8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15b0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15b0fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b100: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15b100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b104: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15b104u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b108: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x15B108u;
    SET_GPR_U32(ctx, 31, 0x15B110u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15B108u, 0x15B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B110u;
label_15b110:
    // 0x15b110: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15b110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15b114:
    // 0x15b114: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x15b114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15b118: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x15B118u;
    {
        const bool branch_taken_0x15b118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b118) {
            ctx->pc = 0x15AFACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15afac;
        }
    }
    ctx->pc = 0x15B120u;
    // 0x15b120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b124:
    // 0x15b124: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15b124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b128: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b12c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b130: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x15b130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15b134: 0x3e00008  jr          $ra
    ctx->pc = 0x15B134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B13Cu;
    // 0x15b13c: 0x0  nop
    ctx->pc = 0x15b13cu;
    // NOP
    // 0x15b140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15b140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15b144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b148: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15b148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15b14c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x15b14cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x15b150: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15b150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b154: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x15b154u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b158: 0xc058ea8  jal         func_163AA0
    ctx->pc = 0x15B158u;
    SET_GPR_U32(ctx, 31, 0x15B160u);
    ctx->pc = 0x163AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163AA0u, 0x15B158u, 0x15B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B160u;
label_15b160:
    // 0x15b160: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x15b160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b164: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15b164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15b168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b16c: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x15B16Cu;
    {
        const bool branch_taken_0x15b16c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15b16c) {
            ctx->pc = 0x15B1F4u;
            goto label_15b1f4;
        }
    }
    ctx->pc = 0x15B174u;
    // 0x15b174: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15b174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b178: 0x8c6300a8  lw          $v1, 0xA8($v1)
    ctx->pc = 0x15b178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x15b17c: 0x10030005  beq         $zero, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B17Cu;
    {
        const bool branch_taken_0x15b17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x15b17c) {
            ctx->pc = 0x15B194u;
            goto label_15b194;
        }
    }
    ctx->pc = 0x15B184u;
    // 0x15b184: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15b184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b18c: 0xc056b34  jal         func_15ACD0
    ctx->pc = 0x15B18Cu;
    SET_GPR_U32(ctx, 31, 0x15B194u);
    ctx->pc = 0x15ACD0u;
    goto label_15acd0;
    ctx->pc = 0x15B194u;
label_15b194:
    // 0x15b194: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15b194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b198: 0x8c6300ac  lw          $v1, 0xAC($v1)
    ctx->pc = 0x15b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x15b19c: 0x10030015  beq         $zero, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x15B19Cu;
    {
        const bool branch_taken_0x15b19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x15b19c) {
            ctx->pc = 0x15B1F4u;
            goto label_15b1f4;
        }
    }
    ctx->pc = 0x15B1A4u;
    // 0x15b1a4: 0xc090864  jal         func_242190
    ctx->pc = 0x15B1A4u;
    SET_GPR_U32(ctx, 31, 0x15B1ACu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x15B1A4u, 0x15B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1ACu;
label_15b1ac:
    // 0x15b1ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15b1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b1b0: 0xc090590  jal         func_241640
    ctx->pc = 0x15B1B0u;
    SET_GPR_U32(ctx, 31, 0x15B1B8u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x15B1B0u, 0x15B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1B8u;
label_15b1b8:
    // 0x15b1b8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b1bc: 0x8c6500ac  lw          $a1, 0xAC($v1)
    ctx->pc = 0x15b1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x15b1c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15b1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b1c4: 0xc09158c  jal         func_245630
    ctx->pc = 0x15B1C4u;
    SET_GPR_U32(ctx, 31, 0x15B1CCu);
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x15B1C4u, 0x15B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1CCu;
label_15b1cc:
    // 0x15b1cc: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15B1CCu;
    {
        const bool branch_taken_0x15b1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x15b1cc) {
            ctx->pc = 0x15B1ECu;
            goto label_15b1ec;
        }
    }
    ctx->pc = 0x15B1D4u;
    // 0x15b1d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b1d8: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x15b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x15b1dc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x15b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x15b1e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b1e4: 0xc0913a0  jal         func_244E80
    ctx->pc = 0x15B1E4u;
    SET_GPR_U32(ctx, 31, 0x15B1ECu);
    ctx->pc = 0x244E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E80u, 0x15B1E4u, 0x15B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1ECu;
label_15b1ec:
    // 0x15b1ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b1f0: 0xac6000ac  sw          $zero, 0xAC($v1)
    ctx->pc = 0x15b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 0));
label_15b1f4:
    // 0x15b1f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b1f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15b1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15b1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x15B1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B204u;
    // 0x15b204: 0x0  nop
    ctx->pc = 0x15b204u;
    // NOP
    // 0x15b208: 0x0  nop
    ctx->pc = 0x15b208u;
    // NOP
    // 0x15b20c: 0x0  nop
    ctx->pc = 0x15b20cu;
    // NOP
    // 0x15b210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15b214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b218: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15b218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15b21c: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x15b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x15b220: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x15b220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x15b224: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15b224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15b228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b22c: 0x1483003f  bne         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x15B22Cu;
    {
        const bool branch_taken_0x15b22c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15b22c) {
            ctx->pc = 0x15B32Cu;
            goto label_15b32c;
        }
    }
    ctx->pc = 0x15B234u;
    // 0x15b234: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b238: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15b238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15b23c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b240: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15B240u;
    SET_GPR_U32(ctx, 31, 0x15B248u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15B240u, 0x15B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B248u;
label_15b248:
    // 0x15b248: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15b248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b24c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b250: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15b250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15b254: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x15B254u;
    SET_GPR_U32(ctx, 31, 0x15B25Cu);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x15B254u, 0x15B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B25Cu;
label_15b25c:
    // 0x15b25c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x15B25Cu;
    {
        const bool branch_taken_0x15b25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b25c) {
            ctx->pc = 0x15B32Cu;
            goto label_15b32c;
        }
    }
    ctx->pc = 0x15B264u;
    // 0x15b264: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b268: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15b268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15b26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b270: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15B270u;
    SET_GPR_U32(ctx, 31, 0x15B278u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15B270u, 0x15B278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B278u;
label_15b278:
    // 0x15b278: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15b278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b27c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b280: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15b280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15b284: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15b284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b288: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15b288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15b28c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x15B28Cu;
    SET_GPR_U32(ctx, 31, 0x15B294u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x15B28Cu, 0x15B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B294u;
label_15b294:
    // 0x15b294: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b298: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15b298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15b29c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b2a0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15B2A0u;
    SET_GPR_U32(ctx, 31, 0x15B2A8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15B2A0u, 0x15B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B2A8u;
label_15b2a8:
    // 0x15b2a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15b2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b2ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b2b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15b2b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15b2b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b2b8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15b2bc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x15B2BCu;
    SET_GPR_U32(ctx, 31, 0x15B2C4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x15B2BCu, 0x15B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B2C4u;
label_15b2c4:
    // 0x15b2c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b2c8: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15b2cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2d0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15B2D0u;
    SET_GPR_U32(ctx, 31, 0x15B2D8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15B2D0u, 0x15B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B2D8u;
label_15b2d8:
    // 0x15b2d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15b2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b2dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b2e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15b2e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b2e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15b2e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15b2e8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15b2ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b2ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2f0: 0xc08c208  jal         func_230820
    ctx->pc = 0x15B2F0u;
    SET_GPR_U32(ctx, 31, 0x15B2F8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x15B2F0u, 0x15B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B2F8u;
label_15b2f8:
    // 0x15b2f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b2fc: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x15b300: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15b300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b304: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15B304u;
    SET_GPR_U32(ctx, 31, 0x15B30Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15B304u, 0x15B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B30Cu;
label_15b30c:
    // 0x15b30c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b314: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15b314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15b318: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15b318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15b31c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15b31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15b320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b324: 0xc08c208  jal         func_230820
    ctx->pc = 0x15B324u;
    SET_GPR_U32(ctx, 31, 0x15B32Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x15B324u, 0x15B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B32Cu;
label_15b32c:
    // 0x15b32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b330: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15b330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15b334: 0x3e00008  jr          $ra
    ctx->pc = 0x15B334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B33Cu;
    // 0x15b33c: 0x0  nop
    ctx->pc = 0x15b33cu;
    // NOP
    ctx->pc = 0x15b340u;
}
