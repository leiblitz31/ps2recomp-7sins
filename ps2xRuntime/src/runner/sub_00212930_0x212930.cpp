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

// Function: sub_00212930
// Address: 0x212930 - 0x212af0
void sub_00212930_0x212930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212930_0x212930");
#endif

    switch (ctx->pc) {
        case 0x212960u: goto label_212960;
        case 0x2129d8u: goto label_2129d8;
        case 0x2129f8u: goto label_2129f8;
        case 0x212a18u: goto label_212a18;
        case 0x212a2cu: goto label_212a2c;
        case 0x212a84u: goto label_212a84;
        case 0x212aa8u: goto label_212aa8;
        case 0x212accu: goto label_212acc;
        case 0x212ad8u: goto label_212ad8;
        default: break;
    }

    ctx->pc = 0x212930u;

    // 0x212930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x212930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x212934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x212938: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x212938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x21293c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x21293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x212940: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x212940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212944: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x212944u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x212948: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x212948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x21294c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21294cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212950: 0x0  nop
    ctx->pc = 0x212950u;
    // NOP
    // 0x212954: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x212954u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x212958: 0xc0c39dc  jal         func_30E770
    ctx->pc = 0x212958u;
    SET_GPR_U32(ctx, 31, 0x212960u);
    ctx->pc = 0x30E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E770u, 0x212958u, 0x212960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212960u;
label_212960:
    // 0x212960: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x212960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x212964: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x212964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x212968: 0x0  nop
    ctx->pc = 0x212968u;
    // NOP
    // 0x21296c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x21296cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x212970: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x212970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x212974: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x212974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212978: 0x90420048  lbu         $v0, 0x48($v0)
    ctx->pc = 0x212978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x21297c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x21297Cu;
    {
        const bool branch_taken_0x21297c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21297c) {
            ctx->pc = 0x212A20u;
            goto label_212a20;
        }
    }
    ctx->pc = 0x212984u;
    // 0x212984: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x212984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212988: 0xc44100ac  lwc1        $f1, 0xAC($v0)
    ctx->pc = 0x212988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21298c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x21298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212990: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x212990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212994: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x212994u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x212998: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x212998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21299c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x21299cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2129a0: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x2129a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2129a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2129a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2129a8: 0x0  nop
    ctx->pc = 0x2129a8u;
    // NOP
    // 0x2129ac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2129acu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2129b0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2129b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2129b4: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2129b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2129b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2129b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2129bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2129bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2129c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2129c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2129c4: 0x24650038  addiu       $a1, $v1, 0x38
    ctx->pc = 0x2129c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x2129c8: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x2129c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2129cc: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x2129ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2129d0: 0xc084dfc  jal         func_2137F0
    ctx->pc = 0x2129D0u;
    SET_GPR_U32(ctx, 31, 0x2129D8u);
    ctx->pc = 0x2137F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2137F0u, 0x2129D0u, 0x2129D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2129D8u;
label_2129d8:
    // 0x2129d8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2129d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2129dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2129dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2129e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2129e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2129e4: 0x2465002c  addiu       $a1, $v1, 0x2C
    ctx->pc = 0x2129e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x2129e8: 0x24460094  addiu       $a2, $v0, 0x94
    ctx->pc = 0x2129e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x2129ec: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x2129ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2129f0: 0xc084dfc  jal         func_2137F0
    ctx->pc = 0x2129F0u;
    SET_GPR_U32(ctx, 31, 0x2129F8u);
    ctx->pc = 0x2137F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2137F0u, 0x2129F0u, 0x2129F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2129F8u;
label_2129f8:
    // 0x2129f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2129f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2129fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2129fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a00: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x212a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a04: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x212a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x212a08: 0x24460088  addiu       $a2, $v0, 0x88
    ctx->pc = 0x212a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
    // 0x212a0c: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x212a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x212a10: 0xc084dfc  jal         func_2137F0
    ctx->pc = 0x212A10u;
    SET_GPR_U32(ctx, 31, 0x212A18u);
    ctx->pc = 0x2137F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2137F0u, 0x212A10u, 0x212A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A18u;
label_212a18:
    // 0x212a18: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x212A18u;
    {
        const bool branch_taken_0x212a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212a18) {
            ctx->pc = 0x212ACCu;
            goto label_212acc;
        }
    }
    ctx->pc = 0x212A20u;
label_212a20:
    // 0x212a20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x212a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a24: 0xc084bd8  jal         func_212F60
    ctx->pc = 0x212A24u;
    SET_GPR_U32(ctx, 31, 0x212A2Cu);
    ctx->pc = 0x212F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212F60u, 0x212A24u, 0x212A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A2Cu;
label_212a2c:
    // 0x212a2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x212a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a30: 0xc441007c  lwc1        $f1, 0x7C($v0)
    ctx->pc = 0x212a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212a34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x212a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a38: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x212a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212a3c: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x212a3cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x212a40: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x212a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x212a44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x212a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a48: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x212a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x212a4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x212a4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x212a50: 0x0  nop
    ctx->pc = 0x212a50u;
    // NOP
    // 0x212a54: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x212a54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x212a58: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x212a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x212a5c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x212a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x212a60: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x212a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x212a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a68: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x212a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x212a6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x212a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a70: 0x24650038  addiu       $a1, $v1, 0x38
    ctx->pc = 0x212a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x212a74: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x212a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x212a78: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x212a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x212a7c: 0xc084dfc  jal         func_2137F0
    ctx->pc = 0x212A7Cu;
    SET_GPR_U32(ctx, 31, 0x212A84u);
    ctx->pc = 0x2137F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2137F0u, 0x212A7Cu, 0x212A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212A84u;
label_212a84:
    // 0x212a84: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x212a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x212a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a8c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x212a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x212a90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x212a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212a94: 0x2465002c  addiu       $a1, $v1, 0x2C
    ctx->pc = 0x212a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x212a98: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x212a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x212a9c: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x212a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x212aa0: 0xc084dfc  jal         func_2137F0
    ctx->pc = 0x212AA0u;
    SET_GPR_U32(ctx, 31, 0x212AA8u);
    ctx->pc = 0x2137F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2137F0u, 0x212AA0u, 0x212AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212AA8u;
label_212aa8:
    // 0x212aa8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x212aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212aac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x212aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212ab0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x212ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x212ab4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x212ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212ab8: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x212ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x212abc: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x212abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x212ac0: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x212ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x212ac4: 0xc084dfc  jal         func_2137F0
    ctx->pc = 0x212AC4u;
    SET_GPR_U32(ctx, 31, 0x212ACCu);
    ctx->pc = 0x2137F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2137F0u, 0x212AC4u, 0x212ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212ACCu;
label_212acc:
    // 0x212acc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x212accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212ad0: 0xc084d64  jal         func_213590
    ctx->pc = 0x212AD0u;
    SET_GPR_U32(ctx, 31, 0x212AD8u);
    ctx->pc = 0x213590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213590u, 0x212AD0u, 0x212AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x212AD8u;
label_212ad8:
    // 0x212ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212adc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x212adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x212ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x212AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212AE8u;
    // 0x212ae8: 0x0  nop
    ctx->pc = 0x212ae8u;
    // NOP
    // 0x212aec: 0x0  nop
    ctx->pc = 0x212aecu;
    // NOP
    ctx->pc = 0x212af0u;
}
