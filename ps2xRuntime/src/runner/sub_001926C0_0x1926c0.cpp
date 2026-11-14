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

// Function: sub_001926C0
// Address: 0x1926c0 - 0x192930
void sub_001926C0_0x1926c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001926C0_0x1926c0");
#endif

    switch (ctx->pc) {
        case 0x192700u: goto label_192700;
        case 0x192718u: goto label_192718;
        case 0x192740u: goto label_192740;
        case 0x192780u: goto label_192780;
        case 0x192798u: goto label_192798;
        case 0x1927c4u: goto label_1927c4;
        case 0x192800u: goto label_192800;
        case 0x192818u: goto label_192818;
        case 0x192844u: goto label_192844;
        case 0x192880u: goto label_192880;
        case 0x192898u: goto label_192898;
        case 0x1928c0u: goto label_1928c0;
        default: break;
    }

    ctx->pc = 0x1926c0u;

    // 0x1926c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1926c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1926c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1926c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1926c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1926C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1926C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1926D0u;
    // 0x1926d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1926d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1926d4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1926d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1926d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1926D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1926D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1926E0u;
    // 0x1926e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1926e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1926e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1926e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1926e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1926e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1926ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1926ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1926f0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1926f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1926f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1926f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1926f8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1926F8u;
    SET_GPR_U32(ctx, 31, 0x192700u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1926F8u, 0x192700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192700u;
label_192700:
    // 0x192700: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192704: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192708: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x19270c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19270cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192710: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192710u;
    SET_GPR_U32(ctx, 31, 0x192718u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192710u, 0x192718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192718u;
label_192718:
    // 0x192718: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19271c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19271cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x192720: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x192720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x192724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192728: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x192728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19272c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x19272cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x192730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192734: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x192734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192738: 0xc08c208  jal         func_230820
    ctx->pc = 0x192738u;
    SET_GPR_U32(ctx, 31, 0x192740u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x192738u, 0x192740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192740u;
label_192740:
    // 0x192740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192748: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x192748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19274c: 0x3e00008  jr          $ra
    ctx->pc = 0x19274Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19274Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192754u;
    // 0x192754: 0x0  nop
    ctx->pc = 0x192754u;
    // NOP
    // 0x192758: 0x0  nop
    ctx->pc = 0x192758u;
    // NOP
    // 0x19275c: 0x0  nop
    ctx->pc = 0x19275cu;
    // NOP
    // 0x192760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x192764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19276c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19276cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x192770: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x192770u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x192774: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x192774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192778: 0xc06479c  jal         func_191E70
    ctx->pc = 0x192778u;
    SET_GPR_U32(ctx, 31, 0x192780u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x192778u, 0x192780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192780u;
label_192780:
    // 0x192780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192784: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192788: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x19278c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19278cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192790: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192790u;
    SET_GPR_U32(ctx, 31, 0x192798u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192790u, 0x192798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192798u;
label_192798:
    // 0x192798: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19279c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19279cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1927a0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1927a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1927a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1927a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1927a8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1927a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1927ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1927acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1927b0: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1927b0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1927b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1927b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1927b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1927bc: 0xc08c208  jal         func_230820
    ctx->pc = 0x1927BCu;
    SET_GPR_U32(ctx, 31, 0x1927C4u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1927BCu, 0x1927C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927C4u;
label_1927c4:
    // 0x1927c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1927c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1927c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1927c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1927cc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1927ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1927d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1927D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1927D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1927D8u;
    // 0x1927d8: 0x0  nop
    ctx->pc = 0x1927d8u;
    // NOP
    // 0x1927dc: 0x0  nop
    ctx->pc = 0x1927dcu;
    // NOP
    // 0x1927e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1927e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1927e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1927e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1927e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1927e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1927ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1927ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1927f0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1927f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1927f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1927f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1927f8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1927F8u;
    SET_GPR_U32(ctx, 31, 0x192800u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1927F8u, 0x192800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192800u;
label_192800:
    // 0x192800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192804: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192808: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x19280c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19280cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192810: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192810u;
    SET_GPR_U32(ctx, 31, 0x192818u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192810u, 0x192818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192818u;
label_192818:
    // 0x192818: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19281c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19281cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x192820: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192824: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x192824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192828: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x192828u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19282c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x19282cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x192830: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x192830u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x192834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192838: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x192838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19283c: 0xc08c208  jal         func_230820
    ctx->pc = 0x19283Cu;
    SET_GPR_U32(ctx, 31, 0x192844u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x19283Cu, 0x192844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192844u;
label_192844:
    // 0x192844: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19284c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19284cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x192850: 0x3e00008  jr          $ra
    ctx->pc = 0x192850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192858u;
    // 0x192858: 0x0  nop
    ctx->pc = 0x192858u;
    // NOP
    // 0x19285c: 0x0  nop
    ctx->pc = 0x19285cu;
    // NOP
    // 0x192860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x192860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x192864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19286c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19286cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x192870: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x192870u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x192874: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x192874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192878: 0xc06479c  jal         func_191E70
    ctx->pc = 0x192878u;
    SET_GPR_U32(ctx, 31, 0x192880u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x192878u, 0x192880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192880u;
label_192880:
    // 0x192880: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192884: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192888: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x19288c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19288cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192890: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192890u;
    SET_GPR_U32(ctx, 31, 0x192898u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192890u, 0x192898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192898u;
label_192898:
    // 0x192898: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19289c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19289cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1928a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1928a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1928a4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1928a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1928a8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1928a8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1928ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1928acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1928b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1928b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1928b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1928b8: 0xc08c208  jal         func_230820
    ctx->pc = 0x1928B8u;
    SET_GPR_U32(ctx, 31, 0x1928C0u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1928B8u, 0x1928C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1928C0u;
label_1928c0:
    // 0x1928c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1928c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1928c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1928c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1928c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1928c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1928cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1928CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1928CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1928D4u;
    // 0x1928d4: 0x0  nop
    ctx->pc = 0x1928d4u;
    // NOP
    // 0x1928d8: 0x0  nop
    ctx->pc = 0x1928d8u;
    // NOP
    // 0x1928dc: 0x0  nop
    ctx->pc = 0x1928dcu;
    // NOP
    // 0x1928e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1928e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1928e4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1928e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1928e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1928E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1928E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1928F0u;
    // 0x1928f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1928f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1928f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1928f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1928f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1928F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1928F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192900u;
    // 0x192900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192904: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x192904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192908: 0x3e00008  jr          $ra
    ctx->pc = 0x192908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192910u;
    // 0x192910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192914: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x192914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192918: 0x3e00008  jr          $ra
    ctx->pc = 0x192918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192920u;
    // 0x192920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192924: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x192924u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192928: 0x3e00008  jr          $ra
    ctx->pc = 0x192928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192930u;
}
