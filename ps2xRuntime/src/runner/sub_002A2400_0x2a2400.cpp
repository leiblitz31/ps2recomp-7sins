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

// Function: sub_002A2400
// Address: 0x2a2400 - 0x2a2870
void sub_002A2400_0x2a2400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2400_0x2a2400");
#endif

    switch (ctx->pc) {
        case 0x2a241cu: goto label_2a241c;
        case 0x2a24acu: goto label_2a24ac;
        case 0x2a24ccu: goto label_2a24cc;
        case 0x2a2510u: goto label_2a2510;
        case 0x2a2538u: goto label_2a2538;
        case 0x2a2554u: goto label_2a2554;
        case 0x2a2564u: goto label_2a2564;
        case 0x2a257cu: goto label_2a257c;
        case 0x2a259cu: goto label_2a259c;
        case 0x2a25acu: goto label_2a25ac;
        case 0x2a25c4u: goto label_2a25c4;
        case 0x2a25d8u: goto label_2a25d8;
        case 0x2a2604u: goto label_2a2604;
        case 0x2a260cu: goto label_2a260c;
        case 0x2a2628u: goto label_2a2628;
        case 0x2a2638u: goto label_2a2638;
        case 0x2a2650u: goto label_2a2650;
        case 0x2a26e0u: goto label_2a26e0;
        case 0x2a26ecu: goto label_2a26ec;
        case 0x2a2700u: goto label_2a2700;
        case 0x2a2718u: goto label_2a2718;
        case 0x2a2738u: goto label_2a2738;
        case 0x2a2748u: goto label_2a2748;
        case 0x2a2764u: goto label_2a2764;
        case 0x2a2770u: goto label_2a2770;
        case 0x2a2780u: goto label_2a2780;
        case 0x2a2794u: goto label_2a2794;
        case 0x2a27b0u: goto label_2a27b0;
        case 0x2a27bcu: goto label_2a27bc;
        case 0x2a27ccu: goto label_2a27cc;
        case 0x2a2804u: goto label_2a2804;
        case 0x2a2810u: goto label_2a2810;
        case 0x2a2838u: goto label_2a2838;
        case 0x2a2844u: goto label_2a2844;
        default: break;
    }

    ctx->pc = 0x2a2400u;

    // 0x2a2400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a2404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a2408: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a2408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a240c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a240cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2410: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2a2410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2a2414: 0xc091174  jal         func_2445D0
    ctx->pc = 0x2A2414u;
    SET_GPR_U32(ctx, 31, 0x2A241Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x2A2414u, 0x2A241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A241Cu;
label_2a241c:
    // 0x2a241c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a241cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a2420: 0x24636290  addiu       $v1, $v1, 0x6290
    ctx->pc = 0x2a2420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25232));
    // 0x2a2424: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a2424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2428: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a2428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a242c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a242cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2430: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2a2430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2a2434: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a2434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2438: 0xa0400038  sb          $zero, 0x38($v0)
    ctx->pc = 0x2a2438u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a243c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a243cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2440: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a2440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2444: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2a2444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2a2448: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a244c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2450: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2a2450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2a2454: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a2454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a245c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a245cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a2460: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2468u;
    // 0x2a2468: 0x0  nop
    ctx->pc = 0x2a2468u;
    // NOP
    // 0x2a246c: 0x0  nop
    ctx->pc = 0x2a246cu;
    // NOP
    // 0x2a2470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a2474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a2478: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a2478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a247c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2a247cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2a2480: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a2480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2484: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A2484u;
    {
        const bool branch_taken_0x2a2484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2484) {
            ctx->pc = 0x2A24CCu;
            goto label_2a24cc;
        }
    }
    ctx->pc = 0x2A248Cu;
    // 0x2a248c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a248cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2a2490: 0x24636290  addiu       $v1, $v1, 0x6290
    ctx->pc = 0x2a2490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25232));
    // 0x2a2494: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a2494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2498: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a2498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a249c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a249cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a24a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a24a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a24a4: 0xc091188  jal         func_244620
    ctx->pc = 0x2A24A4u;
    SET_GPR_U32(ctx, 31, 0x2A24ACu);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x2A24A4u, 0x2A24ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A24ACu;
label_2a24ac:
    // 0x2a24ac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2a24acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a24b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a24b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a24b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a24b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a24b8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A24B8u;
    {
        const bool branch_taken_0x2a24b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a24b8) {
            ctx->pc = 0x2A24CCu;
            goto label_2a24cc;
        }
    }
    ctx->pc = 0x2A24C0u;
    // 0x2a24c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a24c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a24c4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2A24C4u;
    SET_GPR_U32(ctx, 31, 0x2A24CCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2A24C4u, 0x2A24CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A24CCu;
label_2a24cc:
    // 0x2a24cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a24d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a24d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a24d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a24d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a24d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A24D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A24D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A24E0u;
    // 0x2a24e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a24e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a24e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a24e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a24e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a24e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a24ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a24ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a24f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a24f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a24f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a24f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a24f8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2a24f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2a24fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a24fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a2500: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2a2500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a2504: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2504u;
    {
        const bool branch_taken_0x2a2504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2504) {
            ctx->pc = 0x2A252Cu;
            goto label_2a252c;
        }
    }
    ctx->pc = 0x2A250Cu;
    // 0x2a250c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x2a250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_2a2510:
    // 0x2a2510: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2a2510u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2514: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a2514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a2518: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2a2518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a251c: 0x0  nop
    ctx->pc = 0x2a251cu;
    // NOP
    // 0x2a2520: 0x0  nop
    ctx->pc = 0x2a2520u;
    // NOP
    // 0x2a2524: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A2524u;
    {
        const bool branch_taken_0x2a2524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2524) {
            ctx->pc = 0x2A2510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2510;
        }
    }
    ctx->pc = 0x2A252Cu;
label_2a252c:
    // 0x2a252c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2a252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a2530: 0xc0911a4  jal         func_244690
    ctx->pc = 0x2A2530u;
    SET_GPR_U32(ctx, 31, 0x2A2538u);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x2A2530u, 0x2A2538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2538u;
label_2a2538:
    // 0x2a2538: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2a2538u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a253c: 0x8f82bc40  lw          $v0, -0x43C0($gp)
    ctx->pc = 0x2a253cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a2540: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A2540u;
    {
        const bool branch_taken_0x2a2540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2540) {
            ctx->pc = 0x2A2584u;
            goto label_2a2584;
        }
    }
    ctx->pc = 0x2A2548u;
    // 0x2a2548: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2a2548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a254c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2A254Cu;
    SET_GPR_U32(ctx, 31, 0x2A2554u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2A254Cu, 0x2A2554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2554u;
label_2a2554:
    // 0x2a2554: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2a2554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a2558: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a2558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a255c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2A255Cu;
    SET_GPR_U32(ctx, 31, 0x2A2564u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2A255Cu, 0x2A2564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2564u;
label_2a2564:
    // 0x2a2564: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a2564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2568: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2568u;
    {
        const bool branch_taken_0x2a2568 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2568) {
            ctx->pc = 0x2A2580u;
            goto label_2a2580;
        }
    }
    ctx->pc = 0x2A2570u;
    // 0x2a2570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2574: 0xc040b6c  jal         func_102DB0
    ctx->pc = 0x2A2574u;
    SET_GPR_U32(ctx, 31, 0x2A257Cu);
    ctx->pc = 0x102DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102DB0u, 0x2A2574u, 0x2A257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A257Cu;
label_2a257c:
    // 0x2a257c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a257cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2580:
    // 0x2a2580: 0xaf91bc40  sw          $s1, -0x43C0($gp)
    ctx->pc = 0x2a2580u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949952), GPR_U32(ctx, 17));
label_2a2584:
    // 0x2a2584: 0x8f82bc44  lw          $v0, -0x43BC($gp)
    ctx->pc = 0x2a2584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a2588: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A2588u;
    {
        const bool branch_taken_0x2a2588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2588) {
            ctx->pc = 0x2A25CCu;
            goto label_2a25cc;
        }
    }
    ctx->pc = 0x2A2590u;
    // 0x2a2590: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2a2590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a2594: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2A2594u;
    SET_GPR_U32(ctx, 31, 0x2A259Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2A2594u, 0x2A259Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A259Cu;
label_2a259c:
    // 0x2a259c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2a259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a25a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a25a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25a4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2A25A4u;
    SET_GPR_U32(ctx, 31, 0x2A25ACu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2A25A4u, 0x2A25ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25ACu;
label_2a25ac:
    // 0x2a25ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a25acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25b0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A25B0u;
    {
        const bool branch_taken_0x2a25b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a25b0) {
            ctx->pc = 0x2A25C8u;
            goto label_2a25c8;
        }
    }
    ctx->pc = 0x2A25B8u;
    // 0x2a25b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a25b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a25bc: 0xc040b6c  jal         func_102DB0
    ctx->pc = 0x2A25BCu;
    SET_GPR_U32(ctx, 31, 0x2A25C4u);
    ctx->pc = 0x102DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102DB0u, 0x2A25BCu, 0x2A25C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25C4u;
label_2a25c4:
    // 0x2a25c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a25c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a25c8:
    // 0x2a25c8: 0xaf90bc44  sw          $s0, -0x43BC($gp)
    ctx->pc = 0x2a25c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949956), GPR_U32(ctx, 16));
label_2a25cc:
    // 0x2a25cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2a25ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a25d0: 0xc0a8b4c  jal         func_2A2D30
    ctx->pc = 0x2A25D0u;
    SET_GPR_U32(ctx, 31, 0x2A25D8u);
    ctx->pc = 0x2A2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D30u, 0x2A25D0u, 0x2A25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A25D8u;
label_2a25d8:
    // 0x2a25d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a25d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a25dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A25DCu;
    {
        const bool branch_taken_0x2a25dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a25dc) {
            ctx->pc = 0x2A2604u;
            goto label_2a2604;
        }
    }
    ctx->pc = 0x2A25E4u;
    // 0x2a25e4: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x2a25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2a25e8: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x2a25e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2a25ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a25ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a25f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A25F0u;
    {
        const bool branch_taken_0x2a25f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a25f0) {
            ctx->pc = 0x2A2604u;
            goto label_2a2604;
        }
    }
    ctx->pc = 0x2A25F8u;
    // 0x2a25f8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2a25f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a25fc: 0xc0a8a38  jal         func_2A28E0
    ctx->pc = 0x2A25FCu;
    SET_GPR_U32(ctx, 31, 0x2A2604u);
    ctx->pc = 0x2A28E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A28E0u, 0x2A25FCu, 0x2A2604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2604u;
label_2a2604:
    // 0x2a2604: 0xc122434  jal         func_4890D0
    ctx->pc = 0x2A2604u;
    SET_GPR_U32(ctx, 31, 0x2A260Cu);
    ctx->pc = 0x4890D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890D0u, 0x2A2604u, 0x2A260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A260Cu;
label_2a260c:
    // 0x2a260c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2a260cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2a2610: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2a2610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a2614: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2a2614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2a2618: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a2618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a261c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a261cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2620: 0xc11ebd4  jal         func_47AF50
    ctx->pc = 0x2A2620u;
    SET_GPR_U32(ctx, 31, 0x2A2628u);
    ctx->pc = 0x47AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AF50u, 0x2A2620u, 0x2A2628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2628u;
label_2a2628:
    // 0x2a2628: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a2628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a262c: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x2a262cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
    // 0x2a2630: 0xc122434  jal         func_4890D0
    ctx->pc = 0x2A2630u;
    SET_GPR_U32(ctx, 31, 0x2A2638u);
    ctx->pc = 0x4890D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890D0u, 0x2A2630u, 0x2A2638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2638u;
label_2a2638:
    // 0x2a2638: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a2638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a263c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a263cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2640: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x2a2640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a2644: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a2644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a2648: 0xc11eea4  jal         func_47BA90
    ctx->pc = 0x2A2648u;
    SET_GPR_U32(ctx, 31, 0x2A2650u);
    ctx->pc = 0x47BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BA90u, 0x2A2648u, 0x2A2650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2650u;
label_2a2650:
    // 0x2a2650: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a2650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a2654: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2a2654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2a2658: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2658u;
    {
        const bool branch_taken_0x2a2658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2658) {
            ctx->pc = 0x2A266Cu;
            goto label_2a266c;
        }
    }
    ctx->pc = 0x2A2660u;
    // 0x2a2660: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2a2660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a2664: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A2664u;
    {
        const bool branch_taken_0x2a2664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2664) {
            ctx->pc = 0x2A2670u;
            goto label_2a2670;
        }
    }
    ctx->pc = 0x2A266Cu;
label_2a266c:
    // 0x2a266c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a266cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2670:
    // 0x2a2670: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x2a2670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2a2674: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2a2674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x2a2678: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a2678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a267c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a267cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a2680: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a2680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a2684: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2a2684u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a2688: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2688u;
    {
        const bool branch_taken_0x2a2688 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2688) {
            ctx->pc = 0x2A269Cu;
            goto label_2a269c;
        }
    }
    ctx->pc = 0x2A2690u;
    // 0x2a2690: 0x8f82bc3c  lw          $v0, -0x43C4($gp)
    ctx->pc = 0x2a2690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949948)));
    // 0x2a2694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a2694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a2698: 0xaf82bc3c  sw          $v0, -0x43C4($gp)
    ctx->pc = 0x2a2698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949948), GPR_U32(ctx, 2));
label_2a269c:
    // 0x2a269c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2a269cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a26a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a26a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a26a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a26a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a26a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a26ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a26acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a26b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a26b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a26b4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2a26b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a26b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A26B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A26B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A26C0u;
    // 0x2a26c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a26c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a26c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a26c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a26c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a26c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a26cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a26ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a26d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2a26d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2a26d4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a26d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a26d8: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x2A26D8u;
    SET_GPR_U32(ctx, 31, 0x2A26E0u);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x2A26D8u, 0x2A26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26E0u;
label_2a26e0:
    // 0x2a26e0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2a26e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a26e4: 0xc122434  jal         func_4890D0
    ctx->pc = 0x2A26E4u;
    SET_GPR_U32(ctx, 31, 0x2A26ECu);
    ctx->pc = 0x4890D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890D0u, 0x2A26E4u, 0x2A26ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26ECu;
label_2a26ec:
    // 0x2a26ec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a26ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a26f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a26f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26f4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x2a26f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a26f8: 0xc11f0c8  jal         func_47C320
    ctx->pc = 0x2A26F8u;
    SET_GPR_U32(ctx, 31, 0x2A2700u);
    ctx->pc = 0x47C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C320u, 0x2A26F8u, 0x2A2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2700u;
label_2a2700:
    // 0x2a2700: 0x8f82bc3c  lw          $v0, -0x43C4($gp)
    ctx->pc = 0x2a2700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949948)));
    // 0x2a2704: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a2704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a2708: 0xaf82bc3c  sw          $v0, -0x43C4($gp)
    ctx->pc = 0x2a2708u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949948), GPR_U32(ctx, 2));
    // 0x2a270c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a270cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2710: 0xc0a8b4c  jal         func_2A2D30
    ctx->pc = 0x2A2710u;
    SET_GPR_U32(ctx, 31, 0x2A2718u);
    ctx->pc = 0x2A2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2D30u, 0x2A2710u, 0x2A2718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2718u;
label_2a2718:
    // 0x2a2718: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2A2718u;
    {
        const bool branch_taken_0x2a2718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2718) {
            ctx->pc = 0x2A27E0u;
            goto label_2a27e0;
        }
    }
    ctx->pc = 0x2A2720u;
    // 0x2a2720: 0x8f82bc3c  lw          $v0, -0x43C4($gp)
    ctx->pc = 0x2a2720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949948)));
    // 0x2a2724: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2A2724u;
    {
        const bool branch_taken_0x2a2724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2724) {
            ctx->pc = 0x2A27E0u;
            goto label_2a27e0;
        }
    }
    ctx->pc = 0x2A272Cu;
    // 0x2a272c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a272cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2730: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2A2730u;
    {
        const bool branch_taken_0x2a2730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2730) {
            ctx->pc = 0x2A27D4u;
            goto label_2a27d4;
        }
    }
    ctx->pc = 0x2A2738u;
label_2a2738:
    // 0x2a2738: 0x8f84bc40  lw          $a0, -0x43C0($gp)
    ctx->pc = 0x2a2738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a273c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a273cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2740: 0xc09fd2c  jal         func_27F4B0
    ctx->pc = 0x2A2740u;
    SET_GPR_U32(ctx, 31, 0x2A2748u);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x2A2740u, 0x2A2748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2748u;
label_2a2748:
    // 0x2a2748: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a2748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a274c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A274Cu;
    {
        const bool branch_taken_0x2a274c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a274c) {
            ctx->pc = 0x2A2784u;
            goto label_2a2784;
        }
    }
    ctx->pc = 0x2A2754u;
    // 0x2a2754: 0x8f84bc40  lw          $a0, -0x43C0($gp)
    ctx->pc = 0x2a2754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a2758: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a275c: 0xc09fd2c  jal         func_27F4B0
    ctx->pc = 0x2A275Cu;
    SET_GPR_U32(ctx, 31, 0x2A2764u);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x2A275Cu, 0x2A2764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2764u;
label_2a2764:
    // 0x2a2764: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a2764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2768: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x2A2768u;
    SET_GPR_U32(ctx, 31, 0x2A2770u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x2A2768u, 0x2A2770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2770u;
label_2a2770:
    // 0x2a2770: 0x8f84bc40  lw          $a0, -0x43C0($gp)
    ctx->pc = 0x2a2770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a2774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2778: 0xc09fd2c  jal         func_27F4B0
    ctx->pc = 0x2A2778u;
    SET_GPR_U32(ctx, 31, 0x2A2780u);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x2A2778u, 0x2A2780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2780u;
label_2a2780:
    // 0x2a2780: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a2780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2a2784:
    // 0x2a2784: 0x8f84bc44  lw          $a0, -0x43BC($gp)
    ctx->pc = 0x2a2784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a2788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a278c: 0xc09fd2c  jal         func_27F4B0
    ctx->pc = 0x2A278Cu;
    SET_GPR_U32(ctx, 31, 0x2A2794u);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x2A278Cu, 0x2A2794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2794u;
label_2a2794:
    // 0x2a2794: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a2794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a2798: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A2798u;
    {
        const bool branch_taken_0x2a2798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2798) {
            ctx->pc = 0x2A27D0u;
            goto label_2a27d0;
        }
    }
    ctx->pc = 0x2A27A0u;
    // 0x2a27a0: 0x8f84bc44  lw          $a0, -0x43BC($gp)
    ctx->pc = 0x2a27a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a27a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a27a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27a8: 0xc09fd2c  jal         func_27F4B0
    ctx->pc = 0x2A27A8u;
    SET_GPR_U32(ctx, 31, 0x2A27B0u);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x2A27A8u, 0x2A27B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A27B0u;
label_2a27b0:
    // 0x2a27b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a27b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a27b4: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x2A27B4u;
    SET_GPR_U32(ctx, 31, 0x2A27BCu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x2A27B4u, 0x2A27BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A27BCu;
label_2a27bc:
    // 0x2a27bc: 0x8f84bc44  lw          $a0, -0x43BC($gp)
    ctx->pc = 0x2a27bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a27c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a27c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27c4: 0xc09fd2c  jal         func_27F4B0
    ctx->pc = 0x2A27C4u;
    SET_GPR_U32(ctx, 31, 0x2A27CCu);
    ctx->pc = 0x27F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F4B0u, 0x2A27C4u, 0x2A27CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A27CCu;
label_2a27cc:
    // 0x2a27cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a27ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2a27d0:
    // 0x2a27d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a27d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a27d4:
    // 0x2a27d4: 0x2e02000c  sltiu       $v0, $s0, 0xC
    ctx->pc = 0x2a27d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2a27d8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2A27D8u;
    {
        const bool branch_taken_0x2a27d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a27d8) {
            ctx->pc = 0x2A2738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a2738;
        }
    }
    ctx->pc = 0x2A27E0u;
label_2a27e0:
    // 0x2a27e0: 0x8f82bc40  lw          $v0, -0x43C0($gp)
    ctx->pc = 0x2a27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a27e4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A27E4u;
    {
        const bool branch_taken_0x2a27e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a27e4) {
            ctx->pc = 0x2A2814u;
            goto label_2a2814;
        }
    }
    ctx->pc = 0x2A27ECu;
    // 0x2a27ec: 0x8f82bc40  lw          $v0, -0x43C0($gp)
    ctx->pc = 0x2a27ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a27f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A27F0u;
    {
        const bool branch_taken_0x2a27f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a27f0) {
            ctx->pc = 0x2A2814u;
            goto label_2a2814;
        }
    }
    ctx->pc = 0x2A27F8u;
    // 0x2a27f8: 0x8f84bc40  lw          $a0, -0x43C0($gp)
    ctx->pc = 0x2a27f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a27fc: 0xc0a8a1c  jal         func_2A2870
    ctx->pc = 0x2A27FCu;
    SET_GPR_U32(ctx, 31, 0x2A2804u);
    ctx->pc = 0x2A2870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2870u, 0x2A27FCu, 0x2A2804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2804u;
label_2a2804:
    // 0x2a2804: 0x8f84bc40  lw          $a0, -0x43C0($gp)
    ctx->pc = 0x2a2804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949952)));
    // 0x2a2808: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2A2808u;
    SET_GPR_U32(ctx, 31, 0x2A2810u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2A2808u, 0x2A2810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2810u;
label_2a2810:
    // 0x2a2810: 0xaf80bc40  sw          $zero, -0x43C0($gp)
    ctx->pc = 0x2a2810u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949952), GPR_U32(ctx, 0));
label_2a2814:
    // 0x2a2814: 0x8f82bc44  lw          $v0, -0x43BC($gp)
    ctx->pc = 0x2a2814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a2818: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A2818u;
    {
        const bool branch_taken_0x2a2818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2818) {
            ctx->pc = 0x2A2848u;
            goto label_2a2848;
        }
    }
    ctx->pc = 0x2A2820u;
    // 0x2a2820: 0x8f82bc44  lw          $v0, -0x43BC($gp)
    ctx->pc = 0x2a2820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a2824: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A2824u;
    {
        const bool branch_taken_0x2a2824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2824) {
            ctx->pc = 0x2A2848u;
            goto label_2a2848;
        }
    }
    ctx->pc = 0x2A282Cu;
    // 0x2a282c: 0x8f84bc44  lw          $a0, -0x43BC($gp)
    ctx->pc = 0x2a282cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a2830: 0xc0a8a1c  jal         func_2A2870
    ctx->pc = 0x2A2830u;
    SET_GPR_U32(ctx, 31, 0x2A2838u);
    ctx->pc = 0x2A2870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2870u, 0x2A2830u, 0x2A2838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2838u;
label_2a2838:
    // 0x2a2838: 0x8f84bc44  lw          $a0, -0x43BC($gp)
    ctx->pc = 0x2a2838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949956)));
    // 0x2a283c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2A283Cu;
    SET_GPR_U32(ctx, 31, 0x2A2844u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2A283Cu, 0x2A2844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2844u;
label_2a2844:
    // 0x2a2844: 0xaf80bc44  sw          $zero, -0x43BC($gp)
    ctx->pc = 0x2a2844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949956), GPR_U32(ctx, 0));
label_2a2848:
    // 0x2a2848: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a2848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a284c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a284cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2858: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a2858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a285c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A285Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A285Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2864u;
    // 0x2a2864: 0x0  nop
    ctx->pc = 0x2a2864u;
    // NOP
    // 0x2a2868: 0x0  nop
    ctx->pc = 0x2a2868u;
    // NOP
    // 0x2a286c: 0x0  nop
    ctx->pc = 0x2a286cu;
    // NOP
    ctx->pc = 0x2a2870u;
}
