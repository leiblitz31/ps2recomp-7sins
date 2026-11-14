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

// Function: sub_002138B0
// Address: 0x2138b0 - 0x2139e0
void sub_002138B0_0x2138b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002138B0_0x2138b0");
#endif

    switch (ctx->pc) {
        case 0x213994u: goto label_213994;
        case 0x2139a8u: goto label_2139a8;
        default: break;
    }

    ctx->pc = 0x2138b0u;

    // 0x2138b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2138b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2138b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2138b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2138b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2138b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2138bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2138bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2138c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2138c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2138c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2138c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2138c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2138c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2138cc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2138ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2138d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2138d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2138d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2138d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2138d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2138d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2138dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2138dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2138e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2138e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2138e4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2138e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2138e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2138e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2138ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2138ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2138f0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2138f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2138f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2138f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2138f8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2138f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2138fc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2138fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x213900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213904: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213908: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x213908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x21390c: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x21390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x213910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213914: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213918: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x213918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x21391c: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x21391cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x213920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213924: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213928: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x213928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x21392c: 0xc7808318  lwc1        $f0, -0x7CE8($gp)
    ctx->pc = 0x21392cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213930: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213934: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x213934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x213938: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x213938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x21393c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21393cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213940: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213944: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x213944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x213948: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x213948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x21394c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21394cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213950: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213954: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x213954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x213958: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x213958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21395c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21395cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213960: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213964: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x213964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x213968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x213968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21396c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213970: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x213970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x213974: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213978: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x213978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x21397c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21397cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213980: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213984: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x213984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x213988: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x213988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x21398c: 0xc041d58  jal         func_107560
    ctx->pc = 0x21398Cu;
    SET_GPR_U32(ctx, 31, 0x213994u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x21398Cu, 0x213994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213994u;
label_213994:
    // 0x213994: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x213994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213998: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x213998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x21399c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x21399cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2139a0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2139A0u;
    SET_GPR_U32(ctx, 31, 0x2139A8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2139A0u, 0x2139A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2139A8u;
label_2139a8:
    // 0x2139a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2139a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2139ac: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2139acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2139b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2139b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2139b4: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2139b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2139b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2139b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2139bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2139bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2139c0: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2139c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2139c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2139c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2139c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2139c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2139cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2139ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2139d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2139D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2139D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2139D8u;
    // 0x2139d8: 0x0  nop
    ctx->pc = 0x2139d8u;
    // NOP
    // 0x2139dc: 0x0  nop
    ctx->pc = 0x2139dcu;
    // NOP
    ctx->pc = 0x2139e0u;
}
