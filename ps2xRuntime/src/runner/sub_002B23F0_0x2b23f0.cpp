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

// Function: sub_002B23F0
// Address: 0x2b23f0 - 0x2b2a40
void sub_002B23F0_0x2b23f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B23F0_0x2b23f0");
#endif

    switch (ctx->pc) {
        case 0x2b2434u: goto label_2b2434;
        case 0x2b244cu: goto label_2b244c;
        case 0x2b245cu: goto label_2b245c;
        case 0x2b2470u: goto label_2b2470;
        case 0x2b2484u: goto label_2b2484;
        case 0x2b2498u: goto label_2b2498;
        case 0x2b24b0u: goto label_2b24b0;
        case 0x2b24ccu: goto label_2b24cc;
        case 0x2b2550u: goto label_2b2550;
        case 0x2b2578u: goto label_2b2578;
        case 0x2b2600u: goto label_2b2600;
        case 0x2b2640u: goto label_2b2640;
        case 0x2b2680u: goto label_2b2680;
        case 0x2b286cu: goto label_2b286c;
        case 0x2b29c8u: goto label_2b29c8;
        case 0x2b29d8u: goto label_2b29d8;
        case 0x2b29e8u: goto label_2b29e8;
        case 0x2b29f8u: goto label_2b29f8;
        case 0x2b2a08u: goto label_2b2a08;
        default: break;
    }

    ctx->pc = 0x2b23f0u;

    // 0x2b23f0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2b23f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2b23f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b23f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2b23f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b23f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2b23fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b23fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b2400: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b2400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b2404: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b2404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b2408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b240c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b2410: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x2b2410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x2b2414: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x2b2414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x2b2418: 0xe7ac0120  swc1        $f12, 0x120($sp)
    ctx->pc = 0x2b2418u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2b241c: 0xafa60130  sw          $a2, 0x130($sp)
    ctx->pc = 0x2b241cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 6));
    // 0x2b2420: 0x8fb00130  lw          $s0, 0x130($sp)
    ctx->pc = 0x2b2420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2b2424: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2b2424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2b2428: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b2428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b242c: 0xc106784  jal         func_419E10
    ctx->pc = 0x2B242Cu;
    SET_GPR_U32(ctx, 31, 0x2B2434u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x2B242Cu, 0x2B2434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2434u;
label_2b2434:
    // 0x2b2434: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b2434u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2438: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2b2438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b243c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2b243cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b2440: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2b2440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2444: 0xc104d84  jal         func_413610
    ctx->pc = 0x2B2444u;
    SET_GPR_U32(ctx, 31, 0x2B244Cu);
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x2B2444u, 0x2B244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B244Cu;
label_2b244c:
    // 0x2b244c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2b244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b2450: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2b2450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b2454: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B2454u;
    SET_GPR_U32(ctx, 31, 0x2B245Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B2454u, 0x2B245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B245Cu;
label_2b245c:
    // 0x2b245c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b2460: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b2460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b2464: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x2b2464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2b2468: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B2468u;
    SET_GPR_U32(ctx, 31, 0x2B2470u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B2468u, 0x2B2470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2470u;
label_2b2470:
    // 0x2b2470: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b2470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b2474: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x2b2474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2b2478: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x2b2478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2b247c: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B247Cu;
    SET_GPR_U32(ctx, 31, 0x2B2484u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B247Cu, 0x2B2484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2484u;
label_2b2484:
    // 0x2b2484: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b2484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b2488: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x2b2488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2b248c: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x2b248cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2b2490: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B2490u;
    SET_GPR_U32(ctx, 31, 0x2B2498u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B2490u, 0x2B2498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2498u;
label_2b2498:
    // 0x2b2498: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b2498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b249c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2b249cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b24a0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b24a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b24a4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2b24a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b24a8: 0xc104d74  jal         func_4135D0
    ctx->pc = 0x2B24A8u;
    SET_GPR_U32(ctx, 31, 0x2B24B0u);
    ctx->pc = 0x4135D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4135D0u, 0x2B24A8u, 0x2B24B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24B0u;
label_2b24b0:
    // 0x2b24b0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2b24b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b24b4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b24b8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2b24b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b24bc: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2b24bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2b24c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b24c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b24c4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2B24C4u;
    {
        const bool branch_taken_0x2b24c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b24c4) {
            ctx->pc = 0x2B2588u;
            goto label_2b2588;
        }
    }
    ctx->pc = 0x2B24CCu;
label_2b24cc:
    // 0x2b24cc: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2b24d0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2b24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2b24d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b24d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2b24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2b24dc: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2b24dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b24e0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b24e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b24e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b24e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b24e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b24e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b24ec: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2b24ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b24f0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b24f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2b24f4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2b24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2b24f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b24fc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2b24fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2b2500: 0xc4410074  lwc1        $f1, 0x74($v0)
    ctx->pc = 0x2b2500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2504: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b2504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b2508: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b2508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b250c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b250cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b2510: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2b2510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2b2514: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2b2514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x2b2518: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2b2518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2b251c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b251cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2520: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2b2520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2b2524: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x2b2524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2528: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b2528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b252c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b252cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2530: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b2530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b2534: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2b2534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2b2538: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b253c: 0x0  nop
    ctx->pc = 0x2b253cu;
    // NOP
    // 0x2b2540: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2b2540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2b2544: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2b2544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b2548: 0xc104d24  jal         func_413490
    ctx->pc = 0x2B2548u;
    SET_GPR_U32(ctx, 31, 0x2B2550u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2B2548u, 0x2B2550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2550u;
label_2b2550:
    // 0x2b2550: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2b2550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2b2554: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2b2554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2558: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2b2558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b255c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b255cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2560: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2560u;
    {
        const bool branch_taken_0x2b2560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2560) {
            ctx->pc = 0x2B2584u;
            goto label_2b2584;
        }
    }
    ctx->pc = 0x2B2568u;
    // 0x2b2568: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2b2568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b256c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2b256cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b2570: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B2570u;
    SET_GPR_U32(ctx, 31, 0x2B2578u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B2570u, 0x2B2578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2578u;
label_2b2578:
    // 0x2b2578: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2b2578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b257c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2b257cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2b2580: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x2b2580u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b2584:
    // 0x2b2584: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b2584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2b2588:
    // 0x2b2588: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x2b2588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b258c: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2B258Cu;
    {
        const bool branch_taken_0x2b258c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b258c) {
            ctx->pc = 0x2B24CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b24cc;
        }
    }
    ctx->pc = 0x2B2594u;
    // 0x2b2594: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b2594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b2598: 0x128200b4  beq         $s4, $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x2B2598u;
    {
        const bool branch_taken_0x2b2598 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b2598) {
            ctx->pc = 0x2B286Cu;
            goto label_2b286c;
        }
    }
    ctx->pc = 0x2B25A0u;
    // 0x2b25a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b25a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b25a4: 0x0  nop
    ctx->pc = 0x2b25a4u;
    // NOP
    // 0x2b25a8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2b25a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2b25ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b25acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b25b0: 0x0  nop
    ctx->pc = 0x2b25b0u;
    // NOP
    // 0x2b25b4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2b25b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2b25b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b25b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b25bc: 0x0  nop
    ctx->pc = 0x2b25bcu;
    // NOP
    // 0x2b25c0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2b25c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2b25c4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2b25c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b25c8: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2b25c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b25cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b25ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b25d0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2b25d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2b25d4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2b25d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b25d8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2b25d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b25dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b25dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b25e0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2b25e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2b25e4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2b25e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b25e8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2b25e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b25ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b25ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b25f0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2b25f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2b25f4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2b25f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b25f8: 0xc104d24  jal         func_413490
    ctx->pc = 0x2B25F8u;
    SET_GPR_U32(ctx, 31, 0x2B2600u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2B25F8u, 0x2B2600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2600u;
label_2b2600:
    // 0x2b2600: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2b2600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2b2604: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x2b2604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2608: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2b2608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b260c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b260cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b2610: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2b2610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2b2614: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x2b2614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2618: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x2b2618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b261c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b261cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b2620: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2b2620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2b2624: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2b2624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2628: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2b2628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b262c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b262cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b2630: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2b2630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2b2634: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2b2634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b2638: 0xc104d24  jal         func_413490
    ctx->pc = 0x2B2638u;
    SET_GPR_U32(ctx, 31, 0x2B2640u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2B2638u, 0x2B2640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2640u;
label_2b2640:
    // 0x2b2640: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2b2640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2b2644: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2b2644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2648: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2b2648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b264c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b264cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b2650: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2b2650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2b2654: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2b2654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2658: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x2b2658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b265c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b265cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b2660: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2b2660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2b2664: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2b2664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2668: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2b2668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b266c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b266cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b2670: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2b2670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2b2674: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2b2674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b2678: 0xc104d24  jal         func_413490
    ctx->pc = 0x2B2678u;
    SET_GPR_U32(ctx, 31, 0x2B2680u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2B2678u, 0x2B2680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2680u;
label_2b2680:
    // 0x2b2680: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2b2680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2b2684: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x2b2684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2688: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x2b2688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b268c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b268cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2690: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x2B2690u;
    {
        const bool branch_taken_0x2b2690 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2690) {
            ctx->pc = 0x2B26DCu;
            goto label_2b26dc;
        }
    }
    ctx->pc = 0x2B2698u;
    // 0x2b2698: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x2b2698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b269c: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2b269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b26a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b26a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b26a4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B26A4u;
    {
        const bool branch_taken_0x2b26a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b26a4) {
            ctx->pc = 0x2B26C4u;
            goto label_2b26c4;
        }
    }
    ctx->pc = 0x2B26ACu;
    // 0x2b26ac: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x2b26acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b26b0: 0x27b1007c  addiu       $s1, $sp, 0x7C
    ctx->pc = 0x2b26b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2b26b4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x2b26b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b26b8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2b26b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b26bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B26BCu;
    {
        const bool branch_taken_0x2b26bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b26bc) {
            ctx->pc = 0x2B2718u;
            goto label_2b2718;
        }
    }
    ctx->pc = 0x2B26C4u;
label_2b26c4:
    // 0x2b26c4: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x2b26c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b26c8: 0x27b10088  addiu       $s1, $sp, 0x88
    ctx->pc = 0x2b26c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2b26cc: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2b26ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b26d0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2b26d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b26d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B26D4u;
    {
        const bool branch_taken_0x2b26d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b26d4) {
            ctx->pc = 0x2B2718u;
            goto label_2b2718;
        }
    }
    ctx->pc = 0x2B26DCu;
label_2b26dc:
    // 0x2b26dc: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x2b26dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b26e0: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2b26e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b26e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b26e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b26e8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B26E8u;
    {
        const bool branch_taken_0x2b26e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b26e8) {
            ctx->pc = 0x2B2708u;
            goto label_2b2708;
        }
    }
    ctx->pc = 0x2B26F0u;
    // 0x2b26f0: 0x27b2007c  addiu       $s2, $sp, 0x7C
    ctx->pc = 0x2b26f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2b26f4: 0x27b10088  addiu       $s1, $sp, 0x88
    ctx->pc = 0x2b26f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2b26f8: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x2b26f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b26fc: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2b26fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2b2700: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2700u;
    {
        const bool branch_taken_0x2b2700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2700) {
            ctx->pc = 0x2B2718u;
            goto label_2b2718;
        }
    }
    ctx->pc = 0x2B2708u;
label_2b2708:
    // 0x2b2708: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x2b2708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b270c: 0x27b10088  addiu       $s1, $sp, 0x88
    ctx->pc = 0x2b270cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2b2710: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2b2710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2714: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2b2714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2b2718:
    // 0x2b2718: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2b2718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b271c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b271cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b2720: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b2720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2724: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b2724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b2728: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2b2728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2b272c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2b272cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2730: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b2730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b2734: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b2734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2738: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b2738u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b273c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2b273cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2b2740: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x2b2740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2744: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b2744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b2748: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b2748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b274c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b274cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b2750: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2b2750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2b2754: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x2b2754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b2758: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x2b2758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b275c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2b275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2760: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2b2760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2764: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2764u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b2768: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b276c: 0x0  nop
    ctx->pc = 0x2b276cu;
    // NOP
    // 0x2b2770: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b2770u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b2774: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2b2774u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2b2778: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2b2778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2b277c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2b277cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2780: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b2780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b2784: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b2784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2788: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b2788u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b278c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2b278cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2b2790: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2b2790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2794: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b2794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b2798: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b2798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b279c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b279cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b27a0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2b27a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2b27a4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2b27a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b27a8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b27ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b27acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b27b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2b27b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b27b4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2b27b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2b27b8: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x2b27b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b27bc: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x2b27bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b27c0: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2b27c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b27c4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2b27c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b27c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b27c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b27cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b27ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b27d0: 0x0  nop
    ctx->pc = 0x2b27d0u;
    // NOP
    // 0x2b27d4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b27d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b27d8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2b27d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2b27dc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2b27dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2b27e0: 0xc7a300f4  lwc1        $f3, 0xF4($sp)
    ctx->pc = 0x2b27e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b27e4: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x2b27e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b27e8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x2b27e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b27ec: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x2b27ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b27f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b27f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b27f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b27f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b27f8: 0x0  nop
    ctx->pc = 0x2b27f8u;
    // NOP
    // 0x2b27fc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b27fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b2800: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x2b2800u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2b2804: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2b2804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2b2808: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b2808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b280c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2b280cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2810: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b2810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b2814: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2b2814u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2b2818: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2b2818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2b281c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x2b281cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2824: 0x0  nop
    ctx->pc = 0x2b2824u;
    // NOP
    // 0x2b2828: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b2828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b282c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2B282Cu;
    {
        const bool branch_taken_0x2b282c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b282c) {
            ctx->pc = 0x2B2848u;
            goto label_2b2848;
        }
    }
    ctx->pc = 0x2B2834u;
    // 0x2b2834: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x2b2834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2838: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x2b2838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b283c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b283cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2840: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2B2840u;
    {
        const bool branch_taken_0x2b2840 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2840) {
            ctx->pc = 0x2B286Cu;
            goto label_2b286c;
        }
    }
    ctx->pc = 0x2B2848u;
label_2b2848:
    // 0x2b2848: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2b2848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b284c: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x2b284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2850: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2b2850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2854: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2b2854u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2b2858: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x2b2858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2b285c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x2b285cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b2860: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2b2860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2b2864: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x2B2864u;
    SET_GPR_U32(ctx, 31, 0x2B286Cu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2B2864u, 0x2B286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B286Cu;
label_2b286c:
    // 0x2b286c: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2b286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2870: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2874: 0x0  nop
    ctx->pc = 0x2b2874u;
    // NOP
    // 0x2b2878: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b2878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b287c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B287Cu;
    {
        const bool branch_taken_0x2b287c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b287c) {
            ctx->pc = 0x2B2890u;
            goto label_2b2890;
        }
    }
    ctx->pc = 0x2B2884u;
    // 0x2b2884: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b2884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b2888: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2B2888u;
    {
        const bool branch_taken_0x2b2888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2888) {
            ctx->pc = 0x2B2A0Cu;
            goto label_2b2a0c;
        }
    }
    ctx->pc = 0x2B2890u;
label_2b2890:
    // 0x2b2890: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2b2890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2894: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2b2894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2898: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b2898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b289c: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
    ctx->pc = 0x2B289Cu;
    {
        const bool branch_taken_0x2b289c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b289c) {
            ctx->pc = 0x2B2A08u;
            goto label_2b2a08;
        }
    }
    ctx->pc = 0x2B28A4u;
    // 0x2b28a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b28a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b28a8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b28ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b28acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b28b0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2b28b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b28b4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2B28B4u;
    {
        const bool branch_taken_0x2b28b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b28b4) {
            ctx->pc = 0x2B28E4u;
            goto label_2b28e4;
        }
    }
    ctx->pc = 0x2B28BCu;
    // 0x2b28bc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b28c0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b28c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b28c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b28c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b28c8: 0x0  nop
    ctx->pc = 0x2b28c8u;
    // NOP
    // 0x2b28cc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b28ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b28d0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B28D0u;
    {
        const bool branch_taken_0x2b28d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b28d0) {
            ctx->pc = 0x2B28E4u;
            goto label_2b28e4;
        }
    }
    ctx->pc = 0x2B28D8u;
    // 0x2b28d8: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b28dc: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2B28DCu;
    {
        const bool branch_taken_0x2b28dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b28dc) {
            ctx->pc = 0x2B2A0Cu;
            goto label_2b2a0c;
        }
    }
    ctx->pc = 0x2B28E4u;
label_2b28e4:
    // 0x2b28e4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b28e8: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x2b28e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b28ec: 0xc7a400d8  lwc1        $f4, 0xD8($sp)
    ctx->pc = 0x2b28ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b28f0: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x2b28f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b28f4: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b28f8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2b28f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b28fc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b28fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b2900: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2b2900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2904: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2b2904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2908: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2908u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b290c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b290cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2910: 0x0  nop
    ctx->pc = 0x2b2910u;
    // NOP
    // 0x2b2914: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b2914u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b2918: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x2b2918u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2b291c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b291cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2920: 0x0  nop
    ctx->pc = 0x2b2920u;
    // NOP
    // 0x2b2924: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b2924u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b2928: 0x4605205c  madd.s      $f1, $f4, $f5
    ctx->pc = 0x2b2928u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x2b292c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b292cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b2930: 0x0  nop
    ctx->pc = 0x2b2930u;
    // NOP
    // 0x2b2934: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b2934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2938: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2938u;
    {
        const bool branch_taken_0x2b2938 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2938) {
            ctx->pc = 0x2B294Cu;
            goto label_2b294c;
        }
    }
    ctx->pc = 0x2B2940u;
    // 0x2b2940: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b2940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b2944: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2B2944u;
    {
        const bool branch_taken_0x2b2944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2944) {
            ctx->pc = 0x2B2A0Cu;
            goto label_2b2a0c;
        }
    }
    ctx->pc = 0x2B294Cu;
label_2b294c:
    // 0x2b294c: 0xc6050044  lwc1        $f5, 0x44($s0)
    ctx->pc = 0x2b294cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b2950: 0xc7a400d8  lwc1        $f4, 0xD8($sp)
    ctx->pc = 0x2b2950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b2954: 0xc603003c  lwc1        $f3, 0x3C($s0)
    ctx->pc = 0x2b2954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b2958: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x2b2958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b295c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2b295cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2960: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x2b2960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2964: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b2964u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b2968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b296c: 0x0  nop
    ctx->pc = 0x2b296cu;
    // NOP
    // 0x2b2970: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b2970u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b2974: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x2b2974u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2b2978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b297c: 0x0  nop
    ctx->pc = 0x2b297cu;
    // NOP
    // 0x2b2980: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2b2980u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2b2984: 0x4605205c  madd.s      $f1, $f4, $f5
    ctx->pc = 0x2b2984u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x2b2988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b2988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b298c: 0x0  nop
    ctx->pc = 0x2b298cu;
    // NOP
    // 0x2b2990: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b2990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2994: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2994u;
    {
        const bool branch_taken_0x2b2994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2994) {
            ctx->pc = 0x2B29A8u;
            goto label_2b29a8;
        }
    }
    ctx->pc = 0x2B299Cu;
    // 0x2b299c: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b299cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b29a0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2B29A0u;
    {
        const bool branch_taken_0x2b29a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b29a0) {
            ctx->pc = 0x2B2A0Cu;
            goto label_2b2a0c;
        }
    }
    ctx->pc = 0x2B29A8u;
label_2b29a8:
    // 0x2b29a8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x2b29a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b29ac: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2b29acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2b29b0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2b29b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2b29b4: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2b29b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x2b29b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b29b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b29bc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x2b29bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b29c0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B29C0u;
    SET_GPR_U32(ctx, 31, 0x2B29C8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B29C0u, 0x2B29C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B29C8u;
label_2b29c8:
    // 0x2b29c8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2b29c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2b29cc: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x2b29ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2b29d0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B29D0u;
    SET_GPR_U32(ctx, 31, 0x2B29D8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B29D0u, 0x2B29D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B29D8u;
label_2b29d8:
    // 0x2b29d8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2b29d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2b29dc: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x2b29dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2b29e0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B29E0u;
    SET_GPR_U32(ctx, 31, 0x2B29E8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B29E0u, 0x2B29E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B29E8u;
label_2b29e8:
    // 0x2b29e8: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x2b29e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x2b29ec: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2b29ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b29f0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B29F0u;
    SET_GPR_U32(ctx, 31, 0x2B29F8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B29F0u, 0x2B29F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B29F8u;
label_2b29f8:
    // 0x2b29f8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2b29f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2b29fc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2b29fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2b2a00: 0xc041d58  jal         func_107560
    ctx->pc = 0x2B2A00u;
    SET_GPR_U32(ctx, 31, 0x2B2A08u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2B2A00u, 0x2B2A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2A08u;
label_2b2a08:
    // 0x2b2a08: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2b2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2b2a0c:
    // 0x2b2a0c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b2a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b2a10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b2a10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b2a14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b2a14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2a18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b2a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2a1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b2a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2a20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b2a20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2a24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b2a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2a28: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x2b2a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2b2a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2A34u;
    // 0x2b2a34: 0x0  nop
    ctx->pc = 0x2b2a34u;
    // NOP
    // 0x2b2a38: 0x0  nop
    ctx->pc = 0x2b2a38u;
    // NOP
    // 0x2b2a3c: 0x0  nop
    ctx->pc = 0x2b2a3cu;
    // NOP
    ctx->pc = 0x2b2a40u;
}
