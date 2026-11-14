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

// Function: sub_0046B620
// Address: 0x46b620 - 0x46b7d0
void sub_0046B620_0x46b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B620_0x46b620");
#endif

    switch (ctx->pc) {
        case 0x46b65cu: goto label_46b65c;
        case 0x46b680u: goto label_46b680;
        case 0x46b6acu: goto label_46b6ac;
        case 0x46b6c4u: goto label_46b6c4;
        case 0x46b6d0u: goto label_46b6d0;
        case 0x46b6e4u: goto label_46b6e4;
        case 0x46b6f0u: goto label_46b6f0;
        case 0x46b704u: goto label_46b704;
        case 0x46b720u: goto label_46b720;
        case 0x46b734u: goto label_46b734;
        case 0x46b74cu: goto label_46b74c;
        case 0x46b764u: goto label_46b764;
        case 0x46b794u: goto label_46b794;
        case 0x46b7a4u: goto label_46b7a4;
        default: break;
    }

    ctx->pc = 0x46b620u;

    // 0x46b620: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x46b620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x46b624: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x46b624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x46b628: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x46b628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x46b62c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46b62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x46b630: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46b630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x46b634: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46b634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46b638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46b638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46b63c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46b63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46b640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46b640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46b644: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x46b644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x46b648: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x46b648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x46b64c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x46b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46b650: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b654: 0xc11a5bc  jal         func_4696F0
    ctx->pc = 0x46B654u;
    SET_GPR_U32(ctx, 31, 0x46B65Cu);
    ctx->pc = 0x4696F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4696F0u, 0x46B654u, 0x46B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B65Cu;
label_46b65c:
    // 0x46b65c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x46b65cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b660: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x46b660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x46b664: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x46b664u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x46b668: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x46B668u;
    {
        const bool branch_taken_0x46b668 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b668) {
            ctx->pc = 0x46B7A4u;
            goto label_46b7a4;
        }
    }
    ctx->pc = 0x46B670u;
    // 0x46b670: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x46b670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46b674: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x46b674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x46b678: 0xc11aa58  jal         func_46A960
    ctx->pc = 0x46B678u;
    SET_GPR_U32(ctx, 31, 0x46B680u);
    ctx->pc = 0x46A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A960u, 0x46B678u, 0x46B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B680u;
label_46b680:
    // 0x46b680: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x46b680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b684: 0x272082b  sltu        $at, $s3, $s2
    ctx->pc = 0x46b684u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x46b688: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x46B688u;
    {
        const bool branch_taken_0x46b688 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b688) {
            ctx->pc = 0x46B7A4u;
            goto label_46b7a4;
        }
    }
    ctx->pc = 0x46B690u;
    // 0x46b690: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x46b690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x46b694: 0x27b5009c  addiu       $s5, $sp, 0x9C
    ctx->pc = 0x46b694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
    // 0x46b698: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x46b698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46b69c: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x46b69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x46b6a0: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x46b6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b6a4: 0xc11aea4  jal         func_46BA90
    ctx->pc = 0x46B6A4u;
    SET_GPR_U32(ctx, 31, 0x46B6ACu);
    ctx->pc = 0x46BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BA90u, 0x46B6A4u, 0x46B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B6ACu;
label_46b6ac:
    // 0x46b6ac: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x46b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x46b6b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46b6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b6b4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x46b6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b6b8: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x46b6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x46b6bc: 0xc11ae64  jal         func_46B990
    ctx->pc = 0x46B6BCu;
    SET_GPR_U32(ctx, 31, 0x46B6C4u);
    ctx->pc = 0x46B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B990u, 0x46B6BCu, 0x46B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B6C4u;
label_46b6c4:
    // 0x46b6c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46b6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b6c8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x46B6C8u;
    {
        const bool branch_taken_0x46b6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b6c8) {
            ctx->pc = 0x46B774u;
            goto label_46b774;
        }
    }
    ctx->pc = 0x46B6D0u;
label_46b6d0:
    // 0x46b6d0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x46b6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46b6d4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b6d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46b6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b6dc: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46B6DCu;
    SET_GPR_U32(ctx, 31, 0x46B6E4u);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46B6DCu, 0x46B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B6E4u;
label_46b6e4:
    // 0x46b6e4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x46b6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46b6e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x46B6E8u;
    {
        const bool branch_taken_0x46b6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b6e8) {
            ctx->pc = 0x46B768u;
            goto label_46b768;
        }
    }
    ctx->pc = 0x46B6F0u;
label_46b6f0:
    // 0x46b6f0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x46b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46b6f4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x46b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x46b6f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x46b6f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b6fc: 0xc11ae50  jal         func_46B940
    ctx->pc = 0x46B6FCu;
    SET_GPR_U32(ctx, 31, 0x46B704u);
    ctx->pc = 0x46B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B940u, 0x46B6FCu, 0x46B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B704u;
label_46b704:
    // 0x46b704: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x46b704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b708: 0x8e160000  lw          $s6, 0x0($s0)
    ctx->pc = 0x46b708u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x46b70c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x46b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46b710: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b714: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46b714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b718: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46B718u;
    SET_GPR_U32(ctx, 31, 0x46B720u);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46B718u, 0x46B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B720u;
label_46b720:
    // 0x46b720: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x46b720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x46b724: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x46b724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x46b728: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46b728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b72c: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46B72Cu;
    SET_GPR_U32(ctx, 31, 0x46B734u);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46B72Cu, 0x46B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B734u;
label_46b734:
    // 0x46b734: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46b734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46b738: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x46b738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x46b73c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x46b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x46b740: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46b740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b744: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46B744u;
    SET_GPR_U32(ctx, 31, 0x46B74Cu);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46B744u, 0x46B74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B74Cu;
label_46b74c:
    // 0x46b74c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x46b74cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x46b750: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x46b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46b754: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b758: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x46b758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b75c: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46B75Cu;
    SET_GPR_U32(ctx, 31, 0x46B764u);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46B75Cu, 0x46B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B764u;
label_46b764:
    // 0x46b764: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x46b764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46b768:
    // 0x46b768: 0x1600ffe1  bnez        $s0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x46B768u;
    {
        const bool branch_taken_0x46b768 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b768) {
            ctx->pc = 0x46B6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b6f0;
        }
    }
    ctx->pc = 0x46B770u;
    // 0x46b770: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x46b770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_46b774:
    // 0x46b774: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x46b774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x46b778: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x46B778u;
    {
        const bool branch_taken_0x46b778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b778) {
            ctx->pc = 0x46B6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b6d0;
        }
    }
    ctx->pc = 0x46B780u;
    // 0x46b780: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x46b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46b784: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b788: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x46b788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x46b78c: 0xc11adf4  jal         func_46B7D0
    ctx->pc = 0x46B78Cu;
    SET_GPR_U32(ctx, 31, 0x46B794u);
    ctx->pc = 0x46B7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B7D0u, 0x46B78Cu, 0x46B794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B794u;
label_46b794:
    // 0x46b794: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x46b794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x46b798: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46b798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46b79c: 0xc11a6e0  jal         func_469B80
    ctx->pc = 0x46B79Cu;
    SET_GPR_U32(ctx, 31, 0x46B7A4u);
    ctx->pc = 0x469B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469B80u, 0x46B79Cu, 0x46B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B7A4u;
label_46b7a4:
    // 0x46b7a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x46b7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46b7a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46b7a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46b7ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46b7acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46b7b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46b7b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b7b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46b7b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46b7b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46b7b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b7bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46b7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46b7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b7c4: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x46b7c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x46b7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x46B7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B7D0u;
}
