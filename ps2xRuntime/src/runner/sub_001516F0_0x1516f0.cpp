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

// Function: sub_001516F0
// Address: 0x1516f0 - 0x151920
void sub_001516F0_0x1516f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001516F0_0x1516f0");
#endif

    switch (ctx->pc) {
        case 0x15171cu: goto label_15171c;
        case 0x151728u: goto label_151728;
        case 0x15173cu: goto label_15173c;
        case 0x151748u: goto label_151748;
        case 0x151800u: goto label_151800;
        case 0x15182cu: goto label_15182c;
        case 0x15183cu: goto label_15183c;
        case 0x151858u: goto label_151858;
        case 0x151868u: goto label_151868;
        case 0x151878u: goto label_151878;
        case 0x15188cu: goto label_15188c;
        default: break;
    }

    ctx->pc = 0x1516f0u;

    // 0x1516f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1516f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1516f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1516f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1516f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1516f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1516fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1516fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151708: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x151708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x15170c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x15170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x151710: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x151710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x151714: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x151714u;
    SET_GPR_U32(ctx, 31, 0x15171Cu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x151714u, 0x15171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15171Cu;
label_15171c:
    // 0x15171c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15171cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151720: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x151720u;
    SET_GPR_U32(ctx, 31, 0x151728u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x151720u, 0x151728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151728u;
label_151728:
    // 0x151728: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x151728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15172c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x15172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x151730: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x151730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x151734: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x151734u;
    SET_GPR_U32(ctx, 31, 0x15173Cu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x151734u, 0x15173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15173Cu;
label_15173c:
    // 0x15173c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151740: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x151740u;
    SET_GPR_U32(ctx, 31, 0x151748u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x151740u, 0x151748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151748u;
label_151748:
    // 0x151748: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x151748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15174c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x15174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x151750: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x151750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x151754: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x151754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x151758: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x151758u;
    {
        const bool branch_taken_0x151758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151758) {
            ctx->pc = 0x1517ACu;
            goto label_1517ac;
        }
    }
    ctx->pc = 0x151760u;
    // 0x151760: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x151760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x151764: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x151764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x151768: 0x2117e  dsrl32      $v0, $v0, 5
    ctx->pc = 0x151768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 5));
    // 0x15176c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x151770: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x151770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x151774: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x151774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x151778: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x151778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x15177c: 0x2117e  dsrl32      $v0, $v0, 5
    ctx->pc = 0x15177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 5));
    // 0x151780: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x151780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x151784: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151788: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x151788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15178c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151790: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x151790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x151794: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x151794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x151798: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x151798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15179c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1517a0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1517a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1517a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1517A4u;
    {
        const bool branch_taken_0x1517a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1517a4) {
            ctx->pc = 0x1517ECu;
            goto label_1517ec;
        }
    }
    ctx->pc = 0x1517ACu;
label_1517ac:
    // 0x1517ac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1517acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1517b0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1517b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1517b4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1517b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1517b8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1517b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1517bc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1517bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1517c0: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x1517c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x1517c4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1517c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1517c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1517c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1517cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1517ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1517d0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1517d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1517d4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1517d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1517d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1517d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1517dc: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1517dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1517e0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x1517e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1517e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1517e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1517e8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1517e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_1517ec:
    // 0x1517ec: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1517ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1517f0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1517f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1517f4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1517F4u;
    {
        const bool branch_taken_0x1517f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1517f4) {
            ctx->pc = 0x15181Cu;
            goto label_15181c;
        }
    }
    ctx->pc = 0x1517FCu;
    // 0x1517fc: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1517fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_151800:
    // 0x151800: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x151800u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x151804: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x151804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x151808: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x151808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15180c: 0x0  nop
    ctx->pc = 0x15180cu;
    // NOP
    // 0x151810: 0x0  nop
    ctx->pc = 0x151810u;
    // NOP
    // 0x151814: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x151814u;
    {
        const bool branch_taken_0x151814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151814) {
            ctx->pc = 0x151800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151800;
        }
    }
    ctx->pc = 0x15181Cu;
label_15181c:
    // 0x15181c: 0x8f82ba98  lw          $v0, -0x4568($gp)
    ctx->pc = 0x15181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949528)));
    // 0x151820: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x151820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x151824: 0xc093728  jal         func_24DCA0
    ctx->pc = 0x151824u;
    SET_GPR_U32(ctx, 31, 0x15182Cu);
    ctx->pc = 0x24DCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DCA0u, 0x151824u, 0x15182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15182Cu;
label_15182c:
    // 0x15182c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15182cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151830: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x151830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151834: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x151834u;
    {
        const bool branch_taken_0x151834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151834) {
            ctx->pc = 0x1518A0u;
            goto label_1518a0;
        }
    }
    ctx->pc = 0x15183Cu;
label_15183c:
    // 0x15183c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15183cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x151840: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x151840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x151844: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x151844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x151848: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x151848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15184c: 0x24460060  addiu       $a2, $v0, 0x60
    ctx->pc = 0x15184cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x151850: 0xc053bd0  jal         func_14EF40
    ctx->pc = 0x151850u;
    SET_GPR_U32(ctx, 31, 0x151858u);
    ctx->pc = 0x14EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF40u, 0x151850u, 0x151858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151858u;
label_151858:
    // 0x151858: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x151858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15185c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15185cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151860: 0xc053ba4  jal         func_14EE90
    ctx->pc = 0x151860u;
    SET_GPR_U32(ctx, 31, 0x151868u);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x151860u, 0x151868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151868u;
label_151868:
    // 0x151868: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x151868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15186c: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x15186cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x151870: 0xc041998  jal         func_106660
    ctx->pc = 0x151870u;
    SET_GPR_U32(ctx, 31, 0x151878u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x151870u, 0x151878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151878u;
label_151878:
    // 0x151878: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x151878u;
    {
        const bool branch_taken_0x151878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151878) {
            ctx->pc = 0x15189Cu;
            goto label_15189c;
        }
    }
    ctx->pc = 0x151880u;
    // 0x151880: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x151880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x151884: 0xc054648  jal         func_151920
    ctx->pc = 0x151884u;
    SET_GPR_U32(ctx, 31, 0x15188Cu);
    ctx->pc = 0x151920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151920u, 0x151884u, 0x15188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15188Cu;
label_15188c:
    // 0x15188c: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15188cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x151890: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x151890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x151894: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x151894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x151898: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x151898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
label_15189c:
    // 0x15189c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15189cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1518a0:
    // 0x1518a0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1518a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1518a4: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1518A4u;
    {
        const bool branch_taken_0x1518a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1518a4) {
            ctx->pc = 0x15183Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15183c;
        }
    }
    ctx->pc = 0x1518ACu;
    // 0x1518ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1518acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1518b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1518B0u;
    {
        const bool branch_taken_0x1518b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1518b0) {
            ctx->pc = 0x1518D4u;
            goto label_1518d4;
        }
    }
    ctx->pc = 0x1518B8u;
    // 0x1518b8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1518b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1518bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1518bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1518c0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1518C0u;
    {
        const bool branch_taken_0x1518c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1518c0) {
            ctx->pc = 0x1518D4u;
            goto label_1518d4;
        }
    }
    ctx->pc = 0x1518C8u;
    // 0x1518c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1518c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1518cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1518CCu;
    {
        const bool branch_taken_0x1518cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1518cc) {
            ctx->pc = 0x151900u;
            goto label_151900;
        }
    }
    ctx->pc = 0x1518D4u;
label_1518d4:
    // 0x1518d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1518d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1518d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1518D8u;
    {
        const bool branch_taken_0x1518d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1518d8) {
            ctx->pc = 0x1518FCu;
            goto label_1518fc;
        }
    }
    ctx->pc = 0x1518E0u;
    // 0x1518e0: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1518e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1518e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1518e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1518e8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1518E8u;
    {
        const bool branch_taken_0x1518e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1518e8) {
            ctx->pc = 0x1518FCu;
            goto label_1518fc;
        }
    }
    ctx->pc = 0x1518F0u;
    // 0x1518f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1518f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1518f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1518F4u;
    {
        const bool branch_taken_0x1518f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1518f4) {
            ctx->pc = 0x151900u;
            goto label_151900;
        }
    }
    ctx->pc = 0x1518FCu;
label_1518fc:
    // 0x1518fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1518fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151900:
    // 0x151900: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x151900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x151904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15190c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15190cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151914: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x151914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x151918: 0x3e00008  jr          $ra
    ctx->pc = 0x151918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151920u;
}
