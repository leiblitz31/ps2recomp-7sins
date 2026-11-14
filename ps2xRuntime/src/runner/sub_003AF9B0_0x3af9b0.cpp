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

// Function: sub_003AF9B0
// Address: 0x3af9b0 - 0x3afd48
void sub_003AF9B0_0x3af9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF9B0_0x3af9b0");
#endif

    switch (ctx->pc) {
        case 0x3af9e4u: goto label_3af9e4;
        case 0x3af9f8u: goto label_3af9f8;
        case 0x3afbd8u: goto label_3afbd8;
        case 0x3afbecu: goto label_3afbec;
        case 0x3afd08u: goto label_3afd08;
        case 0x3afd18u: goto label_3afd18;
        case 0x3afd28u: goto label_3afd28;
        default: break;
    }

    ctx->pc = 0x3af9b0u;

label_3af9b0:
    // 0x3af9b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3af9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3af9b4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3af9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x3af9b8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3af9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x3af9bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3af9bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af9c0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3af9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x3af9c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3af9c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af9c8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3af9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x3af9cc: 0x24d4ffff  addiu       $s4, $a2, -0x1
    ctx->pc = 0x3af9ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3af9d0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3af9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x3af9d4: 0x6810044  bgez        $s4, . + 4 + (0x44 << 2)
    ctx->pc = 0x3AF9D4u;
    {
        const bool branch_taken_0x3af9d4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x3AF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF9D4u;
        // 0x3af9d8: 0xffbf0080  sd          $ra, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af9d4) {
            ctx->pc = 0x3AFAE8u;
            goto label_3afae8;
        }
    }
    ctx->pc = 0x3AF9DCu;
    // 0x3af9dc: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AF9DCu;
    SET_GPR_U32(ctx, 31, 0x3AF9E4u);
    ctx->pc = 0x3AF9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF9DCu;
    // 0x3af9e0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AF9DCu, 0x3AF9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF9E4u;
label_3af9e4:
    // 0x3af9e4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3af9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3af9e8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3af9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3af9ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3af9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af9f0: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3AF9F0u;
    SET_GPR_U32(ctx, 31, 0x3AF9F8u);
    ctx->pc = 0x3AF9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF9F0u;
    // 0x3af9f4: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3AF9F0u, 0x3AF9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF9F8u;
label_3af9f8:
    // 0x3af9f8: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x3af9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3af9fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3af9fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afa00: 0xc463fff0  lwc1        $f3, -0x10($v1)
    ctx->pc = 0x3afa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3afa04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3afa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3afa08: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3afa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3afa0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3afa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3afa10: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x3afa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afa14: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3afa14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3afa18: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3afa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afa1c: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3afa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3afa20: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3afa20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3afa24: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3afa24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3afa28: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x3afa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afa2c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3afa2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3afa30: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3afa30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3afa34: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3afa34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3afa38: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3afa38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3afa3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3afa3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3afa40: 0x46010104  c1          0x10104
    ctx->pc = 0x3afa40u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x3afa44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3afa44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afa48: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3afa48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3afa4c: 0x0  nop
    ctx->pc = 0x3afa4cu;
    // NOP
    // 0x3afa50: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3AFA50u;
    {
        const bool branch_taken_0x3afa50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFA50u;
        // 0x3afa54: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afa50) {
            ctx->pc = 0x3AFA68u;
            goto label_3afa68;
        }
    }
    ctx->pc = 0x3AFA58u;
    // 0x3afa58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3afa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3afa5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3afa5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afa60: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x3afa60u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3afa64: 0x0  nop
    ctx->pc = 0x3afa64u;
    // NOP
label_3afa68:
    // 0x3afa68: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3afa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afa6c: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x3afa6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3afa70: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x3afa70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3afa74: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3afa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afa78: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3afa78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3afa7c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3afa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3afa80: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x3afa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afa84: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3afa84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3afa88: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3afa88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3afa8c: 0x14400093  bnez        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x3AFA8Cu;
    {
        const bool branch_taken_0x3afa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFA8Cu;
        // 0x3afa90: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afa8c) {
            ctx->pc = 0x3AFCDCu;
            goto label_3afcdc;
        }
    }
    ctx->pc = 0x3AFA94u;
    // 0x3afa94: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x3afa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3afa98: 0xc4417ff4  lwc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x3afa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afa9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3afa9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3afaa0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3afaa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3afaa4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3afaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afaa8: 0xc4427ff8  lwc1        $f2, 0x7FF8($v0)
    ctx->pc = 0x3afaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3afaac: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3afaacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3afab0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3afab0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3afab4: 0xc4437ff4  lwc1        $f3, 0x7FF4($v0)
    ctx->pc = 0x3afab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3afab8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3afab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3afabc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3afabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3afac0: 0xc4407ff8  lwc1        $f0, 0x7FF8($v0)
    ctx->pc = 0x3afac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afac4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3afac4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3afac8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3afac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3afacc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3afaccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3afad0: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x3afad0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x3afad4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3afad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3afad8: 0xe4417ff4  swc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x3afad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32756), bits); }
    // 0x3afadc: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x3AFADCu;
    {
        const bool branch_taken_0x3afadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFADCu;
        // 0x3afae0: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afadc) {
            ctx->pc = 0x3AFCD0u;
            goto label_3afcd0;
        }
    }
    ctx->pc = 0x3AFAE4u;
    // 0x3afae4: 0x0  nop
    ctx->pc = 0x3afae4u;
    // NOP
label_3afae8:
    // 0x3afae8: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x3afae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afaec: 0xc6470000  lwc1        $f7, 0x0($s2)
    ctx->pc = 0x3afaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3afaf0: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3afaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afaf4: 0xc6450004  lwc1        $f5, 0x4($s2)
    ctx->pc = 0x3afaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3afaf8: 0x46070101  sub.s       $f4, $f0, $f7
    ctx->pc = 0x3afaf8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x3afafc: 0x46050981  sub.s       $f6, $f1, $f5
    ctx->pc = 0x3afafcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x3afb00: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x3afb00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3afb04: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x3afb04u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3afb08: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x3afb08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x3afb0c: 0x46063042  mul.s       $f1, $f6, $f6
    ctx->pc = 0x3afb0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x3afb10: 0x46011240  add.s       $f9, $f2, $f1
    ctx->pc = 0x3afb10u;
    ctx->f[9] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3afb14: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x3afb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afb18: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x3afb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afb1c: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x3afb1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x3afb20: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x3afb20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x3afb24: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3afb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3afb28: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3afb28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3afb2c: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x3afb2cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3afb30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3afb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3afb34: 0xc448d580  lwc1        $f8, -0x2A80($v0)
    ctx->pc = 0x3afb34u;
    { uint32_t bits = FAST_READ32(0x61D580u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3afb38: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x3afb38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3afb3c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3afb3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3afb40: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x3afb40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x3afb44: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3afb44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3afb48: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x3afb48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3afb4c: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x3afb4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x3afb50: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3afb50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3afb54: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x3afb54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x3afb58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3afb58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3afb5c: 0x0  nop
    ctx->pc = 0x3afb5cu;
    // NOP
    // 0x3afb60: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3AFB60u;
    {
        const bool branch_taken_0x3afb60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AFB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB60u;
        // 0x3afb64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afb60) {
            ctx->pc = 0x3AFB70u;
            goto label_3afb70;
        }
    }
    ctx->pc = 0x3AFB68u;
    // 0x3afb68: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3afb68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afb6c: 0x0  nop
    ctx->pc = 0x3afb6cu;
    // NOP
label_3afb70:
    // 0x3afb70: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
    ctx->pc = 0x3AFB70u;
    {
        const bool branch_taken_0x3afb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFB70u;
        // 0x3afb74: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afb70) {
            ctx->pc = 0x3AFCF4u;
            goto label_3afcf4;
        }
    }
    ctx->pc = 0x3AFB78u;
    // 0x3afb78: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x3afb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afb7c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x3afb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afb80: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x3afb80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x3afb84: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x3afb84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x3afb88: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3afb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3afb8c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3afb8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3afb90: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x3afb90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3afb94: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x3afb94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3afb98: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3afb98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3afb9c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x3afb9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x3afba0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3afba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3afba4: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x3afba4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3afba8: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x3afba8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x3afbac: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3afbacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3afbb0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x3afbb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x3afbb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3afbb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3afbb8: 0x0  nop
    ctx->pc = 0x3afbb8u;
    // NOP
    // 0x3afbbc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3AFBBCu;
    {
        const bool branch_taken_0x3afbbc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFBBCu;
        // 0x3afbc0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afbbc) {
            ctx->pc = 0x3AFBC8u;
            goto label_3afbc8;
        }
    }
    ctx->pc = 0x3AFBC4u;
    // 0x3afbc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3afbc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3afbc8:
    // 0x3afbc8: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x3AFBC8u;
    {
        const bool branch_taken_0x3afbc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFBC8u;
        // 0x3afbcc: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afbc8) {
            ctx->pc = 0x3AFCF4u;
            goto label_3afcf4;
        }
    }
    ctx->pc = 0x3AFBD0u;
    // 0x3afbd0: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3AFBD0u;
    SET_GPR_U32(ctx, 31, 0x3AFBD8u);
    ctx->pc = 0x3AFBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFBD0u;
    // 0x3afbd4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3AFBD0u, 0x3AFBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFBD8u;
label_3afbd8:
    // 0x3afbd8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3afbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3afbdc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3afbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3afbe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3afbe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afbe4: 0xc1036e0  jal         func_40DB80
    ctx->pc = 0x3AFBE4u;
    SET_GPR_U32(ctx, 31, 0x3AFBECu);
    ctx->pc = 0x3AFBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFBE4u;
    // 0x3afbe8: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB80u, 0x3AFBE4u, 0x3AFBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFBECu;
label_3afbec:
    // 0x3afbec: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x3afbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afbf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3afbf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afbf4: 0xc463fff0  lwc1        $f3, -0x10($v1)
    ctx->pc = 0x3afbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3afbf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3afbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3afbfc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3afbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3afc00: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3afc00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3afc04: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x3afc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afc08: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3afc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3afc0c: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3afc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afc10: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x3afc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3afc14: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3afc14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3afc18: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3afc18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3afc1c: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x3afc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afc20: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3afc20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3afc24: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3afc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3afc28: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3afc28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3afc2c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3afc2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3afc30: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3afc30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3afc34: 0x46010104  c1          0x10104
    ctx->pc = 0x3afc34u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x3afc38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3afc38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afc3c: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3afc3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3afc40: 0x0  nop
    ctx->pc = 0x3afc40u;
    // NOP
    // 0x3afc44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFC44u;
    {
        const bool branch_taken_0x3afc44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AFC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC44u;
        // 0x3afc48: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afc44) {
            ctx->pc = 0x3AFC58u;
            goto label_3afc58;
        }
    }
    ctx->pc = 0x3AFC4Cu;
    // 0x3afc4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3afc4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3afc50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3afc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afc54: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x3afc54u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_3afc58:
    // 0x3afc58: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x3afc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afc5c: 0x46040082  mul.s       $f2, $f0, $f4
    ctx->pc = 0x3afc5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3afc60: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x3afc60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3afc64: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3afc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afc68: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3afc68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3afc6c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3afc6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3afc70: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x3afc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afc74: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3afc74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x3afc78: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3afc78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3afc7c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3AFC7Cu;
    {
        const bool branch_taken_0x3afc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AFC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFC7Cu;
        // 0x3afc80: 0xe4610014  swc1        $f1, 0x14($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afc7c) {
            ctx->pc = 0x3AFCDCu;
            goto label_3afcdc;
        }
    }
    ctx->pc = 0x3AFC84u;
    // 0x3afc84: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x3afc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x3afc88: 0xc4417ff4  lwc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x3afc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3afc8c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3afc8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3afc90: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3afc90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3afc94: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3afc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afc98: 0xc4427ff8  lwc1        $f2, 0x7FF8($v0)
    ctx->pc = 0x3afc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3afc9c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3afc9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3afca0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x3afca0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3afca4: 0xc4437ff4  lwc1        $f3, 0x7FF4($v0)
    ctx->pc = 0x3afca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3afca8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3afca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3afcac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3afcacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3afcb0: 0xc4407ff8  lwc1        $f0, 0x7FF8($v0)
    ctx->pc = 0x3afcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3afcb4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3afcb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x3afcb8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3afcb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3afcbc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3afcbcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3afcc0: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x3afcc0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x3afcc4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3afcc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3afcc8: 0xe4417ff4  swc1        $f1, 0x7FF4($v0)
    ctx->pc = 0x3afcc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32756), bits); }
    // 0x3afccc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3afcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3afcd0:
    // 0x3afcd0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3afcd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3afcd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3AFCD4u;
    {
        const bool branch_taken_0x3afcd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFCD4u;
        // 0x3afcd8: 0xe4407ff8  swc1        $f0, 0x7FF8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afcd4) {
            ctx->pc = 0x3AFD28u;
            goto label_3afd28;
        }
    }
    ctx->pc = 0x3AFCDCu;
label_3afcdc:
    // 0x3afcdc: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x3afcdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3afce0: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x3afce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3afce4: 0xb062fffb  sdl         $v0, -0x5($v1)
    ctx->pc = 0x3afce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3afce8: 0xb462fff4  sdr         $v0, -0xC($v1)
    ctx->pc = 0x3afce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3afcec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3AFCECu;
    {
        const bool branch_taken_0x3afcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AFCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFCECu;
        // 0x3afcf0: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afcec) {
            ctx->pc = 0x3AFD2Cu;
            goto label_3afd2c;
        }
    }
    ctx->pc = 0x3AFCF4u;
label_3afcf4:
    // 0x3afcf4: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x3afcf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3afcf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3afcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afcfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3afcfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd00: 0xc0ebe24  jal         func_3AF890
    ctx->pc = 0x3AFD00u;
    SET_GPR_U32(ctx, 31, 0x3AFD08u);
    ctx->pc = 0x3AFD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD00u;
    // 0x3afd04: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF890u, 0x3AFD00u, 0x3AFD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFD08u;
label_3afd08:
    // 0x3afd08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3afd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3afd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd10: 0xc0ebe6c  jal         func_3AF9B0
    ctx->pc = 0x3AFD10u;
    SET_GPR_U32(ctx, 31, 0x3AFD18u);
    ctx->pc = 0x3AFD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD10u;
    // 0x3afd14: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9B0u;
    goto label_3af9b0;
    ctx->pc = 0x3AFD18u;
label_3afd18:
    // 0x3afd18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3afd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3afd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3afd20: 0xc0ebe6c  jal         func_3AF9B0
    ctx->pc = 0x3AFD20u;
    SET_GPR_U32(ctx, 31, 0x3AFD28u);
    ctx->pc = 0x3AFD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AFD20u;
    // 0x3afd24: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9B0u;
    goto label_3af9b0;
    ctx->pc = 0x3AFD28u;
label_3afd28:
    // 0x3afd28: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3afd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3afd2c:
    // 0x3afd2c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3afd2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3afd30: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3afd30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3afd34: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3afd34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3afd38: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3afd38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3afd3c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3afd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3afd40: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AFD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFD40u;
        // 0x3afd44: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFD48u;
}
