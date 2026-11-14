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

// Function: sub_00207840
// Address: 0x207840 - 0x207a10
void sub_00207840_0x207840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207840_0x207840");
#endif

    switch (ctx->pc) {
        case 0x207884u: goto label_207884;
        case 0x2078b4u: goto label_2078b4;
        case 0x2078c8u: goto label_2078c8;
        case 0x2078d0u: goto label_2078d0;
        case 0x2078dcu: goto label_2078dc;
        case 0x2078ecu: goto label_2078ec;
        case 0x2078fcu: goto label_2078fc;
        case 0x207908u: goto label_207908;
        case 0x207918u: goto label_207918;
        case 0x207930u: goto label_207930;
        case 0x207954u: goto label_207954;
        case 0x207964u: goto label_207964;
        case 0x207984u: goto label_207984;
        case 0x2079a4u: goto label_2079a4;
        case 0x2079b4u: goto label_2079b4;
        case 0x2079ccu: goto label_2079cc;
        case 0x2079dcu: goto label_2079dc;
        default: break;
    }

    ctx->pc = 0x207840u;

    // 0x207840: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x207840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x207844: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x207844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x207848: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x207848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x20784c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x20784cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x207850: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x207850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x207854: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x207854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x207858: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x207858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20785c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x207860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x207864: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x207864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x207868: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x207868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x20786c: 0xa3a500a0  sb          $a1, 0xA0($sp)
    ctx->pc = 0x20786cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 5));
    // 0x207870: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x207870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x207874: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x207874u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x207878: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x207878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20787c: 0xc047068  jal         func_11C1A0
    ctx->pc = 0x20787Cu;
    SET_GPR_U32(ctx, 31, 0x207884u);
    ctx->pc = 0x11C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1A0u, 0x20787Cu, 0x207884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207884u;
label_207884:
    // 0x207884: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x207884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x207888: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x207888u;
    {
        const bool branch_taken_0x207888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207888) {
            ctx->pc = 0x2078C8u;
            goto label_2078c8;
        }
    }
    ctx->pc = 0x207890u;
    // 0x207890: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x207890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x207894: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x207894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207898: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x207898u;
    {
        const bool branch_taken_0x207898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207898) {
            ctx->pc = 0x2078C8u;
            goto label_2078c8;
        }
    }
    ctx->pc = 0x2078A0u;
    // 0x2078a0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2078a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2078a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2078a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2078a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2078a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2078ac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2078ACu;
    SET_GPR_U32(ctx, 31, 0x2078B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2078ACu, 0x2078B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078B4u;
label_2078b4:
    // 0x2078b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2078b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2078b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2078bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2078c0: 0xc0a85cc  jal         func_2A1730
    ctx->pc = 0x2078C0u;
    SET_GPR_U32(ctx, 31, 0x2078C8u);
    ctx->pc = 0x2A1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1730u, 0x2078C0u, 0x2078C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078C8u;
label_2078c8:
    // 0x2078c8: 0xc090864  jal         func_242190
    ctx->pc = 0x2078C8u;
    SET_GPR_U32(ctx, 31, 0x2078D0u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2078C8u, 0x2078D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078D0u;
label_2078d0:
    // 0x2078d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2078d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078d4: 0xc090590  jal         func_241640
    ctx->pc = 0x2078D4u;
    SET_GPR_U32(ctx, 31, 0x2078DCu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2078D4u, 0x2078DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078DCu;
label_2078dc:
    // 0x2078dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2078dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078e0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2078e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2078e4: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2078E4u;
    SET_GPR_U32(ctx, 31, 0x2078ECu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2078E4u, 0x2078ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078ECu;
label_2078ec:
    // 0x2078ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2078ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2078f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2078f4: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2078F4u;
    SET_GPR_U32(ctx, 31, 0x2078FCu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2078F4u, 0x2078FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2078FCu;
label_2078fc:
    // 0x2078fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2078fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207900: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x207900u;
    {
        const bool branch_taken_0x207900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207900) {
            ctx->pc = 0x207958u;
            goto label_207958;
        }
    }
    ctx->pc = 0x207908u;
label_207908:
    // 0x207908: 0x8e170000  lw          $s7, 0x0($s0)
    ctx->pc = 0x207908u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20790c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x20790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x207910: 0xc081d2c  jal         func_2074B0
    ctx->pc = 0x207910u;
    SET_GPR_U32(ctx, 31, 0x207918u);
    ctx->pc = 0x2074B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074B0u, 0x207910u, 0x207918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207918u;
label_207918:
    // 0x207918: 0x12e2000e  beq         $s7, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x207918u;
    {
        const bool branch_taken_0x207918 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x207918) {
            ctx->pc = 0x207954u;
            goto label_207954;
        }
    }
    ctx->pc = 0x207920u;
    // 0x207920: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x207920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x207924: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x207924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x207928: 0xc085538  jal         func_2154E0
    ctx->pc = 0x207928u;
    SET_GPR_U32(ctx, 31, 0x207930u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x207928u, 0x207930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207930u;
label_207930:
    // 0x207930: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x207930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207934: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x207934u;
    {
        const bool branch_taken_0x207934 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x207934) {
            ctx->pc = 0x207954u;
            goto label_207954;
        }
    }
    ctx->pc = 0x20793Cu;
    // 0x20793c: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x20793cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x207940: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x207940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x207944: 0x38450001  xori        $a1, $v0, 0x1
    ctx->pc = 0x207944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x207948: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x207948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20794c: 0xc0a85cc  jal         func_2A1730
    ctx->pc = 0x20794Cu;
    SET_GPR_U32(ctx, 31, 0x207954u);
    ctx->pc = 0x2A1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1730u, 0x20794Cu, 0x207954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207954u;
label_207954:
    // 0x207954: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x207954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_207958:
    // 0x207958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x207958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20795c: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x20795Cu;
    SET_GPR_U32(ctx, 31, 0x207964u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x20795Cu, 0x207964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207964u;
label_207964:
    // 0x207964: 0x1602ffe8  bne         $s0, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x207964u;
    {
        const bool branch_taken_0x207964 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x207964) {
            ctx->pc = 0x207908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207908;
        }
    }
    ctx->pc = 0x20796Cu;
    // 0x20796c: 0x93a300a0  lbu         $v1, 0xA0($sp)
    ctx->pc = 0x20796cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x207970: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x207970u;
    {
        const bool branch_taken_0x207970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x207970) {
            ctx->pc = 0x2079DCu;
            goto label_2079dc;
        }
    }
    ctx->pc = 0x207978u;
    // 0x207978: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x207978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20797c: 0xc081d2c  jal         func_2074B0
    ctx->pc = 0x20797Cu;
    SET_GPR_U32(ctx, 31, 0x207984u);
    ctx->pc = 0x2074B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074B0u, 0x20797Cu, 0x207984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207984u;
label_207984:
    // 0x207984: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x207984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207988: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x207988u;
    {
        const bool branch_taken_0x207988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x207988) {
            ctx->pc = 0x2079DCu;
            goto label_2079dc;
        }
    }
    ctx->pc = 0x207990u;
    // 0x207990: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x207990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x207994: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x207994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207998: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x207998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20799c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x20799Cu;
    SET_GPR_U32(ctx, 31, 0x2079A4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x20799Cu, 0x2079A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2079A4u;
label_2079a4:
    // 0x2079a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2079a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2079a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2079a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2079ac: 0xc096880  jal         func_25A200
    ctx->pc = 0x2079ACu;
    SET_GPR_U32(ctx, 31, 0x2079B4u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2079ACu, 0x2079B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2079B4u;
label_2079b4:
    // 0x2079b4: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2079B4u;
    {
        const bool branch_taken_0x2079b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2079b4) {
            ctx->pc = 0x2079DCu;
            goto label_2079dc;
        }
    }
    ctx->pc = 0x2079BCu;
    // 0x2079bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2079bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2079c0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2079c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2079c4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2079C4u;
    SET_GPR_U32(ctx, 31, 0x2079CCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2079C4u, 0x2079CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2079CCu;
label_2079cc:
    // 0x2079cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2079ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2079d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2079d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2079d4: 0xc09c388  jal         func_270E20
    ctx->pc = 0x2079D4u;
    SET_GPR_U32(ctx, 31, 0x2079DCu);
    ctx->pc = 0x270E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E20u, 0x2079D4u, 0x2079DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2079DCu;
label_2079dc:
    // 0x2079dc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2079dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2079e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2079e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2079e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2079e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2079e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2079e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2079ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2079ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2079f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2079f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2079f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2079f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2079f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2079f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2079fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2079fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207a00: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x207a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x207a04: 0x3e00008  jr          $ra
    ctx->pc = 0x207A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207A0Cu;
    // 0x207a0c: 0x0  nop
    ctx->pc = 0x207a0cu;
    // NOP
    ctx->pc = 0x207a10u;
}
