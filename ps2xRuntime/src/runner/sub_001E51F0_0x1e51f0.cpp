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

// Function: sub_001E51F0
// Address: 0x1e51f0 - 0x1e52e0
void sub_001E51F0_0x1e51f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E51F0_0x1e51f0");
#endif

    switch (ctx->pc) {
        case 0x1e520cu: goto label_1e520c;
        case 0x1e5224u: goto label_1e5224;
        case 0x1e5234u: goto label_1e5234;
        case 0x1e524cu: goto label_1e524c;
        case 0x1e52c8u: goto label_1e52c8;
        default: break;
    }

    ctx->pc = 0x1e51f0u;

    // 0x1e51f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e51f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e51f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e51f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e51f8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e51f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e51fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e51fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5200: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e5200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5204: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5204u;
    SET_GPR_U32(ctx, 31, 0x1E520Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5204u, 0x1E520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E520Cu;
label_1e520c:
    // 0x1e520c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5210: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e5210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e5214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5218: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x1e5218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x1e521c: 0xc08c704  jal         func_231C10
    ctx->pc = 0x1E521Cu;
    SET_GPR_U32(ctx, 31, 0x1E5224u);
    ctx->pc = 0x231C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231C10u, 0x1E521Cu, 0x1E5224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5224u;
label_1e5224:
    // 0x1e5224: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e5224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5228: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e5228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e522c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E522Cu;
    SET_GPR_U32(ctx, 31, 0x1E5234u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E522Cu, 0x1E5234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5234u;
label_1e5234:
    // 0x1e5234: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e5234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5238: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e5238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e523c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e523cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5240: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1e5240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e5244: 0xc08c688  jal         func_231A20
    ctx->pc = 0x1E5244u;
    SET_GPR_U32(ctx, 31, 0x1E524Cu);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1E5244u, 0x1E524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E524Cu;
label_1e524c:
    // 0x1e524c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5250: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e5250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e5254: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1e5254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e5258: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1e5258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e525c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e525cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5260: 0x0  nop
    ctx->pc = 0x1e5260u;
    // NOP
    // 0x1e5264: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e5264u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e5268: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e5268u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e526c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1e526cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1e5270: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e5270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5274: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e5274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e5278: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1e5278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e527c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1e527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5284: 0x0  nop
    ctx->pc = 0x1e5284u;
    // NOP
    // 0x1e5288: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1e5288u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1e528c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1e528cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1e5290: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1e5290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1e5294: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e5294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5298: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x1e5298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e529c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1e529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e52a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e52a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e52a4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1e52a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e52a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e52ac: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x1e52acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e52b0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1e52b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e52b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e52b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e52b8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1e52b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e52bc: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1e52bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1e52c0: 0xc104d30  jal         func_4134C0
    ctx->pc = 0x1E52C0u;
    SET_GPR_U32(ctx, 31, 0x1E52C8u);
    ctx->pc = 0x4134C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134C0u, 0x1E52C0u, 0x1E52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E52C8u;
label_1e52c8:
    // 0x1e52c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e52c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e52cc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e52ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e52d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E52D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E52D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E52D8u;
    // 0x1e52d8: 0x0  nop
    ctx->pc = 0x1e52d8u;
    // NOP
    // 0x1e52dc: 0x0  nop
    ctx->pc = 0x1e52dcu;
    // NOP
    ctx->pc = 0x1e52e0u;
}
