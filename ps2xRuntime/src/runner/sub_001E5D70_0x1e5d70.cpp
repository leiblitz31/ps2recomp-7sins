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

// Function: sub_001E5D70
// Address: 0x1e5d70 - 0x1e62b0
void sub_001E5D70_0x1e5d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5D70_0x1e5d70");
#endif

    switch (ctx->pc) {
        case 0x1e5da0u: goto label_1e5da0;
        case 0x1e5db8u: goto label_1e5db8;
        case 0x1e5dc8u: goto label_1e5dc8;
        case 0x1e5de0u: goto label_1e5de0;
        case 0x1e5e10u: goto label_1e5e10;
        case 0x1e5eccu: goto label_1e5ecc;
        case 0x1e5ee8u: goto label_1e5ee8;
        case 0x1e5ef8u: goto label_1e5ef8;
        case 0x1e5f08u: goto label_1e5f08;
        case 0x1e5f20u: goto label_1e5f20;
        case 0x1e5f34u: goto label_1e5f34;
        case 0x1e5f44u: goto label_1e5f44;
        case 0x1e5f5cu: goto label_1e5f5c;
        case 0x1e5f80u: goto label_1e5f80;
        case 0x1e5f90u: goto label_1e5f90;
        case 0x1e5fa8u: goto label_1e5fa8;
        case 0x1e5fc4u: goto label_1e5fc4;
        case 0x1e5fd4u: goto label_1e5fd4;
        case 0x1e5fecu: goto label_1e5fec;
        case 0x1e6014u: goto label_1e6014;
        case 0x1e6024u: goto label_1e6024;
        case 0x1e603cu: goto label_1e603c;
        case 0x1e6050u: goto label_1e6050;
        case 0x1e6060u: goto label_1e6060;
        case 0x1e6078u: goto label_1e6078;
        case 0x1e6084u: goto label_1e6084;
        case 0x1e60f8u: goto label_1e60f8;
        case 0x1e6100u: goto label_1e6100;
        case 0x1e6158u: goto label_1e6158;
        case 0x1e61bcu: goto label_1e61bc;
        case 0x1e61d8u: goto label_1e61d8;
        case 0x1e61e8u: goto label_1e61e8;
        case 0x1e6204u: goto label_1e6204;
        case 0x1e6218u: goto label_1e6218;
        case 0x1e6230u: goto label_1e6230;
        case 0x1e6240u: goto label_1e6240;
        case 0x1e6254u: goto label_1e6254;
        case 0x1e6274u: goto label_1e6274;
        default: break;
    }

    ctx->pc = 0x1e5d70u;

    // 0x1e5d70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e5d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e5d74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e5d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1e5d78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e5d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e5d7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e5d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e5d80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e5d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e5d84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e5d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e5d88: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e5d88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e5d8c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1e5d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1e5d90: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5d94: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e5d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5d98: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5D98u;
    SET_GPR_U32(ctx, 31, 0x1E5DA0u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5D98u, 0x1E5DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DA0u;
label_1e5da0:
    // 0x1e5da0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1e5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5da4: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1e5da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e5da8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5dac: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e5dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e5db0: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1E5DB0u;
    SET_GPR_U32(ctx, 31, 0x1E5DB8u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1E5DB0u, 0x1E5DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DB8u;
label_1e5db8:
    // 0x1e5db8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5dbc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e5dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5dc0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5DC0u;
    SET_GPR_U32(ctx, 31, 0x1E5DC8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5DC0u, 0x1E5DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DC8u;
label_1e5dc8:
    // 0x1e5dc8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1e5dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5dcc: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1e5dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e5dd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5dd4: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x1e5dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e5dd8: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1E5DD8u;
    SET_GPR_U32(ctx, 31, 0x1E5DE0u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1E5DD8u, 0x1E5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5DE0u;
label_1e5de0:
    // 0x1e5de0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1e5de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5de4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1e5de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5de8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e5de8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e5dec: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1e5decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1e5df0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1e5df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5df4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1e5df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5df8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e5df8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e5dfc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1e5dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1e5e00: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5e04: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e5e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e5e08: 0xc05611c  jal         func_158470
    ctx->pc = 0x1E5E08u;
    SET_GPR_U32(ctx, 31, 0x1E5E10u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1E5E08u, 0x1E5E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5E10u;
label_1e5e10:
    // 0x1e5e10: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5E10u;
    {
        const bool branch_taken_0x1e5e10 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e5e10) {
            ctx->pc = 0x1E5E2Cu;
            goto label_1e5e2c;
        }
    }
    ctx->pc = 0x1E5E18u;
    // 0x1e5e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5e1c: 0x0  nop
    ctx->pc = 0x1e5e1cu;
    // NOP
    // 0x1e5e20: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1e5e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1e5e24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5E24u;
    {
        const bool branch_taken_0x1e5e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5e24) {
            ctx->pc = 0x1E5E48u;
            goto label_1e5e48;
        }
    }
    ctx->pc = 0x1E5E2Cu;
label_1e5e2c:
    // 0x1e5e2c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e5e30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e5e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5e34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e5e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e5e38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e5e38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5e3c: 0x0  nop
    ctx->pc = 0x1e5e3cu;
    // NOP
    // 0x1e5e40: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x1e5e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1e5e44: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x1e5e44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_1e5e48:
    // 0x1e5e48: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1e5e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5e4c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5e50: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1e5e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5e54: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e5e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5e58: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x1e5e58u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e5e5c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5e60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e5e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e5e64: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5e68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5e70: 0x0  nop
    ctx->pc = 0x1e5e70u;
    // NOP
    // 0x1e5e74: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e5e74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e5e78: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1e5e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e5e7c: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x1e5e7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1e5e80: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1e5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1e5e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5e88: 0x0  nop
    ctx->pc = 0x1e5e88u;
    // NOP
    // 0x1e5e8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e5e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5e90: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5E90u;
    {
        const bool branch_taken_0x1e5e90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5e90) {
            ctx->pc = 0x1E5EA8u;
            goto label_1e5ea8;
        }
    }
    ctx->pc = 0x1E5E98u;
    // 0x1e5e98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e5e98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e5e9c: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1e5e9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1e5ea0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5EA0u;
    {
        const bool branch_taken_0x1e5ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5ea0) {
            ctx->pc = 0x1E5EBCu;
            goto label_1e5ebc;
        }
    }
    ctx->pc = 0x1E5EA8u;
label_1e5ea8:
    // 0x1e5ea8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e5ea8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e5eac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e5eacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e5eb0: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x1e5eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x1e5eb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e5eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1e5eb8: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1e5eb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_1e5ebc:
    // 0x1e5ebc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5ec0: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e5ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e5ec4: 0xc05611c  jal         func_158470
    ctx->pc = 0x1E5EC4u;
    SET_GPR_U32(ctx, 31, 0x1E5ECCu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1E5EC4u, 0x1E5ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5ECCu;
label_1e5ecc:
    // 0x1e5ecc: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x1e5eccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5ed0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5ED0u;
    {
        const bool branch_taken_0x1e5ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5ed0) {
            ctx->pc = 0x1E5EECu;
            goto label_1e5eec;
        }
    }
    ctx->pc = 0x1E5ED8u;
    // 0x1e5ed8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5edc: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e5edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e5ee0: 0xc05611c  jal         func_158470
    ctx->pc = 0x1E5EE0u;
    SET_GPR_U32(ctx, 31, 0x1E5EE8u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1E5EE0u, 0x1E5EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5EE8u;
label_1e5ee8:
    // 0x1e5ee8: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x1e5ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e5eec:
    // 0x1e5eec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5ef0: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1E5EF0u;
    {
        const bool branch_taken_0x1e5ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5ef0) {
            ctx->pc = 0x1E6278u;
            goto label_1e6278;
        }
    }
    ctx->pc = 0x1E5EF8u;
label_1e5ef8:
    // 0x1e5ef8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5efc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5f00: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5F00u;
    SET_GPR_U32(ctx, 31, 0x1E5F08u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5F00u, 0x1E5F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F08u;
label_1e5f08:
    // 0x1e5f08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e5f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f0c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5f10: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e5f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e5f14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f18: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E5F18u;
    SET_GPR_U32(ctx, 31, 0x1E5F20u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E5F18u, 0x1E5F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F20u;
label_1e5f20:
    // 0x1e5f20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e5f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f28: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e5f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e5f2c: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1E5F2Cu;
    SET_GPR_U32(ctx, 31, 0x1E5F34u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1E5F2Cu, 0x1E5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F34u;
label_1e5f34:
    // 0x1e5f34: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5f38: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e5f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5f3c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5F3Cu;
    SET_GPR_U32(ctx, 31, 0x1E5F44u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5F3Cu, 0x1E5F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F44u;
label_1e5f44:
    // 0x1e5f44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e5f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f48: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5f4c: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e5f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e5f50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f54: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E5F54u;
    SET_GPR_U32(ctx, 31, 0x1E5F5Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E5F54u, 0x1E5F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F5Cu;
label_1e5f5c:
    // 0x1e5f5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e5f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5f60: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1e5f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5f64: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x1e5f64u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x1e5f68: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x1e5f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5f6c: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x1e5f6cu;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x1e5f70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5f78: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E5F78u;
    SET_GPR_U32(ctx, 31, 0x1E5F80u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E5F78u, 0x1E5F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F80u;
label_1e5f80:
    // 0x1e5f80: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5f84: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e5f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5f88: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5F88u;
    SET_GPR_U32(ctx, 31, 0x1E5F90u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5F88u, 0x1E5F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F90u;
label_1e5f90:
    // 0x1e5f90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e5f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f94: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5f98: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e5f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e5f9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fa0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E5FA0u;
    SET_GPR_U32(ctx, 31, 0x1E5FA8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E5FA0u, 0x1E5FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FA8u;
label_1e5fa8:
    // 0x1e5fa8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e5fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5fac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fb0: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1e5fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e5fb4: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x1e5fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e5fb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5fbc: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E5FBCu;
    SET_GPR_U32(ctx, 31, 0x1E5FC4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E5FBCu, 0x1E5FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FC4u;
label_1e5fc4:
    // 0x1e5fc4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5fc8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5fcc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5FCCu;
    SET_GPR_U32(ctx, 31, 0x1E5FD4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5FCCu, 0x1E5FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FD4u;
label_1e5fd4:
    // 0x1e5fd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e5fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fd8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e5fdc: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e5fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e5fe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fe4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E5FE4u;
    SET_GPR_U32(ctx, 31, 0x1E5FECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E5FE4u, 0x1E5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5FECu;
label_1e5fec:
    // 0x1e5fec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e5fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5ff0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5ff4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5ff8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5ffc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e5ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e6000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e6000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6004: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e6004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6008: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e6008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e600c: 0xc08c544  jal         func_231510
    ctx->pc = 0x1E600Cu;
    SET_GPR_U32(ctx, 31, 0x1E6014u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1E600Cu, 0x1E6014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6014u;
label_1e6014:
    // 0x1e6014: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e6014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e6018: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e6018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e601c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E601Cu;
    SET_GPR_U32(ctx, 31, 0x1E6024u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E601Cu, 0x1E6024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6024u;
label_1e6024:
    // 0x1e6024: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e6024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6028: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e6028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e602c: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e602cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e6030: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e6030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6034: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E6034u;
    SET_GPR_U32(ctx, 31, 0x1E603Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E6034u, 0x1E603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E603Cu;
label_1e603c:
    // 0x1e603c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e603cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6040: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e6040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6044: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e6044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6048: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1E6048u;
    SET_GPR_U32(ctx, 31, 0x1E6050u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1E6048u, 0x1E6050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6050u;
label_1e6050:
    // 0x1e6050: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e6050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e6054: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e6054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e6058: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E6058u;
    SET_GPR_U32(ctx, 31, 0x1E6060u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E6058u, 0x1E6060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6060u;
label_1e6060:
    // 0x1e6060: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e6060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6064: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e6064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e6068: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e6068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e606c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e606cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6070: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E6070u;
    SET_GPR_U32(ctx, 31, 0x1E6078u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E6070u, 0x1E6078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6078u;
label_1e6078:
    // 0x1e6078: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1e6078u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e607c: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1E607Cu;
    SET_GPR_U32(ctx, 31, 0x1E6084u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1E607Cu, 0x1E6084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6084u;
label_1e6084:
    // 0x1e6084: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1e6084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1e6088: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e6088u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e608c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e608cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e6090: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6090u;
    {
        const bool branch_taken_0x1e6090 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e6090) {
            ctx->pc = 0x1E60ACu;
            goto label_1e60ac;
        }
    }
    ctx->pc = 0x1E6098u;
    // 0x1e6098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e609c: 0x0  nop
    ctx->pc = 0x1e609cu;
    // NOP
    // 0x1e60a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e60a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e60a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E60A4u;
    {
        const bool branch_taken_0x1e60a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e60a4) {
            ctx->pc = 0x1E60C8u;
            goto label_1e60c8;
        }
    }
    ctx->pc = 0x1E60ACu;
label_1e60ac:
    // 0x1e60ac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e60acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e60b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e60b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e60b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e60b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e60b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e60b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e60bc: 0x0  nop
    ctx->pc = 0x1e60bcu;
    // NOP
    // 0x1e60c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e60c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e60c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e60c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e60c8:
    // 0x1e60c8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1e60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1e60cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e60ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e60d0: 0x0  nop
    ctx->pc = 0x1e60d0u;
    // NOP
    // 0x1e60d4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1e60d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e60d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e60dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e60dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e60e0: 0x0  nop
    ctx->pc = 0x1e60e0u;
    // NOP
    // 0x1e60e4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1e60e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e60e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e60e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e60ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e60ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e60f0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1E60F0u;
    SET_GPR_U32(ctx, 31, 0x1E60F8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1E60F0u, 0x1E60F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60F8u;
label_1e60f8:
    // 0x1e60f8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1E60F8u;
    SET_GPR_U32(ctx, 31, 0x1E6100u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1E60F8u, 0x1E6100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6100u;
label_1e6100:
    // 0x1e6100: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x1e6100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1e6104: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e6104u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e6108: 0x1010  mfhi        $v0
    ctx->pc = 0x1e6108u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e610c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E610Cu;
    {
        const bool branch_taken_0x1e610c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e610c) {
            ctx->pc = 0x1E6128u;
            goto label_1e6128;
        }
    }
    ctx->pc = 0x1E6114u;
    // 0x1e6114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6118: 0x0  nop
    ctx->pc = 0x1e6118u;
    // NOP
    // 0x1e611c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e611cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e6120: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6120u;
    {
        const bool branch_taken_0x1e6120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6120) {
            ctx->pc = 0x1E6144u;
            goto label_1e6144;
        }
    }
    ctx->pc = 0x1E6128u;
label_1e6128:
    // 0x1e6128: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e6128u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e612c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e612cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e6130: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e6130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e6134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e6134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6138: 0x0  nop
    ctx->pc = 0x1e6138u;
    // NOP
    // 0x1e613c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e613cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e6140: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e6140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e6144:
    // 0x1e6144: 0xc780825c  lwc1        $f0, -0x7DA4($gp)
    ctx->pc = 0x1e6144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e6148: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e6148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e614c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1e614cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1e6150: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1E6150u;
    SET_GPR_U32(ctx, 31, 0x1E6158u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1E6150u, 0x1E6158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6158u;
label_1e6158:
    // 0x1e6158: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1e6158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e615c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e615cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e6160: 0x1010  mfhi        $v0
    ctx->pc = 0x1e6160u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e6164: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E6164u;
    {
        const bool branch_taken_0x1e6164 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e6164) {
            ctx->pc = 0x1E6180u;
            goto label_1e6180;
        }
    }
    ctx->pc = 0x1E616Cu;
    // 0x1e616c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6170: 0x0  nop
    ctx->pc = 0x1e6170u;
    // NOP
    // 0x1e6174: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e6174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e6178: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6178u;
    {
        const bool branch_taken_0x1e6178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6178) {
            ctx->pc = 0x1E619Cu;
            goto label_1e619c;
        }
    }
    ctx->pc = 0x1E6180u;
label_1e6180:
    // 0x1e6180: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1e6180u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1e6184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e6184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e6188: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e6188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e618c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e618cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e6190: 0x0  nop
    ctx->pc = 0x1e6190u;
    // NOP
    // 0x1e6194: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1e6194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e6198: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e6198u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e619c:
    // 0x1e619c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1e619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1e61a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e61a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e61a4: 0x0  nop
    ctx->pc = 0x1e61a4u;
    // NOP
    // 0x1e61a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e61a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e61ac: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1e61acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1e61b0: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1e61b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e61b4: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1E61B4u;
    SET_GPR_U32(ctx, 31, 0x1E61BCu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1E61B4u, 0x1E61BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E61BCu;
label_1e61bc:
    // 0x1e61bc: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1e61bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e61c0: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1e61c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e61c4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e61c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e61c8: 0x244400d4  addiu       $a0, $v0, 0xD4
    ctx->pc = 0x1e61c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
    // 0x1e61cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e61ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e61d0: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1E61D0u;
    SET_GPR_U32(ctx, 31, 0x1E61D8u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1E61D0u, 0x1E61D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E61D8u;
label_1e61d8:
    // 0x1e61d8: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1e61d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e61dc: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1e61dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e61e0: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1E61E0u;
    SET_GPR_U32(ctx, 31, 0x1E61E8u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1E61E0u, 0x1E61E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E61E8u;
label_1e61e8:
    // 0x1e61e8: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1e61e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e61ec: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1e61ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e61f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e61f4: 0x244400d4  addiu       $a0, $v0, 0xD4
    ctx->pc = 0x1e61f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
    // 0x1e61f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e61f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e61fc: 0xc069d88  jal         func_1A7620
    ctx->pc = 0x1E61FCu;
    SET_GPR_U32(ctx, 31, 0x1E6204u);
    ctx->pc = 0x1A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7620u, 0x1E61FCu, 0x1E6204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6204u;
label_1e6204:
    // 0x1e6204: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x1e6204u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e6208: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e6208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e620c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e6210: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E6210u;
    SET_GPR_U32(ctx, 31, 0x1E6218u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E6210u, 0x1E6218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6218u;
label_1e6218:
    // 0x1e6218: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e6218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e621c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1e621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e6220: 0x244400c8  addiu       $a0, $v0, 0xC8
    ctx->pc = 0x1e6220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x1e6224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e6224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6228: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E6228u;
    SET_GPR_U32(ctx, 31, 0x1E6230u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E6228u, 0x1E6230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6230u;
label_1e6230:
    // 0x1e6230: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1e6230u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6234: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1e6234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e6238: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1E6238u;
    SET_GPR_U32(ctx, 31, 0x1E6240u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1E6238u, 0x1E6240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6240u;
label_1e6240:
    // 0x1e6240: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1e6240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6244: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1e6244u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e6248: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x1e6248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e624c: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1E624Cu;
    SET_GPR_U32(ctx, 31, 0x1E6254u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1E624Cu, 0x1E6254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6254u;
label_1e6254:
    // 0x1e6254: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1e6254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e6258: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1e6258u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e625c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e625cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6260: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e6260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6264: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1e6264u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1e6268: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e6268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e626c: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E626Cu;
    SET_GPR_U32(ctx, 31, 0x1E6274u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E626Cu, 0x1E6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6274u;
label_1e6274:
    // 0x1e6274: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e6274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e6278:
    // 0x1e6278: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x1e6278u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1e627c: 0x1460ff1e  bnez        $v1, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x1E627Cu;
    {
        const bool branch_taken_0x1e627c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e627c) {
            ctx->pc = 0x1E5EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5ef8;
        }
    }
    ctx->pc = 0x1E6284u;
    // 0x1e6284: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e6284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e6288: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e6288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e628c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e628cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e6290: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e6290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e6294: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e6294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e6298: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e6298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e629c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1e629cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e62a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E62A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E62A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E62A8u;
    // 0x1e62a8: 0x0  nop
    ctx->pc = 0x1e62a8u;
    // NOP
    // 0x1e62ac: 0x0  nop
    ctx->pc = 0x1e62acu;
    // NOP
    ctx->pc = 0x1e62b0u;
}
