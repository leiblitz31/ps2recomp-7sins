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

// Function: sub_001E53A0
// Address: 0x1e53a0 - 0x1e54d0
void sub_001E53A0_0x1e53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E53A0_0x1e53a0");
#endif

    switch (ctx->pc) {
        case 0x1e53bcu: goto label_1e53bc;
        case 0x1e53d4u: goto label_1e53d4;
        case 0x1e53e4u: goto label_1e53e4;
        case 0x1e53fcu: goto label_1e53fc;
        case 0x1e547cu: goto label_1e547c;
        case 0x1e54b8u: goto label_1e54b8;
        default: break;
    }

    ctx->pc = 0x1e53a0u;

    // 0x1e53a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e53a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e53a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e53a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e53a8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e53a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e53ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e53acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e53b0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e53b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e53b4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E53B4u;
    SET_GPR_U32(ctx, 31, 0x1E53BCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E53B4u, 0x1E53BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53BCu;
label_1e53bc:
    // 0x1e53bc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e53bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e53c0: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e53c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e53c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e53c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53c8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1e53c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e53cc: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1E53CCu;
    SET_GPR_U32(ctx, 31, 0x1E53D4u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1E53CCu, 0x1E53D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53D4u;
label_1e53d4:
    // 0x1e53d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e53d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e53d8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e53d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e53dc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E53DCu;
    SET_GPR_U32(ctx, 31, 0x1E53E4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E53DCu, 0x1E53E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53E4u;
label_1e53e4:
    // 0x1e53e4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e53e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e53e8: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e53e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e53ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e53ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e53f0: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1e53f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e53f4: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1E53F4u;
    SET_GPR_U32(ctx, 31, 0x1E53FCu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1E53F4u, 0x1E53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E53FCu;
label_1e53fc:
    // 0x1e53fc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5400: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e5400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e5404: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1e5404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e5408: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1e5408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e540c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e540cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5410: 0x0  nop
    ctx->pc = 0x1e5410u;
    // NOP
    // 0x1e5414: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e5414u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e5418: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e5418u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e541c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e541cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1e5420: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e5420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5424: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e5424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e5428: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1e5428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e542c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1e542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5434: 0x0  nop
    ctx->pc = 0x1e5434u;
    // NOP
    // 0x1e5438: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e5438u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e543c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e543cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e5440: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1e5440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1e5444: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e5444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5448: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1e5448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e544c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1e544cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5450: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e5454: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1e5454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e5458: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e5458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e545c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1e545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5460: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1e5460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5464: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e5468: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1e5468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e546c: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1e546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e5470: 0xc7ad002c  lwc1        $f13, 0x2C($sp)
    ctx->pc = 0x1e5470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e5474: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x1E5474u;
    SET_GPR_U32(ctx, 31, 0x1E547Cu);
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x1E5474u, 0x1E547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E547Cu;
label_1e547c:
    // 0x1e547c: 0xc7838154  lwc1        $f3, -0x7EAC($gp)
    ctx->pc = 0x1e547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e5480: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1e5480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1e5484: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e5484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e5488: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e5488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e548c: 0x0  nop
    ctx->pc = 0x1e548cu;
    // NOP
    // 0x1e5490: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1e5490u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x1e5494: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x1e5494u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1e5498: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1e5498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1e549c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e549cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e54a0: 0x0  nop
    ctx->pc = 0x1e54a0u;
    // NOP
    // 0x1e54a4: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1e54a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e54a8: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1e54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1e54ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e54acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e54b0: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x1E54B0u;
    SET_GPR_U32(ctx, 31, 0x1E54B8u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x1E54B0u, 0x1E54B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E54B8u;
label_1e54b8:
    // 0x1e54b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e54b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e54bc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e54bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e54c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E54C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E54C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E54C8u;
    // 0x1e54c8: 0x0  nop
    ctx->pc = 0x1e54c8u;
    // NOP
    // 0x1e54cc: 0x0  nop
    ctx->pc = 0x1e54ccu;
    // NOP
    ctx->pc = 0x1e54d0u;
}
