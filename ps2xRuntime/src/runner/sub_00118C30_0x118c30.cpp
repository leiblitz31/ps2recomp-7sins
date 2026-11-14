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

// Function: sub_00118C30
// Address: 0x118c30 - 0x118d20
void sub_00118C30_0x118c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118C30_0x118c30");
#endif

    switch (ctx->pc) {
        case 0x118d10u: goto label_118d10;
        default: break;
    }

    ctx->pc = 0x118c30u;

    // 0x118c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x118c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118c38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x118c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x118c3c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x118c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x118c40: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x118c40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x118c44: 0xaf80b9c0  sw          $zero, -0x4640($gp)
    ctx->pc = 0x118c44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949312), GPR_U32(ctx, 0));
    // 0x118c48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x118c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118c4c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x118c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x118c50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x118c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118c54: 0x0  nop
    ctx->pc = 0x118c54u;
    // NOP
    // 0x118c58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x118c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118c5c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x118C5Cu;
    {
        const bool branch_taken_0x118c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x118c5c) {
            ctx->pc = 0x118C70u;
            goto label_118c70;
        }
    }
    ctx->pc = 0x118C64u;
    // 0x118c64: 0xa380b9c8  sb          $zero, -0x4638($gp)
    ctx->pc = 0x118c64u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949320), (uint8_t)GPR_U32(ctx, 0));
    // 0x118c68: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x118C68u;
    {
        const bool branch_taken_0x118c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118c68) {
            ctx->pc = 0x118CF4u;
            goto label_118cf4;
        }
    }
    ctx->pc = 0x118C70u;
label_118c70:
    // 0x118c70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x118c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118c74: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x118c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x118c78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x118c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x118c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x118c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118c80: 0x0  nop
    ctx->pc = 0x118c80u;
    // NOP
    // 0x118c84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x118c84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118c88: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x118C88u;
    {
        const bool branch_taken_0x118c88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x118c88) {
            ctx->pc = 0x118CA0u;
            goto label_118ca0;
        }
    }
    ctx->pc = 0x118C90u;
    // 0x118c90: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x118c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x118c94: 0xa382b9c8  sb          $v0, -0x4638($gp)
    ctx->pc = 0x118c94u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949320), (uint8_t)GPR_U32(ctx, 2));
    // 0x118c98: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x118C98u;
    {
        const bool branch_taken_0x118c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118c98) {
            ctx->pc = 0x118CF4u;
            goto label_118cf4;
        }
    }
    ctx->pc = 0x118CA0u;
label_118ca0:
    // 0x118ca0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x118ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x118ca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x118ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x118ca8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x118ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118cac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x118cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x118cb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x118cb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x118cb4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x118cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x118cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x118cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x118cbc: 0x0  nop
    ctx->pc = 0x118cbcu;
    // NOP
    // 0x118cc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x118cc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x118cc4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x118CC4u;
    {
        const bool branch_taken_0x118cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x118cc4) {
            ctx->pc = 0x118CDCu;
            goto label_118cdc;
        }
    }
    ctx->pc = 0x118CCCu;
    // 0x118ccc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x118cccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x118cd0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x118cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x118cd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x118CD4u;
    {
        const bool branch_taken_0x118cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118cd4) {
            ctx->pc = 0x118CF0u;
            goto label_118cf0;
        }
    }
    ctx->pc = 0x118CDCu;
label_118cdc:
    // 0x118cdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x118cdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x118ce0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x118ce0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x118ce4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x118ce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x118ce8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x118ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x118cec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x118cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_118cf0:
    // 0x118cf0: 0xa383b9c8  sb          $v1, -0x4638($gp)
    ctx->pc = 0x118cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949320), (uint8_t)GPR_U32(ctx, 3));
label_118cf4:
    // 0x118cf4: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x118cf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118cf8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x118cf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x118cfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x118cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118d00: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x118d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x118d04: 0x24a58be0  addiu       $a1, $a1, -0x7420
    ctx->pc = 0x118d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937568));
    // 0x118d08: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x118D08u;
    SET_GPR_U32(ctx, 31, 0x118D10u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x118D08u, 0x118D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D10u;
label_118d10:
    // 0x118d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118d14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x118d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x118d18: 0x3e00008  jr          $ra
    ctx->pc = 0x118D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118D20u;
}
