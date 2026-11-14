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

// Function: sub_002A0520
// Address: 0x2a0520 - 0x2a06a0
void sub_002A0520_0x2a0520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0520_0x2a0520");
#endif

    switch (ctx->pc) {
        case 0x2a0550u: goto label_2a0550;
        case 0x2a0564u: goto label_2a0564;
        case 0x2a0574u: goto label_2a0574;
        case 0x2a0584u: goto label_2a0584;
        case 0x2a05a8u: goto label_2a05a8;
        case 0x2a05ccu: goto label_2a05cc;
        case 0x2a05e8u: goto label_2a05e8;
        case 0x2a0604u: goto label_2a0604;
        case 0x2a0620u: goto label_2a0620;
        case 0x2a063cu: goto label_2a063c;
        case 0x2a064cu: goto label_2a064c;
        case 0x2a0670u: goto label_2a0670;
        default: break;
    }

    ctx->pc = 0x2a0520u;

    // 0x2a0520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a0520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a0524: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a0524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2a0528: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a0528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a052c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a052cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a0530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a0530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a0534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a0538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a053c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x2a053cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x2a0540: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x2a0540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x2a0544: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2a0544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a0548: 0xc0a80a0  jal         func_2A0280
    ctx->pc = 0x2A0548u;
    SET_GPR_U32(ctx, 31, 0x2A0550u);
    ctx->pc = 0x2A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0280u, 0x2A0548u, 0x2A0550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0550u;
label_2a0550:
    // 0x2a0550: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a0550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0554: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a0554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0558: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a0558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a055c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2A055Cu;
    {
        const bool branch_taken_0x2a055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a055c) {
            ctx->pc = 0x2A0650u;
            goto label_2a0650;
        }
    }
    ctx->pc = 0x2A0564u;
label_2a0564:
    // 0x2a0564: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a0564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0568: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2a0568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a056c: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2A056Cu;
    SET_GPR_U32(ctx, 31, 0x2A0574u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2A056Cu, 0x2A0574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0574u;
label_2a0574:
    // 0x2a0574: 0x24140031  addiu       $s4, $zero, 0x31
    ctx->pc = 0x2a0574u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2a0578: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a0578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a057c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x2A057Cu;
    SET_GPR_U32(ctx, 31, 0x2A0584u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x2A057Cu, 0x2A0584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0584u;
label_2a0584:
    // 0x2a0584: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a0584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a0588: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2a0588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2a058c: 0xa0540060  sb          $s4, 0x60($v0)
    ctx->pc = 0x2a058cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 20));
    // 0x2a0590: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a0590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a0594: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2a0594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0598: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2a0598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2a059c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a059cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a05a0: 0xc08a320  jal         func_228C80
    ctx->pc = 0x2A05A0u;
    SET_GPR_U32(ctx, 31, 0x2A05A8u);
    ctx->pc = 0x228C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228C80u, 0x2A05A0u, 0x2A05A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05A8u;
label_2a05a8:
    // 0x2a05a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a05a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a05ac: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2a05acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2a05b0: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2a05b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2a05b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a05b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a05b8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2a05b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2a05bc: 0x24a502e0  addiu       $a1, $a1, 0x2E0
    ctx->pc = 0x2a05bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
    // 0x2a05c0: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x2a05c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2a05c4: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x2A05C4u;
    SET_GPR_U32(ctx, 31, 0x2A05CCu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x2A05C4u, 0x2A05CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05CCu;
label_2a05cc:
    // 0x2a05cc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2a05ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a05d0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2a05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a05d4: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x2a05d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2a05d8: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2a05d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a05dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a05dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a05e0: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x2A05E0u;
    SET_GPR_U32(ctx, 31, 0x2A05E8u);
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x2A05E0u, 0x2A05E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05E8u;
label_2a05e8:
    // 0x2a05e8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2a05e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a05ec: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x2a05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2a05f0: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a05f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2a05f4: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2a05f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a05f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a05f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a05fc: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x2A05FCu;
    SET_GPR_U32(ctx, 31, 0x2A0604u);
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x2A05FCu, 0x2A0604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0604u;
label_2a0604:
    // 0x2a0604: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2a0604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a0608: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2a0608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2a060c: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x2a060cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2a0610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a0610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0614: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x2a0614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a0618: 0xc0c8784  jal         func_321E10
    ctx->pc = 0x2A0618u;
    SET_GPR_U32(ctx, 31, 0x2A0620u);
    ctx->pc = 0x321E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321E10u, 0x2A0618u, 0x2A0620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0620u;
label_2a0620:
    // 0x2a0620: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2a0620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a0624: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x2a0624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x2a0628: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a0628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2a062c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a062cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0630: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x2a0630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2a0634: 0xc0c8784  jal         func_321E10
    ctx->pc = 0x2A0634u;
    SET_GPR_U32(ctx, 31, 0x2A063Cu);
    ctx->pc = 0x321E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321E10u, 0x2A0634u, 0x2A063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A063Cu;
label_2a063c:
    // 0x2a063c: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a063cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a0640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a0640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0644: 0xc08a614  jal         func_229850
    ctx->pc = 0x2A0644u;
    SET_GPR_U32(ctx, 31, 0x2A064Cu);
    ctx->pc = 0x229850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229850u, 0x2A0644u, 0x2A064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A064Cu;
label_2a064c:
    // 0x2a064c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a064cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2a0650:
    // 0x2a0650: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2a0650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a0654: 0x8c420194  lw          $v0, 0x194($v0)
    ctx->pc = 0x2a0654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 404)));
    // 0x2a0658: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2a0658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a065c: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2A065Cu;
    {
        const bool branch_taken_0x2a065c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a065c) {
            ctx->pc = 0x2A0564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0564;
        }
    }
    ctx->pc = 0x2A0664u;
    // 0x2a0664: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a0664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a0668: 0xc08a648  jal         func_229920
    ctx->pc = 0x2A0668u;
    SET_GPR_U32(ctx, 31, 0x2A0670u);
    ctx->pc = 0x229920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229920u, 0x2A0668u, 0x2A0670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0670u;
label_2a0670:
    // 0x2a0670: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a0670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0674: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a0674u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0678: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a0678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a067c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a067cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a0680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a0684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0688: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2a0688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a068c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A068Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A068Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0694u;
    // 0x2a0694: 0x0  nop
    ctx->pc = 0x2a0694u;
    // NOP
    // 0x2a0698: 0x0  nop
    ctx->pc = 0x2a0698u;
    // NOP
    // 0x2a069c: 0x0  nop
    ctx->pc = 0x2a069cu;
    // NOP
    ctx->pc = 0x2a06a0u;
}
