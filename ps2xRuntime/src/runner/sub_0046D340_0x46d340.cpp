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

// Function: sub_0046D340
// Address: 0x46d340 - 0x46d4e0
void sub_0046D340_0x46d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D340_0x46d340");
#endif

    switch (ctx->pc) {
        case 0x46d37cu: goto label_46d37c;
        case 0x46d38cu: goto label_46d38c;
        case 0x46d3a0u: goto label_46d3a0;
        case 0x46d3b8u: goto label_46d3b8;
        case 0x46d3ccu: goto label_46d3cc;
        case 0x46d3e8u: goto label_46d3e8;
        case 0x46d3f4u: goto label_46d3f4;
        case 0x46d408u: goto label_46d408;
        case 0x46d424u: goto label_46d424;
        case 0x46d43cu: goto label_46d43c;
        case 0x46d44cu: goto label_46d44c;
        case 0x46d45cu: goto label_46d45c;
        case 0x46d48cu: goto label_46d48c;
        default: break;
    }

    ctx->pc = 0x46d340u;

    // 0x46d340: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x46d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x46d344: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x46d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x46d348: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x46d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x46d34c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x46d350: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x46d354: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46d354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46d358: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46d358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46d35c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46d360: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46d360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46d364: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x46d364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x46d368: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x46d368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x46d36c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x46d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x46d370: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46d370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46d374: 0xc11b538  jal         func_46D4E0
    ctx->pc = 0x46D374u;
    SET_GPR_U32(ctx, 31, 0x46D37Cu);
    ctx->pc = 0x46D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D4E0u, 0x46D374u, 0x46D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D37Cu;
label_46d37c:
    // 0x46d37c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x46d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46d380: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46d380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46d384: 0xc11a5bc  jal         func_4696F0
    ctx->pc = 0x46D384u;
    SET_GPR_U32(ctx, 31, 0x46D38Cu);
    ctx->pc = 0x4696F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4696F0u, 0x46D384u, 0x46D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D38Cu;
label_46d38c:
    // 0x46d38c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x46d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x46d390: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x46d390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x46d394: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46d394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d398: 0xc11ab90  jal         func_46AE40
    ctx->pc = 0x46D398u;
    SET_GPR_U32(ctx, 31, 0x46D3A0u);
    ctx->pc = 0x46AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AE40u, 0x46D398u, 0x46D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D3A0u;
label_46d3a0:
    // 0x46d3a0: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x46d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x46d3a4: 0x27b5008c  addiu       $s5, $sp, 0x8C
    ctx->pc = 0x46d3a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x46d3a8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x46d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x46d3ac: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46d3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46d3b0: 0xc11a7b8  jal         func_469EE0
    ctx->pc = 0x46D3B0u;
    SET_GPR_U32(ctx, 31, 0x46D3B8u);
    ctx->pc = 0x469EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469EE0u, 0x46D3B0u, 0x46D3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D3B8u;
label_46d3b8:
    // 0x46d3b8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x46d3b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d3bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x46d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46d3c0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46d3c4: 0xc11a5bc  jal         func_4696F0
    ctx->pc = 0x46D3C4u;
    SET_GPR_U32(ctx, 31, 0x46D3CCu);
    ctx->pc = 0x4696F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4696F0u, 0x46D3C4u, 0x46D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D3CCu;
label_46d3cc:
    // 0x46d3cc: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x46d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x46d3d0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x46d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x46d3d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x46d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d3d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x46d3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d3dc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x46d3dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d3e0: 0xc11a7a8  jal         func_469EA0
    ctx->pc = 0x46D3E0u;
    SET_GPR_U32(ctx, 31, 0x46D3E8u);
    ctx->pc = 0x469EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469EA0u, 0x46D3E0u, 0x46D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D3E8u;
label_46d3e8:
    // 0x46d3e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46d3e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d3ec: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x46D3ECu;
    {
        const bool branch_taken_0x46d3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d3ec) {
            ctx->pc = 0x46D47Cu;
            goto label_46d47c;
        }
    }
    ctx->pc = 0x46D3F4u;
label_46d3f4:
    // 0x46d3f4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x46d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46d3f8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46d3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46d3fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46d3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d400: 0xc11a98c  jal         func_46A630
    ctx->pc = 0x46D400u;
    SET_GPR_U32(ctx, 31, 0x46D408u);
    ctx->pc = 0x46A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A630u, 0x46D400u, 0x46D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D408u;
label_46d408:
    // 0x46d408: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x46d408u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46d40c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x46D40Cu;
    {
        const bool branch_taken_0x46d40c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d40c) {
            ctx->pc = 0x46D478u;
            goto label_46d478;
        }
    }
    ctx->pc = 0x46D414u;
    // 0x46d414: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x46d414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x46d418: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x46d418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x46d41c: 0xc11ac28  jal         func_46B0A0
    ctx->pc = 0x46D41Cu;
    SET_GPR_U32(ctx, 31, 0x46D424u);
    ctx->pc = 0x46B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B0A0u, 0x46D41Cu, 0x46D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D424u;
label_46d424:
    // 0x46d424: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46d424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d428: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x46d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x46d42c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46d430: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46d430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d434: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46D434u;
    SET_GPR_U32(ctx, 31, 0x46D43Cu);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46D434u, 0x46D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D43Cu;
label_46d43c:
    // 0x46d43c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x46d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x46d440: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x46d440u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x46d444: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x46D444u;
    {
        const bool branch_taken_0x46d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d444) {
            ctx->pc = 0x46D470u;
            goto label_46d470;
        }
    }
    ctx->pc = 0x46D44Cu;
label_46d44c:
    // 0x46d44c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x46d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x46d450: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x46d450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x46d454: 0xc11ac28  jal         func_46B0A0
    ctx->pc = 0x46D454u;
    SET_GPR_U32(ctx, 31, 0x46D45Cu);
    ctx->pc = 0x46B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B0A0u, 0x46D454u, 0x46D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D45Cu;
label_46d45c:
    // 0x46d45c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x46d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x46d460: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x46d460u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x46d464: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x46d464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d468: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x46d468u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x46d46c: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x46d46cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46d470:
    // 0x46d470: 0x1660fff6  bnez        $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x46D470u;
    {
        const bool branch_taken_0x46d470 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x46d470) {
            ctx->pc = 0x46D44Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d44c;
        }
    }
    ctx->pc = 0x46D478u;
label_46d478:
    // 0x46d478: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x46d478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_46d47c:
    // 0x46d47c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x46d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46d480: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46d480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46d484: 0xc11a5bc  jal         func_4696F0
    ctx->pc = 0x46D484u;
    SET_GPR_U32(ctx, 31, 0x46D48Cu);
    ctx->pc = 0x4696F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4696F0u, 0x46D484u, 0x46D48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D48Cu;
label_46d48c:
    // 0x46d48c: 0x242182b  sltu        $v1, $s2, $v0
    ctx->pc = 0x46d48cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x46d490: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x46D490u;
    {
        const bool branch_taken_0x46d490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x46d490) {
            ctx->pc = 0x46D3F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d3f4;
        }
    }
    ctx->pc = 0x46D498u;
    // 0x46d498: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x46d498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x46d49c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x46d49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x46d4a0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x46d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x46d4a4: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x46d4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x46d4a8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x46d4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46d4ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46d4acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46d4b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46d4b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46d4b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46d4b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46d4b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46d4b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46d4bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46d4bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46d4c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46d4c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d4c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46d4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d4c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x46d4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46d4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x46D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D4CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D4D4u;
    // 0x46d4d4: 0x0  nop
    ctx->pc = 0x46d4d4u;
    // NOP
    // 0x46d4d8: 0x0  nop
    ctx->pc = 0x46d4d8u;
    // NOP
    // 0x46d4dc: 0x0  nop
    ctx->pc = 0x46d4dcu;
    // NOP
    ctx->pc = 0x46d4e0u;
}
