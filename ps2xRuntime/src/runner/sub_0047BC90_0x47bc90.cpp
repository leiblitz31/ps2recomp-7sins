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

// Function: sub_0047BC90
// Address: 0x47bc90 - 0x47beb0
void sub_0047BC90_0x47bc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BC90_0x47bc90");
#endif

    switch (ctx->pc) {
        case 0x47bd58u: goto label_47bd58;
        case 0x47bde0u: goto label_47bde0;
        case 0x47be68u: goto label_47be68;
        case 0x47be74u: goto label_47be74;
        case 0x47be80u: goto label_47be80;
        default: break;
    }

    ctx->pc = 0x47bc90u;

    // 0x47bc90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x47bc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x47bc94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x47bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x47bc98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47bc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x47bc9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x47bca0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47bca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x47bca4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47bca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47bca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47bcac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47bcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47bcb0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x47bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x47bcb4: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x47bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x47bcb8: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x47bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x47bcbc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x47bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x47bcc0: 0x248416d8  addiu       $a0, $a0, 0x16D8
    ctx->pc = 0x47bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5848));
    // 0x47bcc4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x47bcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x47bcc8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x47bcc8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5E16D8u));
    // 0x47bccc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x47bcccu;
    { uint32_t bits = FAST_READ32(0x5E16E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47bcd0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x47bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x47bcd4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x47bcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x47bcd8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x47bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47bcdc: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x47bcdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x47bce0: 0x26950030  addiu       $s5, $s4, 0x30
    ctx->pc = 0x47bce0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x47bce4: 0x26930010  addiu       $s3, $s4, 0x10
    ctx->pc = 0x47bce4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x47bce8: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x47bce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bcec: 0x26900020  addiu       $s0, $s4, 0x20
    ctx->pc = 0x47bcecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x47bcf0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x47bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x47bcf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47BCF4u;
    {
        const bool branch_taken_0x47bcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47bcf4) {
            ctx->pc = 0x47BD08u;
            goto label_47bd08;
        }
    }
    ctx->pc = 0x47BCFCu;
    // 0x47bcfc: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x47bcfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x47bd00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x47BD00u;
    {
        const bool branch_taken_0x47bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bd00) {
            ctx->pc = 0x47BD0Cu;
            goto label_47bd0c;
        }
    }
    ctx->pc = 0x47BD08u;
label_47bd08:
    // 0x47bd08: 0x8fb200a0  lw          $s2, 0xA0($sp)
    ctx->pc = 0x47bd08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_47bd0c:
    // 0x47bd0c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x47bd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47bd10: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x47bd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47bd14: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x47bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47bd18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x47bd18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x47bd1c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x47bd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x47bd20: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x47bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47bd24: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x47bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47bd28: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x47bd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47bd2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x47bd2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x47bd30: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x47bd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x47bd34: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x47bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47bd38: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x47bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47bd3c: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x47bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47bd40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x47bd40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x47bd44: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x47bd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x47bd48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47bd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x47bd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd50: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x47BD50u;
    SET_GPR_U32(ctx, 31, 0x47BD58u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x47BD50u, 0x47BD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BD58u;
label_47bd58:
    // 0x47bd58: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x47bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47bd5c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x47bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47bd60: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x47bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47bd64: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x47bd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47bd68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47bd68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47bd6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47bd6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47bd70: 0x0  nop
    ctx->pc = 0x47bd70u;
    // NOP
    // 0x47bd74: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x47bd74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x47bd78: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x47bd78u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x47bd7c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x47bd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x47bd80: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x47bd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47bd84: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x47bd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47bd88: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x47bd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47bd8c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x47bd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47bd90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47bd90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47bd94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47bd94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47bd98: 0x0  nop
    ctx->pc = 0x47bd98u;
    // NOP
    // 0x47bd9c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x47bd9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x47bda0: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x47bda0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x47bda4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x47bda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x47bda8: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x47bda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47bdac: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x47bdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47bdb0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x47bdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47bdb4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x47bdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47bdb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47bdb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47bdbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47bdbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47bdc0: 0x0  nop
    ctx->pc = 0x47bdc0u;
    // NOP
    // 0x47bdc4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x47bdc4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x47bdc8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x47bdc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x47bdcc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x47bdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x47bdd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47bdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bdd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47bdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bdd8: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x47BDD8u;
    SET_GPR_U32(ctx, 31, 0x47BDE0u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x47BDD8u, 0x47BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BDE0u;
label_47bde0:
    // 0x47bde0: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x47bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47bde4: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x47bde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47bde8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x47bde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47bdec: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x47bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47bdf0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47bdf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47bdf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47bdf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47bdf8: 0x0  nop
    ctx->pc = 0x47bdf8u;
    // NOP
    // 0x47bdfc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x47bdfcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x47be00: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x47be00u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x47be04: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x47be04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x47be08: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x47be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47be0c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x47be0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47be10: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x47be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47be14: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x47be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47be18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47be18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47be1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47be1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47be20: 0x0  nop
    ctx->pc = 0x47be20u;
    // NOP
    // 0x47be24: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x47be24u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x47be28: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x47be28u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x47be2c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x47be2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x47be30: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x47be30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x47be34: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x47be34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x47be38: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x47be38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47be3c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x47be3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47be40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x47be40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x47be44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47be44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x47be48: 0x0  nop
    ctx->pc = 0x47be48u;
    // NOP
    // 0x47be4c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x47be4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x47be50: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x47be50u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x47be54: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x47be54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x47be58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47be58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47be5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x47be5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47be60: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x47BE60u;
    SET_GPR_U32(ctx, 31, 0x47BE68u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x47BE60u, 0x47BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BE68u;
label_47be68:
    // 0x47be68: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x47be68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47be6c: 0xc106794  jal         func_419E50
    ctx->pc = 0x47BE6Cu;
    SET_GPR_U32(ctx, 31, 0x47BE74u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x47BE6Cu, 0x47BE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BE74u;
label_47be74:
    // 0x47be74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x47be74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47be78: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x47BE78u;
    SET_GPR_U32(ctx, 31, 0x47BE80u);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x47BE78u, 0x47BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BE80u;
label_47be80:
    // 0x47be80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x47be80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47be84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47be84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47be88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47be88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47be8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47be8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47be90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47be90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47be94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47be94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47be98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47be98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47be9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x47be9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x47bea0: 0x3e00008  jr          $ra
    ctx->pc = 0x47BEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47BEA8u;
    // 0x47bea8: 0x0  nop
    ctx->pc = 0x47bea8u;
    // NOP
    // 0x47beac: 0x0  nop
    ctx->pc = 0x47beacu;
    // NOP
    ctx->pc = 0x47beb0u;
}
