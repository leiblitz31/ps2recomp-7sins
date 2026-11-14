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

// Function: sub_001A4A70
// Address: 0x1a4a70 - 0x1a5070
void sub_001A4A70_0x1a4a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4A70_0x1a4a70");
#endif

    switch (ctx->pc) {
        case 0x1a4a98u: goto label_1a4a98;
        case 0x1a4aacu: goto label_1a4aac;
        case 0x1a4ac0u: goto label_1a4ac0;
        case 0x1a4ad8u: goto label_1a4ad8;
        case 0x1a4ae4u: goto label_1a4ae4;
        case 0x1a4af0u: goto label_1a4af0;
        case 0x1a4b48u: goto label_1a4b48;
        case 0x1a4b54u: goto label_1a4b54;
        case 0x1a4c9cu: goto label_1a4c9c;
        case 0x1a4d10u: goto label_1a4d10;
        case 0x1a4d20u: goto label_1a4d20;
        case 0x1a4d90u: goto label_1a4d90;
        case 0x1a4db4u: goto label_1a4db4;
        case 0x1a4e18u: goto label_1a4e18;
        case 0x1a4f20u: goto label_1a4f20;
        case 0x1a4f30u: goto label_1a4f30;
        case 0x1a4f40u: goto label_1a4f40;
        case 0x1a4f50u: goto label_1a4f50;
        case 0x1a4fc4u: goto label_1a4fc4;
        case 0x1a4ff0u: goto label_1a4ff0;
        case 0x1a5008u: goto label_1a5008;
        case 0x1a502cu: goto label_1a502c;
        case 0x1a5038u: goto label_1a5038;
        case 0x1a5044u: goto label_1a5044;
        default: break;
    }

    ctx->pc = 0x1a4a70u;

    // 0x1a4a70: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1a4a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1a4a74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a4a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a4a78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a4a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a4a7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a4a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a4a80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a4a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a4a84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a4a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4a8c: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x1a4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x1a4a90: 0xc090864  jal         func_242190
    ctx->pc = 0x1A4A90u;
    SET_GPR_U32(ctx, 31, 0x1A4A98u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1A4A90u, 0x1A4A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A98u;
label_1a4a98:
    // 0x1a4a98: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x1a4a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a4a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4aa0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a4aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a4aa4: 0xc090870  jal         func_2421C0
    ctx->pc = 0x1A4AA4u;
    SET_GPR_U32(ctx, 31, 0x1A4AACu);
    ctx->pc = 0x2421C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421C0u, 0x1A4AA4u, 0x1A4AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AACu;
label_1a4aac:
    // 0x1a4aac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a4aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ab0: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x1a4ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1a4ab4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a4ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a4ab8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A4AB8u;
    SET_GPR_U32(ctx, 31, 0x1A4AC0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A4AB8u, 0x1A4AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AC0u;
label_1a4ac0:
    // 0x1a4ac0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a4ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ac4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4ac8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a4ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4acc: 0x244500a4  addiu       $a1, $v0, 0xA4
    ctx->pc = 0x1a4accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1a4ad0: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x1A4AD0u;
    SET_GPR_U32(ctx, 31, 0x1A4AD8u);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x1A4AD0u, 0x1A4AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AD8u;
label_1a4ad8:
    // 0x1a4ad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4adc: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x1A4ADCu;
    SET_GPR_U32(ctx, 31, 0x1A4AE4u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x1A4ADCu, 0x1A4AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AE4u;
label_1a4ae4:
    // 0x1a4ae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ae8: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x1A4AE8u;
    SET_GPR_U32(ctx, 31, 0x1A4AF0u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x1A4AE8u, 0x1A4AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AF0u;
label_1a4af0:
    // 0x1a4af0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4AF0u;
    {
        const bool branch_taken_0x1a4af0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a4af0) {
            ctx->pc = 0x1A4B0Cu;
            goto label_1a4b0c;
        }
    }
    ctx->pc = 0x1A4AF8u;
    // 0x1a4af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4afc: 0x0  nop
    ctx->pc = 0x1a4afcu;
    // NOP
    // 0x1a4b00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a4b00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a4b04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4B04u;
    {
        const bool branch_taken_0x1a4b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b04) {
            ctx->pc = 0x1A4B28u;
            goto label_1a4b28;
        }
    }
    ctx->pc = 0x1A4B0Cu;
label_1a4b0c:
    // 0x1a4b0c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a4b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a4b10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a4b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a4b14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a4b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a4b18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a4b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4b1c: 0x0  nop
    ctx->pc = 0x1a4b1cu;
    // NOP
    // 0x1a4b20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a4b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a4b24: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a4b24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a4b28:
    // 0x1a4b28: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1a4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1a4b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4b30: 0x0  nop
    ctx->pc = 0x1a4b30u;
    // NOP
    // 0x1a4b34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a4b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a4b38: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x1a4b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x1a4b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a4b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b40: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x1A4B40u;
    SET_GPR_U32(ctx, 31, 0x1A4B48u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x1A4B40u, 0x1A4B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B48u;
label_1a4b48:
    // 0x1a4b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4b4c: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x1A4B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B54u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x1A4B4Cu, 0x1A4B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B54u;
label_1a4b54:
    // 0x1a4b54: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4B54u;
    {
        const bool branch_taken_0x1a4b54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1a4b54) {
            ctx->pc = 0x1A4B70u;
            goto label_1a4b70;
        }
    }
    ctx->pc = 0x1A4B5Cu;
    // 0x1a4b5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4b60: 0x0  nop
    ctx->pc = 0x1a4b60u;
    // NOP
    // 0x1a4b64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a4b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a4b68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1A4B68u;
    {
        const bool branch_taken_0x1a4b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b68) {
            ctx->pc = 0x1A4B8Cu;
            goto label_1a4b8c;
        }
    }
    ctx->pc = 0x1A4B70u;
label_1a4b70:
    // 0x1a4b70: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1a4b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1a4b74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a4b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a4b78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a4b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a4b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a4b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4b80: 0x0  nop
    ctx->pc = 0x1a4b80u;
    // NOP
    // 0x1a4b84: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a4b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a4b88: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a4b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a4b8c:
    // 0x1a4b8c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1a4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1a4b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4b94: 0x0  nop
    ctx->pc = 0x1a4b94u;
    // NOP
    // 0x1a4b98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a4b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a4b9c: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x1a4b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x1a4ba0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4ba4: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x1a4ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4ba8: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x1a4ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4bac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a4bb0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4bb4: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x1a4bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x1a4bb8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4bbc: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x1a4bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4bc0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4bc4: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x1a4bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x1a4bc8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4bcc: 0xc44100ac  lwc1        $f1, 0xAC($v0)
    ctx->pc = 0x1a4bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4bd0: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1a4bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4bd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a4bd8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4bdc: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1a4bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x1a4be0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4be4: 0xc44100a4  lwc1        $f1, 0xA4($v0)
    ctx->pc = 0x1a4be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4be8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4bec: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x1a4becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4bf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a4bf4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1a4bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1a4bf8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4bfc: 0xc44100a8  lwc1        $f1, 0xA8($v0)
    ctx->pc = 0x1a4bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4c00: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4c04: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x1a4c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4c08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a4c0c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a4c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1a4c10: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4c14: 0xc44100ac  lwc1        $f1, 0xAC($v0)
    ctx->pc = 0x1a4c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4c18: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4c1c: 0xc44000b8  lwc1        $f0, 0xB8($v0)
    ctx->pc = 0x1a4c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4c20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4c20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a4c24: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1a4c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1a4c28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a4c2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4c30: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1a4c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4c34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4c38: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1a4c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1a4c3c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a4c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a4c40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4c44: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a4c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4c48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4c48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4c4c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a4c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1a4c50: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a4c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a4c54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4c58: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1a4c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4c5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4c5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4c60: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1a4c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1a4c64: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1a4c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4c68: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a4c6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4c70: 0xc46000bc  lwc1        $f0, 0xBC($v1)
    ctx->pc = 0x1a4c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4c74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4c78: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1a4c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1a4c7c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1a4c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4c80: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a4c84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4c88: 0xc46000c0  lwc1        $f0, 0xC0($v1)
    ctx->pc = 0x1a4c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4c8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4c90: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1a4c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1a4c94: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x1A4C94u;
    SET_GPR_U32(ctx, 31, 0x1A4C9Cu);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x1A4C94u, 0x1A4C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4C9Cu;
label_1a4c9c:
    // 0x1a4c9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4ca0: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x1a4ca0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a4ca4: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x1a4ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1a4ca8: 0x26230068  addiu       $v1, $s1, 0x68
    ctx->pc = 0x1a4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x1a4cac: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1a4cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1a4cb0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1a4cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4cb4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a4cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4cb8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x1a4cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a4cbc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a4cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a4cc0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4cc4: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x1a4cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4cc8: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1a4cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4ccc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a4cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4cd0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1a4cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4cd4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a4cd4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a4cd8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1a4cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1a4cdc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a4ce0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4ce4: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1a4ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4ce8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4cec: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1a4cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1a4cf0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4cf4: 0xc44100c8  lwc1        $f1, 0xC8($v0)
    ctx->pc = 0x1a4cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4cf8: 0xc78080b4  lwc1        $f0, -0x7F4C($gp)
    ctx->pc = 0x1a4cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4cfc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a4cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a4d00: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1a4d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1a4d04: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x1a4d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a4d08: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1A4D08u;
    SET_GPR_U32(ctx, 31, 0x1A4D10u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1A4D08u, 0x1A4D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D10u;
label_1a4d10:
    // 0x1a4d10: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1a4d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1a4d14: 0xc7ac00e4  lwc1        $f12, 0xE4($sp)
    ctx->pc = 0x1a4d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a4d18: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1A4D18u;
    SET_GPR_U32(ctx, 31, 0x1A4D20u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1A4D18u, 0x1A4D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D20u;
label_1a4d20:
    // 0x1a4d20: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1a4d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1a4d24: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1a4d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4d28: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1a4d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1a4d2c: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x1a4d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a4d30: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x1a4d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4d34: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1a4d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4d38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4d38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4d3c: 0x0  nop
    ctx->pc = 0x1a4d3cu;
    // NOP
    // 0x1a4d40: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a4d40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a4d44: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1a4d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a4d48: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1a4d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1a4d4c: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x1a4d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a4d50: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x1a4d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4d54: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1a4d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4d58: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1a4d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4d5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a4d5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a4d60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4d64: 0x0  nop
    ctx->pc = 0x1a4d64u;
    // NOP
    // 0x1a4d68: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a4d68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a4d6c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1a4d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a4d70: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a4d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1a4d74: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1a4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4d78: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a4d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a4d7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4d80: 0xc46000c4  lwc1        $f0, 0xC4($v1)
    ctx->pc = 0x1a4d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4d84: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1a4d84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4d88: 0xc0c39a0  jal         func_30E680
    ctx->pc = 0x1A4D88u;
    SET_GPR_U32(ctx, 31, 0x1A4D90u);
    ctx->pc = 0x30E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E680u, 0x1A4D88u, 0x1A4D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4D90u;
label_1a4d90:
    // 0x1a4d90: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1a4d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4d94: 0x0  nop
    ctx->pc = 0x1a4d94u;
    // NOP
    // 0x1a4d98: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a4d98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a4d9c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1a4d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1a4da0: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1a4da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1a4da4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1a4da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a4da8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A4DA8u;
    {
        const bool branch_taken_0x1a4da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4da8) {
            ctx->pc = 0x1A4DD0u;
            goto label_1a4dd0;
        }
    }
    ctx->pc = 0x1A4DB0u;
    // 0x1a4db0: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1a4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1a4db4:
    // 0x1a4db4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1a4db4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4db8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a4db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a4dbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4dc0: 0x0  nop
    ctx->pc = 0x1a4dc0u;
    // NOP
    // 0x1a4dc4: 0x0  nop
    ctx->pc = 0x1a4dc4u;
    // NOP
    // 0x1a4dc8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4DC8u;
    {
        const bool branch_taken_0x1a4dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4dc8) {
            ctx->pc = 0x1A4DB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4db4;
        }
    }
    ctx->pc = 0x1A4DD0u;
label_1a4dd0:
    // 0x1a4dd0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1a4dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4dd4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a4dd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a4dd8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1a4dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1a4ddc: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1a4ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4de0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1a4de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1a4de4: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1a4de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1a4de8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1a4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1a4dec: 0x24846760  addiu       $a0, $a0, 0x6760
    ctx->pc = 0x1a4decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26464));
    // 0x1a4df0: 0x27a30088  addiu       $v1, $sp, 0x88
    ctx->pc = 0x1a4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1a4df4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1a4df4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E6760u));
    // 0x1a4df8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1a4df8u;
    { uint32_t bits = FAST_READ32(0x4E6768u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4dfc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1a4dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1a4e00: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1a4e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1a4e04: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1a4e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1a4e08: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1a4e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a4e0c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A4E0Cu;
    {
        const bool branch_taken_0x1a4e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e0c) {
            ctx->pc = 0x1A4E34u;
            goto label_1a4e34;
        }
    }
    ctx->pc = 0x1A4E14u;
    // 0x1a4e14: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1a4e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1a4e18:
    // 0x1a4e18: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1a4e18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a4e1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a4e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a4e20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a4e24: 0x0  nop
    ctx->pc = 0x1a4e24u;
    // NOP
    // 0x1a4e28: 0x0  nop
    ctx->pc = 0x1a4e28u;
    // NOP
    // 0x1a4e2c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4E2Cu;
    {
        const bool branch_taken_0x1a4e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e2c) {
            ctx->pc = 0x1A4E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4e18;
        }
    }
    ctx->pc = 0x1A4E34u;
label_1a4e34:
    // 0x1a4e34: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1a4e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4e38: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1a4e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1a4e3c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1a4e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4e40: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1a4e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a4e44: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1a4e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1a4e48: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x1a4e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a4e4c: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x1a4e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4e50: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1a4e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4e54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4e58: 0x0  nop
    ctx->pc = 0x1a4e58u;
    // NOP
    // 0x1a4e5c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a4e5cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a4e60: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1a4e60u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a4e64: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1a4e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1a4e68: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x1a4e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a4e6c: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x1a4e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4e70: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1a4e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4e74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4e78: 0x0  nop
    ctx->pc = 0x1a4e78u;
    // NOP
    // 0x1a4e7c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a4e7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a4e80: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1a4e80u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a4e84: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1a4e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1a4e88: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x1a4e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a4e8c: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x1a4e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a4e90: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1a4e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4e94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4e98: 0x0  nop
    ctx->pc = 0x1a4e98u;
    // NOP
    // 0x1a4e9c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a4e9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a4ea0: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1a4ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1a4ea4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a4ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1a4ea8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a4eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4eb0: 0x0  nop
    ctx->pc = 0x1a4eb0u;
    // NOP
    // 0x1a4eb4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1a4eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1a4eb8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1a4eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1a4ebc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1a4ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a4ec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4ec4: 0x0  nop
    ctx->pc = 0x1a4ec4u;
    // NOP
    // 0x1a4ec8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1a4ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1a4ecc: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1a4eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1a4ed0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1a4ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1a4ed4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4ed4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4ed8: 0x0  nop
    ctx->pc = 0x1a4ed8u;
    // NOP
    // 0x1a4edc: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1a4edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1a4ee0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1a4ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1a4ee4: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1a4ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1a4ee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4eec: 0x0  nop
    ctx->pc = 0x1a4eecu;
    // NOP
    // 0x1a4ef0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1a4ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1a4ef4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1a4ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1a4ef8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1a4ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1a4efc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a4efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a4f00: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1a4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1a4f04: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1a4f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1a4f08: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1a4f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a4f0c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a4f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1a4f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4f14: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x1a4f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1a4f18: 0xc041d58  jal         func_107560
    ctx->pc = 0x1A4F18u;
    SET_GPR_U32(ctx, 31, 0x1A4F20u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1A4F18u, 0x1A4F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F20u;
label_1a4f20:
    // 0x1a4f20: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1a4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a4f24: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x1a4f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1a4f28: 0xc041d58  jal         func_107560
    ctx->pc = 0x1A4F28u;
    SET_GPR_U32(ctx, 31, 0x1A4F30u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1A4F28u, 0x1A4F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F30u;
label_1a4f30:
    // 0x1a4f30: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1a4f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a4f34: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1a4f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1a4f38: 0xc041d58  jal         func_107560
    ctx->pc = 0x1A4F38u;
    SET_GPR_U32(ctx, 31, 0x1A4F40u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1A4F38u, 0x1A4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F40u;
label_1a4f40:
    // 0x1a4f40: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1a4f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1a4f44: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x1a4f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1a4f48: 0xc041d58  jal         func_107560
    ctx->pc = 0x1A4F48u;
    SET_GPR_U32(ctx, 31, 0x1A4F50u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x1A4F48u, 0x1A4F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4F50u;
label_1a4f50:
    // 0x1a4f50: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4f54: 0xc44300d8  lwc1        $f3, 0xD8($v0)
    ctx->pc = 0x1a4f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a4f58: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a4f5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a4f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a4f60: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1a4f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4f64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4f68: 0x0  nop
    ctx->pc = 0x1a4f68u;
    // NOP
    // 0x1a4f6c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a4f6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1a4f70: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1a4f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a4f74: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4f78: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x1a4f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
    // 0x1a4f7c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x1a4f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4f80: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4f84: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1a4f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1a4f88: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1a4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1a4f8c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a4f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a4f90: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1a4f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4f94: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1a4f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4f98: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a4f98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a4f9c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1a4f9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1a4fa0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1a4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4fa4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1a4fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1a4fa8: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1a4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a4fac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a4facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a4fb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a4fb4: 0xc46000c4  lwc1        $f0, 0xC4($v1)
    ctx->pc = 0x1a4fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4fb8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1a4fb8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4fbc: 0xc0c39a0  jal         func_30E680
    ctx->pc = 0x1A4FBCu;
    SET_GPR_U32(ctx, 31, 0x1A4FC4u);
    ctx->pc = 0x30E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E680u, 0x1A4FBCu, 0x1A4FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FC4u;
label_1a4fc4:
    // 0x1a4fc4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1a4fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a4fc8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1a4fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4fcc: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1a4fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4fd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a4fd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4fd4: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1a4fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4fd8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1a4fd8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1a4fdc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1a4fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a4fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4fe4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1a4fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a4fe8: 0xc105fee  jal         func_417FB8
    ctx->pc = 0x1A4FE8u;
    SET_GPR_U32(ctx, 31, 0x1A4FF0u);
    ctx->pc = 0x417FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417FB8u, 0x1A4FE8u, 0x1A4FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FF0u;
label_1a4ff0:
    // 0x1a4ff0: 0xc7818278  lwc1        $f1, -0x7D88($gp)
    ctx->pc = 0x1a4ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4ff4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1a4ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4ff8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1a4ff8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a4ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5000: 0xc10604c  jal         func_418130
    ctx->pc = 0x1A5000u;
    SET_GPR_U32(ctx, 31, 0x1A5008u);
    ctx->pc = 0x418130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418130u, 0x1A5000u, 0x1A5008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5008u;
label_1a5008:
    // 0x1a5008: 0x24021388  addiu       $v0, $zero, 0x1388
    ctx->pc = 0x1a5008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x1a500c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a500cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a5010: 0x0  nop
    ctx->pc = 0x1a5010u;
    // NOP
    // 0x1a5014: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1a5014u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1a5018: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1a5018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a501c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1a501cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a5020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5024: 0xc106080  jal         func_418200
    ctx->pc = 0x1A5024u;
    SET_GPR_U32(ctx, 31, 0x1A502Cu);
    ctx->pc = 0x418200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418200u, 0x1A5024u, 0x1A502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A502Cu;
label_1a502c:
    // 0x1a502c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a502cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5030: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x1A5030u;
    SET_GPR_U32(ctx, 31, 0x1A5038u);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x1A5030u, 0x1A5038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5038u;
label_1a5038:
    // 0x1a5038: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a5038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a503c: 0xc106794  jal         func_419E50
    ctx->pc = 0x1A503Cu;
    SET_GPR_U32(ctx, 31, 0x1A5044u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x1A503Cu, 0x1A5044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5044u;
label_1a5044:
    // 0x1a5044: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a5044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a5048: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a5048u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a504c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a504cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a5050: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a5050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a5054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a5054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a5058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a505c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x1a505cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1a5060: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5068u;
    // 0x1a5068: 0x0  nop
    ctx->pc = 0x1a5068u;
    // NOP
    // 0x1a506c: 0x0  nop
    ctx->pc = 0x1a506cu;
    // NOP
    ctx->pc = 0x1a5070u;
}
