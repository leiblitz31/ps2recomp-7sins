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

// Function: sub_00230820
// Address: 0x230820 - 0x230920
void sub_00230820_0x230820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230820_0x230820");
#endif

    switch (ctx->pc) {
        case 0x230820u: goto label_230820;
        case 0x230824u: goto label_230824;
        case 0x230828u: goto label_230828;
        case 0x23082cu: goto label_23082c;
        case 0x230830u: goto label_230830;
        case 0x230834u: goto label_230834;
        case 0x230838u: goto label_230838;
        case 0x23083cu: goto label_23083c;
        case 0x230840u: goto label_230840;
        case 0x230844u: goto label_230844;
        case 0x230848u: goto label_230848;
        case 0x23084cu: goto label_23084c;
        case 0x230850u: goto label_230850;
        case 0x230854u: goto label_230854;
        case 0x230858u: goto label_230858;
        case 0x23085cu: goto label_23085c;
        case 0x230860u: goto label_230860;
        case 0x230864u: goto label_230864;
        case 0x230868u: goto label_230868;
        case 0x23086cu: goto label_23086c;
        case 0x230870u: goto label_230870;
        case 0x230874u: goto label_230874;
        case 0x230878u: goto label_230878;
        case 0x23087cu: goto label_23087c;
        case 0x230880u: goto label_230880;
        case 0x230884u: goto label_230884;
        case 0x230888u: goto label_230888;
        case 0x23088cu: goto label_23088c;
        case 0x230890u: goto label_230890;
        case 0x230894u: goto label_230894;
        case 0x230898u: goto label_230898;
        case 0x23089cu: goto label_23089c;
        case 0x2308a0u: goto label_2308a0;
        case 0x2308a4u: goto label_2308a4;
        case 0x2308a8u: goto label_2308a8;
        case 0x2308acu: goto label_2308ac;
        case 0x2308b0u: goto label_2308b0;
        case 0x2308b4u: goto label_2308b4;
        case 0x2308b8u: goto label_2308b8;
        case 0x2308bcu: goto label_2308bc;
        case 0x2308c0u: goto label_2308c0;
        case 0x2308c4u: goto label_2308c4;
        case 0x2308c8u: goto label_2308c8;
        case 0x2308ccu: goto label_2308cc;
        case 0x2308d0u: goto label_2308d0;
        case 0x2308d4u: goto label_2308d4;
        case 0x2308d8u: goto label_2308d8;
        case 0x2308dcu: goto label_2308dc;
        case 0x2308e0u: goto label_2308e0;
        case 0x2308e4u: goto label_2308e4;
        case 0x2308e8u: goto label_2308e8;
        case 0x2308ecu: goto label_2308ec;
        case 0x2308f0u: goto label_2308f0;
        case 0x2308f4u: goto label_2308f4;
        case 0x2308f8u: goto label_2308f8;
        case 0x2308fcu: goto label_2308fc;
        case 0x230900u: goto label_230900;
        case 0x230904u: goto label_230904;
        case 0x230908u: goto label_230908;
        case 0x23090cu: goto label_23090c;
        case 0x230910u: goto label_230910;
        case 0x230914u: goto label_230914;
        case 0x230918u: goto label_230918;
        case 0x23091cu: goto label_23091c;
        default: break;
    }

    ctx->pc = 0x230820u;

label_230820:
    // 0x230820: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x230820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_230824:
    // 0x230824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_230828:
    // 0x230828: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x230828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23082c:
    // 0x23082c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23082cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_230830:
    // 0x230830: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x230830u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_230834:
    // 0x230834: 0xe7ad0040  swc1        $f13, 0x40($sp)
    ctx->pc = 0x230834u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_230838:
    // 0x230838: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x230838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_23083c:
    // 0x23083c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_230840:
    // 0x230840: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x230840u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_230844:
    // 0x230844: 0xc08c200  jal         func_230800
label_230848:
    if (ctx->pc == 0x230848u) {
        ctx->pc = 0x23084Cu;
        goto label_23084c;
    }
    ctx->pc = 0x230844u;
    SET_GPR_U32(ctx, 31, 0x23084Cu);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x230844u, 0x23084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23084Cu;
label_23084c:
    // 0x23084c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_230850:
    if (ctx->pc == 0x230850u) {
        ctx->pc = 0x230854u;
        goto label_230854;
    }
    ctx->pc = 0x23084Cu;
    {
        const bool branch_taken_0x23084c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23084c) {
            ctx->pc = 0x230860u;
            goto label_230860;
        }
    }
    ctx->pc = 0x230854u;
label_230854:
    // 0x230854: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x230854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_230858:
    // 0x230858: 0x1000002c  b           . + 4 + (0x2C << 2)
label_23085c:
    if (ctx->pc == 0x23085Cu) {
        ctx->pc = 0x230860u;
        goto label_230860;
    }
    ctx->pc = 0x230858u;
    {
        const bool branch_taken_0x230858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230858) {
            ctx->pc = 0x23090Cu;
            goto label_23090c;
        }
    }
    ctx->pc = 0x230860u;
label_230860:
    // 0x230860: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x230860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_230864:
    // 0x230864: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x230864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_230868:
    // 0x230868: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x230868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_23086c:
    // 0x23086c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_230870:
    if (ctx->pc == 0x230870u) {
        ctx->pc = 0x230874u;
        goto label_230874;
    }
    ctx->pc = 0x23086Cu;
    {
        const bool branch_taken_0x23086c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23086c) {
            ctx->pc = 0x2308C8u;
            goto label_2308c8;
        }
    }
    ctx->pc = 0x230874u;
label_230874:
    // 0x230874: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x230874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_230878:
    // 0x230878: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23087c:
    if (ctx->pc == 0x23087Cu) {
        ctx->pc = 0x230880u;
        goto label_230880;
    }
    ctx->pc = 0x230878u;
    {
        const bool branch_taken_0x230878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x230878) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x230880u;
label_230880:
    // 0x230880: 0x10000021  b           . + 4 + (0x21 << 2)
label_230884:
    if (ctx->pc == 0x230884u) {
        ctx->pc = 0x230888u;
        goto label_230888;
    }
    ctx->pc = 0x230880u;
    {
        const bool branch_taken_0x230880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230880) {
            ctx->pc = 0x230908u;
            goto label_230908;
        }
    }
    ctx->pc = 0x230888u;
label_230888:
    // 0x230888: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x230888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23088c:
    // 0x23088c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_230890:
    // 0x230890: 0x2445f000  addiu       $a1, $v0, -0x1000
    ctx->pc = 0x230890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_230894:
    // 0x230894: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x230894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_230898:
    // 0x230898: 0xc08c248  jal         func_230920
label_23089c:
    if (ctx->pc == 0x23089Cu) {
        ctx->pc = 0x2308A0u;
        goto label_2308a0;
    }
    ctx->pc = 0x230898u;
    SET_GPR_U32(ctx, 31, 0x2308A0u);
    ctx->pc = 0x230920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230920u, 0x230898u, 0x2308A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308A0u;
label_2308a0:
    // 0x2308a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2308a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2308a4:
    // 0x2308a4: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2308a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2308a8:
    // 0x2308a8: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x2308a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2308ac:
    // 0x2308ac: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2308acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2308b0:
    // 0x2308b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2308b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2308b4:
    // 0x2308b4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2308b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2308b8:
    // 0x2308b8: 0x320f809  jalr        $t9
label_2308bc:
    if (ctx->pc == 0x2308BCu) {
        ctx->pc = 0x2308C0u;
        goto label_2308c0;
    }
    ctx->pc = 0x2308B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2308C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2308B8u, 0x2308C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2308C0u;
label_2308c0:
    // 0x2308c0: 0x10000012  b           . + 4 + (0x12 << 2)
label_2308c4:
    if (ctx->pc == 0x2308C4u) {
        ctx->pc = 0x2308C8u;
        goto label_2308c8;
    }
    ctx->pc = 0x2308C0u;
    {
        const bool branch_taken_0x2308c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2308c0) {
            ctx->pc = 0x23090Cu;
            goto label_23090c;
        }
    }
    ctx->pc = 0x2308C8u;
label_2308c8:
    // 0x2308c8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2308c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2308cc:
    // 0x2308cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2308ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2308d0:
    // 0x2308d0: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x2308d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_2308d4:
    // 0x2308d4: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x2308d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_2308d8:
    // 0x2308d8: 0xc08c1f0  jal         func_2307C0
label_2308dc:
    if (ctx->pc == 0x2308DCu) {
        ctx->pc = 0x2308E0u;
        goto label_2308e0;
    }
    ctx->pc = 0x2308D8u;
    SET_GPR_U32(ctx, 31, 0x2308E0u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x2308D8u, 0x2308E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308E0u;
label_2308e0:
    // 0x2308e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2308e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2308e4:
    // 0x2308e4: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2308e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2308e8:
    // 0x2308e8: 0xc7ad0040  lwc1        $f13, 0x40($sp)
    ctx->pc = 0x2308e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2308ec:
    // 0x2308ec: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2308ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2308f0:
    // 0x2308f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2308f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2308f4:
    // 0x2308f4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2308f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2308f8:
    // 0x2308f8: 0x320f809  jalr        $t9
label_2308fc:
    if (ctx->pc == 0x2308FCu) {
        ctx->pc = 0x230900u;
        goto label_230900;
    }
    ctx->pc = 0x2308F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230900u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2308F8u, 0x230900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230900u;
label_230900:
    // 0x230900: 0x10000002  b           . + 4 + (0x2 << 2)
label_230904:
    if (ctx->pc == 0x230904u) {
        ctx->pc = 0x230908u;
        goto label_230908;
    }
    ctx->pc = 0x230900u;
    {
        const bool branch_taken_0x230900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230900) {
            ctx->pc = 0x23090Cu;
            goto label_23090c;
        }
    }
    ctx->pc = 0x230908u;
label_230908:
    // 0x230908: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x230908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23090c:
    // 0x23090c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23090cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_230910:
    // 0x230910: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x230910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_230914:
    // 0x230914: 0x3e00008  jr          $ra
label_230918:
    if (ctx->pc == 0x230918u) {
        ctx->pc = 0x23091Cu;
        goto label_23091c;
    }
    ctx->pc = 0x230914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23091Cu;
label_23091c:
    // 0x23091c: 0x0  nop
    ctx->pc = 0x23091cu;
    // NOP
    ctx->pc = 0x230920u;
}
