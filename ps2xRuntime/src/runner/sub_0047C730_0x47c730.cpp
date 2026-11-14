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

// Function: sub_0047C730
// Address: 0x47c730 - 0x47c8a0
void sub_0047C730_0x47c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C730_0x47c730");
#endif

    switch (ctx->pc) {
        case 0x47c77cu: goto label_47c77c;
        case 0x47c79cu: goto label_47c79c;
        case 0x47c7e8u: goto label_47c7e8;
        case 0x47c800u: goto label_47c800;
        case 0x47c810u: goto label_47c810;
        case 0x47c820u: goto label_47c820;
        case 0x47c830u: goto label_47c830;
        case 0x47c86cu: goto label_47c86c;
        default: break;
    }

    ctx->pc = 0x47c730u;

    // 0x47c730: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x47c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x47c734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x47c738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47c738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47c73c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x47c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x47c740: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x47c740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x47c744: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x47c744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x47c748: 0xafa70070  sw          $a3, 0x70($sp)
    ctx->pc = 0x47c748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 7));
    // 0x47c74c: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x47c74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x47c750: 0x8f83c0a0  lw          $v1, -0x3F60($gp)
    ctx->pc = 0x47c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951072)));
    // 0x47c754: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47c754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47c758: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47c758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47c75c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x47c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x47c760: 0x8f82c0a4  lw          $v0, -0x3F5C($gp)
    ctx->pc = 0x47c760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951076)));
    // 0x47c764: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x47c764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47c768: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47c76c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x47c76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47c770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47c770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c774: 0xc11fa10  jal         func_47E840
    ctx->pc = 0x47C774u;
    SET_GPR_U32(ctx, 31, 0x47C77Cu);
    ctx->pc = 0x47E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E840u, 0x47C774u, 0x47C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C77Cu;
label_47c77c:
    // 0x47c77c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47C77Cu;
    {
        const bool branch_taken_0x47c77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47c77c) {
            ctx->pc = 0x47C790u;
            goto label_47c790;
        }
    }
    ctx->pc = 0x47C784u;
    // 0x47c784: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x47c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47c788: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x47C788u;
    {
        const bool branch_taken_0x47c788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c788) {
            ctx->pc = 0x47C88Cu;
            goto label_47c88c;
        }
    }
    ctx->pc = 0x47C790u;
label_47c790:
    // 0x47c790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47c790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c794: 0xc11f9cc  jal         func_47E730
    ctx->pc = 0x47C794u;
    SET_GPR_U32(ctx, 31, 0x47C79Cu);
    ctx->pc = 0x47E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E730u, 0x47C794u, 0x47C79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C79Cu;
label_47c79c:
    // 0x47c79c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x47c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47c7a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47C7A0u;
    {
        const bool branch_taken_0x47c7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47c7a0) {
            ctx->pc = 0x47C7B0u;
            goto label_47c7b0;
        }
    }
    ctx->pc = 0x47C7A8u;
    // 0x47c7a8: 0x2782c080  addiu       $v0, $gp, -0x3F80
    ctx->pc = 0x47c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951040));
    // 0x47c7ac: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x47c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_47c7b0:
    // 0x47c7b0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x47c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47c7b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47C7B4u;
    {
        const bool branch_taken_0x47c7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47c7b4) {
            ctx->pc = 0x47C7C4u;
            goto label_47c7c4;
        }
    }
    ctx->pc = 0x47C7BCu;
    // 0x47c7bc: 0x2782c080  addiu       $v0, $gp, -0x3F80
    ctx->pc = 0x47c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951040));
    // 0x47c7c0: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x47c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_47c7c4:
    // 0x47c7c4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x47c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47c7c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x47C7C8u;
    {
        const bool branch_taken_0x47c7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c7c8) {
            ctx->pc = 0x47C7E8u;
            goto label_47c7e8;
        }
    }
    ctx->pc = 0x47C7D0u;
    // 0x47c7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47c7d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x47c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x47c7d8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x47c7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x47c7dc: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x47c7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47c7e0: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x47C7E0u;
    SET_GPR_U32(ctx, 31, 0x47C7E8u);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x47C7E0u, 0x47C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C7E8u;
label_47c7e8:
    // 0x47c7e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x47c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47c7ec: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x47c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x47c7f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x47c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47c7f4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x47c7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47c7f8: 0xc041d58  jal         func_107560
    ctx->pc = 0x47C7F8u;
    SET_GPR_U32(ctx, 31, 0x47C800u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47C7F8u, 0x47C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C800u;
label_47c800:
    // 0x47c800: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x47c800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x47c804: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x47c804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47c808: 0xc041d58  jal         func_107560
    ctx->pc = 0x47C808u;
    SET_GPR_U32(ctx, 31, 0x47C810u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47C808u, 0x47C810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C810u;
label_47c810:
    // 0x47c810: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x47c810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x47c814: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x47c814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47c818: 0xc052608  jal         func_149820
    ctx->pc = 0x47C818u;
    SET_GPR_U32(ctx, 31, 0x47C820u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x47C818u, 0x47C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C820u;
label_47c820:
    // 0x47c820: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x47c820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x47c824: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x47c824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47c828: 0xc052608  jal         func_149820
    ctx->pc = 0x47C828u;
    SET_GPR_U32(ctx, 31, 0x47C830u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x47C828u, 0x47C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C830u;
label_47c830:
    // 0x47c830: 0x8f83c0a8  lw          $v1, -0x3F58($gp)
    ctx->pc = 0x47c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951080)));
    // 0x47c834: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47c834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x47c838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47c83c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47c83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x47c840: 0x8f82c0ac  lw          $v0, -0x3F54($gp)
    ctx->pc = 0x47c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951084)));
    // 0x47c844: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x47c844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47c848: 0x8f83c09c  lw          $v1, -0x3F64($gp)
    ctx->pc = 0x47c848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951068)));
    // 0x47c84c: 0x8f82c0a8  lw          $v0, -0x3F58($gp)
    ctx->pc = 0x47c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951080)));
    // 0x47c850: 0x624823  subu        $t1, $v1, $v0
    ctx->pc = 0x47c850u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47c854: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x47c854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47c858: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x47c858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x47c85c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47c85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47c860: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x47c860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x47c864: 0xc11f378  jal         func_47CDE0
    ctx->pc = 0x47C864u;
    SET_GPR_U32(ctx, 31, 0x47C86Cu);
    ctx->pc = 0x47CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CDE0u, 0x47C864u, 0x47C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C86Cu;
label_47c86c:
    // 0x47c86c: 0x8f83c0a8  lw          $v1, -0x3F58($gp)
    ctx->pc = 0x47c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951080)));
    // 0x47c870: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x47c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x47c874: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x47c874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47c878: 0xaf82c0a8  sw          $v0, -0x3F58($gp)
    ctx->pc = 0x47c878u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951080), GPR_U32(ctx, 2));
    // 0x47c87c: 0x8f82c0a0  lw          $v0, -0x3F60($gp)
    ctx->pc = 0x47c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951072)));
    // 0x47c880: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x47c880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x47c884: 0xaf82c0a0  sw          $v0, -0x3F60($gp)
    ctx->pc = 0x47c884u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951072), GPR_U32(ctx, 2));
    // 0x47c888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47c888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47c88c:
    // 0x47c88c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47c88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47c890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47c890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47c894: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x47c894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x47c898: 0x3e00008  jr          $ra
    ctx->pc = 0x47C898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C8A0u;
}
