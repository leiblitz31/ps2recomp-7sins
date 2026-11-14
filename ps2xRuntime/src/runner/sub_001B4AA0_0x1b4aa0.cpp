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

// Function: sub_001B4AA0
// Address: 0x1b4aa0 - 0x1b4fa0
void sub_001B4AA0_0x1b4aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4AA0_0x1b4aa0");
#endif

    switch (ctx->pc) {
        case 0x1b4ad0u: goto label_1b4ad0;
        case 0x1b4ae8u: goto label_1b4ae8;
        case 0x1b4b00u: goto label_1b4b00;
        case 0x1b4b18u: goto label_1b4b18;
        case 0x1b4b3cu: goto label_1b4b3c;
        case 0x1b4b64u: goto label_1b4b64;
        case 0x1b4b74u: goto label_1b4b74;
        case 0x1b4b90u: goto label_1b4b90;
        case 0x1b4c70u: goto label_1b4c70;
        case 0x1b4d3cu: goto label_1b4d3c;
        case 0x1b4e44u: goto label_1b4e44;
        case 0x1b4e58u: goto label_1b4e58;
        case 0x1b4e6cu: goto label_1b4e6c;
        case 0x1b4e7cu: goto label_1b4e7c;
        case 0x1b4e8cu: goto label_1b4e8c;
        case 0x1b4f6cu: goto label_1b4f6c;
        case 0x1b4f7cu: goto label_1b4f7c;
        default: break;
    }

    ctx->pc = 0x1b4aa0u;

    // 0x1b4aa0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b4aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b4aa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b4aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b4aa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b4aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b4aac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b4aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b4ab0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b4ab4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b4ab8: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1b4ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1b4abc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b4abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4ac0: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b4ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b4ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ac8: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B4AC8u;
    SET_GPR_U32(ctx, 31, 0x1B4AD0u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B4AC8u, 0x1B4AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AD0u;
label_1b4ad0:
    // 0x1b4ad0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1b4ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4ad4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4ad8: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b4ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b4adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4ae0: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B4AE0u;
    SET_GPR_U32(ctx, 31, 0x1B4AE8u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B4AE0u, 0x1B4AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4AE8u;
label_1b4ae8:
    // 0x1b4ae8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1b4ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4aec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4af0: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b4af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b4af4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b4af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4af8: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B4AF8u;
    SET_GPR_U32(ctx, 31, 0x1B4B00u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B4AF8u, 0x1B4B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B00u;
label_1b4b00:
    // 0x1b4b00: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b4b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4b04: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4b08: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1b4b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1b4b0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b4b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4b10: 0xc06be50  jal         func_1AF940
    ctx->pc = 0x1B4B10u;
    SET_GPR_U32(ctx, 31, 0x1B4B18u);
    ctx->pc = 0x1AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF940u, 0x1B4B10u, 0x1B4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B18u;
label_1b4b18:
    // 0x1b4b18: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1b4b18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b4b1c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4b20: 0xc4400154  lwc1        $f0, 0x154($v0)
    ctx->pc = 0x1b4b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4b24: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x1b4b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x1b4b28: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1b4b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1b4b2c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b4b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4b30: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4B30u;
    {
        const bool branch_taken_0x1b4b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4b30) {
            ctx->pc = 0x1B4B58u;
            goto label_1b4b58;
        }
    }
    ctx->pc = 0x1B4B38u;
    // 0x1b4b38: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1b4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1b4b3c:
    // 0x1b4b3c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1b4b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4b40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b4b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b4b44: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b4b48: 0x0  nop
    ctx->pc = 0x1b4b48u;
    // NOP
    // 0x1b4b4c: 0x0  nop
    ctx->pc = 0x1b4b4cu;
    // NOP
    // 0x1b4b50: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B4B50u;
    {
        const bool branch_taken_0x1b4b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4b50) {
            ctx->pc = 0x1B4B3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4b3c;
        }
    }
    ctx->pc = 0x1B4B58u;
label_1b4b58:
    // 0x1b4b58: 0xc64c0018  lwc1        $f12, 0x18($s2)
    ctx->pc = 0x1b4b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b4b5c: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1B4B5Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B64u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1B4B5Cu, 0x1B4B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B64u;
label_1b4b64:
    // 0x1b4b64: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1b4b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b4b68: 0xc64c0018  lwc1        $f12, 0x18($s2)
    ctx->pc = 0x1b4b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b4b6c: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1B4B6Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B74u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1B4B6Cu, 0x1B4B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B74u;
label_1b4b74:
    // 0x1b4b74: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b4b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1b4b78: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1b4b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1b4b7c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b4b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b4b80: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b4b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4b84: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B4B84u;
    {
        const bool branch_taken_0x1b4b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4b84) {
            ctx->pc = 0x1B4BACu;
            goto label_1b4bac;
        }
    }
    ctx->pc = 0x1B4B8Cu;
    // 0x1b4b8c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1b4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1b4b90:
    // 0x1b4b90: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1b4b90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4b94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b4b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b4b98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b4b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b4b9c: 0x0  nop
    ctx->pc = 0x1b4b9cu;
    // NOP
    // 0x1b4ba0: 0x0  nop
    ctx->pc = 0x1b4ba0u;
    // NOP
    // 0x1b4ba4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B4BA4u;
    {
        const bool branch_taken_0x1b4ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ba4) {
            ctx->pc = 0x1B4B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4b90;
        }
    }
    ctx->pc = 0x1B4BACu;
label_1b4bac:
    // 0x1b4bac: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b4bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4bb0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1b4bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b4bb4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1b4bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4bb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b4bb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b4bbc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1b4bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1b4bc0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1b4bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1b4bc4: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x1b4bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4bc8: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x1b4bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4bcc: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x1b4bccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4bd0: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x1b4bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b4bd4: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x1b4bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4bd8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1b4bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4bdc: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1b4bdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4be0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1b4be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4be4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1b4be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4be8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4bec: 0x0  nop
    ctx->pc = 0x1b4becu;
    // NOP
    // 0x1b4bf0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4bf0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4bf4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1b4bf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b4bf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4bfc: 0x0  nop
    ctx->pc = 0x1b4bfcu;
    // NOP
    // 0x1b4c00: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4c00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4c04: 0x4605201c  madd.s      $f0, $f4, $f5
    ctx->pc = 0x1b4c04u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1b4c08: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1b4c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1b4c0c: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x1b4c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4c10: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x1b4c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4c14: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x1b4c14u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4c18: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x1b4c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b4c1c: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x1b4c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4c20: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1b4c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4c24: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1b4c24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4c28: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x1b4c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4c2c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1b4c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4c30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4c30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4c34: 0x0  nop
    ctx->pc = 0x1b4c34u;
    // NOP
    // 0x1b4c38: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4c38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4c3c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1b4c3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b4c40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4c44: 0x0  nop
    ctx->pc = 0x1b4c44u;
    // NOP
    // 0x1b4c48: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4c48u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4c4c: 0x4605201c  madd.s      $f0, $f4, $f5
    ctx->pc = 0x1b4c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1b4c50: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1b4c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1b4c54: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1b4c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4c58: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4c5c: 0xc4400168  lwc1        $f0, 0x168($v0)
    ctx->pc = 0x1b4c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4c60: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1b4c60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4c64: 0xc78d8300  lwc1        $f13, -0x7D00($gp)
    ctx->pc = 0x1b4c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b4c68: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x1B4C68u;
    SET_GPR_U32(ctx, 31, 0x1B4C70u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x1B4C68u, 0x1B4C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4C70u;
label_1b4c70:
    // 0x1b4c70: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x1b4c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x1b4c74: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1b4c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4c78: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x1b4c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4c7c: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x1b4c7cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4c80: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x1b4c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b4c84: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1b4c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4c88: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1b4c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4c8c: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1b4c8cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4c90: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1b4c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4c94: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1b4c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4c98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4c98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4c9c: 0x0  nop
    ctx->pc = 0x1b4c9cu;
    // NOP
    // 0x1b4ca0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4ca0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4ca4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1b4ca4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b4ca8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4cac: 0x0  nop
    ctx->pc = 0x1b4cacu;
    // NOP
    // 0x1b4cb0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4cb0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4cb4: 0x4605201c  madd.s      $f0, $f4, $f5
    ctx->pc = 0x1b4cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1b4cb8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1b4cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b4cbc: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1b4cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4cc0: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x1b4cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4cc4: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x1b4cc4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4cc8: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x1b4cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b4ccc: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1b4cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4cd0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1b4cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4cd4: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1b4cd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4cd8: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x1b4cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4cdc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1b4cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4ce0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4ce0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4ce4: 0x0  nop
    ctx->pc = 0x1b4ce4u;
    // NOP
    // 0x1b4ce8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4ce8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4cec: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1b4cecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b4cf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4cf4: 0x0  nop
    ctx->pc = 0x1b4cf4u;
    // NOP
    // 0x1b4cf8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4cf8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4cfc: 0x4605201c  madd.s      $f0, $f4, $f5
    ctx->pc = 0x1b4cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1b4d00: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b4d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b4d04: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4d08: 0xc4410134  lwc1        $f1, 0x134($v0)
    ctx->pc = 0x1b4d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4d0c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b4d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4d10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b4d10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b4d14: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1b4d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1b4d18: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4d1c: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1b4d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4d20: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b4d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4d24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b4d24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b4d28: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b4d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1b4d2c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1b4d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1b4d30: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x1b4d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1b4d34: 0xc104d38  jal         func_4134E0
    ctx->pc = 0x1B4D34u;
    SET_GPR_U32(ctx, 31, 0x1B4D3Cu);
    ctx->pc = 0x4134E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134E0u, 0x1B4D34u, 0x1B4D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4D3Cu;
label_1b4d3c:
    // 0x1b4d3c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1b4d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1b4d40: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1b4d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4d44: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x1b4d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4d48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b4d48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4d4c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1b4d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4d50: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x1b4d50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b4d54: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x1b4d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4d58: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1b4d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4d5c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1b4d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4d60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b4d60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4d64: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1b4d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4d68: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b4d68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b4d6c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x1b4d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4d70: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b4d70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b4d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4d78: 0x0  nop
    ctx->pc = 0x1b4d78u;
    // NOP
    // 0x1b4d7c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4d7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4d80: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1b4d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b4d84: 0x46000004  c1          0x4
    ctx->pc = 0x1b4d84u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b4d88: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1b4d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1b4d8c: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x1b4d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b4d90: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1b4d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4d94: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1b4d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4d98: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1b4d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4d9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b4d9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4da0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4da4: 0x0  nop
    ctx->pc = 0x1b4da4u;
    // NOP
    // 0x1b4da8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4da8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4dac: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1b4dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b4db0: 0x46000004  c1          0x4
    ctx->pc = 0x1b4db0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b4db4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1b4db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1b4db8: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x1b4db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b4dbc: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x1b4dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b4dc0: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x1b4dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b4dc4: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1b4dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4dc8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x1b4dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4dcc: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1b4dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4dd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b4dd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4dd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4dd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4dd8: 0x0  nop
    ctx->pc = 0x1b4dd8u;
    // NOP
    // 0x1b4ddc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4ddcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4de0: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x1b4de0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1b4de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4de8: 0x0  nop
    ctx->pc = 0x1b4de8u;
    // NOP
    // 0x1b4dec: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4decu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4df0: 0x4604289d  msub.s      $f2, $f5, $f4
    ctx->pc = 0x1b4df0u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x1b4df4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b4df8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b4df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4dfc: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1b4dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4e00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b4e00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4e04: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1b4e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4e08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b4e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4e0c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1b4e0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1b4e10: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1b4e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1b4e14: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1b4e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4e18: 0xc7808388  lwc1        $f0, -0x7C78($gp)
    ctx->pc = 0x1b4e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4e1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b4e1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4e20: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4E20u;
    {
        const bool branch_taken_0x1b4e20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b4e20) {
            ctx->pc = 0x1B4E38u;
            goto label_1b4e38;
        }
    }
    ctx->pc = 0x1B4E28u;
    // 0x1b4e28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b4e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b4e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4e30: 0x0  nop
    ctx->pc = 0x1b4e30u;
    // NOP
    // 0x1b4e34: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1b4e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1b4e38:
    // 0x1b4e38: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1b4e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b4e3c: 0xc0c39ca  jal         func_30E728
    ctx->pc = 0x1B4E3Cu;
    SET_GPR_U32(ctx, 31, 0x1B4E44u);
    ctx->pc = 0x30E728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E728u, 0x1B4E3Cu, 0x1B4E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E44u;
label_1b4e44:
    // 0x1b4e44: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1b4e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1b4e48: 0xc7ac005c  lwc1        $f12, 0x5C($sp)
    ctx->pc = 0x1b4e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b4e4c: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x1b4e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b4e50: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x1B4E50u;
    SET_GPR_U32(ctx, 31, 0x1B4E58u);
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x1B4E50u, 0x1B4E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E58u;
label_1b4e58:
    // 0x1b4e58: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x1b4e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4e5c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1b4e5cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4e60: 0xc78d838c  lwc1        $f13, -0x7C74($gp)
    ctx->pc = 0x1b4e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b4e64: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x1B4E64u;
    SET_GPR_U32(ctx, 31, 0x1B4E6Cu);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x1B4E64u, 0x1B4E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E6Cu;
label_1b4e6c:
    // 0x1b4e6c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1b4e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1b4e70: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x1b4e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b4e74: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1B4E74u;
    SET_GPR_U32(ctx, 31, 0x1B4E7Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1B4E74u, 0x1B4E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E7Cu;
label_1b4e7c:
    // 0x1b4e7c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1b4e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b4e80: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x1b4e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b4e84: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1B4E84u;
    SET_GPR_U32(ctx, 31, 0x1B4E8Cu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1B4E84u, 0x1B4E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E8Cu;
label_1b4e8c:
    // 0x1b4e8c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b4e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1b4e90: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1b4e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4e94: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1b4e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b4e98: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1b4e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4e9c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b4e9cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b4ea0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1b4ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1b4ea4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1b4ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4ea8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1b4ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4eac: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x1b4eacu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4eb0: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x1b4eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b4eb4: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x1b4eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4eb8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1b4eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4ebc: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1b4ebcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4ec0: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x1b4ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4ec4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1b4ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4ec8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4ecc: 0x0  nop
    ctx->pc = 0x1b4eccu;
    // NOP
    // 0x1b4ed0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4ed0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4ed4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1b4ed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b4ed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4ed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4edc: 0x0  nop
    ctx->pc = 0x1b4edcu;
    // NOP
    // 0x1b4ee0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4ee0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4ee4: 0x4605201c  madd.s      $f0, $f4, $f5
    ctx->pc = 0x1b4ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1b4ee8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1b4ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1b4eec: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1b4eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4ef0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1b4ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4ef4: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x1b4ef4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4ef8: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x1b4ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b4efc: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x1b4efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4f00: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1b4f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4f04: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1b4f04u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4f08: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x1b4f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4f0c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b4f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4f10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4f14: 0x0  nop
    ctx->pc = 0x1b4f14u;
    // NOP
    // 0x1b4f18: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4f18u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4f1c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1b4f1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b4f20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4f24: 0x0  nop
    ctx->pc = 0x1b4f24u;
    // NOP
    // 0x1b4f28: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1b4f28u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1b4f2c: 0x4605201c  madd.s      $f0, $f4, $f5
    ctx->pc = 0x1b4f2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x1b4f30: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1b4f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1b4f34: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4f38: 0xc4410134  lwc1        $f1, 0x134($v0)
    ctx->pc = 0x1b4f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4f3c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1b4f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4f40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b4f40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b4f44: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1b4f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b4f48: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b4f4c: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1b4f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4f50: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1b4f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4f54: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b4f54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b4f58: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b4f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b4f5c: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x1b4f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b4f60: 0xc7ad0050  lwc1        $f13, 0x50($sp)
    ctx->pc = 0x1b4f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b4f64: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x1B4F64u;
    SET_GPR_U32(ctx, 31, 0x1B4F6Cu);
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x1B4F64u, 0x1B4F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F6Cu;
label_1b4f6c:
    // 0x1b4f6c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b4f6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1b4f70: 0xc78d838c  lwc1        $f13, -0x7C74($gp)
    ctx->pc = 0x1b4f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b4f74: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x1B4F74u;
    SET_GPR_U32(ctx, 31, 0x1B4F7Cu);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x1B4F74u, 0x1B4F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F7Cu;
label_1b4f7c:
    // 0x1b4f7c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1b4f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1b4f80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b4f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4f84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b4f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4f88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b4f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4f8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b4f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4f90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4f94: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1b4f94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b4f98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4FA0u;
}
