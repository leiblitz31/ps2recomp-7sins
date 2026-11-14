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

// Function: sub_00407338
// Address: 0x407338 - 0x407478
void sub_00407338_0x407338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407338_0x407338");
#endif

    switch (ctx->pc) {
        case 0x407388u: goto label_407388;
        case 0x4073a0u: goto label_4073a0;
        case 0x4073d8u: goto label_4073d8;
        case 0x407430u: goto label_407430;
        case 0x407444u: goto label_407444;
        case 0x40744cu: goto label_40744c;
        case 0x407460u: goto label_407460;
        default: break;
    }

    ctx->pc = 0x407338u;

    // 0x407338: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x407338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x40733c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x40733cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407340: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x407340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x407344: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x407344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x407348: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x407348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x40734c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x40734cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407350: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x407350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x407354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x407354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x407358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40735c: 0x15020014  bne         $t0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x40735Cu;
    {
        const bool branch_taken_0x40735c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x407360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40735Cu;
        // 0x407360: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40735c) {
            ctx->pc = 0x4073B0u;
            goto label_4073b0;
        }
    }
    ctx->pc = 0x407364u;
    // 0x407364: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x407364u;
    {
        const bool branch_taken_0x407364 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x407368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407364u;
        // 0x407368: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407364) {
            ctx->pc = 0x40737Cu;
            goto label_40737c;
        }
    }
    ctx->pc = 0x40736Cu;
    // 0x40736c: 0x962201fc  lhu         $v0, 0x1FC($s1)
    ctx->pc = 0x40736cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 508)));
    // 0x407370: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x407370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x407374: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x407374u;
    {
        const bool branch_taken_0x407374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x407378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407374u;
        // 0x407378: 0x10303c  dsll32      $a2, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407374) {
            ctx->pc = 0x407390u;
            goto label_407390;
        }
    }
    ctx->pc = 0x40737Cu;
label_40737c:
    // 0x40737c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407380: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x407380u;
    SET_GPR_U32(ctx, 31, 0x407388u);
    ctx->pc = 0x407384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407380u;
    // 0x407384: 0x24a50250  addiu       $a1, $a1, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x407380u, 0x407388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407388u;
label_407388:
    // 0x407388: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x407388u;
    {
        const bool branch_taken_0x407388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407388u;
        // 0x40738c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407388) {
            ctx->pc = 0x407464u;
            goto label_407464;
        }
    }
    ctx->pc = 0x407390u;
label_407390:
    // 0x407390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x407390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407394: 0x2785acd0  addiu       $a1, $gp, -0x5330
    ctx->pc = 0x407394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946000));
    // 0x407398: 0xc101b98  jal         func_406E60
    ctx->pc = 0x407398u;
    SET_GPR_U32(ctx, 31, 0x4073A0u);
    ctx->pc = 0x40739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407398u;
    // 0x40739c: 0x6303e  dsrl32      $a2, $a2, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x407398u, 0x4073A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4073A0u;
label_4073a0:
    // 0x4073a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4073a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4073a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4073a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4073a8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x4073A8u;
    {
        const bool branch_taken_0x4073a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4073ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4073A8u;
        // 0x4073ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4073a8) {
            ctx->pc = 0x40743Cu;
            goto label_40743c;
        }
    }
    ctx->pc = 0x4073B0u;
label_4073b0:
    // 0x4073b0: 0x1500000d  bnez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x4073B0u;
    {
        const bool branch_taken_0x4073b0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4073B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4073B0u;
        // 0x4073b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4073b0) {
            ctx->pc = 0x4073E8u;
            goto label_4073e8;
        }
    }
    ctx->pc = 0x4073B8u;
    // 0x4073b8: 0x94630008  lhu         $v1, 0x8($v1)
    ctx->pc = 0x4073b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4073bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4073bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4073c0: 0x2785acd0  addiu       $a1, $gp, -0x5330
    ctx->pc = 0x4073c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946000));
    // 0x4073c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4073c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4073c8: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x4073c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x4073cc: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x4073ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4073d0: 0xc101b98  jal         func_406E60
    ctx->pc = 0x4073D0u;
    SET_GPR_U32(ctx, 31, 0x4073D8u);
    ctx->pc = 0x4073D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4073D0u;
    // 0x4073d4: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x4073D0u, 0x4073D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4073D8u;
label_4073d8:
    // 0x4073d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4073d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4073dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4073dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4073e0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4073E0u;
    {
        const bool branch_taken_0x4073e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4073E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4073E0u;
        // 0x4073e4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4073e0) {
            ctx->pc = 0x40743Cu;
            goto label_40743c;
        }
    }
    ctx->pc = 0x4073E8u;
label_4073e8:
    // 0x4073e8: 0x1502001a  bne         $t0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4073E8u;
    {
        const bool branch_taken_0x4073e8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x4073ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4073E8u;
        // 0x4073ec: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4073e8) {
            ctx->pc = 0x407454u;
            goto label_407454;
        }
    }
    ctx->pc = 0x4073F0u;
    // 0x4073f0: 0x94690006  lhu         $t1, 0x6($v1)
    ctx->pc = 0x4073f0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x4073f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4073f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4073f8: 0x94670004  lhu         $a3, 0x4($v1)
    ctx->pc = 0x4073f8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4073fc: 0x2785acd0  addiu       $a1, $gp, -0x5330
    ctx->pc = 0x4073fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946000));
    // 0x407400: 0x94660002  lhu         $a2, 0x2($v1)
    ctx->pc = 0x407400u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x407404: 0x94202  srl         $t0, $t1, 8
    ctx->pc = 0x407404u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x407408: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x407408u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x40740c: 0xa3a70003  sb          $a3, 0x3($sp)
    ctx->pc = 0x40740cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x407410: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x407410u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x407414: 0xa3a60001  sb          $a2, 0x1($sp)
    ctx->pc = 0x407414u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x407418: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x407418u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x40741c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x40741cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x407420: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x407420u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x407424: 0xa3a80004  sb          $t0, 0x4($sp)
    ctx->pc = 0x407424u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 8));
    // 0x407428: 0xc101b98  jal         func_406E60
    ctx->pc = 0x407428u;
    SET_GPR_U32(ctx, 31, 0x407430u);
    ctx->pc = 0x40742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407428u;
    // 0x40742c: 0xa3a90005  sb          $t1, 0x5($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E60u, 0x407428u, 0x407430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407430u;
label_407430:
    // 0x407430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x407430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407434: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x407434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407438: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x407438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_40743c:
    // 0x40743c: 0xc101bc2  jal         func_406F08
    ctx->pc = 0x40743Cu;
    SET_GPR_U32(ctx, 31, 0x407444u);
    ctx->pc = 0x406F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F08u, 0x40743Cu, 0x407444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407444u;
label_407444:
    // 0x407444: 0xc101bda  jal         func_406F68
    ctx->pc = 0x407444u;
    SET_GPR_U32(ctx, 31, 0x40744Cu);
    ctx->pc = 0x407448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407444u;
    // 0x407448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406F68u, 0x407444u, 0x40744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40744Cu;
label_40744c:
    // 0x40744c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x40744Cu;
    {
        const bool branch_taken_0x40744c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40744Cu;
        // 0x407450: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40744c) {
            ctx->pc = 0x407464u;
            goto label_407464;
        }
    }
    ctx->pc = 0x407454u;
label_407454:
    // 0x407454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x407454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407458: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x407458u;
    SET_GPR_U32(ctx, 31, 0x407460u);
    ctx->pc = 0x40745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407458u;
    // 0x40745c: 0x24a50280  addiu       $a1, $a1, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x407458u, 0x407460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407460u;
label_407460:
    // 0x407460: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x407460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_407464:
    // 0x407464: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x407464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x407468: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x407468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40746c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40746cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x407470: 0x3e00008  jr          $ra
    ctx->pc = 0x407470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407470u;
        // 0x407474: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x407470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407478u;
}
