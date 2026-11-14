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

// Function: sub_00342620
// Address: 0x342620 - 0x3428d8
void sub_00342620_0x342620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342620_0x342620");
#endif

    switch (ctx->pc) {
        case 0x342620u: goto label_342620;
        case 0x342624u: goto label_342624;
        case 0x342628u: goto label_342628;
        case 0x34262cu: goto label_34262c;
        case 0x342630u: goto label_342630;
        case 0x342634u: goto label_342634;
        case 0x342638u: goto label_342638;
        case 0x34263cu: goto label_34263c;
        case 0x342640u: goto label_342640;
        case 0x342644u: goto label_342644;
        case 0x342648u: goto label_342648;
        case 0x34264cu: goto label_34264c;
        case 0x342650u: goto label_342650;
        case 0x342654u: goto label_342654;
        case 0x342658u: goto label_342658;
        case 0x34265cu: goto label_34265c;
        case 0x342660u: goto label_342660;
        case 0x342664u: goto label_342664;
        case 0x342668u: goto label_342668;
        case 0x34266cu: goto label_34266c;
        case 0x342670u: goto label_342670;
        case 0x342674u: goto label_342674;
        case 0x342678u: goto label_342678;
        case 0x34267cu: goto label_34267c;
        case 0x342680u: goto label_342680;
        case 0x342684u: goto label_342684;
        case 0x342688u: goto label_342688;
        case 0x34268cu: goto label_34268c;
        case 0x342690u: goto label_342690;
        case 0x342694u: goto label_342694;
        case 0x342698u: goto label_342698;
        case 0x34269cu: goto label_34269c;
        case 0x3426a0u: goto label_3426a0;
        case 0x3426a4u: goto label_3426a4;
        case 0x3426a8u: goto label_3426a8;
        case 0x3426acu: goto label_3426ac;
        case 0x3426b0u: goto label_3426b0;
        case 0x3426b4u: goto label_3426b4;
        case 0x3426b8u: goto label_3426b8;
        case 0x3426bcu: goto label_3426bc;
        case 0x3426c0u: goto label_3426c0;
        case 0x3426c4u: goto label_3426c4;
        case 0x3426c8u: goto label_3426c8;
        case 0x3426ccu: goto label_3426cc;
        case 0x3426d0u: goto label_3426d0;
        case 0x3426d4u: goto label_3426d4;
        case 0x3426d8u: goto label_3426d8;
        case 0x3426dcu: goto label_3426dc;
        case 0x3426e0u: goto label_3426e0;
        case 0x3426e4u: goto label_3426e4;
        case 0x3426e8u: goto label_3426e8;
        case 0x3426ecu: goto label_3426ec;
        case 0x3426f0u: goto label_3426f0;
        case 0x3426f4u: goto label_3426f4;
        case 0x3426f8u: goto label_3426f8;
        case 0x3426fcu: goto label_3426fc;
        case 0x342700u: goto label_342700;
        case 0x342704u: goto label_342704;
        case 0x342708u: goto label_342708;
        case 0x34270cu: goto label_34270c;
        case 0x342710u: goto label_342710;
        case 0x342714u: goto label_342714;
        case 0x342718u: goto label_342718;
        case 0x34271cu: goto label_34271c;
        case 0x342720u: goto label_342720;
        case 0x342724u: goto label_342724;
        case 0x342728u: goto label_342728;
        case 0x34272cu: goto label_34272c;
        case 0x342730u: goto label_342730;
        case 0x342734u: goto label_342734;
        case 0x342738u: goto label_342738;
        case 0x34273cu: goto label_34273c;
        case 0x342740u: goto label_342740;
        case 0x342744u: goto label_342744;
        case 0x342748u: goto label_342748;
        case 0x34274cu: goto label_34274c;
        case 0x342750u: goto label_342750;
        case 0x342754u: goto label_342754;
        case 0x342758u: goto label_342758;
        case 0x34275cu: goto label_34275c;
        case 0x342760u: goto label_342760;
        case 0x342764u: goto label_342764;
        case 0x342768u: goto label_342768;
        case 0x34276cu: goto label_34276c;
        case 0x342770u: goto label_342770;
        case 0x342774u: goto label_342774;
        case 0x342778u: goto label_342778;
        case 0x34277cu: goto label_34277c;
        case 0x342780u: goto label_342780;
        case 0x342784u: goto label_342784;
        case 0x342788u: goto label_342788;
        case 0x34278cu: goto label_34278c;
        case 0x342790u: goto label_342790;
        case 0x342794u: goto label_342794;
        case 0x342798u: goto label_342798;
        case 0x34279cu: goto label_34279c;
        case 0x3427a0u: goto label_3427a0;
        case 0x3427a4u: goto label_3427a4;
        case 0x3427a8u: goto label_3427a8;
        case 0x3427acu: goto label_3427ac;
        case 0x3427b0u: goto label_3427b0;
        case 0x3427b4u: goto label_3427b4;
        case 0x3427b8u: goto label_3427b8;
        case 0x3427bcu: goto label_3427bc;
        case 0x3427c0u: goto label_3427c0;
        case 0x3427c4u: goto label_3427c4;
        case 0x3427c8u: goto label_3427c8;
        case 0x3427ccu: goto label_3427cc;
        case 0x3427d0u: goto label_3427d0;
        case 0x3427d4u: goto label_3427d4;
        case 0x3427d8u: goto label_3427d8;
        case 0x3427dcu: goto label_3427dc;
        case 0x3427e0u: goto label_3427e0;
        case 0x3427e4u: goto label_3427e4;
        case 0x3427e8u: goto label_3427e8;
        case 0x3427ecu: goto label_3427ec;
        case 0x3427f0u: goto label_3427f0;
        case 0x3427f4u: goto label_3427f4;
        case 0x3427f8u: goto label_3427f8;
        case 0x3427fcu: goto label_3427fc;
        case 0x342800u: goto label_342800;
        case 0x342804u: goto label_342804;
        case 0x342808u: goto label_342808;
        case 0x34280cu: goto label_34280c;
        case 0x342810u: goto label_342810;
        case 0x342814u: goto label_342814;
        case 0x342818u: goto label_342818;
        case 0x34281cu: goto label_34281c;
        case 0x342820u: goto label_342820;
        case 0x342824u: goto label_342824;
        case 0x342828u: goto label_342828;
        case 0x34282cu: goto label_34282c;
        case 0x342830u: goto label_342830;
        case 0x342834u: goto label_342834;
        case 0x342838u: goto label_342838;
        case 0x34283cu: goto label_34283c;
        case 0x342840u: goto label_342840;
        case 0x342844u: goto label_342844;
        case 0x342848u: goto label_342848;
        case 0x34284cu: goto label_34284c;
        case 0x342850u: goto label_342850;
        case 0x342854u: goto label_342854;
        case 0x342858u: goto label_342858;
        case 0x34285cu: goto label_34285c;
        case 0x342860u: goto label_342860;
        case 0x342864u: goto label_342864;
        case 0x342868u: goto label_342868;
        case 0x34286cu: goto label_34286c;
        case 0x342870u: goto label_342870;
        case 0x342874u: goto label_342874;
        case 0x342878u: goto label_342878;
        case 0x34287cu: goto label_34287c;
        case 0x342880u: goto label_342880;
        case 0x342884u: goto label_342884;
        case 0x342888u: goto label_342888;
        case 0x34288cu: goto label_34288c;
        case 0x342890u: goto label_342890;
        case 0x342894u: goto label_342894;
        case 0x342898u: goto label_342898;
        case 0x34289cu: goto label_34289c;
        case 0x3428a0u: goto label_3428a0;
        case 0x3428a4u: goto label_3428a4;
        case 0x3428a8u: goto label_3428a8;
        case 0x3428acu: goto label_3428ac;
        case 0x3428b0u: goto label_3428b0;
        case 0x3428b4u: goto label_3428b4;
        case 0x3428b8u: goto label_3428b8;
        case 0x3428bcu: goto label_3428bc;
        case 0x3428c0u: goto label_3428c0;
        case 0x3428c4u: goto label_3428c4;
        case 0x3428c8u: goto label_3428c8;
        case 0x3428ccu: goto label_3428cc;
        case 0x3428d0u: goto label_3428d0;
        case 0x3428d4u: goto label_3428d4;
        default: break;
    }

    ctx->pc = 0x342620u;

label_342620:
    // 0x342620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x342620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_342624:
    // 0x342624: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x342624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_342628:
    // 0x342628: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x342628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_34262c:
    // 0x34262c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_342630:
    // 0x342630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x342630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342634:
    // 0x342634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_342638:
    // 0x342638: 0x2451c2c8  addiu       $s1, $v0, -0x3D38
    ctx->pc = 0x342638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
label_34263c:
    // 0x34263c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x34263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_342640:
    // 0x342640: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x342640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_342644:
    // 0x342644: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x342644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_342648:
    // 0x342648: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
label_34264c:
    if (ctx->pc == 0x34264Cu) {
        ctx->pc = 0x34264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342648u;
        // 0x34264c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342650u;
        goto label_342650;
    }
    ctx->pc = 0x342648u;
    {
        const bool branch_taken_0x342648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342648u;
        // 0x34264c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342648) {
            ctx->pc = 0x3426D8u;
            goto label_3426d8;
        }
    }
    ctx->pc = 0x342650u;
label_342650:
    // 0x342650: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x342650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_342654:
    // 0x342654: 0xc0d120c  jal         func_344830
label_342658:
    if (ctx->pc == 0x342658u) {
        ctx->pc = 0x342658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342654u;
        // 0x342658: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34265Cu;
        goto label_34265c;
    }
    ctx->pc = 0x342654u;
    SET_GPR_U32(ctx, 31, 0x34265Cu);
    ctx->pc = 0x342658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342654u;
    // 0x342658: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x342654u, 0x34265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34265Cu;
label_34265c:
    // 0x34265c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x34265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_342660:
    // 0x342660: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x342660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_342664:
    // 0x342664: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x342664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
label_342668:
    // 0x342668: 0xc0d120c  jal         func_344830
label_34266c:
    if (ctx->pc == 0x34266Cu) {
        ctx->pc = 0x34266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342668u;
        // 0x34266c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342670u;
        goto label_342670;
    }
    ctx->pc = 0x342668u;
    SET_GPR_U32(ctx, 31, 0x342670u);
    ctx->pc = 0x34266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342668u;
    // 0x34266c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x342668u, 0x342670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342670u;
label_342670:
    // 0x342670: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x342670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_342674:
    // 0x342674: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x342674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_342678:
    // 0x342678: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x342678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
label_34267c:
    // 0x34267c: 0xc0d120c  jal         func_344830
label_342680:
    if (ctx->pc == 0x342680u) {
        ctx->pc = 0x342680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34267Cu;
        // 0x342680: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342684u;
        goto label_342684;
    }
    ctx->pc = 0x34267Cu;
    SET_GPR_U32(ctx, 31, 0x342684u);
    ctx->pc = 0x342680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34267Cu;
    // 0x342680: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x34267Cu, 0x342684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342684u;
label_342684:
    // 0x342684: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x342684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_342688:
    // 0x342688: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x342688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_34268c:
    // 0x34268c: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x34268cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_342690:
    // 0x342690: 0xc0d120c  jal         func_344830
label_342694:
    if (ctx->pc == 0x342694u) {
        ctx->pc = 0x342694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342690u;
        // 0x342694: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342698u;
        goto label_342698;
    }
    ctx->pc = 0x342690u;
    SET_GPR_U32(ctx, 31, 0x342698u);
    ctx->pc = 0x342694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342690u;
    // 0x342694: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x342690u, 0x342698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342698u;
label_342698:
    // 0x342698: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x342698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_34269c:
    // 0x34269c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34269cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3426a0:
    // 0x3426a0: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x3426a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
label_3426a4:
    // 0x3426a4: 0xc0d120c  jal         func_344830
label_3426a8:
    if (ctx->pc == 0x3426A8u) {
        ctx->pc = 0x3426A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3426A4u;
        // 0x3426a8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3426ACu;
        goto label_3426ac;
    }
    ctx->pc = 0x3426A4u;
    SET_GPR_U32(ctx, 31, 0x3426ACu);
    ctx->pc = 0x3426A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3426A4u;
    // 0x3426a8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3426A4u, 0x3426ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426ACu;
label_3426ac:
    // 0x3426ac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3426acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3426b0:
    // 0x3426b0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3426b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3426b4:
    // 0x3426b4: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x3426b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
label_3426b8:
    // 0x3426b8: 0xc0d120c  jal         func_344830
label_3426bc:
    if (ctx->pc == 0x3426BCu) {
        ctx->pc = 0x3426BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3426B8u;
        // 0x3426bc: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3426C0u;
        goto label_3426c0;
    }
    ctx->pc = 0x3426B8u;
    SET_GPR_U32(ctx, 31, 0x3426C0u);
    ctx->pc = 0x3426BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3426B8u;
    // 0x3426bc: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3426B8u, 0x3426C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426C0u;
label_3426c0:
    // 0x3426c0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3426c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3426c4:
    // 0x3426c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3426c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3426c8:
    // 0x3426c8: 0xae2200ac  sw          $v0, 0xAC($s1)
    ctx->pc = 0x3426c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 2));
label_3426cc:
    // 0x3426cc: 0xc0d120c  jal         func_344830
label_3426d0:
    if (ctx->pc == 0x3426D0u) {
        ctx->pc = 0x3426D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3426CCu;
        // 0x3426d0: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3426D4u;
        goto label_3426d4;
    }
    ctx->pc = 0x3426CCu;
    SET_GPR_U32(ctx, 31, 0x3426D4u);
    ctx->pc = 0x3426D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3426CCu;
    // 0x3426d0: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3426CCu, 0x3426D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426D4u;
label_3426d4:
    // 0x3426d4: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3426d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3426d8:
    // 0x3426d8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3426d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3426dc:
    // 0x3426dc: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x3426dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_3426e0:
    // 0x3426e0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3426e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3426e4:
    // 0x3426e4: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
label_3426e8:
    if (ctx->pc == 0x3426E8u) {
        ctx->pc = 0x3426E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3426E4u;
        // 0x3426e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3426ECu;
        goto label_3426ec;
    }
    ctx->pc = 0x3426E4u;
    {
        const bool branch_taken_0x3426e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3426E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3426E4u;
        // 0x3426e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3426e4) {
            ctx->pc = 0x342828u;
            goto label_342828;
        }
    }
    ctx->pc = 0x3426ECu;
label_3426ec:
    // 0x3426ec: 0xae230094  sw          $v1, 0x94($s1)
    ctx->pc = 0x3426ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 3));
label_3426f0:
    // 0x3426f0: 0xc0d120c  jal         func_344830
label_3426f4:
    if (ctx->pc == 0x3426F4u) {
        ctx->pc = 0x3426F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3426F0u;
        // 0x3426f4: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3426F8u;
        goto label_3426f8;
    }
    ctx->pc = 0x3426F0u;
    SET_GPR_U32(ctx, 31, 0x3426F8u);
    ctx->pc = 0x3426F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3426F0u;
    // 0x3426f4: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3426F0u, 0x3426F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3426F8u;
label_3426f8:
    // 0x3426f8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3426f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3426fc:
    // 0x3426fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3426fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_342700:
    // 0x342700: 0xae2200b8  sw          $v0, 0xB8($s1)
    ctx->pc = 0x342700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
label_342704:
    // 0x342704: 0xc0d120c  jal         func_344830
label_342708:
    if (ctx->pc == 0x342708u) {
        ctx->pc = 0x342708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342704u;
        // 0x342708: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34270Cu;
        goto label_34270c;
    }
    ctx->pc = 0x342704u;
    SET_GPR_U32(ctx, 31, 0x34270Cu);
    ctx->pc = 0x342708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342704u;
    // 0x342708: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x342704u, 0x34270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34270Cu;
label_34270c:
    // 0x34270c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x34270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_342710:
    // 0x342710: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x342710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_342714:
    // 0x342714: 0xae2200bc  sw          $v0, 0xBC($s1)
    ctx->pc = 0x342714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 2));
label_342718:
    // 0x342718: 0xc0d120c  jal         func_344830
label_34271c:
    if (ctx->pc == 0x34271Cu) {
        ctx->pc = 0x34271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342718u;
        // 0x34271c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342720u;
        goto label_342720;
    }
    ctx->pc = 0x342718u;
    SET_GPR_U32(ctx, 31, 0x342720u);
    ctx->pc = 0x34271Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342718u;
    // 0x34271c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x342718u, 0x342720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342720u;
label_342720:
    // 0x342720: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x342720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_342724:
    // 0x342724: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x342724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_342728:
    // 0x342728: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x342728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_34272c:
    // 0x34272c: 0xc0d120c  jal         func_344830
label_342730:
    if (ctx->pc == 0x342730u) {
        ctx->pc = 0x342730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34272Cu;
        // 0x342730: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342734u;
        goto label_342734;
    }
    ctx->pc = 0x34272Cu;
    SET_GPR_U32(ctx, 31, 0x342734u);
    ctx->pc = 0x342730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34272Cu;
    // 0x342730: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x34272Cu, 0x342734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342734u;
label_342734:
    // 0x342734: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x342734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_342738:
    // 0x342738: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x342738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34273c:
    // 0x34273c: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x34273cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_342740:
    // 0x342740: 0xc0d120c  jal         func_344830
label_342744:
    if (ctx->pc == 0x342744u) {
        ctx->pc = 0x342744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342740u;
        // 0x342744: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342748u;
        goto label_342748;
    }
    ctx->pc = 0x342740u;
    SET_GPR_U32(ctx, 31, 0x342748u);
    ctx->pc = 0x342744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342740u;
    // 0x342744: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x342740u, 0x342748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342748u;
label_342748:
    // 0x342748: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x342748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_34274c:
    // 0x34274c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34274cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_342750:
    // 0x342750: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x342750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_342754:
    // 0x342754: 0xc0d120c  jal         func_344830
label_342758:
    if (ctx->pc == 0x342758u) {
        ctx->pc = 0x342758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342754u;
        // 0x342758: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34275Cu;
        goto label_34275c;
    }
    ctx->pc = 0x342754u;
    SET_GPR_U32(ctx, 31, 0x34275Cu);
    ctx->pc = 0x342758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342754u;
    // 0x342758: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x342754u, 0x34275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34275Cu;
label_34275c:
    // 0x34275c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x34275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_342760:
    // 0x342760: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x342760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_342764:
    // 0x342764: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x342764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
label_342768:
    // 0x342768: 0xc0d120c  jal         func_344830
label_34276c:
    if (ctx->pc == 0x34276Cu) {
        ctx->pc = 0x34276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342768u;
        // 0x34276c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342770u;
        goto label_342770;
    }
    ctx->pc = 0x342768u;
    SET_GPR_U32(ctx, 31, 0x342770u);
    ctx->pc = 0x34276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342768u;
    // 0x34276c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x342768u, 0x342770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342770u;
label_342770:
    // 0x342770: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x342770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_342774:
    // 0x342774: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x342774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_342778:
    // 0x342778: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x342778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
label_34277c:
    // 0x34277c: 0xc0d120c  jal         func_344830
label_342780:
    if (ctx->pc == 0x342780u) {
        ctx->pc = 0x342780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34277Cu;
        // 0x342780: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342784u;
        goto label_342784;
    }
    ctx->pc = 0x34277Cu;
    SET_GPR_U32(ctx, 31, 0x342784u);
    ctx->pc = 0x342780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34277Cu;
    // 0x342780: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x34277Cu, 0x342784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342784u;
label_342784:
    // 0x342784: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x342784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_342788:
    // 0x342788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x342788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34278c:
    // 0x34278c: 0xae2200d0  sw          $v0, 0xD0($s1)
    ctx->pc = 0x34278cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
label_342790:
    // 0x342790: 0xc0d1228  jal         func_3448A0
label_342794:
    if (ctx->pc == 0x342794u) {
        ctx->pc = 0x342794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342790u;
        // 0x342794: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342798u;
        goto label_342798;
    }
    ctx->pc = 0x342790u;
    SET_GPR_U32(ctx, 31, 0x342798u);
    ctx->pc = 0x342794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342790u;
    // 0x342794: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x342790u, 0x342798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342798u;
label_342798:
    // 0x342798: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x342798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_34279c:
    // 0x34279c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34279cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3427a0:
    // 0x3427a0: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x3427a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
label_3427a4:
    // 0x3427a4: 0xc0d1228  jal         func_3448A0
label_3427a8:
    if (ctx->pc == 0x3427A8u) {
        ctx->pc = 0x3427A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427A4u;
        // 0x3427a8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3427ACu;
        goto label_3427ac;
    }
    ctx->pc = 0x3427A4u;
    SET_GPR_U32(ctx, 31, 0x3427ACu);
    ctx->pc = 0x3427A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427A4u;
    // 0x3427a8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x3427A4u, 0x3427ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427ACu;
label_3427ac:
    // 0x3427ac: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3427acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3427b0:
    // 0x3427b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3427b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3427b4:
    // 0x3427b4: 0xae2200dc  sw          $v0, 0xDC($s1)
    ctx->pc = 0x3427b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
label_3427b8:
    // 0x3427b8: 0xc0d1228  jal         func_3448A0
label_3427bc:
    if (ctx->pc == 0x3427BCu) {
        ctx->pc = 0x3427BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427B8u;
        // 0x3427bc: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3427C0u;
        goto label_3427c0;
    }
    ctx->pc = 0x3427B8u;
    SET_GPR_U32(ctx, 31, 0x3427C0u);
    ctx->pc = 0x3427BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427B8u;
    // 0x3427bc: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x3427B8u, 0x3427C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427C0u;
label_3427c0:
    // 0x3427c0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3427c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3427c4:
    // 0x3427c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3427c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3427c8:
    // 0x3427c8: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x3427c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_3427cc:
    // 0x3427cc: 0xc0d1228  jal         func_3448A0
label_3427d0:
    if (ctx->pc == 0x3427D0u) {
        ctx->pc = 0x3427D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427CCu;
        // 0x3427d0: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3427D4u;
        goto label_3427d4;
    }
    ctx->pc = 0x3427CCu;
    SET_GPR_U32(ctx, 31, 0x3427D4u);
    ctx->pc = 0x3427D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427CCu;
    // 0x3427d0: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x3427CCu, 0x3427D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427D4u;
label_3427d4:
    // 0x3427d4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3427d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3427d8:
    // 0x3427d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3427d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3427dc:
    // 0x3427dc: 0xae2200e4  sw          $v0, 0xE4($s1)
    ctx->pc = 0x3427dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 2));
label_3427e0:
    // 0x3427e0: 0xc0d1228  jal         func_3448A0
label_3427e4:
    if (ctx->pc == 0x3427E4u) {
        ctx->pc = 0x3427E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427E0u;
        // 0x3427e4: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3427E8u;
        goto label_3427e8;
    }
    ctx->pc = 0x3427E0u;
    SET_GPR_U32(ctx, 31, 0x3427E8u);
    ctx->pc = 0x3427E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427E0u;
    // 0x3427e4: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x3427E0u, 0x3427E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427E8u;
label_3427e8:
    // 0x3427e8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3427e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3427ec:
    // 0x3427ec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3427ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3427f0:
    // 0x3427f0: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x3427f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_3427f4:
    // 0x3427f4: 0xc0d1228  jal         func_3448A0
label_3427f8:
    if (ctx->pc == 0x3427F8u) {
        ctx->pc = 0x3427F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427F4u;
        // 0x3427f8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3427FCu;
        goto label_3427fc;
    }
    ctx->pc = 0x3427F4u;
    SET_GPR_U32(ctx, 31, 0x3427FCu);
    ctx->pc = 0x3427F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427F4u;
    // 0x3427f8: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x3427F4u, 0x3427FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427FCu;
label_3427fc:
    // 0x3427fc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x3427fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_342800:
    // 0x342800: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x342800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_342804:
    // 0x342804: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x342804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_342808:
    // 0x342808: 0xc0d1228  jal         func_3448A0
label_34280c:
    if (ctx->pc == 0x34280Cu) {
        ctx->pc = 0x34280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342808u;
        // 0x34280c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342810u;
        goto label_342810;
    }
    ctx->pc = 0x342808u;
    SET_GPR_U32(ctx, 31, 0x342810u);
    ctx->pc = 0x34280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342808u;
    // 0x34280c: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x342808u, 0x342810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342810u;
label_342810:
    // 0x342810: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x342810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_342814:
    // 0x342814: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x342814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_342818:
    // 0x342818: 0xae2200ec  sw          $v0, 0xEC($s1)
    ctx->pc = 0x342818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 2));
label_34281c:
    // 0x34281c: 0xc0d1228  jal         func_3448A0
label_342820:
    if (ctx->pc == 0x342820u) {
        ctx->pc = 0x342820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34281Cu;
        // 0x342820: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342824u;
        goto label_342824;
    }
    ctx->pc = 0x34281Cu;
    SET_GPR_U32(ctx, 31, 0x342824u);
    ctx->pc = 0x342820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34281Cu;
    // 0x342820: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x34281Cu, 0x342824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342824u;
label_342824:
    // 0x342824: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x342824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_342828:
    // 0x342828: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x342828u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34282c:
    // 0x34282c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34282cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_342830:
    // 0x342830: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x342830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342834:
    // 0x342834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x342834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_342838:
    // 0x342838: 0x3e00008  jr          $ra
label_34283c:
    if (ctx->pc == 0x34283Cu) {
        ctx->pc = 0x34283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342838u;
        // 0x34283c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342840u;
        goto label_342840;
    }
    ctx->pc = 0x342838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342838u;
        // 0x34283c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342840u;
label_342840:
    // 0x342840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x342840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_342844:
    // 0x342844: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x342844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_342848:
    // 0x342848: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x342848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_34284c:
    // 0x34284c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34284cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342850:
    // 0x342850: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x342850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_342854:
    // 0x342854: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x342854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_342858:
    // 0x342858: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x342858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34285c:
    // 0x34285c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34285cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_342860:
    // 0x342860: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x342860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_342864:
    // 0x342864: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x342864u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_342868:
    // 0x342868: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x342868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_34286c:
    // 0x34286c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_342870:
    if (ctx->pc == 0x342870u) {
        ctx->pc = 0x342870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34286Cu;
        // 0x342870: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342874u;
        goto label_342874;
    }
    ctx->pc = 0x34286Cu;
    {
        const bool branch_taken_0x34286c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x342870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34286Cu;
        // 0x342870: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34286c) {
            ctx->pc = 0x3428B4u;
            goto label_3428b4;
        }
    }
    ctx->pc = 0x342874u;
label_342874:
    // 0x342874: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x342874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342878:
    // 0x342878: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x342878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_34287c:
    // 0x34287c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x34287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_342880:
    // 0x342880: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x342880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_342884:
    // 0x342884: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_342888:
    if (ctx->pc == 0x342888u) {
        ctx->pc = 0x342888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342884u;
        // 0x342888: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34288Cu;
        goto label_34288c;
    }
    ctx->pc = 0x342884u;
    {
        const bool branch_taken_0x342884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342884u;
        // 0x342888: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342884) {
            ctx->pc = 0x3428A0u;
            goto label_3428a0;
        }
    }
    ctx->pc = 0x34288Cu;
label_34288c:
    // 0x34288c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x34288cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_342890:
    // 0x342890: 0x40f809  jalr        $v0
label_342894:
    if (ctx->pc == 0x342894u) {
        ctx->pc = 0x342894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342890u;
        // 0x342894: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342898u;
        goto label_342898;
    }
    ctx->pc = 0x342890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342898u);
        ctx->pc = 0x342894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342890u;
        // 0x342894: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342890u, 0x342898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342898u;
label_342898:
    // 0x342898: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
label_34289c:
    if (ctx->pc == 0x34289Cu) {
        ctx->pc = 0x34289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342898u;
        // 0x34289c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3428A0u;
        goto label_3428a0;
    }
    ctx->pc = 0x342898u;
    {
        const bool branch_taken_0x342898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x34289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342898u;
        // 0x34289c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342898) {
            ctx->pc = 0x3428B8u;
            goto label_3428b8;
        }
    }
    ctx->pc = 0x3428A0u;
label_3428a0:
    // 0x3428a0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3428a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3428a4:
    // 0x3428a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3428a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3428a8:
    // 0x3428a8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3428a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3428ac:
    // 0x3428ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3428b0:
    if (ctx->pc == 0x3428B0u) {
        ctx->pc = 0x3428B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428ACu;
        // 0x3428b0: 0x2694002c  addiu       $s4, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3428B4u;
        goto label_3428b4;
    }
    ctx->pc = 0x3428ACu;
    {
        const bool branch_taken_0x3428ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3428B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428ACu;
        // 0x3428b0: 0x2694002c  addiu       $s4, $s4, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3428ac) {
            ctx->pc = 0x342878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342878;
        }
    }
    ctx->pc = 0x3428B4u;
label_3428b4:
    // 0x3428b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3428b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3428b8:
    // 0x3428b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3428b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3428bc:
    // 0x3428bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3428bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3428c0:
    // 0x3428c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3428c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3428c4:
    // 0x3428c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3428c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3428c8:
    // 0x3428c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3428c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3428cc:
    // 0x3428cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3428ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3428d0:
    // 0x3428d0: 0x3e00008  jr          $ra
label_3428d4:
    if (ctx->pc == 0x3428D4u) {
        ctx->pc = 0x3428D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428D0u;
        // 0x3428d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3428D8u;
        goto label_fallthrough_0x3428d0;
    }
    ctx->pc = 0x3428D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3428D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428D0u;
        // 0x3428d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3428D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3428d0:
    ctx->pc = 0x3428D8u;
}
