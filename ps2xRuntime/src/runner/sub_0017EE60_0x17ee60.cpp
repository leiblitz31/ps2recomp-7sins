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

// Function: sub_0017EE60
// Address: 0x17ee60 - 0x17f150
void sub_0017EE60_0x17ee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EE60_0x17ee60");
#endif

    switch (ctx->pc) {
        case 0x17ee88u: goto label_17ee88;
        case 0x17ee94u: goto label_17ee94;
        case 0x17f070u: goto label_17f070;
        case 0x17f0bcu: goto label_17f0bc;
        case 0x17f0d0u: goto label_17f0d0;
        case 0x17f0e4u: goto label_17f0e4;
        case 0x17f0fcu: goto label_17f0fc;
        case 0x17f110u: goto label_17f110;
        case 0x17f130u: goto label_17f130;
        default: break;
    }

    ctx->pc = 0x17ee60u;

    // 0x17ee60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17ee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17ee64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17ee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17ee68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17ee6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ee6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17ee70: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x17ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x17ee74: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17ee78: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17ee78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x17ee7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17ee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17ee80: 0xc05fc54  jal         func_17F150
    ctx->pc = 0x17EE80u;
    SET_GPR_U32(ctx, 31, 0x17EE88u);
    ctx->pc = 0x17F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F150u, 0x17EE80u, 0x17EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE88u;
label_17ee88:
    // 0x17ee88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17ee8c: 0xc084504  jal         func_211410
    ctx->pc = 0x17EE8Cu;
    SET_GPR_U32(ctx, 31, 0x17EE94u);
    ctx->pc = 0x211410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211410u, 0x17EE8Cu, 0x17EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EE94u;
label_17ee94:
    // 0x17ee94: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x17ee98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ee98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ee9c: 0x0  nop
    ctx->pc = 0x17ee9cu;
    // NOP
    // 0x17eea0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x17eea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x17eea4: 0xc78082a0  lwc1        $f0, -0x7D60($gp)
    ctx->pc = 0x17eea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17eea8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x17eea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x17eeac: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x17eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x17eeb0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x17eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17eeb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EEB4u;
    {
        const bool branch_taken_0x17eeb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17eeb4) {
            ctx->pc = 0x17EED0u;
            goto label_17eed0;
        }
    }
    ctx->pc = 0x17EEBCu;
    // 0x17eebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17eebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17eec0: 0x0  nop
    ctx->pc = 0x17eec0u;
    // NOP
    // 0x17eec4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17eec4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17eec8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17EEC8u;
    {
        const bool branch_taken_0x17eec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eec8) {
            ctx->pc = 0x17EEECu;
            goto label_17eeec;
        }
    }
    ctx->pc = 0x17EED0u;
label_17eed0:
    // 0x17eed0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17eed4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17eed8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17eed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17eedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17eedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17eee0: 0x0  nop
    ctx->pc = 0x17eee0u;
    // NOP
    // 0x17eee4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17eee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17eee8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17eee8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17eeec:
    // 0x17eeec: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x17eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x17eef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17eef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17eef4: 0x0  nop
    ctx->pc = 0x17eef4u;
    // NOP
    // 0x17eef8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x17eef8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17eefc: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x17eefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17ef00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17ef00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17ef04: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x17ef04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x17ef08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ef08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ef0c: 0x0  nop
    ctx->pc = 0x17ef0cu;
    // NOP
    // 0x17ef10: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x17ef10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x17ef14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ef14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ef18: 0x0  nop
    ctx->pc = 0x17ef18u;
    // NOP
    // 0x17ef1c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x17ef1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x17ef20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ef20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ef24: 0x0  nop
    ctx->pc = 0x17ef24u;
    // NOP
    // 0x17ef28: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x17ef28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x17ef2c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17ef30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ef30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ef34: 0x0  nop
    ctx->pc = 0x17ef34u;
    // NOP
    // 0x17ef38: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x17ef38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x17ef3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ef3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ef40: 0x0  nop
    ctx->pc = 0x17ef40u;
    // NOP
    // 0x17ef44: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x17ef44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x17ef48: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x17ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x17ef4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ef4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ef50: 0x0  nop
    ctx->pc = 0x17ef50u;
    // NOP
    // 0x17ef54: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x17ef54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x17ef58: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x17ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x17ef5c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x17ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17ef60: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EF60u;
    {
        const bool branch_taken_0x17ef60 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17ef60) {
            ctx->pc = 0x17EF7Cu;
            goto label_17ef7c;
        }
    }
    ctx->pc = 0x17EF68u;
    // 0x17ef68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ef68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ef6c: 0x0  nop
    ctx->pc = 0x17ef6cu;
    // NOP
    // 0x17ef70: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17ef70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17ef74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17EF74u;
    {
        const bool branch_taken_0x17ef74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ef74) {
            ctx->pc = 0x17EF98u;
            goto label_17ef98;
        }
    }
    ctx->pc = 0x17EF7Cu;
label_17ef7c:
    // 0x17ef7c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17ef80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17ef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17ef84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17ef84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17ef88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17ef88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ef8c: 0x0  nop
    ctx->pc = 0x17ef8cu;
    // NOP
    // 0x17ef90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17ef90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17ef94: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17ef94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17ef98:
    // 0x17ef98: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x17ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x17ef9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17ef9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17efa0: 0x0  nop
    ctx->pc = 0x17efa0u;
    // NOP
    // 0x17efa4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x17efa4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17efa8: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x17efa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17efac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17efacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17efb0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x17efb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x17efb4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x17efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x17efb8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x17efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17efbc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EFBCu;
    {
        const bool branch_taken_0x17efbc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17efbc) {
            ctx->pc = 0x17EFD8u;
            goto label_17efd8;
        }
    }
    ctx->pc = 0x17EFC4u;
    // 0x17efc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17efc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17efc8: 0x0  nop
    ctx->pc = 0x17efc8u;
    // NOP
    // 0x17efcc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17efccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17efd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17EFD0u;
    {
        const bool branch_taken_0x17efd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17efd0) {
            ctx->pc = 0x17EFF4u;
            goto label_17eff4;
        }
    }
    ctx->pc = 0x17EFD8u;
label_17efd8:
    // 0x17efd8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x17efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x17efdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17efdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17efe0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17efe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x17efe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17efe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17efe8: 0x0  nop
    ctx->pc = 0x17efe8u;
    // NOP
    // 0x17efec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x17efecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17eff0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17eff0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17eff4:
    // 0x17eff4: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x17eff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x17eff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17eff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17effc: 0x0  nop
    ctx->pc = 0x17effcu;
    // NOP
    // 0x17f000: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x17f000u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17f004: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x17f004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f008: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17f008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17f00c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x17f00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x17f010: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17f010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f014: 0x0  nop
    ctx->pc = 0x17f014u;
    // NOP
    // 0x17f018: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x17f018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17f01c: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x17f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f020: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x17f020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x17f024: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x17f024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x17f028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f02c: 0x0  nop
    ctx->pc = 0x17f02cu;
    // NOP
    // 0x17f030: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x17f030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x17f034: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x17f034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x17f038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f03c: 0x0  nop
    ctx->pc = 0x17f03cu;
    // NOP
    // 0x17f040: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x17f040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x17f044: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17f044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17f048: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17f048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17f04c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f04cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f050: 0x0  nop
    ctx->pc = 0x17f050u;
    // NOP
    // 0x17f054: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x17f054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x17f058: 0xc780829c  lwc1        $f0, -0x7D64($gp)
    ctx->pc = 0x17f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f05c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x17f05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x17f060: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x17f060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x17f064: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17f064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f068: 0xc056708  jal         func_159C20
    ctx->pc = 0x17F068u;
    SET_GPR_U32(ctx, 31, 0x17F070u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x17F068u, 0x17F070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F070u;
label_17f070:
    // 0x17f070: 0xc78081b0  lwc1        $f0, -0x7E50($gp)
    ctx->pc = 0x17f070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f074: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x17f074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17f078: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17f078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17f07c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f080: 0x0  nop
    ctx->pc = 0x17f080u;
    // NOP
    // 0x17f084: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17f084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17f088: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17f088u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f08c: 0x0  nop
    ctx->pc = 0x17f08cu;
    // NOP
    // 0x17f090: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x17f090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17f094: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17f094u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f098: 0x0  nop
    ctx->pc = 0x17f098u;
    // NOP
    // 0x17f09c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x17f09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x17f0a0: 0xc78081b0  lwc1        $f0, -0x7E50($gp)
    ctx->pc = 0x17f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f0a4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x17f0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x17f0a8: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x17f0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f0ac: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x17f0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x17f0b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17f0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0b4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17F0B4u;
    {
        const bool branch_taken_0x17f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f0b4) {
            ctx->pc = 0x17F114u;
            goto label_17f114;
        }
    }
    ctx->pc = 0x17F0BCu;
label_17f0bc:
    // 0x17f0bc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17f0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17f0c0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17f0c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0c8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17F0C8u;
    SET_GPR_U32(ctx, 31, 0x17F0D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17F0C8u, 0x17F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0D0u;
label_17f0d0:
    // 0x17f0d0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x17f0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17f0d4: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x17f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x17f0d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0dc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17F0DCu;
    SET_GPR_U32(ctx, 31, 0x17F0E4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17F0DCu, 0x17F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0E4u;
label_17f0e4:
    // 0x17f0e4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x17f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x17f0e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x17f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x17f0ec: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x17f0f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f0f4: 0xc05f5e0  jal         func_17D780
    ctx->pc = 0x17F0F4u;
    SET_GPR_U32(ctx, 31, 0x17F0FCu);
    ctx->pc = 0x17D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D780u, 0x17F0F4u, 0x17F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F0FCu;
label_17f0fc:
    // 0x17f0fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17f0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f100: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x17f100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x17f104: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x17f104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17f108: 0xc0842c0  jal         func_210B00
    ctx->pc = 0x17F108u;
    SET_GPR_U32(ctx, 31, 0x17F110u);
    ctx->pc = 0x210B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210B00u, 0x17F108u, 0x17F110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F110u;
label_17f110:
    // 0x17f110: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17f110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17f114:
    // 0x17f114: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x17f114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17f118: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x17F118u;
    {
        const bool branch_taken_0x17f118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17f118) {
            ctx->pc = 0x17F0BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f0bc;
        }
    }
    ctx->pc = 0x17F120u;
    // 0x17f120: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17f120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17f124: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17f124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17f128: 0xc08455c  jal         func_211570
    ctx->pc = 0x17F128u;
    SET_GPR_U32(ctx, 31, 0x17F130u);
    ctx->pc = 0x211570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211570u, 0x17F128u, 0x17F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F130u;
label_17f130:
    // 0x17f130: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17f130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17f134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17f138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f13c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x17f13cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17f140: 0x3e00008  jr          $ra
    ctx->pc = 0x17F140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F148u;
    // 0x17f148: 0x0  nop
    ctx->pc = 0x17f148u;
    // NOP
    // 0x17f14c: 0x0  nop
    ctx->pc = 0x17f14cu;
    // NOP
    ctx->pc = 0x17f150u;
}
