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

// Function: sub_00172640
// Address: 0x172640 - 0x172790
void sub_00172640_0x172640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172640_0x172640");
#endif

    switch (ctx->pc) {
        case 0x172640u: goto label_172640;
        case 0x172644u: goto label_172644;
        case 0x172648u: goto label_172648;
        case 0x17264cu: goto label_17264c;
        case 0x172650u: goto label_172650;
        case 0x172654u: goto label_172654;
        case 0x172658u: goto label_172658;
        case 0x17265cu: goto label_17265c;
        case 0x172660u: goto label_172660;
        case 0x172664u: goto label_172664;
        case 0x172668u: goto label_172668;
        case 0x17266cu: goto label_17266c;
        case 0x172670u: goto label_172670;
        case 0x172674u: goto label_172674;
        case 0x172678u: goto label_172678;
        case 0x17267cu: goto label_17267c;
        case 0x172680u: goto label_172680;
        case 0x172684u: goto label_172684;
        case 0x172688u: goto label_172688;
        case 0x17268cu: goto label_17268c;
        case 0x172690u: goto label_172690;
        case 0x172694u: goto label_172694;
        case 0x172698u: goto label_172698;
        case 0x17269cu: goto label_17269c;
        case 0x1726a0u: goto label_1726a0;
        case 0x1726a4u: goto label_1726a4;
        case 0x1726a8u: goto label_1726a8;
        case 0x1726acu: goto label_1726ac;
        case 0x1726b0u: goto label_1726b0;
        case 0x1726b4u: goto label_1726b4;
        case 0x1726b8u: goto label_1726b8;
        case 0x1726bcu: goto label_1726bc;
        case 0x1726c0u: goto label_1726c0;
        case 0x1726c4u: goto label_1726c4;
        case 0x1726c8u: goto label_1726c8;
        case 0x1726ccu: goto label_1726cc;
        case 0x1726d0u: goto label_1726d0;
        case 0x1726d4u: goto label_1726d4;
        case 0x1726d8u: goto label_1726d8;
        case 0x1726dcu: goto label_1726dc;
        case 0x1726e0u: goto label_1726e0;
        case 0x1726e4u: goto label_1726e4;
        case 0x1726e8u: goto label_1726e8;
        case 0x1726ecu: goto label_1726ec;
        case 0x1726f0u: goto label_1726f0;
        case 0x1726f4u: goto label_1726f4;
        case 0x1726f8u: goto label_1726f8;
        case 0x1726fcu: goto label_1726fc;
        case 0x172700u: goto label_172700;
        case 0x172704u: goto label_172704;
        case 0x172708u: goto label_172708;
        case 0x17270cu: goto label_17270c;
        case 0x172710u: goto label_172710;
        case 0x172714u: goto label_172714;
        case 0x172718u: goto label_172718;
        case 0x17271cu: goto label_17271c;
        case 0x172720u: goto label_172720;
        case 0x172724u: goto label_172724;
        case 0x172728u: goto label_172728;
        case 0x17272cu: goto label_17272c;
        case 0x172730u: goto label_172730;
        case 0x172734u: goto label_172734;
        case 0x172738u: goto label_172738;
        case 0x17273cu: goto label_17273c;
        case 0x172740u: goto label_172740;
        case 0x172744u: goto label_172744;
        case 0x172748u: goto label_172748;
        case 0x17274cu: goto label_17274c;
        case 0x172750u: goto label_172750;
        case 0x172754u: goto label_172754;
        case 0x172758u: goto label_172758;
        case 0x17275cu: goto label_17275c;
        case 0x172760u: goto label_172760;
        case 0x172764u: goto label_172764;
        case 0x172768u: goto label_172768;
        case 0x17276cu: goto label_17276c;
        case 0x172770u: goto label_172770;
        case 0x172774u: goto label_172774;
        case 0x172778u: goto label_172778;
        case 0x17277cu: goto label_17277c;
        case 0x172780u: goto label_172780;
        case 0x172784u: goto label_172784;
        case 0x172788u: goto label_172788;
        case 0x17278cu: goto label_17278c;
        default: break;
    }

    ctx->pc = 0x172640u;

label_172640:
    // 0x172640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x172640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_172644:
    // 0x172644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_172648:
    // 0x172648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17264c:
    // 0x17264c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x17264cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_172650:
    // 0x172650: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x172650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_172654:
    // 0x172654: 0xc047eb8  jal         func_11FAE0
label_172658:
    if (ctx->pc == 0x172658u) {
        ctx->pc = 0x17265Cu;
        goto label_17265c;
    }
    ctx->pc = 0x172654u;
    SET_GPR_U32(ctx, 31, 0x17265Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x172654u, 0x17265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17265Cu;
label_17265c:
    // 0x17265c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17265cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172660:
    // 0x172660: 0xc08d590  jal         func_235640
label_172664:
    if (ctx->pc == 0x172664u) {
        ctx->pc = 0x172668u;
        goto label_172668;
    }
    ctx->pc = 0x172660u;
    SET_GPR_U32(ctx, 31, 0x172668u);
    ctx->pc = 0x235640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235640u, 0x172660u, 0x172668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172668u;
label_172668:
    // 0x172668: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x172668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_17266c:
    // 0x17266c: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x17266cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
label_172670:
    // 0x172670: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_172674:
    // 0x172674: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x172674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_172678:
    // 0x172678: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x172678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_17267c:
    // 0x17267c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17267cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_172680:
    // 0x172680: 0xc08c910  jal         func_232440
label_172684:
    if (ctx->pc == 0x172684u) {
        ctx->pc = 0x172688u;
        goto label_172688;
    }
    ctx->pc = 0x172680u;
    SET_GPR_U32(ctx, 31, 0x172688u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x172680u, 0x172688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172688u;
label_172688:
    // 0x172688: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x172688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_17268c:
    // 0x17268c: 0xc047eb8  jal         func_11FAE0
label_172690:
    if (ctx->pc == 0x172690u) {
        ctx->pc = 0x172694u;
        goto label_172694;
    }
    ctx->pc = 0x17268Cu;
    SET_GPR_U32(ctx, 31, 0x172694u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x17268Cu, 0x172694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172694u;
label_172694:
    // 0x172694: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172698:
    // 0x172698: 0xc047eb0  jal         func_11FAC0
label_17269c:
    if (ctx->pc == 0x17269Cu) {
        ctx->pc = 0x1726A0u;
        goto label_1726a0;
    }
    ctx->pc = 0x172698u;
    SET_GPR_U32(ctx, 31, 0x1726A0u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x172698u, 0x1726A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726A0u;
label_1726a0:
    // 0x1726a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1726a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1726a4:
    // 0x1726a4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1726a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1726a8:
    // 0x1726a8: 0xc047eb8  jal         func_11FAE0
label_1726ac:
    if (ctx->pc == 0x1726ACu) {
        ctx->pc = 0x1726B0u;
        goto label_1726b0;
    }
    ctx->pc = 0x1726A8u;
    SET_GPR_U32(ctx, 31, 0x1726B0u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1726A8u, 0x1726B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726B0u;
label_1726b0:
    // 0x1726b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1726b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1726b4:
    // 0x1726b4: 0xc047eb0  jal         func_11FAC0
label_1726b8:
    if (ctx->pc == 0x1726B8u) {
        ctx->pc = 0x1726BCu;
        goto label_1726bc;
    }
    ctx->pc = 0x1726B4u;
    SET_GPR_U32(ctx, 31, 0x1726BCu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1726B4u, 0x1726BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726BCu;
label_1726bc:
    // 0x1726bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1726bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1726c0:
    // 0x1726c0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1726c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1726c4:
    // 0x1726c4: 0x24a546d0  addiu       $a1, $a1, 0x46D0
    ctx->pc = 0x1726c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18128));
label_1726c8:
    // 0x1726c8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1726c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1726cc:
    // 0x1726cc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x1726ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1726d0:
    // 0x1726d0: 0xc0bc3e2  jal         func_2F0F88
label_1726d4:
    if (ctx->pc == 0x1726D4u) {
        ctx->pc = 0x1726D8u;
        goto label_1726d8;
    }
    ctx->pc = 0x1726D0u;
    SET_GPR_U32(ctx, 31, 0x1726D8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1726D0u, 0x1726D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726D8u;
label_1726d8:
    // 0x1726d8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1726d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1726dc:
    // 0x1726dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1726dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1726e0:
    // 0x1726e0: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x1726e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1726e4:
    // 0x1726e4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1726e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1726e8:
    // 0x1726e8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1726e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1726ec:
    // 0x1726ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1726ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1726f0:
    // 0x1726f0: 0xc08c800  jal         func_232000
label_1726f4:
    if (ctx->pc == 0x1726F4u) {
        ctx->pc = 0x1726F8u;
        goto label_1726f8;
    }
    ctx->pc = 0x1726F0u;
    SET_GPR_U32(ctx, 31, 0x1726F8u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x1726F0u, 0x1726F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1726F8u;
label_1726f8:
    // 0x1726f8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1726f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1726fc:
    // 0x1726fc: 0xa0620072  sb          $v0, 0x72($v1)
    ctx->pc = 0x1726fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 2));
label_172700:
    // 0x172700: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x172700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_172704:
    // 0x172704: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x172704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_172708:
    // 0x172708: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x172708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_17270c:
    // 0x17270c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_172710:
    // 0x172710: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x172710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_172714:
    // 0x172714: 0x90460072  lbu         $a2, 0x72($v0)
    ctx->pc = 0x172714u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 114)));
label_172718:
    // 0x172718: 0xc08c8dc  jal         func_232370
label_17271c:
    if (ctx->pc == 0x17271Cu) {
        ctx->pc = 0x172720u;
        goto label_172720;
    }
    ctx->pc = 0x172718u;
    SET_GPR_U32(ctx, 31, 0x172720u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x172718u, 0x172720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172720u;
label_172720:
    // 0x172720: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x172720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172724:
    // 0x172724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_172728:
    // 0x172728: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x172728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_17272c:
    // 0x17272c: 0x3e00008  jr          $ra
label_172730:
    if (ctx->pc == 0x172730u) {
        ctx->pc = 0x172734u;
        goto label_172734;
    }
    ctx->pc = 0x17272Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17272Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172734u;
label_172734:
    // 0x172734: 0x0  nop
    ctx->pc = 0x172734u;
    // NOP
label_172738:
    // 0x172738: 0x0  nop
    ctx->pc = 0x172738u;
    // NOP
label_17273c:
    // 0x17273c: 0x0  nop
    ctx->pc = 0x17273cu;
    // NOP
label_172740:
    // 0x172740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_172744:
    // 0x172744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_172748:
    // 0x172748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x172748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17274c:
    // 0x17274c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x17274cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_172750:
    // 0x172750: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x172750u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
label_172754:
    // 0x172754: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x172754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_172758:
    // 0x172758: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x172758u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_17275c:
    // 0x17275c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x17275cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172760:
    // 0x172760: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x172760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_172764:
    // 0x172764: 0x320f809  jalr        $t9
label_172768:
    if (ctx->pc == 0x172768u) {
        ctx->pc = 0x17276Cu;
        goto label_17276c;
    }
    ctx->pc = 0x172764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17276Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172764u, 0x17276Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17276Cu;
label_17276c:
    // 0x17276c: 0x93a40030  lbu         $a0, 0x30($sp)
    ctx->pc = 0x17276cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_172770:
    // 0x172770: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x172770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_172774:
    // 0x172774: 0xa0640071  sb          $a0, 0x71($v1)
    ctx->pc = 0x172774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 113), (uint8_t)GPR_U32(ctx, 4));
label_172778:
    // 0x172778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17277c:
    // 0x17277c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17277cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_172780:
    // 0x172780: 0x3e00008  jr          $ra
label_172784:
    if (ctx->pc == 0x172784u) {
        ctx->pc = 0x172788u;
        goto label_172788;
    }
    ctx->pc = 0x172780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172788u;
label_172788:
    // 0x172788: 0x0  nop
    ctx->pc = 0x172788u;
    // NOP
label_17278c:
    // 0x17278c: 0x0  nop
    ctx->pc = 0x17278cu;
    // NOP
    ctx->pc = 0x172790u;
}
