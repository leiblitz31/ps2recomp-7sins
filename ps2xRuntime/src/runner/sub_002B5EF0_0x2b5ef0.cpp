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

// Function: sub_002B5EF0
// Address: 0x2b5ef0 - 0x2b60d0
void sub_002B5EF0_0x2b5ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5EF0_0x2b5ef0");
#endif

    switch (ctx->pc) {
        case 0x2b5ef0u: goto label_2b5ef0;
        case 0x2b5ef4u: goto label_2b5ef4;
        case 0x2b5ef8u: goto label_2b5ef8;
        case 0x2b5efcu: goto label_2b5efc;
        case 0x2b5f00u: goto label_2b5f00;
        case 0x2b5f04u: goto label_2b5f04;
        case 0x2b5f08u: goto label_2b5f08;
        case 0x2b5f0cu: goto label_2b5f0c;
        case 0x2b5f10u: goto label_2b5f10;
        case 0x2b5f14u: goto label_2b5f14;
        case 0x2b5f18u: goto label_2b5f18;
        case 0x2b5f1cu: goto label_2b5f1c;
        case 0x2b5f20u: goto label_2b5f20;
        case 0x2b5f24u: goto label_2b5f24;
        case 0x2b5f28u: goto label_2b5f28;
        case 0x2b5f2cu: goto label_2b5f2c;
        case 0x2b5f30u: goto label_2b5f30;
        case 0x2b5f34u: goto label_2b5f34;
        case 0x2b5f38u: goto label_2b5f38;
        case 0x2b5f3cu: goto label_2b5f3c;
        case 0x2b5f40u: goto label_2b5f40;
        case 0x2b5f44u: goto label_2b5f44;
        case 0x2b5f48u: goto label_2b5f48;
        case 0x2b5f4cu: goto label_2b5f4c;
        case 0x2b5f50u: goto label_2b5f50;
        case 0x2b5f54u: goto label_2b5f54;
        case 0x2b5f58u: goto label_2b5f58;
        case 0x2b5f5cu: goto label_2b5f5c;
        case 0x2b5f60u: goto label_2b5f60;
        case 0x2b5f64u: goto label_2b5f64;
        case 0x2b5f68u: goto label_2b5f68;
        case 0x2b5f6cu: goto label_2b5f6c;
        case 0x2b5f70u: goto label_2b5f70;
        case 0x2b5f74u: goto label_2b5f74;
        case 0x2b5f78u: goto label_2b5f78;
        case 0x2b5f7cu: goto label_2b5f7c;
        case 0x2b5f80u: goto label_2b5f80;
        case 0x2b5f84u: goto label_2b5f84;
        case 0x2b5f88u: goto label_2b5f88;
        case 0x2b5f8cu: goto label_2b5f8c;
        case 0x2b5f90u: goto label_2b5f90;
        case 0x2b5f94u: goto label_2b5f94;
        case 0x2b5f98u: goto label_2b5f98;
        case 0x2b5f9cu: goto label_2b5f9c;
        case 0x2b5fa0u: goto label_2b5fa0;
        case 0x2b5fa4u: goto label_2b5fa4;
        case 0x2b5fa8u: goto label_2b5fa8;
        case 0x2b5facu: goto label_2b5fac;
        case 0x2b5fb0u: goto label_2b5fb0;
        case 0x2b5fb4u: goto label_2b5fb4;
        case 0x2b5fb8u: goto label_2b5fb8;
        case 0x2b5fbcu: goto label_2b5fbc;
        case 0x2b5fc0u: goto label_2b5fc0;
        case 0x2b5fc4u: goto label_2b5fc4;
        case 0x2b5fc8u: goto label_2b5fc8;
        case 0x2b5fccu: goto label_2b5fcc;
        case 0x2b5fd0u: goto label_2b5fd0;
        case 0x2b5fd4u: goto label_2b5fd4;
        case 0x2b5fd8u: goto label_2b5fd8;
        case 0x2b5fdcu: goto label_2b5fdc;
        case 0x2b5fe0u: goto label_2b5fe0;
        case 0x2b5fe4u: goto label_2b5fe4;
        case 0x2b5fe8u: goto label_2b5fe8;
        case 0x2b5fecu: goto label_2b5fec;
        case 0x2b5ff0u: goto label_2b5ff0;
        case 0x2b5ff4u: goto label_2b5ff4;
        case 0x2b5ff8u: goto label_2b5ff8;
        case 0x2b5ffcu: goto label_2b5ffc;
        case 0x2b6000u: goto label_2b6000;
        case 0x2b6004u: goto label_2b6004;
        case 0x2b6008u: goto label_2b6008;
        case 0x2b600cu: goto label_2b600c;
        case 0x2b6010u: goto label_2b6010;
        case 0x2b6014u: goto label_2b6014;
        case 0x2b6018u: goto label_2b6018;
        case 0x2b601cu: goto label_2b601c;
        case 0x2b6020u: goto label_2b6020;
        case 0x2b6024u: goto label_2b6024;
        case 0x2b6028u: goto label_2b6028;
        case 0x2b602cu: goto label_2b602c;
        case 0x2b6030u: goto label_2b6030;
        case 0x2b6034u: goto label_2b6034;
        case 0x2b6038u: goto label_2b6038;
        case 0x2b603cu: goto label_2b603c;
        case 0x2b6040u: goto label_2b6040;
        case 0x2b6044u: goto label_2b6044;
        case 0x2b6048u: goto label_2b6048;
        case 0x2b604cu: goto label_2b604c;
        case 0x2b6050u: goto label_2b6050;
        case 0x2b6054u: goto label_2b6054;
        case 0x2b6058u: goto label_2b6058;
        case 0x2b605cu: goto label_2b605c;
        case 0x2b6060u: goto label_2b6060;
        case 0x2b6064u: goto label_2b6064;
        case 0x2b6068u: goto label_2b6068;
        case 0x2b606cu: goto label_2b606c;
        case 0x2b6070u: goto label_2b6070;
        case 0x2b6074u: goto label_2b6074;
        case 0x2b6078u: goto label_2b6078;
        case 0x2b607cu: goto label_2b607c;
        case 0x2b6080u: goto label_2b6080;
        case 0x2b6084u: goto label_2b6084;
        case 0x2b6088u: goto label_2b6088;
        case 0x2b608cu: goto label_2b608c;
        case 0x2b6090u: goto label_2b6090;
        case 0x2b6094u: goto label_2b6094;
        case 0x2b6098u: goto label_2b6098;
        case 0x2b609cu: goto label_2b609c;
        case 0x2b60a0u: goto label_2b60a0;
        case 0x2b60a4u: goto label_2b60a4;
        case 0x2b60a8u: goto label_2b60a8;
        case 0x2b60acu: goto label_2b60ac;
        case 0x2b60b0u: goto label_2b60b0;
        case 0x2b60b4u: goto label_2b60b4;
        case 0x2b60b8u: goto label_2b60b8;
        case 0x2b60bcu: goto label_2b60bc;
        case 0x2b60c0u: goto label_2b60c0;
        case 0x2b60c4u: goto label_2b60c4;
        case 0x2b60c8u: goto label_2b60c8;
        case 0x2b60ccu: goto label_2b60cc;
        default: break;
    }

    ctx->pc = 0x2b5ef0u;

label_2b5ef0:
    // 0x2b5ef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b5ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2b5ef4:
    // 0x2b5ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b5ef8:
    // 0x2b5ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b5efc:
    // 0x2b5efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b5f00:
    // 0x2b5f00: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2b5f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_2b5f04:
    // 0x2b5f04: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b5f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5f08:
    // 0x2b5f08: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b5f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b5f0c:
    // 0x2b5f0c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2b5f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2b5f10:
    // 0x2b5f10: 0x320f809  jalr        $t9
label_2b5f14:
    if (ctx->pc == 0x2B5F14u) {
        ctx->pc = 0x2B5F18u;
        goto label_2b5f18;
    }
    ctx->pc = 0x2B5F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B5F18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5F10u, 0x2B5F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B5F18u;
label_2b5f18:
    // 0x2b5f18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b5f18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f1c:
    // 0x2b5f1c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x2b5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_2b5f20:
    // 0x2b5f20: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2b5f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2b5f24:
    // 0x2b5f24: 0xc089a88  jal         func_226A20
label_2b5f28:
    if (ctx->pc == 0x2B5F28u) {
        ctx->pc = 0x2B5F2Cu;
        goto label_2b5f2c;
    }
    ctx->pc = 0x2B5F24u;
    SET_GPR_U32(ctx, 31, 0x2B5F2Cu);
    ctx->pc = 0x226A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A20u, 0x2B5F24u, 0x2B5F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F2Cu;
label_2b5f2c:
    // 0x2b5f2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f30:
    // 0x2b5f30: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x2b5f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2b5f34:
    // 0x2b5f34: 0x27a20038  addiu       $v0, $sp, 0x38
    ctx->pc = 0x2b5f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b5f38:
    // 0x2b5f38: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b5f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b5f3c:
    // 0x2b5f3c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b5f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b5f40:
    // 0x2b5f40: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b5f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5f44:
    // 0x2b5f44: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2b5f44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b5f48:
    // 0x2b5f48: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b5f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2b5f4c:
    // 0x2b5f4c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b5f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b5f50:
    // 0x2b5f50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b5f50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b5f54:
    // 0x2b5f54: 0x0  nop
    ctx->pc = 0x2b5f54u;
    // NOP
label_2b5f58:
    // 0x2b5f58: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b5f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2b5f5c:
    // 0x2b5f5c: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x2b5f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b5f60:
    // 0x2b5f60: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2b5f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b5f64:
    // 0x2b5f64: 0xc104cf2  jal         func_4133C8
label_2b5f68:
    if (ctx->pc == 0x2B5F68u) {
        ctx->pc = 0x2B5F6Cu;
        goto label_2b5f6c;
    }
    ctx->pc = 0x2B5F64u;
    SET_GPR_U32(ctx, 31, 0x2B5F6Cu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2B5F64u, 0x2B5F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F6Cu;
label_2b5f6c:
    // 0x2b5f6c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5f70:
    // 0x2b5f70: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x2b5f70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b5f74:
    // 0x2b5f74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b5f78:
    if (ctx->pc == 0x2B5F78u) {
        ctx->pc = 0x2B5F7Cu;
        goto label_2b5f7c;
    }
    ctx->pc = 0x2B5F74u;
    {
        const bool branch_taken_0x2b5f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f74) {
            ctx->pc = 0x2B5F94u;
            goto label_2b5f94;
        }
    }
    ctx->pc = 0x2B5F7Cu;
label_2b5f7c:
    // 0x2b5f7c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b5f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2b5f80:
    // 0x2b5f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b5f84:
    // 0x2b5f84: 0x0  nop
    ctx->pc = 0x2b5f84u;
    // NOP
label_2b5f88:
    // 0x2b5f88: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b5f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2b5f8c:
    // 0x2b5f8c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b5f90:
    if (ctx->pc == 0x2B5F90u) {
        ctx->pc = 0x2B5F94u;
        goto label_2b5f94;
    }
    ctx->pc = 0x2B5F8Cu;
    {
        const bool branch_taken_0x2b5f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f8c) {
            ctx->pc = 0x2B5FA4u;
            goto label_2b5fa4;
        }
    }
    ctx->pc = 0x2B5F94u;
label_2b5f94:
    // 0x2b5f94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b5f98:
    // 0x2b5f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b5f9c:
    // 0x2b5f9c: 0x0  nop
    ctx->pc = 0x2b5f9cu;
    // NOP
label_2b5fa0:
    // 0x2b5fa0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b5fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2b5fa4:
    // 0x2b5fa4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5fa8:
    // 0x2b5fa8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2b5fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5fac:
    // 0x2b5fac: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2b5facu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2b5fb0:
    // 0x2b5fb0: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2b5fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5fb4:
    // 0x2b5fb4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b5fb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b5fb8:
    // 0x2b5fb8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2b5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b5fbc:
    // 0x2b5fbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b5fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5fc0:
    // 0x2b5fc0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b5fc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b5fc4:
    // 0x2b5fc4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2b5fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5fc8:
    // 0x2b5fc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b5fc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b5fcc:
    // 0x2b5fcc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2b5fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2b5fd0:
    // 0x2b5fd0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b5fd4:
    // 0x2b5fd4: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x2b5fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b5fd8:
    // 0x2b5fd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b5fdc:
    if (ctx->pc == 0x2B5FDCu) {
        ctx->pc = 0x2B5FE0u;
        goto label_2b5fe0;
    }
    ctx->pc = 0x2B5FD8u;
    {
        const bool branch_taken_0x2b5fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5fd8) {
            ctx->pc = 0x2B5FF8u;
            goto label_2b5ff8;
        }
    }
    ctx->pc = 0x2B5FE0u;
label_2b5fe0:
    // 0x2b5fe0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b5fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2b5fe4:
    // 0x2b5fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b5fe8:
    // 0x2b5fe8: 0x0  nop
    ctx->pc = 0x2b5fe8u;
    // NOP
label_2b5fec:
    // 0x2b5fec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b5fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2b5ff0:
    // 0x2b5ff0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b5ff4:
    if (ctx->pc == 0x2B5FF4u) {
        ctx->pc = 0x2B5FF8u;
        goto label_2b5ff8;
    }
    ctx->pc = 0x2B5FF0u;
    {
        const bool branch_taken_0x2b5ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ff0) {
            ctx->pc = 0x2B6008u;
            goto label_2b6008;
        }
    }
    ctx->pc = 0x2B5FF8u;
label_2b5ff8:
    // 0x2b5ff8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b5ffc:
    // 0x2b5ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b5ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b6000:
    // 0x2b6000: 0x0  nop
    ctx->pc = 0x2b6000u;
    // NOP
label_2b6004:
    // 0x2b6004: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2b6004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2b6008:
    // 0x2b6008: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b6008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b600c:
    // 0x2b600c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2b600cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6010:
    // 0x2b6010: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2b6010u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2b6014:
    // 0x2b6014: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2b6014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6018:
    // 0x2b6018: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b6018u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b601c:
    // 0x2b601c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2b601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b6020:
    // 0x2b6020: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b6020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6024:
    // 0x2b6024: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b6024u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b6028:
    // 0x2b6028: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b6028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b602c:
    // 0x2b602c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b602cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b6030:
    // 0x2b6030: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2b6030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_2b6034:
    // 0x2b6034: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b6034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6038:
    // 0x2b6038: 0x9042002e  lbu         $v0, 0x2E($v0)
    ctx->pc = 0x2b6038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2b603c:
    // 0x2b603c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b6040:
    if (ctx->pc == 0x2B6040u) {
        ctx->pc = 0x2B6044u;
        goto label_2b6044;
    }
    ctx->pc = 0x2B603Cu;
    {
        const bool branch_taken_0x2b603c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b603c) {
            ctx->pc = 0x2B605Cu;
            goto label_2b605c;
        }
    }
    ctx->pc = 0x2B6044u;
label_2b6044:
    // 0x2b6044: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b6044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2b6048:
    // 0x2b6048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b604c:
    // 0x2b604c: 0x0  nop
    ctx->pc = 0x2b604cu;
    // NOP
label_2b6050:
    // 0x2b6050: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2b6050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2b6054:
    // 0x2b6054: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b6058:
    if (ctx->pc == 0x2B6058u) {
        ctx->pc = 0x2B605Cu;
        goto label_2b605c;
    }
    ctx->pc = 0x2B6054u;
    {
        const bool branch_taken_0x2b6054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6054) {
            ctx->pc = 0x2B606Cu;
            goto label_2b606c;
        }
    }
    ctx->pc = 0x2B605Cu;
label_2b605c:
    // 0x2b605c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b605cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b6060:
    // 0x2b6060: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b6064:
    // 0x2b6064: 0x0  nop
    ctx->pc = 0x2b6064u;
    // NOP
label_2b6068:
    // 0x2b6068: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2b6068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2b606c:
    // 0x2b606c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6070:
    // 0x2b6070: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2b6070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6074:
    // 0x2b6074: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2b6074u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_2b6078:
    // 0x2b6078: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x2b6078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b607c:
    // 0x2b607c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b607cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b6080:
    // 0x2b6080: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2b6080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b6084:
    // 0x2b6084: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b6084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6088:
    // 0x2b6088: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2b6088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b608c:
    // 0x2b608c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2b608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b6090:
    // 0x2b6090: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b6090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b6094:
    // 0x2b6094: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2b6094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2b6098:
    // 0x2b6098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b609c:
    // 0x2b609c: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2b609cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_2b60a0:
    // 0x2b60a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2b60a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b60a4:
    // 0x2b60a4: 0xc106598  jal         func_419660
label_2b60a8:
    if (ctx->pc == 0x2B60A8u) {
        ctx->pc = 0x2B60ACu;
        goto label_2b60ac;
    }
    ctx->pc = 0x2B60A4u;
    SET_GPR_U32(ctx, 31, 0x2B60ACu);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x2B60A4u, 0x2B60ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B60ACu;
label_2b60ac:
    // 0x2b60ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b60acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b60b0:
    // 0x2b60b0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2b60b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b60b4:
    // 0x2b60b4: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2b60b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
label_2b60b8:
    // 0x2b60b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b60b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b60bc:
    // 0x2b60bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b60bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b60c0:
    // 0x2b60c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b60c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b60c4:
    // 0x2b60c4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b60c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b60c8:
    // 0x2b60c8: 0x3e00008  jr          $ra
label_2b60cc:
    if (ctx->pc == 0x2B60CCu) {
        ctx->pc = 0x2B60D0u;
        goto label_fallthrough_0x2b60c8;
    }
    ctx->pc = 0x2B60C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B60C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b60c8:
    ctx->pc = 0x2B60D0u;
}
