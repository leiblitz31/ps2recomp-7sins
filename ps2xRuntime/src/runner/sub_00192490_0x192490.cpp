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

// Function: sub_00192490
// Address: 0x192490 - 0x1925c0
void sub_00192490_0x192490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192490_0x192490");
#endif

    switch (ctx->pc) {
        case 0x1924acu: goto label_1924ac;
        case 0x1924fcu: goto label_1924fc;
        case 0x192514u: goto label_192514;
        case 0x192574u: goto label_192574;
        case 0x192588u: goto label_192588;
        default: break;
    }

    ctx->pc = 0x192490u;

    // 0x192490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x192498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19249c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19249cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1924a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1924a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1924a4: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x1924A4u;
    SET_GPR_U32(ctx, 31, 0x1924ACu);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x1924A4u, 0x1924ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1924ACu;
label_1924ac:
    // 0x1924ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1924acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1924b0: 0x24634330  addiu       $v1, $v1, 0x4330
    ctx->pc = 0x1924b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17200));
    // 0x1924b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1924b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1924b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1924b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1924bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1924bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1924c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1924c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1924c4: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1924c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1924c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1924c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1924cc: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1924ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1924d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1924d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1924d4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1924d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1924d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1924d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1924dc: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1924dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1924e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1924e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1924e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1924e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1924e8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1924e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1924ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1924ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1924f0: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1924f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1924f4: 0xc056254  jal         func_158950
    ctx->pc = 0x1924F4u;
    SET_GPR_U32(ctx, 31, 0x1924FCu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1924F4u, 0x1924FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1924FCu;
label_1924fc:
    // 0x1924fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1924fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192500: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x192500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x192504: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192508: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x192508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x19250c: 0xc0495d4  jal         func_125750
    ctx->pc = 0x19250Cu;
    SET_GPR_U32(ctx, 31, 0x192514u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x19250Cu, 0x192514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192514u;
label_192514:
    // 0x192514: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x192514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192518: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x192518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19251c: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x19251cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x192520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x192524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192528: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x192528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x19252c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19252cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192530: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x192530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192534: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x192534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x192538: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x192538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x19253c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19253cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192540: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x192540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192544: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x192544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x192548: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x192548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19254c: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x19254cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x192550: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x192550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x192554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x192558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19255c: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x19255cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x192560: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x192560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x192564: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x192564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x192568: 0x24a55a30  addiu       $a1, $a1, 0x5A30
    ctx->pc = 0x192568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23088));
    // 0x19256c: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x19256Cu;
    SET_GPR_U32(ctx, 31, 0x192574u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x19256Cu, 0x192574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192574u;
label_192574:
    // 0x192574: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x192574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192578: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x192578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x19257c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19257cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192580: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x192580u;
    SET_GPR_U32(ctx, 31, 0x192588u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x192580u, 0x192588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192588u;
label_192588:
    // 0x192588: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x192588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19258c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192590: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x192590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x192594: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x192594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192598: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x192598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19259c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x19259cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1925a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1925a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1925a4: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x1925a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x1925a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1925a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1925ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1925acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1925b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1925b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1925b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1925B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1925B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1925BCu;
    // 0x1925bc: 0x0  nop
    ctx->pc = 0x1925bcu;
    // NOP
    ctx->pc = 0x1925c0u;
}
