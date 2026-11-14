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

// Function: sub_003F2538
// Address: 0x3f2538 - 0x3f2788
void sub_003F2538_0x3f2538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2538_0x3f2538");
#endif

    switch (ctx->pc) {
        case 0x3f2590u: goto label_3f2590;
        case 0x3f25a8u: goto label_3f25a8;
        case 0x3f25ccu: goto label_3f25cc;
        case 0x3f25e0u: goto label_3f25e0;
        case 0x3f25e8u: goto label_3f25e8;
        case 0x3f2630u: goto label_3f2630;
        case 0x3f2644u: goto label_3f2644;
        case 0x3f2720u: goto label_3f2720;
        case 0x3f2754u: goto label_3f2754;
        default: break;
    }

    ctx->pc = 0x3f2538u;

    // 0x3f2538: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3f2538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3f253c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3f253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3f2540: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3f2540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3f2544: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f2544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2548: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3f2548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3f254c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f254cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2550: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3f2550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3f2554: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3f2554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3f2558: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3f2558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3f255c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3f255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3f2560: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3f2560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3f2564: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3f2564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3f2568: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f2568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f256c: 0xde2200f8  ld          $v0, 0xF8($s1)
    ctx->pc = 0x3f256cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x3f2570: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f2570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f2574: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3f2574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3f2578: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3f2578u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3f257c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F257Cu;
    {
        const bool branch_taken_0x3f257c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F257Cu;
        // 0x3f2580: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f257c) {
            ctx->pc = 0x3F2590u;
            goto label_3f2590;
        }
    }
    ctx->pc = 0x3F2584u;
    // 0x3f2584: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f2584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f2588: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F2588u;
    SET_GPR_U32(ctx, 31, 0x3F2590u);
    ctx->pc = 0x3F258Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2588u;
    // 0x3f258c: 0x24a5eab0  addiu       $a1, $a1, -0x1550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F2588u, 0x3F2590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2590u;
label_3f2590:
    // 0x3f2590: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3f2590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3f2594: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F2594u;
    {
        const bool branch_taken_0x3f2594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F2598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2594u;
        // 0x3f2598: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2594) {
            ctx->pc = 0x3F25A8u;
            goto label_3f25a8;
        }
    }
    ctx->pc = 0x3F259Cu;
    // 0x3f259c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f259cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f25a0: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F25A0u;
    SET_GPR_U32(ctx, 31, 0x3F25A8u);
    ctx->pc = 0x3F25A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F25A0u;
    // 0x3f25a4: 0x24a5eac8  addiu       $a1, $a1, -0x1538 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F25A0u, 0x3F25A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F25A8u;
label_3f25a8:
    // 0x3f25a8: 0xde2200f8  ld          $v0, 0xF8($s1)
    ctx->pc = 0x3f25a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x3f25ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f25acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f25b0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3f25b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f25b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f25b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f25b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f25b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f25bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f25bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f25c0: 0xfe2200f8  sd          $v0, 0xF8($s1)
    ctx->pc = 0x3f25c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 248), GPR_U64(ctx, 2));
    // 0x3f25c4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F25C4u;
    SET_GPR_U32(ctx, 31, 0x3F25CCu);
    ctx->pc = 0x3F25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F25C4u;
    // 0x3f25c8: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F25C4u, 0x3F25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F25CCu;
label_3f25cc:
    // 0x3f25cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3f25ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f25d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f25d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f25d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f25d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f25d8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F25D8u;
    SET_GPR_U32(ctx, 31, 0x3F25E0u);
    ctx->pc = 0x3F25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F25D8u;
    // 0x3f25dc: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F25D8u, 0x3F25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F25E0u;
label_3f25e0:
    // 0x3f25e0: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F25E0u;
    SET_GPR_U32(ctx, 31, 0x3F25E8u);
    ctx->pc = 0x3F25E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F25E0u;
    // 0x3f25e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F25E0u, 0x3F25E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F25E8u;
label_3f25e8:
    // 0x3f25e8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F25E8u;
    {
        const bool branch_taken_0x3f25e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f25e8) {
            ctx->pc = 0x3F25ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F25E8u;
            // 0x3f25ec: 0x92450001  lbu         $a1, 0x1($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2648u;
            goto label_3f2648;
        }
    }
    ctx->pc = 0x3F25F0u;
    // 0x3f25f0: 0x92220200  lbu         $v0, 0x200($s1)
    ctx->pc = 0x3f25f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x3f25f4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f25f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f25f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F25F8u;
    {
        const bool branch_taken_0x3f25f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F25F8u;
        // 0x3f25fc: 0xde220100  ld          $v0, 0x100($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f25f8) {
            ctx->pc = 0x3F2618u;
            goto label_3f2618;
        }
    }
    ctx->pc = 0x3F2600u;
    // 0x3f2600: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f2600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f2604: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F2604u;
    {
        const bool branch_taken_0x3f2604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2604u;
        // 0x3f2608: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2604) {
            ctx->pc = 0x3F2624u;
            goto label_3f2624;
        }
    }
    ctx->pc = 0x3F260Cu;
    // 0x3f260c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F260Cu;
    {
        const bool branch_taken_0x3f260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F260Cu;
        // 0x3f2610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f260c) {
            ctx->pc = 0x3F263Cu;
            goto label_3f263c;
        }
    }
    ctx->pc = 0x3F2614u;
    // 0x3f2614: 0x0  nop
    ctx->pc = 0x3f2614u;
    // NOP
label_3f2618:
    // 0x3f2618: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f2618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f261c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F261Cu;
    {
        const bool branch_taken_0x3f261c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F261Cu;
        // 0x3f2620: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f261c) {
            ctx->pc = 0x3F2638u;
            goto label_3f2638;
        }
    }
    ctx->pc = 0x3F2624u;
label_3f2624:
    // 0x3f2624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2628: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F2628u;
    SET_GPR_U32(ctx, 31, 0x3F2630u);
    ctx->pc = 0x3F262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2628u;
    // 0x3f262c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F2628u, 0x3F2630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2630u;
label_3f2630:
    // 0x3f2630: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F2630u;
    {
        const bool branch_taken_0x3f2630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2630u;
        // 0x3f2634: 0x92450001  lbu         $a1, 0x1($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2630) {
            ctx->pc = 0x3F2648u;
            goto label_3f2648;
        }
    }
    ctx->pc = 0x3F2638u;
label_3f2638:
    // 0x3f2638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f2638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f263c:
    // 0x3f263c: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F263Cu;
    SET_GPR_U32(ctx, 31, 0x3F2644u);
    ctx->pc = 0x3F2640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F263Cu;
    // 0x3f2640: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F263Cu, 0x3F2644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2644u;
label_3f2644:
    // 0x3f2644: 0x92450001  lbu         $a1, 0x1($s2)
    ctx->pc = 0x3f2644u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_3f2648:
    // 0x3f2648: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3f2648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f264c: 0x93a30014  lbu         $v1, 0x14($sp)
    ctx->pc = 0x3f264cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3f2650: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3f2650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3f2654: 0x93a40015  lbu         $a0, 0x15($sp)
    ctx->pc = 0x3f2654u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x3f2658: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f2658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f265c: 0x93b60019  lbu         $s6, 0x19($sp)
    ctx->pc = 0x3f265cu;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 25)));
    // 0x3f2660: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x3f2660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x3f2664: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x3f2664u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x3f2668: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3f2668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3f266c: 0x93a70016  lbu         $a3, 0x16($sp)
    ctx->pc = 0x3f266cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 22)));
    // 0x3f2670: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x3f2670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f2674: 0xa236020a  sb          $s6, 0x20A($s1)
    ctx->pc = 0x3f2674u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 522), (uint8_t)GPR_U32(ctx, 22));
    // 0x3f2678: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x3f2678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3f267c: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x3f267cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x3f2680: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x3f2680u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x3f2684: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x3f2684u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3f2688: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x3f2688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3f268c: 0x93a40017  lbu         $a0, 0x17($sp)
    ctx->pc = 0x3f268cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 23)));
    // 0x3f2690: 0x67182d  daddu       $v1, $v1, $a3
    ctx->pc = 0x3f2690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
    // 0x3f2694: 0x93b00018  lbu         $s0, 0x18($sp)
    ctx->pc = 0x3f2694u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3f2698: 0x45982d  daddu       $s3, $v0, $a1
    ctx->pc = 0x3f2698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f269c: 0x93b4001c  lbu         $s4, 0x1C($sp)
    ctx->pc = 0x3f269cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3f26a0: 0x32c800ff  andi        $t0, $s6, 0xFF
    ctx->pc = 0x3f26a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x3f26a4: 0x93b7001a  lbu         $s7, 0x1A($sp)
    ctx->pc = 0x3f26a4u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 26)));
    // 0x3f26a8: 0x64902d  daddu       $s2, $v1, $a0
    ctx->pc = 0x3f26a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3f26ac: 0x93b5001b  lbu         $s5, 0x1B($sp)
    ctx->pc = 0x3f26acu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 27)));
    // 0x3f26b0: 0x2d020007  sltiu       $v0, $t0, 0x7
    ctx->pc = 0x3f26b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3f26b4: 0xfe330178  sd          $s3, 0x178($s1)
    ctx->pc = 0x3f26b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 376), GPR_U64(ctx, 19));
    // 0x3f26b8: 0xfe320180  sd          $s2, 0x180($s1)
    ctx->pc = 0x3f26b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 384), GPR_U64(ctx, 18));
    // 0x3f26bc: 0xa230020b  sb          $s0, 0x20B($s1)
    ctx->pc = 0x3f26bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 523), (uint8_t)GPR_U32(ctx, 16));
    // 0x3f26c0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F26C0u;
    {
        const bool branch_taken_0x3f26c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F26C0u;
        // 0x3f26c4: 0xa2340207  sb          $s4, 0x207($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 519), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f26c0) {
            ctx->pc = 0x3F2704u;
            goto label_3f2704;
        }
    }
    ctx->pc = 0x3F26C8u;
    // 0x3f26c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3f26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3f26cc: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x3f26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3f26d0: 0x2442eae0  addiu       $v0, $v0, -0x1520
    ctx->pc = 0x3f26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961888));
    // 0x3f26d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3f26d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3f26d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3f26d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f26dc: 0x800008  jr          $a0
    ctx->pc = 0x3F26DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F26E4u: goto label_3f26e4;
            case 0x3F26ECu: goto label_3f26ec;
            case 0x3F26F4u: goto label_3f26f4;
            case 0x3F26FCu: goto label_3f26fc;
            case 0x3F2704u: goto label_3f2704;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F26DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3F26E4u;
label_3f26e4:
    // 0x3f26e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3F26E4u;
    {
        const bool branch_taken_0x3f26e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F26E4u;
        // 0x3f26e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f26e4) {
            ctx->pc = 0x3F2700u;
            goto label_3f2700;
        }
    }
    ctx->pc = 0x3F26ECu;
label_3f26ec:
    // 0x3f26ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F26ECu;
    {
        const bool branch_taken_0x3f26ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F26F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F26ECu;
        // 0x3f26f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f26ec) {
            ctx->pc = 0x3F2700u;
            goto label_3f2700;
        }
    }
    ctx->pc = 0x3F26F4u;
label_3f26f4:
    // 0x3f26f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3F26F4u;
    {
        const bool branch_taken_0x3f26f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F26F4u;
        // 0x3f26f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f26f4) {
            ctx->pc = 0x3F2700u;
            goto label_3f2700;
        }
    }
    ctx->pc = 0x3F26FCu;
label_3f26fc:
    // 0x3f26fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f2700:
    // 0x3f2700: 0xa222020e  sb          $v0, 0x20E($s1)
    ctx->pc = 0x3f2700u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 526), (uint8_t)GPR_U32(ctx, 2));
label_3f2704:
    // 0x3f2704: 0x9223020e  lbu         $v1, 0x20E($s1)
    ctx->pc = 0x3f2704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 526)));
    // 0x3f2708: 0x9222020b  lbu         $v0, 0x20B($s1)
    ctx->pc = 0x3f2708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 523)));
    // 0x3f270c: 0xde240178  ld          $a0, 0x178($s1)
    ctx->pc = 0x3f270cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x3f2710: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3f2710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3f2714: 0xa222020d  sb          $v0, 0x20D($s1)
    ctx->pc = 0x3f2714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 525), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f2718: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3F2718u;
    SET_GPR_U32(ctx, 31, 0x3F2720u);
    ctx->pc = 0x3F271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2718u;
    // 0x3f271c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3F2718u, 0x3F2720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2720u;
label_3f2720:
    // 0x3f2720: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3f2720u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3f2724: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x3f2724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x3f2728: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3f2728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3f272c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f272cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2730: 0xfe220198  sd          $v0, 0x198($s1)
    ctx->pc = 0x3f2730u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 408), GPR_U64(ctx, 2));
    // 0x3f2734: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3f2734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2738: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f2738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f273c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3f273cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2740: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3f2740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2744: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3f2744u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2748: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x3f2748u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f274c: 0xc0fe8c0  jal         func_3FA300
    ctx->pc = 0x3F274Cu;
    SET_GPR_U32(ctx, 31, 0x3F2754u);
    ctx->pc = 0x3F2750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F274Cu;
    // 0x3f2750: 0x2e0582d  daddu       $t3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FA300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FA300u, 0x3F274Cu, 0x3F2754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2754u;
label_3f2754:
    // 0x3f2754: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3f2754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3f2758: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3f2758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3f275c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3f275cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3f2760: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3f2760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f2764: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3f2764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f2768: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3f2768u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f276c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3f276cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f2770: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3f2770u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f2774: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3f2774u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f2778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f2778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f277c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F277Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F277Cu;
        // 0x3f2780: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F277Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2784u;
    // 0x3f2784: 0x0  nop
    ctx->pc = 0x3f2784u;
    // NOP
    ctx->pc = 0x3f2788u;
}
