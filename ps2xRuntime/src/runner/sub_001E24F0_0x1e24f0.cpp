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

// Function: sub_001E24F0
// Address: 0x1e24f0 - 0x1e27a0
void sub_001E24F0_0x1e24f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E24F0_0x1e24f0");
#endif

    switch (ctx->pc) {
        case 0x1e2530u: goto label_1e2530;
        case 0x1e2540u: goto label_1e2540;
        case 0x1e2564u: goto label_1e2564;
        case 0x1e2578u: goto label_1e2578;
        case 0x1e2590u: goto label_1e2590;
        case 0x1e25b0u: goto label_1e25b0;
        case 0x1e25c0u: goto label_1e25c0;
        case 0x1e25d8u: goto label_1e25d8;
        case 0x1e25ecu: goto label_1e25ec;
        case 0x1e2600u: goto label_1e2600;
        case 0x1e2614u: goto label_1e2614;
        case 0x1e2628u: goto label_1e2628;
        case 0x1e263cu: goto label_1e263c;
        case 0x1e2654u: goto label_1e2654;
        case 0x1e2668u: goto label_1e2668;
        case 0x1e2678u: goto label_1e2678;
        case 0x1e2690u: goto label_1e2690;
        case 0x1e26a8u: goto label_1e26a8;
        case 0x1e26b8u: goto label_1e26b8;
        case 0x1e26d0u: goto label_1e26d0;
        case 0x1e26e0u: goto label_1e26e0;
        case 0x1e26f4u: goto label_1e26f4;
        case 0x1e2708u: goto label_1e2708;
        case 0x1e2720u: goto label_1e2720;
        case 0x1e2734u: goto label_1e2734;
        case 0x1e2740u: goto label_1e2740;
        case 0x1e2770u: goto label_1e2770;
        case 0x1e2780u: goto label_1e2780;
        default: break;
    }

    ctx->pc = 0x1e24f0u;

    // 0x1e24f0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1e24f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1e24f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e24f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e24f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e24f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e24fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e24fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e2500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2508: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x1e2508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x1e250c: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x1e250cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x1e2510: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x1e2510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x1e2514: 0xa3a70110  sb          $a3, 0x110($sp)
    ctx->pc = 0x1e2514u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 7));
    // 0x1e2518: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1e2518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e251c: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x1E251Cu;
    {
        const bool branch_taken_0x1e251c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e251c) {
            ctx->pc = 0x1E2780u;
            goto label_1e2780;
        }
    }
    ctx->pc = 0x1E2524u;
    // 0x1e2524: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1e2524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2528: 0xc078bc0  jal         func_1E2F00
    ctx->pc = 0x1E2528u;
    SET_GPR_U32(ctx, 31, 0x1E2530u);
    ctx->pc = 0x1E2F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2F00u, 0x1E2528u, 0x1E2530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2530u;
label_1e2530:
    // 0x1e2530: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e2530u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2534: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1e2534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2538: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E2538u;
    SET_GPR_U32(ctx, 31, 0x1E2540u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E2538u, 0x1E2540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2540u;
label_1e2540:
    // 0x1e2540: 0x2621823  subu        $v1, $s3, $v0
    ctx->pc = 0x1e2540u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e2544: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1e2544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e2548: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e2548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e254c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E254Cu;
    {
        const bool branch_taken_0x1e254c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e254c) {
            ctx->pc = 0x1E2608u;
            goto label_1e2608;
        }
    }
    ctx->pc = 0x1E2554u;
    // 0x1e2554: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1e2554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e2558: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1e2558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e255c: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E255Cu;
    SET_GPR_U32(ctx, 31, 0x1E2564u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E255Cu, 0x1E2564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2564u;
label_1e2564:
    // 0x1e2564: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e2564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2568: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1e2568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1e256c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x1e256cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2570: 0xc078c10  jal         func_1E3040
    ctx->pc = 0x1E2570u;
    SET_GPR_U32(ctx, 31, 0x1E2578u);
    ctx->pc = 0x1E3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3040u, 0x1E2570u, 0x1E2578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2578u;
label_1e2578:
    // 0x1e2578: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1e2578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e257c: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x1e257cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e2580: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1e2580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e2584: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x1e2584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e2588: 0xc07887c  jal         func_1E21F0
    ctx->pc = 0x1E2588u;
    SET_GPR_U32(ctx, 31, 0x1E2590u);
    ctx->pc = 0x1E21F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E21F0u, 0x1E2588u, 0x1E2590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2590u;
label_1e2590:
    // 0x1e2590: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1e2590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1e2594: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e2594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2598: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1e2598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1e259c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1e259cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e25a0: 0x27a800dc  addiu       $t0, $sp, 0xDC
    ctx->pc = 0x1e25a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x1e25a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e25a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25a8: 0xc078b74  jal         func_1E2DD0
    ctx->pc = 0x1E25A8u;
    SET_GPR_U32(ctx, 31, 0x1E25B0u);
    ctx->pc = 0x1E2DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2DD0u, 0x1E25A8u, 0x1E25B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E25B0u;
label_1e25b0:
    // 0x1e25b0: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1e25b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x1e25b4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1e25b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e25b8: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E25B8u;
    SET_GPR_U32(ctx, 31, 0x1E25C0u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E25B8u, 0x1E25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E25C0u;
label_1e25c0:
    // 0x1e25c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e25c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25c4: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x1e25c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e25c8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1e25c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e25cc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1e25ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e25d0: 0xc07887c  jal         func_1E21F0
    ctx->pc = 0x1E25D0u;
    SET_GPR_U32(ctx, 31, 0x1E25D8u);
    ctx->pc = 0x1E21F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E21F0u, 0x1E25D0u, 0x1E25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E25D8u;
label_1e25d8:
    // 0x1e25d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e25d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e25dc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e25dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1e25e0: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1e25e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e25e4: 0xc078b3c  jal         func_1E2CF0
    ctx->pc = 0x1E25E4u;
    SET_GPR_U32(ctx, 31, 0x1E25ECu);
    ctx->pc = 0x1E2CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2CF0u, 0x1E25E4u, 0x1E25ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E25ECu;
label_1e25ec:
    // 0x1e25ec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1e25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e25f0: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1e25f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e25f4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e25f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e25f8: 0xc078894  jal         func_1E2250
    ctx->pc = 0x1E25F8u;
    SET_GPR_U32(ctx, 31, 0x1E2600u);
    ctx->pc = 0x1E2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2250u, 0x1E25F8u, 0x1E2600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2600u;
label_1e2600:
    // 0x1e2600: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1E2600u;
    {
        const bool branch_taken_0x1e2600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2600) {
            ctx->pc = 0x1E2780u;
            goto label_1e2780;
        }
    }
    ctx->pc = 0x1E2608u;
label_1e2608:
    // 0x1e2608: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1e2608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e260c: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E260Cu;
    SET_GPR_U32(ctx, 31, 0x1E2614u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E260Cu, 0x1E2614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2614u;
label_1e2614:
    // 0x1e2614: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1e2614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x1e2618: 0x27b200d8  addiu       $s2, $sp, 0xD8
    ctx->pc = 0x1e2618u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1e261c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1e261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2620: 0xc077f2c  jal         func_1DFCB0
    ctx->pc = 0x1E2620u;
    SET_GPR_U32(ctx, 31, 0x1E2628u);
    ctx->pc = 0x1DFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCB0u, 0x1E2620u, 0x1E2628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2628u;
label_1e2628:
    // 0x1e2628: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e2628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e262c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e262cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2630: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1e2630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1e2634: 0xc041954  jal         func_106550
    ctx->pc = 0x1E2634u;
    SET_GPR_U32(ctx, 31, 0x1E263Cu);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1E2634u, 0x1E263Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E263Cu;
label_1e263c:
    // 0x1e263c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2640: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x1e2640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e2644: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1e2644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2648: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e2648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e264c: 0xc078b28  jal         func_1E2CA0
    ctx->pc = 0x1E264Cu;
    SET_GPR_U32(ctx, 31, 0x1E2654u);
    ctx->pc = 0x1E2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2CA0u, 0x1E264Cu, 0x1E2654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2654u;
label_1e2654:
    // 0x1e2654: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2658: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1e2658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e265c: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x1e265cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2660: 0xc0788e4  jal         func_1E2390
    ctx->pc = 0x1E2660u;
    SET_GPR_U32(ctx, 31, 0x1E2668u);
    ctx->pc = 0x1E2390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2390u, 0x1E2660u, 0x1E2668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2668u;
label_1e2668:
    // 0x1e2668: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1e2668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e266c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1e266cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e2670: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E2670u;
    SET_GPR_U32(ctx, 31, 0x1E2678u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E2670u, 0x1E2678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2678u;
label_1e2678:
    // 0x1e2678: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e2678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e267c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x1e267cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1e2680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e2680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2684: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2688: 0xc078b08  jal         func_1E2C20
    ctx->pc = 0x1E2688u;
    SET_GPR_U32(ctx, 31, 0x1E2690u);
    ctx->pc = 0x1E2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2C20u, 0x1E2688u, 0x1E2690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2690u;
label_1e2690:
    // 0x1e2690: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1e2690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e2694: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x1e2694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x1e2698: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e2698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e269c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1e269cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e26a0: 0xc078a50  jal         func_1E2940
    ctx->pc = 0x1E26A0u;
    SET_GPR_U32(ctx, 31, 0x1E26A8u);
    ctx->pc = 0x1E2940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2940u, 0x1E26A0u, 0x1E26A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E26A8u;
label_1e26a8:
    // 0x1e26a8: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1e26a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1e26ac: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e26acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e26b0: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E26B0u;
    SET_GPR_U32(ctx, 31, 0x1E26B8u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E26B0u, 0x1E26B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E26B8u;
label_1e26b8:
    // 0x1e26b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e26b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e26bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e26bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e26c0: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x1e26c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e26c4: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1e26c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e26c8: 0xc078a08  jal         func_1E2820
    ctx->pc = 0x1E26C8u;
    SET_GPR_U32(ctx, 31, 0x1E26D0u);
    ctx->pc = 0x1E2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2820u, 0x1E26C8u, 0x1E26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E26D0u;
label_1e26d0:
    // 0x1e26d0: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1e26d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e26d4: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1e26d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1e26d8: 0xc0788d4  jal         func_1E2350
    ctx->pc = 0x1E26D8u;
    SET_GPR_U32(ctx, 31, 0x1E26E0u);
    ctx->pc = 0x1E2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2350u, 0x1E26D8u, 0x1E26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E26E0u;
label_1e26e0:
    // 0x1e26e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e26e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e26e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e26e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e26e8: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x1e26e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e26ec: 0xc078c10  jal         func_1E3040
    ctx->pc = 0x1E26ECu;
    SET_GPR_U32(ctx, 31, 0x1E26F4u);
    ctx->pc = 0x1E3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3040u, 0x1E26ECu, 0x1E26F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E26F4u;
label_1e26f4:
    // 0x1e26f4: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x1e26f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1e26f8: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x1e26f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1e26fc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1e26fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e2700: 0xc07887c  jal         func_1E21F0
    ctx->pc = 0x1E2700u;
    SET_GPR_U32(ctx, 31, 0x1E2708u);
    ctx->pc = 0x1E21F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E21F0u, 0x1E2700u, 0x1E2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2708u;
label_1e2708:
    // 0x1e2708: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1e2708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e270c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e270cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2710: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1e2710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e2714: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x1e2714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1e2718: 0xc078a50  jal         func_1E2940
    ctx->pc = 0x1E2718u;
    SET_GPR_U32(ctx, 31, 0x1E2720u);
    ctx->pc = 0x1E2940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2940u, 0x1E2718u, 0x1E2720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2720u;
label_1e2720:
    // 0x1e2720: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1e2720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2724: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e2724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e2728: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e2728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e272c: 0xc0789e8  jal         func_1E27A0
    ctx->pc = 0x1E272Cu;
    SET_GPR_U32(ctx, 31, 0x1E2734u);
    ctx->pc = 0x1E27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27A0u, 0x1E272Cu, 0x1E2734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2734u;
label_1e2734:
    // 0x1e2734: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1e2734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2738: 0xc075888  jal         func_1D6220
    ctx->pc = 0x1E2738u;
    SET_GPR_U32(ctx, 31, 0x1E2740u);
    ctx->pc = 0x1D6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6220u, 0x1E2738u, 0x1E2740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2740u;
label_1e2740:
    // 0x1e2740: 0x2623001f  addiu       $v1, $s1, 0x1F
    ctx->pc = 0x1e2740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x1e2744: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1e2744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e2748: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x1e2748u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1e274c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e274cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e2750: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x1e2750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e2754: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1e2754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2758: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1e2758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1e275c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e275cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e2760: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e2760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2764: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e2764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2768: 0xc078b08  jal         func_1E2C20
    ctx->pc = 0x1E2768u;
    SET_GPR_U32(ctx, 31, 0x1E2770u);
    ctx->pc = 0x1E2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2C20u, 0x1E2768u, 0x1E2770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2770u;
label_1e2770:
    // 0x1e2770: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1e2770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1e2774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e2774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2778: 0xc0789e8  jal         func_1E27A0
    ctx->pc = 0x1E2778u;
    SET_GPR_U32(ctx, 31, 0x1E2780u);
    ctx->pc = 0x1E27A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E27A0u, 0x1E2778u, 0x1E2780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2780u;
label_1e2780:
    // 0x1e2780: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e2780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e2784: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e2784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2788: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e278c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e278cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2794: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x1e2794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e2798: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E27A0u;
}
