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

// Function: sub_002395F0
// Address: 0x2395f0 - 0x239760
void sub_002395F0_0x2395f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002395F0_0x2395f0");
#endif

    switch (ctx->pc) {
        case 0x239638u: goto label_239638;
        case 0x239654u: goto label_239654;
        case 0x239664u: goto label_239664;
        case 0x239670u: goto label_239670;
        case 0x239688u: goto label_239688;
        case 0x239694u: goto label_239694;
        case 0x2396a4u: goto label_2396a4;
        case 0x2396b4u: goto label_2396b4;
        case 0x2396c8u: goto label_2396c8;
        case 0x2396dcu: goto label_2396dc;
        case 0x2396f4u: goto label_2396f4;
        case 0x239710u: goto label_239710;
        case 0x239724u: goto label_239724;
        case 0x239738u: goto label_239738;
        default: break;
    }

    ctx->pc = 0x2395f0u;

    // 0x2395f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2395f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2395f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2395f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2395f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2395f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2395fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2395fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x239600: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x239604: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x239604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x239608: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x239608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x23960c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x239610: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x239610u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x239614: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x239614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x239618: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x239618u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x23961c: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x23961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x239620: 0x14620037  bne         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x239620u;
    {
        const bool branch_taken_0x239620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x239620) {
            ctx->pc = 0x239700u;
            goto label_239700;
        }
    }
    ctx->pc = 0x239628u;
    // 0x239628: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x239628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23962c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x23962cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x239630: 0xc040304  jal         func_100C10
    ctx->pc = 0x239630u;
    SET_GPR_U32(ctx, 31, 0x239638u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x239630u, 0x239638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239638u;
label_239638:
    // 0x239638: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x239638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23963c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x23963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x239640: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x239640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x239644: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x239644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x239648: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x239648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x23964c: 0xc11bd98  jal         func_46F660
    ctx->pc = 0x23964Cu;
    SET_GPR_U32(ctx, 31, 0x239654u);
    ctx->pc = 0x46F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F660u, 0x23964Cu, 0x239654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239654u;
label_239654:
    // 0x239654: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x239654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x239658: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x239658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23965c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x23965Cu;
    SET_GPR_U32(ctx, 31, 0x239664u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x23965Cu, 0x239664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239664u;
label_239664:
    // 0x239664: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x239664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x239668: 0xc05dfe0  jal         func_177F80
    ctx->pc = 0x239668u;
    SET_GPR_U32(ctx, 31, 0x239670u);
    ctx->pc = 0x177F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F80u, 0x239668u, 0x239670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239670u;
label_239670:
    // 0x239670: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x239670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x239674: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x239674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x239678: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x239678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x23967c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23967cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239680: 0xc05deec  jal         func_177BB0
    ctx->pc = 0x239680u;
    SET_GPR_U32(ctx, 31, 0x239688u);
    ctx->pc = 0x177BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177BB0u, 0x239680u, 0x239688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239688u;
label_239688:
    // 0x239688: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x239688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23968c: 0xc08e570  jal         func_2395C0
    ctx->pc = 0x23968Cu;
    SET_GPR_U32(ctx, 31, 0x239694u);
    ctx->pc = 0x2395C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395C0u, 0x23968Cu, 0x239694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239694u;
label_239694:
    // 0x239694: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x239694u;
    {
        const bool branch_taken_0x239694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239694) {
            ctx->pc = 0x2396DCu;
            goto label_2396dc;
        }
    }
    ctx->pc = 0x23969Cu;
    // 0x23969c: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x23969Cu;
    SET_GPR_U32(ctx, 31, 0x2396A4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x23969Cu, 0x2396A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396A4u;
label_2396a4:
    // 0x2396a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2396a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2396a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2396a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2396ac: 0xc05dec4  jal         func_177B10
    ctx->pc = 0x2396ACu;
    SET_GPR_U32(ctx, 31, 0x2396B4u);
    ctx->pc = 0x177B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B10u, 0x2396ACu, 0x2396B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396B4u;
label_2396b4:
    // 0x2396b4: 0x242001b  divu        $zero, $s2, $v0
    ctx->pc = 0x2396b4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
    // 0x2396b8: 0x2810  mfhi        $a1
    ctx->pc = 0x2396b8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2396bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2396bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2396c0: 0xc05ded4  jal         func_177B50
    ctx->pc = 0x2396C0u;
    SET_GPR_U32(ctx, 31, 0x2396C8u);
    ctx->pc = 0x177B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B50u, 0x2396C0u, 0x2396C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396C8u;
label_2396c8:
    // 0x2396c8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2396c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2396cc: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x2396ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2396d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2396d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2396d4: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x2396D4u;
    SET_GPR_U32(ctx, 31, 0x2396DCu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x2396D4u, 0x2396DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396DCu;
label_2396dc:
    // 0x2396dc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2396dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2396e0: 0x8c51002c  lw          $s1, 0x2C($v0)
    ctx->pc = 0x2396e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2396e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2396e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2396e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2396e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2396ec: 0xc05de04  jal         func_177810
    ctx->pc = 0x2396ECu;
    SET_GPR_U32(ctx, 31, 0x2396F4u);
    ctx->pc = 0x177810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177810u, 0x2396ECu, 0x2396F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2396F4u;
label_2396f4:
    // 0x2396f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2396f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2396f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2396F8u;
    {
        const bool branch_taken_0x2396f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2396f8) {
            ctx->pc = 0x23973Cu;
            goto label_23973c;
        }
    }
    ctx->pc = 0x239700u;
label_239700:
    // 0x239700: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x239700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x239704: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x239704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x239708: 0xc040304  jal         func_100C10
    ctx->pc = 0x239708u;
    SET_GPR_U32(ctx, 31, 0x239710u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x239708u, 0x239710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239710u;
label_239710:
    // 0x239710: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x239710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x239714: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x239714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x239718: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x239718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23971c: 0xc11bd88  jal         func_46F620
    ctx->pc = 0x23971Cu;
    SET_GPR_U32(ctx, 31, 0x239724u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x23971Cu, 0x239724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239724u;
label_239724:
    // 0x239724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239728: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x239728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x23972c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23972cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239730: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x239730u;
    SET_GPR_U32(ctx, 31, 0x239738u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x239730u, 0x239738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239738u;
label_239738:
    // 0x239738: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x239738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23973c:
    // 0x23973c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23973cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x239740: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239740u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239744: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23974c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x23974cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x239750: 0x3e00008  jr          $ra
    ctx->pc = 0x239750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239758u;
    // 0x239758: 0x0  nop
    ctx->pc = 0x239758u;
    // NOP
    // 0x23975c: 0x0  nop
    ctx->pc = 0x23975cu;
    // NOP
    ctx->pc = 0x239760u;
}
