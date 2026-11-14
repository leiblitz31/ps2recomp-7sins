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

// Function: sub_002C2A40
// Address: 0x2c2a40 - 0x2c2c60
void sub_002C2A40_0x2c2a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2A40_0x2c2a40");
#endif

    switch (ctx->pc) {
        case 0x2c2a84u: goto label_2c2a84;
        case 0x2c2a98u: goto label_2c2a98;
        case 0x2c2ac0u: goto label_2c2ac0;
        case 0x2c2adcu: goto label_2c2adc;
        case 0x2c2af0u: goto label_2c2af0;
        case 0x2c2b28u: goto label_2c2b28;
        case 0x2c2b44u: goto label_2c2b44;
        case 0x2c2b54u: goto label_2c2b54;
        case 0x2c2b64u: goto label_2c2b64;
        case 0x2c2b78u: goto label_2c2b78;
        case 0x2c2b94u: goto label_2c2b94;
        case 0x2c2ba8u: goto label_2c2ba8;
        case 0x2c2bd0u: goto label_2c2bd0;
        case 0x2c2bf4u: goto label_2c2bf4;
        case 0x2c2c0cu: goto label_2c2c0c;
        default: break;
    }

    ctx->pc = 0x2c2a40u;

    // 0x2c2a40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c2a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c2a44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c2a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c2a48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c2a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c2a4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c2a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c2a50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c2a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c2a54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c2a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c2a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c2a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c2a5c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x2c2a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x2c2a60: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2c2a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2c2a64: 0xa3a600a0  sb          $a2, 0xA0($sp)
    ctx->pc = 0x2c2a64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c2a68: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2c2a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x2c2a6c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2c2a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2a70: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2c2a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2a74: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x2c2a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2c2a78: 0x93a700a0  lbu         $a3, 0xA0($sp)
    ctx->pc = 0x2c2a78u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c2a7c: 0xc0b1364  jal         func_2C4D90
    ctx->pc = 0x2C2A7Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A84u);
    ctx->pc = 0x2C4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D90u, 0x2C2A7Cu, 0x2C2A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A84u;
label_2c2a84:
    // 0x2c2a84: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c2a84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c2a88: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2c2a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2a8c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2c2a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2a90: 0xc0b080c  jal         func_2C2030
    ctx->pc = 0x2C2A90u;
    SET_GPR_U32(ctx, 31, 0x2C2A98u);
    ctx->pc = 0x2C2030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2030u, 0x2C2A90u, 0x2C2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A98u;
label_2c2a98:
    // 0x2c2a98: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c2a98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c2a9c: 0x1240005e  beqz        $s2, . + 4 + (0x5E << 2)
    ctx->pc = 0x2C2A9Cu;
    {
        const bool branch_taken_0x2c2a9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2a9c) {
            ctx->pc = 0x2C2C18u;
            goto label_2c2c18;
        }
    }
    ctx->pc = 0x2C2AA4u;
    // 0x2c2aa4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x2c2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2c2aa8: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2C2AA8u;
    {
        const bool branch_taken_0x2c2aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2aa8) {
            ctx->pc = 0x2C2C18u;
            goto label_2c2c18;
        }
    }
    ctx->pc = 0x2C2AB0u;
    // 0x2c2ab0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x2c2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2c2ab4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c2ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c2ab8: 0xc048094  jal         func_120250
    ctx->pc = 0x2C2AB8u;
    SET_GPR_U32(ctx, 31, 0x2C2AC0u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C2AB8u, 0x2C2AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2AC0u;
label_2c2ac0:
    // 0x2c2ac0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c2ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ac4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c2ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ac8: 0x24050474  addiu       $a1, $zero, 0x474
    ctx->pc = 0x2c2ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1140));
    // 0x2c2acc: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2c2accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2c2ad0: 0x24c6e140  addiu       $a2, $a2, -0x1EC0
    ctx->pc = 0x2c2ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959424));
    // 0x2c2ad4: 0xc041a50  jal         func_106940
    ctx->pc = 0x2C2AD4u;
    SET_GPR_U32(ctx, 31, 0x2C2ADCu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2C2AD4u, 0x2C2ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2ADCu;
label_2c2adc:
    // 0x2c2adc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2c2adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2ae0: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x2c2ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
    // 0x2c2ae4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c2ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c2ae8: 0xc0495d4  jal         func_125750
    ctx->pc = 0x2C2AE8u;
    SET_GPR_U32(ctx, 31, 0x2C2AF0u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x2C2AE8u, 0x2C2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2AF0u;
label_2c2af0:
    // 0x2c2af0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2af4: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x2c2af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2c2af8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2c2af8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2afc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2c2afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c2b00: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2c2b00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2c2b04: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x2c2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2c2b08: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2B08u;
    {
        const bool branch_taken_0x2c2b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c2b08) {
            ctx->pc = 0x2C2B30u;
            goto label_2c2b30;
        }
    }
    ctx->pc = 0x2C2B10u;
    // 0x2c2b10: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2b14: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x2c2b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x2c2b18: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x2c2b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2c2b1c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2c2b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c2b20: 0xc08e514  jal         func_239450
    ctx->pc = 0x2C2B20u;
    SET_GPR_U32(ctx, 31, 0x2C2B28u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x2C2B20u, 0x2C2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B28u;
label_2c2b28:
    // 0x2c2b28: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C2B28u;
    {
        const bool branch_taken_0x2c2b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b28) {
            ctx->pc = 0x2C2B64u;
            goto label_2c2b64;
        }
    }
    ctx->pc = 0x2C2B30u;
label_2c2b30:
    // 0x2c2b30: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2c2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2b34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c2b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c2b38: 0x8c450068  lw          $a1, 0x68($v0)
    ctx->pc = 0x2c2b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2c2b3c: 0xc040304  jal         func_100C10
    ctx->pc = 0x2C2B3Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B44u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x2C2B3Cu, 0x2C2B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B44u;
label_2c2b44:
    // 0x2c2b44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c2b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c2b48: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2c2b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c2b4c: 0xc1195a4  jal         func_465690
    ctx->pc = 0x2C2B4Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B54u);
    ctx->pc = 0x465690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465690u, 0x2C2B4Cu, 0x2C2B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B54u;
label_2c2b54:
    // 0x2c2b54: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2c2b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2c2b58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c2b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c2b5c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2C2B5Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B64u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2C2B5Cu, 0x2C2B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B64u;
label_2c2b64:
    // 0x2c2b64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2b68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c2b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c2b6c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2c2b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c2b70: 0xc08d69c  jal         func_235A70
    ctx->pc = 0x2C2B70u;
    SET_GPR_U32(ctx, 31, 0x2C2B78u);
    ctx->pc = 0x235A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A70u, 0x2C2B70u, 0x2C2B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B78u;
label_2c2b78:
    // 0x2c2b78: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2c2b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c2b7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2B7Cu;
    {
        const bool branch_taken_0x2c2b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2b7c) {
            ctx->pc = 0x2C2BA8u;
            goto label_2c2ba8;
        }
    }
    ctx->pc = 0x2C2B84u;
    // 0x2c2b84: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x2c2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2c2b88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c2b8c: 0xc048094  jal         func_120250
    ctx->pc = 0x2C2B8Cu;
    SET_GPR_U32(ctx, 31, 0x2C2B94u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C2B8Cu, 0x2C2B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2B94u;
label_2c2b94:
    // 0x2c2b94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2b98: 0x24050547  addiu       $a1, $zero, 0x547
    ctx->pc = 0x2c2b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1351));
    // 0x2c2b9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c2b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2ba0: 0xc041b54  jal         func_106D50
    ctx->pc = 0x2C2BA0u;
    SET_GPR_U32(ctx, 31, 0x2C2BA8u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x2C2BA0u, 0x2C2BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BA8u;
label_2c2ba8:
    // 0x2c2ba8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2c2ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2c2bac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C2BACu;
    {
        const bool branch_taken_0x2c2bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2bac) {
            ctx->pc = 0x2C2BD8u;
            goto label_2c2bd8;
        }
    }
    ctx->pc = 0x2C2BB4u;
    // 0x2c2bb4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c2bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2bb8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c2bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c2bbc: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x2c2bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2c2bc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c2bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2bc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bc8: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x2C2BC8u;
    SET_GPR_U32(ctx, 31, 0x2C2BD0u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2C2BC8u, 0x2C2BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BD0u;
label_2c2bd0:
    // 0x2c2bd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C2BD0u;
    {
        const bool branch_taken_0x2c2bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2bd0) {
            ctx->pc = 0x2C2BF4u;
            goto label_2c2bf4;
        }
    }
    ctx->pc = 0x2C2BD8u;
label_2c2bd8:
    // 0x2c2bd8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2c2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2bdc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c2bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c2be0: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x2c2be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x2c2be4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c2be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2be8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c2be8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2bec: 0xc0af050  jal         func_2BC140
    ctx->pc = 0x2C2BECu;
    SET_GPR_U32(ctx, 31, 0x2C2BF4u);
    ctx->pc = 0x2BC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC140u, 0x2C2BECu, 0x2C2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2BF4u;
label_2c2bf4:
    // 0x2c2bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2bf8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2c2bf8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c2bfc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2c2bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2c2c00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c2c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c2c04: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x2C2C04u;
    SET_GPR_U32(ctx, 31, 0x2C2C0Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x2C2C04u, 0x2C2C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2C0Cu;
label_2c2c0c:
    // 0x2c2c0c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c2c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2c10: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2C10u;
    {
        const bool branch_taken_0x2c2c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2c10) {
            ctx->pc = 0x2C2C38u;
            goto label_2c2c38;
        }
    }
    ctx->pc = 0x2C2C18u;
label_2c2c18:
    // 0x2c2c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2c1c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2c2c1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c2c20: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2C20u;
    {
        const bool branch_taken_0x2c2c20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2c20) {
            ctx->pc = 0x2C2C34u;
            goto label_2c2c34;
        }
    }
    ctx->pc = 0x2C2C28u;
    // 0x2c2c28: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2C28u;
    {
        const bool branch_taken_0x2c2c28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2c28) {
            ctx->pc = 0x2C2C34u;
            goto label_2c2c34;
        }
    }
    ctx->pc = 0x2C2C30u;
    // 0x2c2c30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c2c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2c34:
    // 0x2c2c34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c2c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2c38:
    // 0x2c2c38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c2c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2c3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c2c3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2c40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c2c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2c44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c2c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2c48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c2c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2c4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c2c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2c50: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2c2c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2c2c54: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2C5Cu;
    // 0x2c2c5c: 0x0  nop
    ctx->pc = 0x2c2c5cu;
    // NOP
    ctx->pc = 0x2c2c60u;
}
