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

// Function: sub_00235680
// Address: 0x235680 - 0x235760
void sub_00235680_0x235680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235680_0x235680");
#endif

    switch (ctx->pc) {
        case 0x235680u: goto label_235680;
        case 0x235684u: goto label_235684;
        case 0x235688u: goto label_235688;
        case 0x23568cu: goto label_23568c;
        case 0x235690u: goto label_235690;
        case 0x235694u: goto label_235694;
        case 0x235698u: goto label_235698;
        case 0x23569cu: goto label_23569c;
        case 0x2356a0u: goto label_2356a0;
        case 0x2356a4u: goto label_2356a4;
        case 0x2356a8u: goto label_2356a8;
        case 0x2356acu: goto label_2356ac;
        case 0x2356b0u: goto label_2356b0;
        case 0x2356b4u: goto label_2356b4;
        case 0x2356b8u: goto label_2356b8;
        case 0x2356bcu: goto label_2356bc;
        case 0x2356c0u: goto label_2356c0;
        case 0x2356c4u: goto label_2356c4;
        case 0x2356c8u: goto label_2356c8;
        case 0x2356ccu: goto label_2356cc;
        case 0x2356d0u: goto label_2356d0;
        case 0x2356d4u: goto label_2356d4;
        case 0x2356d8u: goto label_2356d8;
        case 0x2356dcu: goto label_2356dc;
        case 0x2356e0u: goto label_2356e0;
        case 0x2356e4u: goto label_2356e4;
        case 0x2356e8u: goto label_2356e8;
        case 0x2356ecu: goto label_2356ec;
        case 0x2356f0u: goto label_2356f0;
        case 0x2356f4u: goto label_2356f4;
        case 0x2356f8u: goto label_2356f8;
        case 0x2356fcu: goto label_2356fc;
        case 0x235700u: goto label_235700;
        case 0x235704u: goto label_235704;
        case 0x235708u: goto label_235708;
        case 0x23570cu: goto label_23570c;
        case 0x235710u: goto label_235710;
        case 0x235714u: goto label_235714;
        case 0x235718u: goto label_235718;
        case 0x23571cu: goto label_23571c;
        case 0x235720u: goto label_235720;
        case 0x235724u: goto label_235724;
        case 0x235728u: goto label_235728;
        case 0x23572cu: goto label_23572c;
        case 0x235730u: goto label_235730;
        case 0x235734u: goto label_235734;
        case 0x235738u: goto label_235738;
        case 0x23573cu: goto label_23573c;
        case 0x235740u: goto label_235740;
        case 0x235744u: goto label_235744;
        case 0x235748u: goto label_235748;
        case 0x23574cu: goto label_23574c;
        case 0x235750u: goto label_235750;
        case 0x235754u: goto label_235754;
        case 0x235758u: goto label_235758;
        case 0x23575cu: goto label_23575c;
        default: break;
    }

    ctx->pc = 0x235680u;

label_235680:
    // 0x235680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_235684:
    // 0x235684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235688:
    // 0x235688: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x235688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_23568c:
    // 0x23568c: 0x3c0242de  lui         $v0, 0x42DE
    ctx->pc = 0x23568cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17118 << 16));
label_235690:
    // 0x235690: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x235690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_235694:
    // 0x235694: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x235694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_235698:
    // 0x235698: 0x24050550  addiu       $a1, $zero, 0x550
    ctx->pc = 0x235698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1360));
label_23569c:
    // 0x23569c: 0xc042090  jal         func_108240
label_2356a0:
    if (ctx->pc == 0x2356A0u) {
        ctx->pc = 0x2356A4u;
        goto label_2356a4;
    }
    ctx->pc = 0x23569Cu;
    SET_GPR_U32(ctx, 31, 0x2356A4u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x23569Cu, 0x2356A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356A4u;
label_2356a4:
    // 0x2356a4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2356a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_2356a8:
    // 0x2356a8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2356a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2356ac:
    // 0x2356ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2356acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2356b0:
    // 0x2356b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2356b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2356b4:
    // 0x2356b4: 0x3e00008  jr          $ra
label_2356b8:
    if (ctx->pc == 0x2356B8u) {
        ctx->pc = 0x2356BCu;
        goto label_2356bc;
    }
    ctx->pc = 0x2356B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2356B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2356BCu;
label_2356bc:
    // 0x2356bc: 0x0  nop
    ctx->pc = 0x2356bcu;
    // NOP
label_2356c0:
    // 0x2356c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2356c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2356c4:
    // 0x2356c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2356c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2356c8:
    // 0x2356c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2356c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2356cc:
    // 0x2356cc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2356ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2356d0:
    // 0x2356d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2356d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2356d4:
    // 0x2356d4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2356d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2356d8:
    // 0x2356d8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2356d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2356dc:
    // 0x2356dc: 0xc08904c  jal         func_224130
label_2356e0:
    if (ctx->pc == 0x2356E0u) {
        ctx->pc = 0x2356E4u;
        goto label_2356e4;
    }
    ctx->pc = 0x2356DCu;
    SET_GPR_U32(ctx, 31, 0x2356E4u);
    ctx->pc = 0x224130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224130u, 0x2356DCu, 0x2356E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356E4u;
label_2356e4:
    // 0x2356e4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2356e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2356e8:
    // 0x2356e8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2356e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2356ec:
    // 0x2356ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2356ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2356f0:
    // 0x2356f0: 0xc08ec98  jal         func_23B260
label_2356f4:
    if (ctx->pc == 0x2356F4u) {
        ctx->pc = 0x2356F8u;
        goto label_2356f8;
    }
    ctx->pc = 0x2356F0u;
    SET_GPR_U32(ctx, 31, 0x2356F8u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x2356F0u, 0x2356F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356F8u;
label_2356f8:
    // 0x2356f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2356f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2356fc:
    // 0x2356fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2356fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_235700:
    // 0x235700: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x235700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_235704:
    // 0x235704: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x235704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_235708:
    // 0x235708: 0xc0422a8  jal         func_108AA0
label_23570c:
    if (ctx->pc == 0x23570Cu) {
        ctx->pc = 0x235710u;
        goto label_235710;
    }
    ctx->pc = 0x235708u;
    SET_GPR_U32(ctx, 31, 0x235710u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x235708u, 0x235710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235710u;
label_235710:
    // 0x235710: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x235710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_235714:
    // 0x235714: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x235714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_235718:
    // 0x235718: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x235718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_23571c:
    // 0x23571c: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x23571cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_235720:
    // 0x235720: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x235720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235724:
    // 0x235724: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x235724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_235728:
    // 0x235728: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x235728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23572c:
    // 0x23572c: 0x320f809  jalr        $t9
label_235730:
    if (ctx->pc == 0x235730u) {
        ctx->pc = 0x235734u;
        goto label_235734;
    }
    ctx->pc = 0x23572Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x235734u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23572Cu, 0x235734u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235734u;
label_235734:
    // 0x235734: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x235734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_235738:
    // 0x235738: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x235738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23573c:
    // 0x23573c: 0xc08ec98  jal         func_23B260
label_235740:
    if (ctx->pc == 0x235740u) {
        ctx->pc = 0x235744u;
        goto label_235744;
    }
    ctx->pc = 0x23573Cu;
    SET_GPR_U32(ctx, 31, 0x235744u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x23573Cu, 0x235744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235744u;
label_235744:
    // 0x235744: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235748:
    // 0x235748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23574c:
    // 0x23574c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23574cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_235750:
    // 0x235750: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x235750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_235754:
    // 0x235754: 0x3e00008  jr          $ra
label_235758:
    if (ctx->pc == 0x235758u) {
        ctx->pc = 0x23575Cu;
        goto label_23575c;
    }
    ctx->pc = 0x235754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23575Cu;
label_23575c:
    // 0x23575c: 0x0  nop
    ctx->pc = 0x23575cu;
    // NOP
    ctx->pc = 0x235760u;
}
