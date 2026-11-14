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

// Function: sub_00325788
// Address: 0x325788 - 0x3258b8
void sub_00325788_0x325788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325788_0x325788");
#endif

    switch (ctx->pc) {
        case 0x3257acu: goto label_3257ac;
        case 0x3257d4u: goto label_3257d4;
        case 0x3257fcu: goto label_3257fc;
        case 0x325824u: goto label_325824;
        case 0x32584cu: goto label_32584c;
        case 0x325874u: goto label_325874;
        case 0x32589cu: goto label_32589c;
        default: break;
    }

    ctx->pc = 0x325788u;

    // 0x325788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32578c: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x32578cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x325790: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x325790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x325794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325798: 0x24c66810  addiu       $a2, $a2, 0x6810
    ctx->pc = 0x325798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26640));
    // 0x32579c: 0x24e767a8  addiu       $a3, $a3, 0x67A8
    ctx->pc = 0x32579cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26536));
    // 0x3257a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3257a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3257a4: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x3257A4u;
    SET_GPR_U32(ctx, 31, 0x3257ACu);
    ctx->pc = 0x3257A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3257A4u;
    // 0x3257a8: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x3257A4u, 0x3257ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257ACu;
label_3257ac:
    // 0x3257ac: 0x440003e  bltz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3257ACu;
    {
        const bool branch_taken_0x3257ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3257B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257ACu;
        // 0x3257b0: 0x3c060032  lui         $a2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257ac) {
            ctx->pc = 0x3258A8u;
            goto label_3258a8;
        }
    }
    ctx->pc = 0x3257B4u;
    // 0x3257b4: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x3257b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x3257b8: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x3257b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x3257bc: 0x24c668b0  addiu       $a2, $a2, 0x68B0
    ctx->pc = 0x3257bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26800));
    // 0x3257c0: 0x24e768c8  addiu       $a3, $a3, 0x68C8
    ctx->pc = 0x3257c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26824));
    // 0x3257c4: 0x25084808  addiu       $t0, $t0, 0x4808
    ctx->pc = 0x3257c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18440));
    // 0x3257c8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3257c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3257cc: 0xc0e39f6  jal         func_38E7D8
    ctx->pc = 0x3257CCu;
    SET_GPR_U32(ctx, 31, 0x3257D4u);
    ctx->pc = 0x3257D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3257CCu;
    // 0x3257d0: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E7D8u, 0x3257CCu, 0x3257D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257D4u;
label_3257d4:
    // 0x3257d4: 0x4400034  bltz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3257D4u;
    {
        const bool branch_taken_0x3257d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3257D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257D4u;
        // 0x3257d8: 0xaf82a634  sw          $v0, -0x59CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257d4) {
            ctx->pc = 0x3258A8u;
            goto label_3258a8;
        }
    }
    ctx->pc = 0x3257DCu;
    // 0x3257dc: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x3257dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x3257e0: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x3257e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x3257e4: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x3257e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x3257e8: 0x24a54d38  addiu       $a1, $a1, 0x4D38
    ctx->pc = 0x3257e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19768));
    // 0x3257ec: 0x24c64aa0  addiu       $a2, $a2, 0x4AA0
    ctx->pc = 0x3257ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19104));
    // 0x3257f0: 0x24e75208  addiu       $a3, $a3, 0x5208
    ctx->pc = 0x3257f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21000));
    // 0x3257f4: 0xc0e3a08  jal         func_38E820
    ctx->pc = 0x3257F4u;
    SET_GPR_U32(ctx, 31, 0x3257FCu);
    ctx->pc = 0x3257F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3257F4u;
    // 0x3257f8: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E820u, 0x3257F4u, 0x3257FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3257FCu;
label_3257fc:
    // 0x3257fc: 0x440002a  bltz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3257FCu;
    {
        const bool branch_taken_0x3257fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x325800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3257FCu;
        // 0x325800: 0x3c060032  lui         $a2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3257fc) {
            ctx->pc = 0x3258A8u;
            goto label_3258a8;
        }
    }
    ctx->pc = 0x325804u;
    // 0x325804: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x325804u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x325808: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x325808u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x32580c: 0x24c66938  addiu       $a2, $a2, 0x6938
    ctx->pc = 0x32580cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26936));
    // 0x325810: 0x24e76950  addiu       $a3, $a3, 0x6950
    ctx->pc = 0x325810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26960));
    // 0x325814: 0x25086968  addiu       $t0, $t0, 0x6968
    ctx->pc = 0x325814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26984));
    // 0x325818: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x325818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32581c: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x32581Cu;
    SET_GPR_U32(ctx, 31, 0x325824u);
    ctx->pc = 0x325820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32581Cu;
    // 0x325820: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x32581Cu, 0x325824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325824u;
label_325824:
    // 0x325824: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x325824u;
    {
        const bool branch_taken_0x325824 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x325828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325824u;
        // 0x325828: 0xaf82a638  sw          $v0, -0x59C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325824) {
            ctx->pc = 0x3258A8u;
            goto label_3258a8;
        }
    }
    ctx->pc = 0x32582Cu;
    // 0x32582c: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x32582cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x325830: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x325830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x325834: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x325834u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x325838: 0x24a569c0  addiu       $a1, $a1, 0x69C0
    ctx->pc = 0x325838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27072));
    // 0x32583c: 0x24c66990  addiu       $a2, $a2, 0x6990
    ctx->pc = 0x32583cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27024));
    // 0x325840: 0x24e76a20  addiu       $a3, $a3, 0x6A20
    ctx->pc = 0x325840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27168));
    // 0x325844: 0xc0e2910  jal         func_38A440
    ctx->pc = 0x325844u;
    SET_GPR_U32(ctx, 31, 0x32584Cu);
    ctx->pc = 0x325848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325844u;
    // 0x325848: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A440u, 0x325844u, 0x32584Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32584Cu;
label_32584c:
    // 0x32584c: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32584Cu;
    {
        const bool branch_taken_0x32584c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x325850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32584Cu;
        // 0x325850: 0x3c060032  lui         $a2, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32584c) {
            ctx->pc = 0x3258A8u;
            goto label_3258a8;
        }
    }
    ctx->pc = 0x325854u;
    // 0x325854: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x325854u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x325858: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x325858u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x32585c: 0x24c66a38  addiu       $a2, $a2, 0x6A38
    ctx->pc = 0x32585cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27192));
    // 0x325860: 0x24e76a50  addiu       $a3, $a3, 0x6A50
    ctx->pc = 0x325860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27216));
    // 0x325864: 0x25086a68  addiu       $t0, $t0, 0x6A68
    ctx->pc = 0x325864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27240));
    // 0x325868: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x325868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32586c: 0xc0e63a2  jal         func_398E88
    ctx->pc = 0x32586Cu;
    SET_GPR_U32(ctx, 31, 0x325874u);
    ctx->pc = 0x325870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32586Cu;
    // 0x325870: 0x24050120  addiu       $a1, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E88u, 0x32586Cu, 0x325874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325874u;
label_325874:
    // 0x325874: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x325874u;
    {
        const bool branch_taken_0x325874 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x325878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325874u;
        // 0x325878: 0xaf82a63c  sw          $v0, -0x59C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325874) {
            ctx->pc = 0x3258A8u;
            goto label_3258a8;
        }
    }
    ctx->pc = 0x32587Cu;
    // 0x32587c: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x32587cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x325880: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x325880u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x325884: 0x3c070032  lui         $a3, 0x32
    ctx->pc = 0x325884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50 << 16));
    // 0x325888: 0x24a56ac0  addiu       $a1, $a1, 0x6AC0
    ctx->pc = 0x325888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27328));
    // 0x32588c: 0x24c66a90  addiu       $a2, $a2, 0x6A90
    ctx->pc = 0x32588cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27280));
    // 0x325890: 0x24e76b20  addiu       $a3, $a3, 0x6B20
    ctx->pc = 0x325890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27424));
    // 0x325894: 0xc0e63b4  jal         func_398ED0
    ctx->pc = 0x325894u;
    SET_GPR_U32(ctx, 31, 0x32589Cu);
    ctx->pc = 0x325898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325894u;
    // 0x325898: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398ED0u, 0x325894u, 0x32589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32589Cu;
label_32589c:
    // 0x32589c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x32589cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3258a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3258A0u;
    {
        const bool branch_taken_0x3258a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3258A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258A0u;
        // 0x3258a4: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3258a0) {
            ctx->pc = 0x3258ACu;
            goto label_3258ac;
        }
    }
    ctx->pc = 0x3258A8u;
label_3258a8:
    // 0x3258a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3258a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3258ac:
    // 0x3258ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3258acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3258b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3258B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3258B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258B0u;
        // 0x3258b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3258B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3258B8u;
}
