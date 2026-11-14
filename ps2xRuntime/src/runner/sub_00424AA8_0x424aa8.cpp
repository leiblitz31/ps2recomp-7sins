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

// Function: sub_00424AA8
// Address: 0x424aa8 - 0x424ba0
void sub_00424AA8_0x424aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424AA8_0x424aa8");
#endif

    ctx->pc = 0x424aa8u;

    // 0x424aa8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x424aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x424aac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x424aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x424ab0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x424ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x424ab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x424ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x424ab8: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x424ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x424abc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x424abcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x424ac0: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x424ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x424ac4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x424ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x424ac8: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x424ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x424acc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x424accu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x424ad0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x424ad0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x424ad4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x424ad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x424ad8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x424ad8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x424adc: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x424adcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x424ae0: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x424ae0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x424ae4: 0xc7858060  lwc1        $f5, -0x7FA0($gp)
    ctx->pc = 0x424ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x424ae8: 0xc7868064  lwc1        $f6, -0x7F9C($gp)
    ctx->pc = 0x424ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x424aec: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x424aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x424af0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x424af0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x424af4: 0xc7808068  lwc1        $f0, -0x7F98($gp)
    ctx->pc = 0x424af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x424af8: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x424af8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x424afc: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x424afcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x424b00: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x424b00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x424b04: 0x46000942  mul.s       $f5, $f1, $f0
    ctx->pc = 0x424b04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x424b08: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x424b08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x424b0c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x424b0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x424b10: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x424b10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x424b14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x424b14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x424b18: 0x46002864  .word       0x46002864                   # cvt.w.s     $f1, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x424b18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x424b1c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x424b1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x424b20: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x424b20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x424b24: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x424b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x424b28: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x424b28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x424b2c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x424b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x424b30: 0x284300ff  slti        $v1, $v0, 0xFF
    ctx->pc = 0x424b30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x424b34: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x424b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x424b38: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x424b38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x424b3c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x424b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x424b40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x424B40u;
    {
        const bool branch_taken_0x424b40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x424B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B40u;
        // 0x424b44: 0x93a20010  lbu         $v0, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424b40) {
            ctx->pc = 0x424B50u;
            goto label_424b50;
        }
    }
    ctx->pc = 0x424B48u;
    // 0x424b48: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x424b48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x424b4c: 0x0  nop
    ctx->pc = 0x424b4cu;
    // NOP
label_424b50:
    // 0x424b50: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x424b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x424b54: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x424b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x424b58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x424B58u;
    {
        const bool branch_taken_0x424b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B58u;
        // 0x424b5c: 0xa0850001  sb          $a1, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424b58) {
            ctx->pc = 0x424B68u;
            goto label_424b68;
        }
    }
    ctx->pc = 0x424B60u;
    // 0x424b60: 0x93a20014  lbu         $v0, 0x14($sp)
    ctx->pc = 0x424b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x424b64: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x424b64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_424b68:
    // 0x424b68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x424b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x424b6c: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x424b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x424b70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x424B70u;
    {
        const bool branch_taken_0x424b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B70u;
        // 0x424b74: 0xa0850002  sb          $a1, 0x2($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424b70) {
            ctx->pc = 0x424B80u;
            goto label_424b80;
        }
    }
    ctx->pc = 0x424B78u;
    // 0x424b78: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x424b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x424b7c: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x424b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_424b80:
    // 0x424b80: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x424b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x424b84: 0x284200ff  slti        $v0, $v0, 0xFF
    ctx->pc = 0x424b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x424b88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x424B88u;
    {
        const bool branch_taken_0x424b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B88u;
        // 0x424b8c: 0xa0850003  sb          $a1, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424b88) {
            ctx->pc = 0x424B98u;
            goto label_424b98;
        }
    }
    ctx->pc = 0x424B90u;
    // 0x424b90: 0x93a2001c  lbu         $v0, 0x1C($sp)
    ctx->pc = 0x424b90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x424b94: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x424b94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_424b98:
    // 0x424b98: 0x3e00008  jr          $ra
    ctx->pc = 0x424B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B98u;
        // 0x424b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424BA0u;
}
