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

// Function: sub_00192BB0
// Address: 0x192bb0 - 0x1932c0
void sub_00192BB0_0x192bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192BB0_0x192bb0");
#endif

    switch (ctx->pc) {
        case 0x192be8u: goto label_192be8;
        case 0x192bfcu: goto label_192bfc;
        case 0x192c08u: goto label_192c08;
        case 0x192c20u: goto label_192c20;
        case 0x192c38u: goto label_192c38;
        case 0x192c7cu: goto label_192c7c;
        case 0x192c8cu: goto label_192c8c;
        case 0x192ca4u: goto label_192ca4;
        case 0x192cd8u: goto label_192cd8;
        case 0x192d04u: goto label_192d04;
        case 0x192d28u: goto label_192d28;
        case 0x192d34u: goto label_192d34;
        case 0x192d4cu: goto label_192d4c;
        case 0x192d64u: goto label_192d64;
        case 0x192d70u: goto label_192d70;
        case 0x192d88u: goto label_192d88;
        case 0x192dacu: goto label_192dac;
        case 0x192db8u: goto label_192db8;
        case 0x192dd0u: goto label_192dd0;
        case 0x192de0u: goto label_192de0;
        case 0x192e08u: goto label_192e08;
        case 0x192e20u: goto label_192e20;
        case 0x192e3cu: goto label_192e3c;
        case 0x192fccu: goto label_192fcc;
        case 0x192fe4u: goto label_192fe4;
        case 0x192ff8u: goto label_192ff8;
        case 0x19317cu: goto label_19317c;
        case 0x193194u: goto label_193194;
        case 0x1931b0u: goto label_1931b0;
        case 0x1931bcu: goto label_1931bc;
        case 0x1931d4u: goto label_1931d4;
        case 0x1931f4u: goto label_1931f4;
        case 0x193200u: goto label_193200;
        case 0x193218u: goto label_193218;
        case 0x19322cu: goto label_19322c;
        case 0x193240u: goto label_193240;
        case 0x193258u: goto label_193258;
        case 0x19326cu: goto label_19326c;
        case 0x193278u: goto label_193278;
        case 0x193290u: goto label_193290;
        case 0x1932a0u: goto label_1932a0;
        default: break;
    }

    ctx->pc = 0x192bb0u;

    // 0x192bb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x192bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x192bb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x192bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x192bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192bc0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x192bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x192bc4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192bc8: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x192bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192bcc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192bd0: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x192bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192bd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x192bd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x192bd8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x192bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x192bdc: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x192bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x192be0: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x192BE0u;
    SET_GPR_U32(ctx, 31, 0x192BE8u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x192BE0u, 0x192BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192BE8u;
label_192be8:
    // 0x192be8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x192be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192bec: 0x27859228  addiu       $a1, $gp, -0x6DD8
    ctx->pc = 0x192becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939176));
    // 0x192bf0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x192bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bf4: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x192BF4u;
    SET_GPR_U32(ctx, 31, 0x192BFCu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x192BF4u, 0x192BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192BFCu;
label_192bfc:
    // 0x192bfc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x192bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192c00: 0xc06479c  jal         func_191E70
    ctx->pc = 0x192C00u;
    SET_GPR_U32(ctx, 31, 0x192C08u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x192C00u, 0x192C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C08u;
label_192c08:
    // 0x192c08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x192c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c0c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192c10: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192c14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192c18: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192C18u;
    SET_GPR_U32(ctx, 31, 0x192C20u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192C18u, 0x192C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C20u;
label_192c20:
    // 0x192c20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c28: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x192c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192c2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x192c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192c30: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x192C30u;
    SET_GPR_U32(ctx, 31, 0x192C38u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x192C30u, 0x192C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C38u;
label_192c38:
    // 0x192c38: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x192c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192c3c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x192c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x192c40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192c44: 0x0  nop
    ctx->pc = 0x192c44u;
    // NOP
    // 0x192c48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192c4c: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x192C4Cu;
    {
        const bool branch_taken_0x192c4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192c4c) {
            ctx->pc = 0x192D08u;
            goto label_192d08;
        }
    }
    ctx->pc = 0x192C54u;
    // 0x192c54: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x192c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192c58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192c58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x192c5c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x192c5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x192c60: 0xc7818288  lwc1        $f1, -0x7D78($gp)
    ctx->pc = 0x192c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192c64: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x192c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192c68: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x192c68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x192c6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x192c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x192c70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x192c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x192c74: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x192C74u;
    SET_GPR_U32(ctx, 31, 0x192C7Cu);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x192C74u, 0x192C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C7Cu;
label_192c7c:
    // 0x192c7c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x192c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x192c80: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x192c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192c84: 0xc06479c  jal         func_191E70
    ctx->pc = 0x192C84u;
    SET_GPR_U32(ctx, 31, 0x192C8Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x192C84u, 0x192C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C8Cu;
label_192c8c:
    // 0x192c8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x192c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c90: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192c94: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192c98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192c9c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192C9Cu;
    SET_GPR_U32(ctx, 31, 0x192CA4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192C9Cu, 0x192CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192CA4u;
label_192ca4:
    // 0x192ca4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192ca8: 0xc7818278  lwc1        $f1, -0x7D88($gp)
    ctx->pc = 0x192ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192cac: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x192cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192cb0: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x192cb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x192cb4: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x192cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192cb8: 0xc78181b0  lwc1        $f1, -0x7E50($gp)
    ctx->pc = 0x192cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192cbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192cc0: 0x0  nop
    ctx->pc = 0x192cc0u;
    // NOP
    // 0x192cc4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x192cc4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x192cc8: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x192cc8u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x192ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cd0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x192CD0u;
    SET_GPR_U32(ctx, 31, 0x192CD8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x192CD0u, 0x192CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192CD8u;
label_192cd8:
    // 0x192cd8: 0x8f829220  lw          $v0, -0x6DE0($gp)
    ctx->pc = 0x192cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939168)));
    // 0x192cdc: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x192CDCu;
    {
        const bool branch_taken_0x192cdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x192cdc) {
            ctx->pc = 0x192D08u;
            goto label_192d08;
        }
    }
    ctx->pc = 0x192CE4u;
    // 0x192ce4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x192ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x192ce8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x192ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192cec: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x192cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x192cf0: 0x27859230  addiu       $a1, $gp, -0x6DD0
    ctx->pc = 0x192cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939184));
    // 0x192cf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192cf8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x192cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192cfc: 0xc08f558  jal         func_23D560
    ctx->pc = 0x192CFCu;
    SET_GPR_U32(ctx, 31, 0x192D04u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x192CFCu, 0x192D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D04u;
label_192d04:
    // 0x192d04: 0xaf909220  sw          $s0, -0x6DE0($gp)
    ctx->pc = 0x192d04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939168), GPR_U32(ctx, 16));
label_192d08:
    // 0x192d08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192d0c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x192d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192d10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192d10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x192d14: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x192d14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x192d18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x192d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192d1c: 0x27859238  addiu       $a1, $gp, -0x6DC8
    ctx->pc = 0x192d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939192));
    // 0x192d20: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x192D20u;
    SET_GPR_U32(ctx, 31, 0x192D28u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x192D20u, 0x192D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D28u;
label_192d28:
    // 0x192d28: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x192d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192d2c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x192D2Cu;
    SET_GPR_U32(ctx, 31, 0x192D34u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x192D2Cu, 0x192D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D34u;
label_192d34:
    // 0x192d34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x192d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192d3c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d44: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192D44u;
    SET_GPR_U32(ctx, 31, 0x192D4Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192D44u, 0x192D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D4Cu;
label_192d4c:
    // 0x192d4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192d50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d54: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x192d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192d58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x192d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192d5c: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x192D5Cu;
    SET_GPR_U32(ctx, 31, 0x192D64u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x192D5Cu, 0x192D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D64u;
label_192d64:
    // 0x192d64: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x192d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192d68: 0xc06479c  jal         func_191E70
    ctx->pc = 0x192D68u;
    SET_GPR_U32(ctx, 31, 0x192D70u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x192D68u, 0x192D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D70u;
label_192d70:
    // 0x192d70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x192d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d74: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192d78: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192d7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192d80: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192D80u;
    SET_GPR_U32(ctx, 31, 0x192D88u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192D80u, 0x192D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192D88u;
label_192d88:
    // 0x192d88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192d8c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x192d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x192d90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x192d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192d94: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x192d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x192d98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x192d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x192d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192da0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192da4: 0xc08c208  jal         func_230820
    ctx->pc = 0x192DA4u;
    SET_GPR_U32(ctx, 31, 0x192DACu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x192DA4u, 0x192DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DACu;
label_192dac:
    // 0x192dac: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x192dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192db0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x192DB0u;
    SET_GPR_U32(ctx, 31, 0x192DB8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x192DB0u, 0x192DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DB8u;
label_192db8:
    // 0x192db8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x192db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192dbc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192dc0: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192dc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192dc8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192DC8u;
    SET_GPR_U32(ctx, 31, 0x192DD0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192DC8u, 0x192DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DD0u;
label_192dd0:
    // 0x192dd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192dd8: 0xc08c258  jal         func_230960
    ctx->pc = 0x192DD8u;
    SET_GPR_U32(ctx, 31, 0x192DE0u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x192DD8u, 0x192DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192DE0u;
label_192de0:
    // 0x192de0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192de4: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x192de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192dec: 0x0  nop
    ctx->pc = 0x192decu;
    // NOP
    // 0x192df0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192df0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192df4: 0x4501010f  bc1t        . + 4 + (0x10F << 2)
    ctx->pc = 0x192DF4u;
    {
        const bool branch_taken_0x192df4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192df4) {
            ctx->pc = 0x193234u;
            goto label_193234;
        }
    }
    ctx->pc = 0x192DFCu;
    // 0x192dfc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x192dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192e00: 0xc06479c  jal         func_191E70
    ctx->pc = 0x192E00u;
    SET_GPR_U32(ctx, 31, 0x192E08u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x192E00u, 0x192E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E08u;
label_192e08:
    // 0x192e08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x192e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e0c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192e10: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192e14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x192e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192e18: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192E18u;
    SET_GPR_U32(ctx, 31, 0x192E20u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192E18u, 0x192E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E20u;
label_192e20:
    // 0x192e20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192e24: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192e2c: 0x24460084  addiu       $a2, $v0, 0x84
    ctx->pc = 0x192e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x192e30: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x192e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192e34: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x192E34u;
    SET_GPR_U32(ctx, 31, 0x192E3Cu);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x192E34u, 0x192E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192E3Cu;
label_192e3c:
    // 0x192e3c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x192e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192e40: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192e44: 0xc4610080  lwc1        $f1, 0x80($v1)
    ctx->pc = 0x192e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192e48: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x192e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192e4c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x192e4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x192e50: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x192e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x192e54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x192e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x192e58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192e5c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x192e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192e60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x192e60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x192e64: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x192e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x192e68: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x192e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x192e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192e70: 0x0  nop
    ctx->pc = 0x192e70u;
    // NOP
    // 0x192e74: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x192e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x192e78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192e7c: 0x0  nop
    ctx->pc = 0x192e7cu;
    // NOP
    // 0x192e80: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x192e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x192e84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x192e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x192e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192e8c: 0x0  nop
    ctx->pc = 0x192e8cu;
    // NOP
    // 0x192e90: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x192e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x192e94: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x192e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192e98: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x192e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192e9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192ea0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x192EA0u;
    {
        const bool branch_taken_0x192ea0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192ea0) {
            ctx->pc = 0x192ED0u;
            goto label_192ed0;
        }
    }
    ctx->pc = 0x192EA8u;
    // 0x192ea8: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x192ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192eac: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x192eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192eb0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x192eb0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x192eb4: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x192eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x192eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192ebc: 0x0  nop
    ctx->pc = 0x192ebcu;
    // NOP
    // 0x192ec0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x192ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x192ec4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x192ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x192ec8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x192EC8u;
    {
        const bool branch_taken_0x192ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192ec8) {
            ctx->pc = 0x192FA4u;
            goto label_192fa4;
        }
    }
    ctx->pc = 0x192ED0u;
label_192ed0:
    // 0x192ed0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x192ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192ed4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x192ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x192ed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192edc: 0x0  nop
    ctx->pc = 0x192edcu;
    // NOP
    // 0x192ee0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192ee4: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x192EE4u;
    {
        const bool branch_taken_0x192ee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192ee4) {
            ctx->pc = 0x192FA4u;
            goto label_192fa4;
        }
    }
    ctx->pc = 0x192EECu;
    // 0x192eec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x192eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x192ef0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x192ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x192ef4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x192ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192ef8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x192ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x192efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192f00: 0x0  nop
    ctx->pc = 0x192f00u;
    // NOP
    // 0x192f04: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x192f04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x192f08: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x192f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x192f0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192f10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192f14: 0x0  nop
    ctx->pc = 0x192f14u;
    // NOP
    // 0x192f18: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x192f18u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x192f1c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x192f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x192f20: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x192f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x192f24: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x192f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x192f28: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x192f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x192f2c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x192F2Cu;
    {
        const bool branch_taken_0x192f2c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x192f2c) {
            ctx->pc = 0x192F48u;
            goto label_192f48;
        }
    }
    ctx->pc = 0x192F34u;
    // 0x192f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192f38: 0x0  nop
    ctx->pc = 0x192f38u;
    // NOP
    // 0x192f3c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x192f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x192f40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192F40u;
    {
        const bool branch_taken_0x192f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f40) {
            ctx->pc = 0x192F64u;
            goto label_192f64;
        }
    }
    ctx->pc = 0x192F48u;
label_192f48:
    // 0x192f48: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x192f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x192f4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x192f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x192f50: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x192f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x192f54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x192f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192f58: 0x0  nop
    ctx->pc = 0x192f58u;
    // NOP
    // 0x192f5c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x192f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x192f60: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x192f60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_192f64:
    // 0x192f64: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x192f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192f68: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x192f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x192f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192f70: 0x0  nop
    ctx->pc = 0x192f70u;
    // NOP
    // 0x192f74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x192f74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x192f78: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x192f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x192f7c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x192f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x192f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192f84: 0x0  nop
    ctx->pc = 0x192f84u;
    // NOP
    // 0x192f88: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x192f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x192f8c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x192f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x192f90: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x192f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x192f94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192f98: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x192f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192f9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x192f9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x192fa0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x192fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_192fa4:
    // 0x192fa4: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x192fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192fa8: 0xc7808260  lwc1        $f0, -0x7DA0($gp)
    ctx->pc = 0x192fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192fac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192fb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x192FB0u;
    {
        const bool branch_taken_0x192fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192fb0) {
            ctx->pc = 0x192FC0u;
            goto label_192fc0;
        }
    }
    ctx->pc = 0x192FB8u;
    // 0x192fb8: 0xc7808260  lwc1        $f0, -0x7DA0($gp)
    ctx->pc = 0x192fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192fbc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x192fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_192fc0:
    // 0x192fc0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x192fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192fc4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x192FC4u;
    SET_GPR_U32(ctx, 31, 0x192FCCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x192FC4u, 0x192FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FCCu;
label_192fcc:
    // 0x192fcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x192fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fd0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192fd4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192fd8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x192fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192fdc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192FDCu;
    SET_GPR_U32(ctx, 31, 0x192FE4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192FDCu, 0x192FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FE4u;
label_192fe4:
    // 0x192fe4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192fe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x192fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192fec: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x192fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x192ff0: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x192FF0u;
    SET_GPR_U32(ctx, 31, 0x192FF8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x192FF0u, 0x192FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192FF8u;
label_192ff8:
    // 0x192ff8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x192ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192ffc: 0x24430070  addiu       $v1, $v0, 0x70
    ctx->pc = 0x192ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x193000: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x193000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x193004: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x193004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193008: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x193008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19300c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x19300cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193010: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x193010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x193014: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x193014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x193018: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x193018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x19301c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19301Cu;
    {
        const bool branch_taken_0x19301c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19301c) {
            ctx->pc = 0x193038u;
            goto label_193038;
        }
    }
    ctx->pc = 0x193024u;
    // 0x193024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193028: 0x0  nop
    ctx->pc = 0x193028u;
    // NOP
    // 0x19302c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19302cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193030: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193030u;
    {
        const bool branch_taken_0x193030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193030) {
            ctx->pc = 0x193054u;
            goto label_193054;
        }
    }
    ctx->pc = 0x193038u;
label_193038:
    // 0x193038: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x193038u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19303c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19303cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x193040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x193044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193048: 0x0  nop
    ctx->pc = 0x193048u;
    // NOP
    // 0x19304c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19304cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193050: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x193050u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_193054:
    // 0x193054: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x193054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x193058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19305c: 0x0  nop
    ctx->pc = 0x19305cu;
    // NOP
    // 0x193060: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x193060u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x193064: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x193064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193068: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x193068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19306c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19306cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193070: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x193070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x193074: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x193074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x193078: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19307c: 0x0  nop
    ctx->pc = 0x19307cu;
    // NOP
    // 0x193080: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x193080u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x193084: 0x0  nop
    ctx->pc = 0x193084u;
    // NOP
    // 0x193088: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x193088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x19308c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x19308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x193090: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193090u;
    {
        const bool branch_taken_0x193090 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x193090) {
            ctx->pc = 0x1930ACu;
            goto label_1930ac;
        }
    }
    ctx->pc = 0x193098u;
    // 0x193098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19309c: 0x0  nop
    ctx->pc = 0x19309cu;
    // NOP
    // 0x1930a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1930a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1930a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1930A4u;
    {
        const bool branch_taken_0x1930a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1930a4) {
            ctx->pc = 0x1930C8u;
            goto label_1930c8;
        }
    }
    ctx->pc = 0x1930ACu;
label_1930ac:
    // 0x1930ac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1930acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1930b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1930b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1930b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1930b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1930b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1930b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1930bc: 0x0  nop
    ctx->pc = 0x1930bcu;
    // NOP
    // 0x1930c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1930c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1930c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1930c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1930c8:
    // 0x1930c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1930c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1930cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1930ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1930d0: 0x0  nop
    ctx->pc = 0x1930d0u;
    // NOP
    // 0x1930d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1930d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1930d8: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x1930d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1930dc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1930dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1930e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1930e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1930e4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1930e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1930e8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1930e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1930ec: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1930ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1930f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1930F0u;
    {
        const bool branch_taken_0x1930f0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1930f0) {
            ctx->pc = 0x19310Cu;
            goto label_19310c;
        }
    }
    ctx->pc = 0x1930F8u;
    // 0x1930f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1930f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1930fc: 0x0  nop
    ctx->pc = 0x1930fcu;
    // NOP
    // 0x193100: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x193100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x193104: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193104u;
    {
        const bool branch_taken_0x193104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193104) {
            ctx->pc = 0x193128u;
            goto label_193128;
        }
    }
    ctx->pc = 0x19310Cu;
label_19310c:
    // 0x19310c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19310cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x193110: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193114: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x193114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x193118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19311c: 0x0  nop
    ctx->pc = 0x19311cu;
    // NOP
    // 0x193120: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x193120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x193124: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x193124u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_193128:
    // 0x193128: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x193128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x19312c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19312cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x193130: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x193130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x193134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193138: 0x0  nop
    ctx->pc = 0x193138u;
    // NOP
    // 0x19313c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19313cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x193140: 0x4603109c  madd.s      $f2, $f2, $f3
    ctx->pc = 0x193140u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x193144: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x193144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193148: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x193148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19314c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x19314cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193150: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x193150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x193154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193158: 0x0  nop
    ctx->pc = 0x193158u;
    // NOP
    // 0x19315c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x19315cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x193160: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x193160u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x193164: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x193164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193168: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x193168u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19316c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x19316cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x193170: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x193170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193174: 0xc06479c  jal         func_191E70
    ctx->pc = 0x193174u;
    SET_GPR_U32(ctx, 31, 0x19317Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x193174u, 0x19317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19317Cu;
label_19317c:
    // 0x19317c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19317cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193180: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x193180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193184: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x193184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x193188: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x193188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19318c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x19318Cu;
    SET_GPR_U32(ctx, 31, 0x193194u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x19318Cu, 0x193194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193194u;
label_193194:
    // 0x193194: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x193194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19319c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x19319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1931a0: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x1931a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1931a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1931a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931a8: 0xc08c208  jal         func_230820
    ctx->pc = 0x1931A8u;
    SET_GPR_U32(ctx, 31, 0x1931B0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1931A8u, 0x1931B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931B0u;
label_1931b0:
    // 0x1931b0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1931b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1931b4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1931B4u;
    SET_GPR_U32(ctx, 31, 0x1931BCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1931B4u, 0x1931BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931BCu;
label_1931bc:
    // 0x1931bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1931bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931c0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1931c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1931c4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1931c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1931c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1931c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1931cc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1931CCu;
    SET_GPR_U32(ctx, 31, 0x1931D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1931CCu, 0x1931D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931D4u;
label_1931d4:
    // 0x1931d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1931d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1931d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1931d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931dc: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x1931dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1931e0: 0xc7ad006c  lwc1        $f13, 0x6C($sp)
    ctx->pc = 0x1931e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1931e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1931e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1931e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1931e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1931ec: 0xc08c544  jal         func_231510
    ctx->pc = 0x1931ECu;
    SET_GPR_U32(ctx, 31, 0x1931F4u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1931ECu, 0x1931F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1931F4u;
label_1931f4:
    // 0x1931f4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1931f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1931f8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1931F8u;
    SET_GPR_U32(ctx, 31, 0x193200u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1931F8u, 0x193200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193200u;
label_193200:
    // 0x193200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x193200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193204: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x193204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193208: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x193208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x19320c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193210: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x193210u;
    SET_GPR_U32(ctx, 31, 0x193218u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x193210u, 0x193218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193218u;
label_193218:
    // 0x193218: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x193218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19321c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19321cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193220: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x193220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193224: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x193224u;
    SET_GPR_U32(ctx, 31, 0x19322Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x193224u, 0x19322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19322Cu;
label_19322c:
    // 0x19322c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19322Cu;
    {
        const bool branch_taken_0x19322c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19322c) {
            ctx->pc = 0x19326Cu;
            goto label_19326c;
        }
    }
    ctx->pc = 0x193234u;
label_193234:
    // 0x193234: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x193234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193238: 0xc06479c  jal         func_191E70
    ctx->pc = 0x193238u;
    SET_GPR_U32(ctx, 31, 0x193240u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x193238u, 0x193240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193240u;
label_193240:
    // 0x193240: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x193240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193244: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x193244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193248: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x193248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x19324c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19324cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193250: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x193250u;
    SET_GPR_U32(ctx, 31, 0x193258u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x193250u, 0x193258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193258u;
label_193258:
    // 0x193258: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x193258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19325c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19325cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193264: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x193264u;
    SET_GPR_U32(ctx, 31, 0x19326Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x193264u, 0x19326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19326Cu;
label_19326c:
    // 0x19326c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x19326cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193270: 0xc06479c  jal         func_191E70
    ctx->pc = 0x193270u;
    SET_GPR_U32(ctx, 31, 0x193278u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x193270u, 0x193278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193278u;
label_193278:
    // 0x193278: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x193278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19327c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x193280: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x193280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x193284: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x193284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193288: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x193288u;
    SET_GPR_U32(ctx, 31, 0x193290u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x193288u, 0x193290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193290u;
label_193290:
    // 0x193290: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x193290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193298: 0xc08c258  jal         func_230960
    ctx->pc = 0x193298u;
    SET_GPR_U32(ctx, 31, 0x1932A0u);
    ctx->pc = 0x230960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230960u, 0x193298u, 0x1932A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1932A0u;
label_1932a0:
    // 0x1932a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1932a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1932a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1932a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1932a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1932a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1932ac: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1932acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1932b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1932B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1932B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1932B8u;
    // 0x1932b8: 0x0  nop
    ctx->pc = 0x1932b8u;
    // NOP
    // 0x1932bc: 0x0  nop
    ctx->pc = 0x1932bcu;
    // NOP
    ctx->pc = 0x1932c0u;
}
