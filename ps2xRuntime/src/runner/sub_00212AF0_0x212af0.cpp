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

// Function: sub_00212AF0
// Address: 0x212af0 - 0x212bb0
void sub_00212AF0_0x212af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212AF0_0x212af0");
#endif

    ctx->pc = 0x212af0u;

    // 0x212af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212af4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x212af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x212af8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x212af8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x212afc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b00: 0x90630048  lbu         $v1, 0x48($v1)
    ctx->pc = 0x212b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x212b04: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x212B04u;
    {
        const bool branch_taken_0x212b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x212b04) {
            ctx->pc = 0x212B9Cu;
            goto label_212b9c;
        }
    }
    ctx->pc = 0x212B0Cu;
    // 0x212b0c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b10: 0xc4630080  lwc1        $f3, 0x80($v1)
    ctx->pc = 0x212b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212b14: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x212b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212b18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b1c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x212b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212b20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212b24: 0x0  nop
    ctx->pc = 0x212b24u;
    // NOP
    // 0x212b28: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x212b28u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x212b2c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x212b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x212b30: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x212b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x212b34: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b38: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x212b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212b3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b40: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x212b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212b44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x212b44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212b48: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x212B48u;
    {
        const bool branch_taken_0x212b48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x212b48) {
            ctx->pc = 0x212B68u;
            goto label_212b68;
        }
    }
    ctx->pc = 0x212B50u;
    // 0x212b50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b54: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x212b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212b58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b5c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x212b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x212b60: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x212B60u;
    {
        const bool branch_taken_0x212b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212b60) {
            ctx->pc = 0x212B9Cu;
            goto label_212b9c;
        }
    }
    ctx->pc = 0x212B68u;
label_212b68:
    // 0x212b68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b6c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x212b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212b70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b74: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x212b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212b78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x212b78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x212b7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x212b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212b80: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x212B80u;
    {
        const bool branch_taken_0x212b80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212b80) {
            ctx->pc = 0x212B9Cu;
            goto label_212b9c;
        }
    }
    ctx->pc = 0x212B88u;
    // 0x212b88: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b8c: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x212b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212b90: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x212b90u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x212b94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b98: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x212b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_212b9c:
    // 0x212b9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x212b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x212ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x212BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212BA8u;
    // 0x212ba8: 0x0  nop
    ctx->pc = 0x212ba8u;
    // NOP
    // 0x212bac: 0x0  nop
    ctx->pc = 0x212bacu;
    // NOP
    ctx->pc = 0x212bb0u;
}
