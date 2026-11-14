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

// Function: sub_00419510
// Address: 0x419510 - 0x4195e8
void sub_00419510_0x419510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419510_0x419510");
#endif

    switch (ctx->pc) {
        case 0x4195dcu: goto label_4195dc;
        default: break;
    }

    ctx->pc = 0x419510u;

    // 0x419510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x419510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x419514: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x419514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41951c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x41951cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x419520: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x419520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x419524: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x419524u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x419528: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x419528u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x41952c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x41952cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x419530: 0x24640090  addiu       $a0, $v1, 0x90
    ctx->pc = 0x419530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x419534: 0xac640094  sw          $a0, 0x94($v1)
    ctx->pc = 0x419534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 4));
    // 0x419538: 0xac640090  sw          $a0, 0x90($v1)
    ctx->pc = 0x419538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
    // 0x41953c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x41953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x419540: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x419540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x419544: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x419544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x419548: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x419548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x41954c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x41954cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x419550: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x419550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x419554: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x419554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x419558: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x419558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x41955c: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x41955cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x419560: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x419560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x419564: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x419564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x419568: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x419568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x41956c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x41956cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x419570: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x419570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x419574: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x419574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x419578: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x419578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x41957c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x41957cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x419580: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x419580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x419584: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x419584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
    // 0x419588: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x419588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x41958c: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x41958cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x419590: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x419590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x419594: 0xe4610050  swc1        $f1, 0x50($v1)
    ctx->pc = 0x419594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x419598: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x419598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x41959c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x41959cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x4195a0: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x4195a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x4195a4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x4195a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x4195a8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x4195a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x4195ac: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x4195acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x4195b0: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x4195b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x4195b4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x4195b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x4195b8: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x4195b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x4195bc: 0xac64005c  sw          $a0, 0x5C($v1)
    ctx->pc = 0x4195bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 4));
    // 0x4195c0: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x4195c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
    // 0x4195c4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x4195c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x4195c8: 0x2484c9c8  addiu       $a0, $a0, -0x3638
    ctx->pc = 0x4195c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953416));
    // 0x4195cc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4195ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4195d0: 0xac60009c  sw          $zero, 0x9C($v1)
    ctx->pc = 0x4195d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 0));
    // 0x4195d4: 0xc104c80  jal         func_413200
    ctx->pc = 0x4195D4u;
    SET_GPR_U32(ctx, 31, 0x4195DCu);
    ctx->pc = 0x4195D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4195D4u;
    // 0x4195d8: 0xac6300a0  sw          $v1, 0xA0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x4195D4u, 0x4195DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4195DCu;
label_4195dc:
    // 0x4195dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4195dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4195e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4195E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4195E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4195E0u;
        // 0x4195e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4195E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4195E8u;
}
