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

// Function: sub_00212BB0
// Address: 0x212bb0 - 0x212c70
void sub_00212BB0_0x212bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212BB0_0x212bb0");
#endif

    ctx->pc = 0x212bb0u;

    // 0x212bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x212bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x212bb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x212bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x212bb8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x212bb8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x212bbc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212bc0: 0x90630048  lbu         $v1, 0x48($v1)
    ctx->pc = 0x212bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x212bc4: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x212BC4u;
    {
        const bool branch_taken_0x212bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x212bc4) {
            ctx->pc = 0x212C5Cu;
            goto label_212c5c;
        }
    }
    ctx->pc = 0x212BCCu;
    // 0x212bcc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212bd0: 0xc4630084  lwc1        $f3, 0x84($v1)
    ctx->pc = 0x212bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x212bd4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x212bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212bd8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212bdc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x212bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212be0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212be4: 0x0  nop
    ctx->pc = 0x212be4u;
    // NOP
    // 0x212be8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x212be8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x212bec: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x212becu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x212bf0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x212bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x212bf4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212bf8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x212bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212bfc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212c00: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x212c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212c04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x212c04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212c08: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x212C08u;
    {
        const bool branch_taken_0x212c08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x212c08) {
            ctx->pc = 0x212C28u;
            goto label_212c28;
        }
    }
    ctx->pc = 0x212C10u;
    // 0x212c10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212c14: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x212c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212c18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212c1c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x212c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x212c20: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x212C20u;
    {
        const bool branch_taken_0x212c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212c20) {
            ctx->pc = 0x212C5Cu;
            goto label_212c5c;
        }
    }
    ctx->pc = 0x212C28u;
label_212c28:
    // 0x212c28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212c2c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x212c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212c30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212c34: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x212c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212c38: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x212c38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x212c3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x212c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x212c40: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x212C40u;
    {
        const bool branch_taken_0x212c40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x212c40) {
            ctx->pc = 0x212C5Cu;
            goto label_212c5c;
        }
    }
    ctx->pc = 0x212C48u;
    // 0x212c48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212c4c: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x212c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212c50: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x212c50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x212c54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x212c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212c58: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x212c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_212c5c:
    // 0x212c5c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x212c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x212c60: 0x3e00008  jr          $ra
    ctx->pc = 0x212C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212C68u;
    // 0x212c68: 0x0  nop
    ctx->pc = 0x212c68u;
    // NOP
    // 0x212c6c: 0x0  nop
    ctx->pc = 0x212c6cu;
    // NOP
    ctx->pc = 0x212c70u;
}
