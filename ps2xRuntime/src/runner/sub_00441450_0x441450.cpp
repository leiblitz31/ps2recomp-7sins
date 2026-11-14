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

// Function: sub_00441450
// Address: 0x441450 - 0x441688
void sub_00441450_0x441450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00441450_0x441450");
#endif

    switch (ctx->pc) {
        case 0x441498u: goto label_441498;
        case 0x441578u: goto label_441578;
        default: break;
    }

    ctx->pc = 0x441450u;

    // 0x441450: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x441450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x441454: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x441454u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x441458: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x441458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x44145c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x44145cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x441460: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x441460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441464: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x441464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x441468: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x441468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44146c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44146cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x441470: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x441470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441474: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x441474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x441478: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x441478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44147c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x44147cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x441480: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x441480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x441484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x441488: 0x11400039  beqz        $t2, . + 4 + (0x39 << 2)
    ctx->pc = 0x441488u;
    {
        const bool branch_taken_0x441488 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x44148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441488u;
        // 0x44148c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441488) {
            ctx->pc = 0x441570u;
            goto label_441570;
        }
    }
    ctx->pc = 0x441490u;
    // 0x441490: 0xc10a1e2  jal         func_428788
    ctx->pc = 0x441490u;
    SET_GPR_U32(ctx, 31, 0x441498u);
    ctx->pc = 0x441494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441490u;
    // 0x441494: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428788u, 0x441490u, 0x441498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441498u;
label_441498:
    // 0x441498: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x441498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44149c: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x44149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x4414a0: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x4414a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x4414a4: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x4414a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x4414a8: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x4414a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x4414ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4414acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4414b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4414b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4414b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4414b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4414b8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4414b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4414bc: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x4414bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x4414c0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x4414c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x4414c4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4414c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4414c8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4414c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4414cc: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x4414ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x4414d0: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x4414d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x4414d4: 0x24c64040  addiu       $a2, $a2, 0x4040
    ctx->pc = 0x4414d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16448));
    // 0x4414d8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4414d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4414dc: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x4414dcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x624070u));
    // 0x4414e0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4414e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4414e4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4414e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x4414e8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4414e8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x624040u));
    // 0x4414ec: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4414ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4414f0: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4414f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4414f4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4414f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x4414f8: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x4414f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x4414fc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x4414fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x441500: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x441500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x441504: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x441504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x441508: 0x32633fff  andi        $v1, $s3, 0x3FFF
    ctx->pc = 0x441508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16383);
    // 0x44150c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x44150cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x441510: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x441510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x441514: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x441514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x441518: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x441518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x44151c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x44151cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x441520: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x441520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x441524: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x441524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x441528: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x441528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x44152c: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x44152cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x441530: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x441530u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x441534: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x441534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x441538: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x441538u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x44153c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x44153cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x441540: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x441540u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x441544: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x441544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x441548: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x441548u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x44154c: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x44154cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x441550: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x441550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x441554: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x441554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x441558: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x441558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x44155c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x44155cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x441560: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x441560u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x441564: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x441564u;
    {
        const bool branch_taken_0x441564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x441568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441564u;
        // 0x441568: 0x7c820040  sq          $v0, 0x40($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441564) {
            ctx->pc = 0x441648u;
            goto label_441648;
        }
    }
    ctx->pc = 0x44156Cu;
    // 0x44156c: 0x0  nop
    ctx->pc = 0x44156cu;
    // NOP
label_441570:
    // 0x441570: 0xc10a1e2  jal         func_428788
    ctx->pc = 0x441570u;
    SET_GPR_U32(ctx, 31, 0x441578u);
    ctx->pc = 0x441574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441570u;
    // 0x441574: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428788u, 0x441570u, 0x441578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441578u;
label_441578:
    // 0x441578: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x441578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44157c: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x44157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x441580: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x441580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x441584: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x441584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x441588: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x441588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x44158c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x44158cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x441590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x441590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441594: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x441594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x441598: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x441598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x44159c: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x44159cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x4415a0: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x4415a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x4415a4: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4415a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4415a8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4415a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4415ac: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x4415acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x4415b0: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x4415b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x4415b4: 0x24c64040  addiu       $a2, $a2, 0x4040
    ctx->pc = 0x4415b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16448));
    // 0x4415b8: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x4415b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4415bc: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x4415bcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x624070u));
    // 0x4415c0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x4415c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x4415c4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4415c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x4415c8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x4415c8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x624040u));
    // 0x4415cc: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x4415ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x4415d0: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x4415d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4415d4: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x4415d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x4415d8: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x4415d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x4415dc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x4415dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x4415e0: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x4415e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
    // 0x4415e4: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x4415e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x4415e8: 0x32633fff  andi        $v1, $s3, 0x3FFF
    ctx->pc = 0x4415e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16383);
    // 0x4415ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4415ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4415f0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4415f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4415f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4415f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4415f8: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x4415f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x4415fc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4415fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x441600: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x441600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x441604: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x441604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x441608: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x441608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x44160c: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x44160cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x441610: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x441610u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x441614: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x441614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x441618: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x441618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x44161c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x44161cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x441620: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x441620u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x441624: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x441624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x441628: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x441628u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x44162c: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x44162cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x441630: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x441630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x441634: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x441634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x441638: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x441638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x44163c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x44163cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x441640: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x441640u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x441644: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x441644u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
label_441648:
    // 0x441648: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x441648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x44164c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x44164cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x441650: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x441650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x441654: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x441654u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x441658: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x441658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x44165c: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x44165cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x441660: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x441660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x441664: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x441664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x441668: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x441668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44166c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44166cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x441670: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x441670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x441674: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x441674u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x441678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x441678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44167c: 0x3e00008  jr          $ra
    ctx->pc = 0x44167Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x441680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44167Cu;
        // 0x441680: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44167Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x441684u;
    // 0x441684: 0x0  nop
    ctx->pc = 0x441684u;
    // NOP
    ctx->pc = 0x441688u;
}
