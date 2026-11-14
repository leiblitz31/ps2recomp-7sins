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

// Function: sub_0020EE60
// Address: 0x20ee60 - 0x20f860
void sub_0020EE60_0x20ee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020EE60_0x20ee60");
#endif

    switch (ctx->pc) {
        case 0x20ef44u: goto label_20ef44;
        case 0x20efa0u: goto label_20efa0;
        case 0x20f048u: goto label_20f048;
        case 0x20f068u: goto label_20f068;
        case 0x20f0acu: goto label_20f0ac;
        case 0x20f0f8u: goto label_20f0f8;
        case 0x20f180u: goto label_20f180;
        case 0x20f1ccu: goto label_20f1cc;
        case 0x20f314u: goto label_20f314;
        case 0x20f334u: goto label_20f334;
        case 0x20f358u: goto label_20f358;
        case 0x20f3e8u: goto label_20f3e8;
        case 0x20f46cu: goto label_20f46c;
        case 0x20f478u: goto label_20f478;
        case 0x20f494u: goto label_20f494;
        case 0x20f4a8u: goto label_20f4a8;
        case 0x20f4e0u: goto label_20f4e0;
        case 0x20f4f0u: goto label_20f4f0;
        case 0x20f51cu: goto label_20f51c;
        case 0x20f570u: goto label_20f570;
        case 0x20f5a0u: goto label_20f5a0;
        case 0x20f5d0u: goto label_20f5d0;
        case 0x20f5f0u: goto label_20f5f0;
        case 0x20f670u: goto label_20f670;
        case 0x20f6b8u: goto label_20f6b8;
        case 0x20f6d8u: goto label_20f6d8;
        case 0x20f7d4u: goto label_20f7d4;
        case 0x20f80cu: goto label_20f80c;
        case 0x20f824u: goto label_20f824;
        case 0x20f838u: goto label_20f838;
        default: break;
    }

    ctx->pc = 0x20ee60u;

    // 0x20ee60: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x20ee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x20ee64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20ee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20ee68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x20ee6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20ee6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20ee70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20ee70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20ee74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20ee74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20ee78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20ee78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20ee7c: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x20ee7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x20ee80: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x20ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x20ee84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20ee84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee88: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20ee8c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x20ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x20ee90: 0x106000ac  beqz        $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x20EE90u;
    {
        const bool branch_taken_0x20ee90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ee90) {
            ctx->pc = 0x20F144u;
            goto label_20f144;
        }
    }
    ctx->pc = 0x20EE98u;
    // 0x20ee98: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x20ee98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20ee9c: 0x10710074  beq         $v1, $s1, . + 4 + (0x74 << 2)
    ctx->pc = 0x20EE9Cu;
    {
        const bool branch_taken_0x20ee9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x20ee9c) {
            ctx->pc = 0x20F070u;
            goto label_20f070;
        }
    }
    ctx->pc = 0x20EEA4u;
    // 0x20eea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eea8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EEA8u;
    {
        const bool branch_taken_0x20eea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20eea8) {
            ctx->pc = 0x20EEB8u;
            goto label_20eeb8;
        }
    }
    ctx->pc = 0x20EEB0u;
    // 0x20eeb0: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x20EEB0u;
    {
        const bool branch_taken_0x20eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eeb0) {
            ctx->pc = 0x20F334u;
            goto label_20f334;
        }
    }
    ctx->pc = 0x20EEB8u;
label_20eeb8:
    // 0x20eeb8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x20eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20eebc: 0x8f86bb70  lw          $a2, -0x4490($gp)
    ctx->pc = 0x20eebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x20eec0: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x20eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20eec4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x20eec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20eec8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20eec8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20eecc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20eed0: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x20eed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20eed4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20eed4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20eed8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20eedc: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x20eedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20eee0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20eee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20eee4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x20eee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x20eee8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20eeec: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x20eeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20eef0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20eef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20eef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20eef8: 0x0  nop
    ctx->pc = 0x20eef8u;
    // NOP
    // 0x20eefc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20eefcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ef00: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x20EF00u;
    {
        const bool branch_taken_0x20ef00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ef00) {
            ctx->pc = 0x20EF20u;
            goto label_20ef20;
        }
    }
    ctx->pc = 0x20EF08u;
    // 0x20ef08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20ef0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ef0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ef10: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20ef14: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x20ef14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x20ef18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ef1c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x20ef1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20ef20:
    // 0x20ef20: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x20ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20ef24: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x20ef28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20ef28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ef2c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x20ef2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ef30: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20ef30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20ef34: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x20ef34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ef38: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x20ef38u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20ef3c: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x20EF3Cu;
    SET_GPR_U32(ctx, 31, 0x20EF44u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x20EF3Cu, 0x20EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF44u;
label_20ef44:
    // 0x20ef44: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x20ef44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x20ef48: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20ef4c: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x20ef4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20ef50: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x20ef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ef54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20ef58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20ef58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ef5c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x20ef5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ef60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20ef60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20ef64: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20ef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20ef68: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20ef68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ef6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20ef6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20ef70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20ef70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ef74: 0x0  nop
    ctx->pc = 0x20ef74u;
    // NOP
    // 0x20ef78: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20ef78u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20ef7c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20ef7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20ef80: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20ef84: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x20ef84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x20ef88: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20ef8c: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x20ef8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ef90: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x20ef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ef94: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x20ef94u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20ef98: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x20EF98u;
    SET_GPR_U32(ctx, 31, 0x20EFA0u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x20EF98u, 0x20EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFA0u;
label_20efa0:
    // 0x20efa0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20efa4: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x20efa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20efa8: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x20efa8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20efac: 0xc7848288  lwc1        $f4, -0x7D78($gp)
    ctx->pc = 0x20efacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20efb0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20efb4: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x20efb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20efb8: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x20efb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20efbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20efc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20efc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20efc4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x20efc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20efc8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20efc8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20efcc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20efccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20efd0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20efd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20efd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20efd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20efd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20efd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20efdc: 0x0  nop
    ctx->pc = 0x20efdcu;
    // NOP
    // 0x20efe0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20efe0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20efe4: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x20efe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20efe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20efe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20efec: 0x0  nop
    ctx->pc = 0x20efecu;
    // NOP
    // 0x20eff0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20eff0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20eff4: 0x4605201c  madd.s      $f0, $f4, $f5
    ctx->pc = 0x20eff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x20eff8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20eff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20effc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x20effcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x20f000: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f004: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x20f004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20f008: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x20f008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20f00c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20f010: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f014: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x20f014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f018: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20f018u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f01c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f020: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x20f020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f024: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20f024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f028: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f02c: 0x0  nop
    ctx->pc = 0x20f02cu;
    // NOP
    // 0x20f030: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20f030u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20f034: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20f034u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20f038: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f03c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x20f03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x20f040: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x20F040u;
    SET_GPR_U32(ctx, 31, 0x20F048u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x20F040u, 0x20F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F048u;
label_20f048:
    // 0x20f048: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20f048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f04c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x20f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f050: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f054: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20f054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f058: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x20f058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20f05c: 0x2446003c  addiu       $a2, $v0, 0x3C
    ctx->pc = 0x20f05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x20f060: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x20F060u;
    SET_GPR_U32(ctx, 31, 0x20F068u);
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x20F060u, 0x20F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F068u;
label_20f068:
    // 0x20f068: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x20F068u;
    {
        const bool branch_taken_0x20f068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f068) {
            ctx->pc = 0x20F334u;
            goto label_20f334;
        }
    }
    ctx->pc = 0x20F070u;
label_20f070:
    // 0x20f070: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f074: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20f074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20f078: 0x90420034  lbu         $v0, 0x34($v0)
    ctx->pc = 0x20f078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x20f07c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20F07Cu;
    {
        const bool branch_taken_0x20f07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f07c) {
            ctx->pc = 0x20F0BCu;
            goto label_20f0bc;
        }
    }
    ctx->pc = 0x20F084u;
    // 0x20f084: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f088: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x20f088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x20f08c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20F08Cu;
    {
        const bool branch_taken_0x20f08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f08c) {
            ctx->pc = 0x20F0BCu;
            goto label_20f0bc;
        }
    }
    ctx->pc = 0x20F094u;
    // 0x20f094: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f098: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20f098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20f09c: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x20f09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x20f0a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f0a4: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x20F0A4u;
    SET_GPR_U32(ctx, 31, 0x20F0ACu);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x20F0A4u, 0x20F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0ACu;
label_20f0ac:
    // 0x20f0ac: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f0b0: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x20f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x20f0b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20F0B4u;
    {
        const bool branch_taken_0x20f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f0b4) {
            ctx->pc = 0x20F100u;
            goto label_20f100;
        }
    }
    ctx->pc = 0x20F0BCu;
label_20f0bc:
    // 0x20f0bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f0c0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20f0c4: 0x90420034  lbu         $v0, 0x34($v0)
    ctx->pc = 0x20f0c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x20f0c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20F0C8u;
    {
        const bool branch_taken_0x20f0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f0c8) {
            ctx->pc = 0x20F100u;
            goto label_20f100;
        }
    }
    ctx->pc = 0x20F0D0u;
    // 0x20f0d0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f0d4: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x20f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20f0d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20F0D8u;
    {
        const bool branch_taken_0x20f0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f0d8) {
            ctx->pc = 0x20F100u;
            goto label_20f100;
        }
    }
    ctx->pc = 0x20F0E0u;
    // 0x20f0e0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f0e4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20f0e8: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x20f0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20f0ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f0f0: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x20F0F0u;
    SET_GPR_U32(ctx, 31, 0x20F0F8u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x20F0F0u, 0x20F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0F8u;
label_20f0f8:
    // 0x20f0f8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f0fc: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x20f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_20f100:
    // 0x20f100: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x20f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x20f104: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x20f104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f108: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f10c: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x20f10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f110: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20f110u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20f114: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x20f114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x20f118: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f11c: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x20f11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f120: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f124: 0x0  nop
    ctx->pc = 0x20f124u;
    // NOP
    // 0x20f128: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20f128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f12c: 0x45000081  bc1f        . + 4 + (0x81 << 2)
    ctx->pc = 0x20F12Cu;
    {
        const bool branch_taken_0x20f12c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f12c) {
            ctx->pc = 0x20F334u;
            goto label_20f334;
        }
    }
    ctx->pc = 0x20F134u;
    // 0x20f134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f138: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x20f138u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20f13c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x20F13Cu;
    {
        const bool branch_taken_0x20f13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f13c) {
            ctx->pc = 0x20F334u;
            goto label_20f334;
        }
    }
    ctx->pc = 0x20F144u;
label_20f144:
    // 0x20f144: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f148: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20f14c: 0x90420034  lbu         $v0, 0x34($v0)
    ctx->pc = 0x20f14cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x20f150: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20F150u;
    {
        const bool branch_taken_0x20f150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f150) {
            ctx->pc = 0x20F190u;
            goto label_20f190;
        }
    }
    ctx->pc = 0x20F158u;
    // 0x20f158: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f15c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x20f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x20f160: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20F160u;
    {
        const bool branch_taken_0x20f160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f160) {
            ctx->pc = 0x20F190u;
            goto label_20f190;
        }
    }
    ctx->pc = 0x20F168u;
    // 0x20f168: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f16c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20f170: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x20f170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x20f174: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f178: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x20F178u;
    SET_GPR_U32(ctx, 31, 0x20F180u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x20F178u, 0x20F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F180u;
label_20f180:
    // 0x20f180: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f184: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x20f184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x20f188: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20F188u;
    {
        const bool branch_taken_0x20f188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f188) {
            ctx->pc = 0x20F1D4u;
            goto label_20f1d4;
        }
    }
    ctx->pc = 0x20F190u;
label_20f190:
    // 0x20f190: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f194: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20f198: 0x90420034  lbu         $v0, 0x34($v0)
    ctx->pc = 0x20f198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x20f19c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20F19Cu;
    {
        const bool branch_taken_0x20f19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f19c) {
            ctx->pc = 0x20F1D4u;
            goto label_20f1d4;
        }
    }
    ctx->pc = 0x20F1A4u;
    // 0x20f1a4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f1a8: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x20f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20f1ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20F1ACu;
    {
        const bool branch_taken_0x20f1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f1ac) {
            ctx->pc = 0x20F1D4u;
            goto label_20f1d4;
        }
    }
    ctx->pc = 0x20F1B4u;
    // 0x20f1b4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f1b8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20f1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20f1bc: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x20f1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20f1c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f1c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1c4: 0xc08f71c  jal         func_23DC70
    ctx->pc = 0x20F1C4u;
    SET_GPR_U32(ctx, 31, 0x20F1CCu);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x20F1C4u, 0x20F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1CCu;
label_20f1cc:
    // 0x20f1cc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f1d0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x20f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_20f1d4:
    // 0x20f1d4: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x20f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x20f1d8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x20f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x20f1dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f1e0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x20f1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f1e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20f1e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f1e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f1ec: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x20f1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f1f0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20f1f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20f1f4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f1f8: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x20f1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f1fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20f1fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20f200: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x20f200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x20f204: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f208: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x20f208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f20c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20f210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f214: 0x0  nop
    ctx->pc = 0x20f214u;
    // NOP
    // 0x20f218: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f21c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x20F21Cu;
    {
        const bool branch_taken_0x20f21c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f21c) {
            ctx->pc = 0x20F240u;
            goto label_20f240;
        }
    }
    ctx->pc = 0x20F224u;
    // 0x20f224: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20f224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20f228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f22c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f230: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x20f230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x20f234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20f234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f238: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x20F238u;
    {
        const bool branch_taken_0x20f238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f238) {
            ctx->pc = 0x20F83Cu;
            goto label_20f83c;
        }
    }
    ctx->pc = 0x20F240u;
label_20f240:
    // 0x20f240: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f244: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x20f244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f248: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x20f248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x20f24c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f250: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x20f250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20f254: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x20f254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20f258: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20f258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20f25c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f260: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x20f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f264: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20f264u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f268: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f26c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20f26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f270: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20f270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f278: 0x0  nop
    ctx->pc = 0x20f278u;
    // NOP
    // 0x20f27c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20f27cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20f280: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20f280u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20f284: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f288: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x20f288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x20f28c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f290: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x20f290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20f294: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x20f294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20f298: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20f298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20f29c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f2a0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x20f2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f2a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20f2a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f2a8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f2ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20f2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f2b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20f2b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f2b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f2b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f2b8: 0x0  nop
    ctx->pc = 0x20f2b8u;
    // NOP
    // 0x20f2bc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20f2bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20f2c0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20f2c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20f2c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f2c8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x20f2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x20f2cc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f2d0: 0xc4430024  lwc1        $f3, 0x24($v0)
    ctx->pc = 0x20f2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20f2d4: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x20f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20f2d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20f2dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f2e0: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x20f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f2e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20f2e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f2e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f2ec: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x20f2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f2f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x20f2f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f2f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f2f8: 0x0  nop
    ctx->pc = 0x20f2f8u;
    // NOP
    // 0x20f2fc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20f2fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20f300: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x20f300u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x20f304: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f308: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x20f308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x20f30c: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x20F30Cu;
    SET_GPR_U32(ctx, 31, 0x20F314u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x20F30Cu, 0x20F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F314u;
label_20f314:
    // 0x20f314: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x20f314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f318: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x20f318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f31c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f320: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20f320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f324: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x20f324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20f328: 0x2446003c  addiu       $a2, $v0, 0x3C
    ctx->pc = 0x20f328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x20f32c: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x20F32Cu;
    SET_GPR_U32(ctx, 31, 0x20F334u);
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x20F32Cu, 0x20F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F334u;
label_20f334:
    // 0x20f334: 0x120000a8  beqz        $s0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x20F334u;
    {
        const bool branch_taken_0x20f334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f334) {
            ctx->pc = 0x20F5D8u;
            goto label_20f5d8;
        }
    }
    ctx->pc = 0x20F33Cu;
    // 0x20f33c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f340: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x20f340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x20f344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f348: 0x14620059  bne         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x20F348u;
    {
        const bool branch_taken_0x20f348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20f348) {
            ctx->pc = 0x20F4B0u;
            goto label_20f4b0;
        }
    }
    ctx->pc = 0x20F350u;
    // 0x20f350: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x20F350u;
    SET_GPR_U32(ctx, 31, 0x20F358u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x20F350u, 0x20F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F358u;
label_20f358:
    // 0x20f358: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20F358u;
    {
        const bool branch_taken_0x20f358 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20f358) {
            ctx->pc = 0x20F374u;
            goto label_20f374;
        }
    }
    ctx->pc = 0x20F360u;
    // 0x20f360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f364: 0x0  nop
    ctx->pc = 0x20f364u;
    // NOP
    // 0x20f368: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20f368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20f36c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20F36Cu;
    {
        const bool branch_taken_0x20f36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f36c) {
            ctx->pc = 0x20F390u;
            goto label_20f390;
        }
    }
    ctx->pc = 0x20F374u;
label_20f374:
    // 0x20f374: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20f374u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20f378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20f378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20f37c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20f37cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20f380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20f380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f384: 0x0  nop
    ctx->pc = 0x20f384u;
    // NOP
    // 0x20f388: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20f388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20f38c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20f38cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20f390:
    // 0x20f390: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x20f390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x20f394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f398: 0x0  nop
    ctx->pc = 0x20f398u;
    // NOP
    // 0x20f39c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20f39cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20f3a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f3a4: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20f3a8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x20f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f3ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f3acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f3b0: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x20F3B0u;
    {
        const bool branch_taken_0x20f3b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f3b0) {
            ctx->pc = 0x20F4B0u;
            goto label_20f4b0;
        }
    }
    ctx->pc = 0x20F3B8u;
    // 0x20f3b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f3bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f3c0: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x20f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x20f3c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f3c8: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20f3cc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x20f3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f3d0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f3d4: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20f3d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x20f3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f3dc: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x20f3dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f3e0: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x20F3E0u;
    SET_GPR_U32(ctx, 31, 0x20F3E8u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x20F3E0u, 0x20F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F3E8u;
label_20f3e8:
    // 0x20f3e8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20F3E8u;
    {
        const bool branch_taken_0x20f3e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x20f3e8) {
            ctx->pc = 0x20F404u;
            goto label_20f404;
        }
    }
    ctx->pc = 0x20F3F0u;
    // 0x20f3f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f3f4: 0x0  nop
    ctx->pc = 0x20f3f4u;
    // NOP
    // 0x20f3f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20f3f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20f3fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20F3FCu;
    {
        const bool branch_taken_0x20f3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f3fc) {
            ctx->pc = 0x20F420u;
            goto label_20f420;
        }
    }
    ctx->pc = 0x20F404u;
label_20f404:
    // 0x20f404: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x20f404u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x20f408: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20f408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20f40c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x20f40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20f410: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20f410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f414: 0x0  nop
    ctx->pc = 0x20f414u;
    // NOP
    // 0x20f418: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20f418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20f41c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20f41cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20f420:
    // 0x20f420: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x20f420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x20f424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f428: 0x0  nop
    ctx->pc = 0x20f428u;
    // NOP
    // 0x20f42c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x20f42cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20f430: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f434: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20f438: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x20f438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f43c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f43cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f440: 0x0  nop
    ctx->pc = 0x20f440u;
    // NOP
    // 0x20f444: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x20f444u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x20f448: 0x4602a01c  madd.s      $f0, $f20, $f2
    ctx->pc = 0x20f448u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[2]));
    // 0x20f44c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f450: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x20f450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x20f454: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f458: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20f45c: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x20f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x20f460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20f460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f464: 0xc07ce2c  jal         func_1F38B0
    ctx->pc = 0x20F464u;
    SET_GPR_U32(ctx, 31, 0x20F46Cu);
    ctx->pc = 0x1F38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38B0u, 0x20F464u, 0x20F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F46Cu;
label_20f46c:
    // 0x20f46c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20f46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f470: 0xc041874  jal         func_1061D0
    ctx->pc = 0x20F470u;
    SET_GPR_U32(ctx, 31, 0x20F478u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x20F470u, 0x20F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F478u;
label_20f478:
    // 0x20f478: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x20f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f47c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x20f47cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f480: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x20f480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x20f484: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20f484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20f488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f48c: 0xc1217cc  jal         func_485F30
    ctx->pc = 0x20F48Cu;
    SET_GPR_U32(ctx, 31, 0x20F494u);
    ctx->pc = 0x485F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485F30u, 0x20F48Cu, 0x20F494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F494u;
label_20f494:
    // 0x20f494: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f498: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x20f498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x20f49c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20f49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f4a0: 0xc121904  jal         func_486410
    ctx->pc = 0x20F4A0u;
    SET_GPR_U32(ctx, 31, 0x20F4A8u);
    ctx->pc = 0x486410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486410u, 0x20F4A0u, 0x20F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F4A8u;
label_20f4a8:
    // 0x20f4a8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x20F4A8u;
    {
        const bool branch_taken_0x20f4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f4a8) {
            ctx->pc = 0x20F5D8u;
            goto label_20f5d8;
        }
    }
    ctx->pc = 0x20F4B0u;
label_20f4b0:
    // 0x20f4b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f4b4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f4b8: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x20f4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x20f4bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f4bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f4c0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f4c4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x20f4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x20f4c8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x20f4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f4cc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f4d0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x20f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x20f4d4: 0x2445001c  addiu       $a1, $v0, 0x1C
    ctx->pc = 0x20f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x20f4d8: 0xc041d58  jal         func_107560
    ctx->pc = 0x20F4D8u;
    SET_GPR_U32(ctx, 31, 0x20F4E0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x20F4D8u, 0x20F4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F4E0u;
label_20f4e0:
    // 0x20f4e0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x20f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f4e4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x20f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20f4e8: 0xc083e88  jal         func_20FA20
    ctx->pc = 0x20F4E8u;
    SET_GPR_U32(ctx, 31, 0x20F4F0u);
    ctx->pc = 0x20FA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA20u, 0x20F4E8u, 0x20F4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F4F0u;
label_20f4f0:
    // 0x20f4f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f4f4: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x20f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x20f4f8: 0x90420034  lbu         $v0, 0x34($v0)
    ctx->pc = 0x20f4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x20f4fc: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x20F4FCu;
    {
        const bool branch_taken_0x20f4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f4fc) {
            ctx->pc = 0x20F5D8u;
            goto label_20f5d8;
        }
    }
    ctx->pc = 0x20F504u;
    // 0x20f504: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f508: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x20f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x20f50c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x20F50Cu;
    {
        const bool branch_taken_0x20f50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f50c) {
            ctx->pc = 0x20F5D8u;
            goto label_20f5d8;
        }
    }
    ctx->pc = 0x20F514u;
    // 0x20f514: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x20F514u;
    SET_GPR_U32(ctx, 31, 0x20F51Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x20F514u, 0x20F51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F51Cu;
label_20f51c:
    // 0x20f51c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20f520: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x20f520u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20f524: 0x1810  mfhi        $v1
    ctx->pc = 0x20f524u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20f528: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20f528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f52c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20F52Cu;
    {
        const bool branch_taken_0x20f52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20f52c) {
            ctx->pc = 0x20F5B0u;
            goto label_20f5b0;
        }
    }
    ctx->pc = 0x20F534u;
    // 0x20f534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f538: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20F538u;
    {
        const bool branch_taken_0x20f538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20f538) {
            ctx->pc = 0x20F580u;
            goto label_20f580;
        }
    }
    ctx->pc = 0x20F540u;
    // 0x20f540: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F540u;
    {
        const bool branch_taken_0x20f540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f540) {
            ctx->pc = 0x20F550u;
            goto label_20f550;
        }
    }
    ctx->pc = 0x20F548u;
    // 0x20f548: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x20F548u;
    {
        const bool branch_taken_0x20f548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f548) {
            ctx->pc = 0x20F5D8u;
            goto label_20f5d8;
        }
    }
    ctx->pc = 0x20F550u;
label_20f550:
    // 0x20f550: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20f550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20f554: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f558: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20f558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20f55c: 0x27859b18  addiu       $a1, $gp, -0x64E8
    ctx->pc = 0x20f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941464));
    // 0x20f560: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f564: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20f564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f568: 0xc08f558  jal         func_23D560
    ctx->pc = 0x20F568u;
    SET_GPR_U32(ctx, 31, 0x20F570u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20F568u, 0x20F570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F570u;
label_20f570:
    // 0x20f570: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x20f570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f574: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x20f574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x20f578: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x20F578u;
    {
        const bool branch_taken_0x20f578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f578) {
            ctx->pc = 0x20F5D8u;
            goto label_20f5d8;
        }
    }
    ctx->pc = 0x20F580u;
label_20f580:
    // 0x20f580: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20f580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20f584: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f588: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20f588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20f58c: 0x27859b20  addiu       $a1, $gp, -0x64E0
    ctx->pc = 0x20f58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941472));
    // 0x20f590: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f594: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20f594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f598: 0xc08f558  jal         func_23D560
    ctx->pc = 0x20F598u;
    SET_GPR_U32(ctx, 31, 0x20F5A0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20F598u, 0x20F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5A0u;
label_20f5a0:
    // 0x20f5a0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x20f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f5a4: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x20f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x20f5a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20F5A8u;
    {
        const bool branch_taken_0x20f5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f5a8) {
            ctx->pc = 0x20F5D8u;
            goto label_20f5d8;
        }
    }
    ctx->pc = 0x20F5B0u;
label_20f5b0:
    // 0x20f5b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20f5b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f5b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f5b8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20f5bc: 0x27859b28  addiu       $a1, $gp, -0x64D8
    ctx->pc = 0x20f5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941480));
    // 0x20f5c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f5c4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20f5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f5c8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x20F5C8u;
    SET_GPR_U32(ctx, 31, 0x20F5D0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x20F5C8u, 0x20F5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5D0u;
label_20f5d0:
    // 0x20f5d0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x20f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f5d4: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x20f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
label_20f5d8:
    // 0x20f5d8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x20f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f5dc: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x20f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x20f5e0: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x20f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x20f5e4: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x20f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20f5e8: 0xc121910  jal         func_486440
    ctx->pc = 0x20F5E8u;
    SET_GPR_U32(ctx, 31, 0x20F5F0u);
    ctx->pc = 0x486440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486440u, 0x20F5E8u, 0x20F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5F0u;
label_20f5f0:
    // 0x20f5f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x20f5f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f5f8: 0x0  nop
    ctx->pc = 0x20f5f8u;
    // NOP
    // 0x20f5fc: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x20f5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x20f600: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x20f600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x20f604: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x20f604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x20f608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f60c: 0x0  nop
    ctx->pc = 0x20f60cu;
    // NOP
    // 0x20f610: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x20f610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x20f614: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x20f614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x20f618: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x20f618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x20f61c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f61cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f620: 0x0  nop
    ctx->pc = 0x20f620u;
    // NOP
    // 0x20f624: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x20f624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x20f628: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x20f628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20f62c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x20f62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x20f630: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f634: 0x0  nop
    ctx->pc = 0x20f634u;
    // NOP
    // 0x20f638: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x20f638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x20f63c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x20f63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x20f640: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x20f640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x20f644: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x20f644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x20f648: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x20f648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x20f64c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x20f64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x20f650: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20f650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20f654: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x20f654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x20f658: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f65c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20f65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20f660: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x20f660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x20f664: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f668: 0xc103d16  jal         func_40F458
    ctx->pc = 0x20F668u;
    SET_GPR_U32(ctx, 31, 0x20F670u);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x20F668u, 0x20F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F670u;
label_20f670:
    // 0x20f670: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x20f670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x20f674: 0x248494f8  addiu       $a0, $a0, -0x6B08
    ctx->pc = 0x20f674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939896));
    // 0x20f678: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x20f678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x20f67c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x20f67cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E94F8u));
    // 0x20f680: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x20f680u;
    { uint32_t bits = FAST_READ32(0x4E9500u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f684: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x20f684u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x20f688: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x20f688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x20f68c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f690: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x20f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x20f694: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x20F694u;
    {
        const bool branch_taken_0x20f694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f694) {
            ctx->pc = 0x20F7A8u;
            goto label_20f7a8;
        }
    }
    ctx->pc = 0x20F69Cu;
    // 0x20f69c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f6a0: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x20f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f6a4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f6a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f6ac: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x20f6acu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f6b0: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x20F6B0u;
    SET_GPR_U32(ctx, 31, 0x20F6B8u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x20F6B0u, 0x20F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F6B8u;
label_20f6b8:
    // 0x20f6b8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f6bc: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x20f6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f6c0: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x20f6c0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x20f6c4: 0x0  nop
    ctx->pc = 0x20f6c4u;
    // NOP
    // 0x20f6c8: 0x0  nop
    ctx->pc = 0x20f6c8u;
    // NOP
    // 0x20f6cc: 0x0  nop
    ctx->pc = 0x20f6ccu;
    // NOP
    // 0x20f6d0: 0xc0c39d0  jal         func_30E740
    ctx->pc = 0x20F6D0u;
    SET_GPR_U32(ctx, 31, 0x20F6D8u);
    ctx->pc = 0x30E740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E740u, 0x20F6D0u, 0x20F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F6D8u;
label_20f6d8:
    // 0x20f6d8: 0xc7818154  lwc1        $f1, -0x7EAC($gp)
    ctx->pc = 0x20f6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f6dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f6dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f6e0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x20f6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x20f6e4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f6e8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x20f6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f6ec: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f6f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x20f6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f6f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20f6f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f6f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f6f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f6fc: 0x0  nop
    ctx->pc = 0x20f6fcu;
    // NOP
    // 0x20f700: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f704: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x20F704u;
    {
        const bool branch_taken_0x20f704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f704) {
            ctx->pc = 0x20F764u;
            goto label_20f764;
        }
    }
    ctx->pc = 0x20F70Cu;
    // 0x20f70c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f710: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x20f710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f714: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f718: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x20f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f71c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20f71cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f724: 0x0  nop
    ctx->pc = 0x20f724u;
    // NOP
    // 0x20f728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f72c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x20F72Cu;
    {
        const bool branch_taken_0x20f72c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f72c) {
            ctx->pc = 0x20F748u;
            goto label_20f748;
        }
    }
    ctx->pc = 0x20F734u;
    // 0x20f734: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x20f734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f738: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x20f738u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20f73c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x20f73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x20f740: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20F740u;
    {
        const bool branch_taken_0x20f740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f740) {
            ctx->pc = 0x20F7BCu;
            goto label_20f7bc;
        }
    }
    ctx->pc = 0x20F748u;
label_20f748:
    // 0x20f748: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x20f748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x20f74c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f750: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x20f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f754: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20f754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20f758: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x20f758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x20f75c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x20F75Cu;
    {
        const bool branch_taken_0x20f75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f75c) {
            ctx->pc = 0x20F7BCu;
            goto label_20f7bc;
        }
    }
    ctx->pc = 0x20F764u;
label_20f764:
    // 0x20f764: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f768: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x20f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f76c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f770: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x20f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f774: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20f774u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20f77c: 0x0  nop
    ctx->pc = 0x20f77cu;
    // NOP
    // 0x20f780: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20f780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20f784: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x20F784u;
    {
        const bool branch_taken_0x20f784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20f784) {
            ctx->pc = 0x20F7BCu;
            goto label_20f7bc;
        }
    }
    ctx->pc = 0x20F78Cu;
    // 0x20f78c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x20f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x20f790: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20f794: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x20f794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f798: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20f798u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20f79c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x20f79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x20f7a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20F7A0u;
    {
        const bool branch_taken_0x20f7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f7a0) {
            ctx->pc = 0x20F7BCu;
            goto label_20f7bc;
        }
    }
    ctx->pc = 0x20F7A8u;
label_20f7a8:
    // 0x20f7a8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x20f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x20f7ac: 0xc7818304  lwc1        $f1, -0x7CFC($gp)
    ctx->pc = 0x20f7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20f7b0: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x20f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f7b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20f7b8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x20f7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_20f7bc:
    // 0x20f7bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20f7c0: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x20f7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x20f7c4: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x20f7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20f7c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f7cc: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x20F7CCu;
    SET_GPR_U32(ctx, 31, 0x20F7D4u);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x20F7CCu, 0x20F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F7D4u;
label_20f7d4:
    // 0x20f7d4: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x20f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x20f7d8: 0x24849508  addiu       $a0, $a0, -0x6AF8
    ctx->pc = 0x20f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939912));
    // 0x20f7dc: 0x27a300a8  addiu       $v1, $sp, 0xA8
    ctx->pc = 0x20f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x20f7e0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x20f7e0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4E9508u));
    // 0x20f7e4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x20f7e4u;
    { uint32_t bits = FAST_READ32(0x4E9510u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20f7e8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x20f7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x20f7ec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x20f7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x20f7f0: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x20f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x20f7f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20f7f8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20f7fc: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x20f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x20f800: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f804: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x20F804u;
    SET_GPR_U32(ctx, 31, 0x20F80Cu);
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x20F804u, 0x20F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F80Cu;
label_20f80c:
    // 0x20f80c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20f810: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20f810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20f814: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x20f814u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20f818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f81c: 0xc106638  jal         func_4198E0
    ctx->pc = 0x20F81Cu;
    SET_GPR_U32(ctx, 31, 0x20F824u);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x20F81Cu, 0x20F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F824u;
label_20f824:
    // 0x20f824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20f824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f828: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x20f828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20f82c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20f82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f830: 0xc1065f8  jal         func_4197E0
    ctx->pc = 0x20F830u;
    SET_GPR_U32(ctx, 31, 0x20F838u);
    ctx->pc = 0x4197E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4197E0u, 0x20F830u, 0x20F838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F838u;
label_20f838:
    // 0x20f838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f83c:
    // 0x20f83c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20f83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20f840: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20f840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20f844: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20f844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20f848: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20f848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f84c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20f84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f850: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20f850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20f854: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x20f854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x20f858: 0x3e00008  jr          $ra
    ctx->pc = 0x20F858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F860u;
}
