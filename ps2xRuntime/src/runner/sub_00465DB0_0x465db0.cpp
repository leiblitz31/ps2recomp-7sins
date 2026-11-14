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

// Function: sub_00465DB0
// Address: 0x465db0 - 0x465ed0
void sub_00465DB0_0x465db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465DB0_0x465db0");
#endif

    switch (ctx->pc) {
        case 0x465e98u: goto label_465e98;
        default: break;
    }

    ctx->pc = 0x465db0u;

    // 0x465db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x465db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x465db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x465db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x465db8: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x465db8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x465dbc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x465dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x465dc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x465dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x465dc4: 0x0  nop
    ctx->pc = 0x465dc4u;
    // NOP
    // 0x465dc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x465dc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x465dcc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x465DCCu;
    {
        const bool branch_taken_0x465dcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x465dcc) {
            ctx->pc = 0x465DE4u;
            goto label_465de4;
        }
    }
    ctx->pc = 0x465DD4u;
    // 0x465dd4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x465dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x465dd8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x465dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x465ddc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x465DDCu;
    {
        const bool branch_taken_0x465ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465ddc) {
            ctx->pc = 0x465DF0u;
            goto label_465df0;
        }
    }
    ctx->pc = 0x465DE4u;
label_465de4:
    // 0x465de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x465de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x465de8: 0x0  nop
    ctx->pc = 0x465de8u;
    // NOP
    // 0x465dec: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x465decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_465df0:
    // 0x465df0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x465df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x465df4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x465df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x465df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x465df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x465dfc: 0x0  nop
    ctx->pc = 0x465dfcu;
    // NOP
    // 0x465e00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x465e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x465e04: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x465E04u;
    {
        const bool branch_taken_0x465e04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x465e04) {
            ctx->pc = 0x465E50u;
            goto label_465e50;
        }
    }
    ctx->pc = 0x465E0Cu;
    // 0x465e0c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x465e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x465e10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x465e10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x465e14: 0x0  nop
    ctx->pc = 0x465e14u;
    // NOP
    // 0x465e18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x465e18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x465e1c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x465E1Cu;
    {
        const bool branch_taken_0x465e1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x465e1c) {
            ctx->pc = 0x465E34u;
            goto label_465e34;
        }
    }
    ctx->pc = 0x465E24u;
    // 0x465e24: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x465e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x465e28: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x465e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x465e2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x465E2Cu;
    {
        const bool branch_taken_0x465e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465e2c) {
            ctx->pc = 0x465E40u;
            goto label_465e40;
        }
    }
    ctx->pc = 0x465E34u;
label_465e34:
    // 0x465e34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x465e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x465e38: 0x0  nop
    ctx->pc = 0x465e38u;
    // NOP
    // 0x465e3c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x465e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_465e40:
    // 0x465e40: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x465e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x465e44: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x465e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x465e48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x465E48u;
    {
        const bool branch_taken_0x465e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465e48) {
            ctx->pc = 0x465E60u;
            goto label_465e60;
        }
    }
    ctx->pc = 0x465E50u;
label_465e50:
    // 0x465e50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x465e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x465e54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x465e54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x465e58: 0x0  nop
    ctx->pc = 0x465e58u;
    // NOP
    // 0x465e5c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x465e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_465e60:
    // 0x465e60: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x465e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x465e64: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x465e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x465e68: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x465e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x465e6c: 0x3c02c0d0  lui         $v0, 0xC0D0
    ctx->pc = 0x465e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49360 << 16));
    // 0x465e70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x465e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x465e74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x465e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x465e78: 0x0  nop
    ctx->pc = 0x465e78u;
    // NOP
    // 0x465e7c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x465e7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x465e80: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x465e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x465e84: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x465e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x465e88: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x465e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x465e8c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x465e8cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x465e90: 0xc0c39dc  jal         func_30E770
    ctx->pc = 0x465E90u;
    SET_GPR_U32(ctx, 31, 0x465E98u);
    ctx->pc = 0x30E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E770u, 0x465E90u, 0x465E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465E98u;
label_465e98:
    // 0x465e98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x465e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x465e9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x465e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x465ea0: 0x0  nop
    ctx->pc = 0x465ea0u;
    // NOP
    // 0x465ea4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x465ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x465ea8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x465ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x465eac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x465eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x465eb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x465eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x465eb4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x465eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x465eb8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x465eb8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x465ebc: 0x0  nop
    ctx->pc = 0x465ebcu;
    // NOP
    // 0x465ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x465ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465ec4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x465ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x465ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x465EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x465ED0u;
}
