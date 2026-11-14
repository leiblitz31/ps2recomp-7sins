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

// Function: sub_002D8890
// Address: 0x2d8890 - 0x2d8980
void sub_002D8890_0x2d8890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8890_0x2d8890");
#endif

    switch (ctx->pc) {
        case 0x2d890cu: goto label_2d890c;
        default: break;
    }

    ctx->pc = 0x2d8890u;

    // 0x2d8890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d8894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d8898: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d8898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d889c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d889cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d88a0: 0x246367f8  addiu       $v1, $v1, 0x67F8
    ctx->pc = 0x2d88a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26616));
    // 0x2d88a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d88a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d88a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d88ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d88acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d88b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d88b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d88b4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2d88b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d88b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d88b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d88bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d88c0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d88c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d88c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d88c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d88c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d88cc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2d88ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2d88d0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2d88d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d88d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d88d8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x2d88d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x2d88dc: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x2d88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x2d88e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d88e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d88e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d88e8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2d88e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2d88ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d88ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d88f0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2d88f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2d88f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d88f8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2d88f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2d88fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8900: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2d8900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2d8904: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2D8904u;
    SET_GPR_U32(ctx, 31, 0x2D890Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2D8904u, 0x2D890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D890Cu;
label_2d890c:
    // 0x2d890c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2d890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d8910: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2d8910u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2d8914: 0x1010  mfhi        $v0
    ctx->pc = 0x2d8914u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2d8918: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D8918u;
    {
        const bool branch_taken_0x2d8918 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d8918) {
            ctx->pc = 0x2D8934u;
            goto label_2d8934;
        }
    }
    ctx->pc = 0x2D8920u;
    // 0x2d8920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d8920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8924: 0x0  nop
    ctx->pc = 0x2d8924u;
    // NOP
    // 0x2d8928: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d8928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d892c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D892Cu;
    {
        const bool branch_taken_0x2d892c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d892c) {
            ctx->pc = 0x2D8950u;
            goto label_2d8950;
        }
    }
    ctx->pc = 0x2D8934u;
label_2d8934:
    // 0x2d8934: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2d8934u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2d8938: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d8938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d893c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d893cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d8940: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d8940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d8944: 0x0  nop
    ctx->pc = 0x2d8944u;
    // NOP
    // 0x2d8948: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2d8948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d894c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2d894cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2d8950:
    // 0x2d8950: 0xc78081c8  lwc1        $f0, -0x7E38($gp)
    ctx->pc = 0x2d8950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8954: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2d8954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d8958: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d8958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d895c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2d895cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2d8960: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d8960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8964: 0xa0400030  sb          $zero, 0x30($v0)
    ctx->pc = 0x2d8964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8968: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d8968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d896c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d896cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8970: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d8970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d8974: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D897Cu;
    // 0x2d897c: 0x0  nop
    ctx->pc = 0x2d897cu;
    // NOP
    ctx->pc = 0x2d8980u;
}
