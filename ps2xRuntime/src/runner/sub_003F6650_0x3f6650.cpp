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

// Function: sub_003F6650
// Address: 0x3f6650 - 0x3f6c70
void sub_003F6650_0x3f6650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6650_0x3f6650");
#endif

    switch (ctx->pc) {
        case 0x3f66a0u: goto label_3f66a0;
        case 0x3f66c8u: goto label_3f66c8;
        case 0x3f66e0u: goto label_3f66e0;
        case 0x3f66f8u: goto label_3f66f8;
        case 0x3f6708u: goto label_3f6708;
        case 0x3f672cu: goto label_3f672c;
        case 0x3f673cu: goto label_3f673c;
        case 0x3f6744u: goto label_3f6744;
        case 0x3f679cu: goto label_3f679c;
        case 0x3f67b0u: goto label_3f67b0;
        case 0x3f67c8u: goto label_3f67c8;
        case 0x3f67d8u: goto label_3f67d8;
        case 0x3f67fcu: goto label_3f67fc;
        case 0x3f680cu: goto label_3f680c;
        case 0x3f6814u: goto label_3f6814;
        case 0x3f6858u: goto label_3f6858;
        case 0x3f686cu: goto label_3f686c;
        case 0x3f6880u: goto label_3f6880;
        case 0x3f689cu: goto label_3f689c;
        case 0x3f68acu: goto label_3f68ac;
        case 0x3f68b4u: goto label_3f68b4;
        case 0x3f68fcu: goto label_3f68fc;
        case 0x3f6910u: goto label_3f6910;
        case 0x3f6938u: goto label_3f6938;
        case 0x3f6a40u: goto label_3f6a40;
        case 0x3f6a4cu: goto label_3f6a4c;
        case 0x3f6a70u: goto label_3f6a70;
        case 0x3f6a88u: goto label_3f6a88;
        case 0x3f6aacu: goto label_3f6aac;
        case 0x3f6ac8u: goto label_3f6ac8;
        case 0x3f6b70u: goto label_3f6b70;
        case 0x3f6bd4u: goto label_3f6bd4;
        case 0x3f6be0u: goto label_3f6be0;
        case 0x3f6becu: goto label_3f6bec;
        case 0x3f6c28u: goto label_3f6c28;
        case 0x3f6c34u: goto label_3f6c34;
        case 0x3f6c40u: goto label_3f6c40;
        default: break;
    }

    ctx->pc = 0x3f6650u;

    // 0x3f6650: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3f6650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3f6654: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3f6654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3f6658: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3f6658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3f665c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f665cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6660: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3f6660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3f6664: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3f6664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6668: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3f6668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3f666c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3f666cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3f6670: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3f6670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3f6674: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3f6674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3f6678: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3f6678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3f667c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3f667cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3f6680: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f6680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f6684: 0xde6300f8  ld          $v1, 0xF8($s3)
    ctx->pc = 0x3f6684u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x3f6688: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3f6688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3f668c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F668Cu;
    {
        const bool branch_taken_0x3f668c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F668Cu;
        // 0x3f6690: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f668c) {
            ctx->pc = 0x3F66A8u;
            goto label_3f66a8;
        }
    }
    ctx->pc = 0x3F6694u;
    // 0x3f6694: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f6694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f6698: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F6698u;
    SET_GPR_U32(ctx, 31, 0x3F66A0u);
    ctx->pc = 0x3F669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6698u;
    // 0x3f669c: 0x24a5f3e0  addiu       $a1, $a1, -0xC20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F6698u, 0x3F66A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F66A0u;
label_3f66a0:
    // 0x3f66a0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x3F66A0u;
    {
        const bool branch_taken_0x3f66a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F66A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F66A0u;
        // 0x3f66a4: 0x66050001  daddiu      $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f66a0) {
            ctx->pc = 0x3F6878u;
            goto label_3f6878;
        }
    }
    ctx->pc = 0x3F66A8u;
label_3f66a8:
    // 0x3f66a8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f66a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f66ac: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3F66ACu;
    {
        const bool branch_taken_0x3f66ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F66ACu;
        // 0x3f66b0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f66ac) {
            ctx->pc = 0x3F6770u;
            goto label_3f6770;
        }
    }
    ctx->pc = 0x3F66B4u;
    // 0x3f66b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f66b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f66b8: 0x10903c  dsll32      $s2, $s0, 0
    ctx->pc = 0x3f66b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f66bc: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3f66bcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3f66c0: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F66C0u;
    SET_GPR_U32(ctx, 31, 0x3F66C8u);
    ctx->pc = 0x3F66C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F66C0u;
    // 0x3f66c4: 0x24a5f400  addiu       $a1, $a1, -0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F66C0u, 0x3F66C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F66C8u;
label_3f66c8:
    // 0x3f66c8: 0x8e74015c  lw          $s4, 0x15C($s3)
    ctx->pc = 0x3f66c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
    // 0x3f66cc: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x3f66ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f66d0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F66D0u;
    {
        const bool branch_taken_0x3f66d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f66d0) {
            ctx->pc = 0x3F6714u;
            goto label_3f6714;
        }
    }
    ctx->pc = 0x3F66D8u;
    // 0x3f66d8: 0x8e710158  lw          $s1, 0x158($s3)
    ctx->pc = 0x3f66d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
    // 0x3f66dc: 0x0  nop
    ctx->pc = 0x3f66dcu;
    // NOP
label_3f66e0:
    // 0x3f66e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f66e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f66e4: 0x8e70015c  lw          $s0, 0x15C($s3)
    ctx->pc = 0x3f66e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
    // 0x3f66e8: 0x2549023  subu        $s2, $s2, $s4
    ctx->pc = 0x3f66e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x3f66ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f66ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f66f0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F66F0u;
    SET_GPR_U32(ctx, 31, 0x3F66F8u);
    ctx->pc = 0x3F66F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F66F0u;
    // 0x3f66f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F66F0u, 0x3F66F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F66F8u;
label_3f66f8:
    // 0x3f66f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f66f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f66fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f66fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6700: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6700u;
    SET_GPR_U32(ctx, 31, 0x3F6708u);
    ctx->pc = 0x3F6704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6700u;
    // 0x3f6704: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6700u, 0x3F6708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6708u;
label_3f6708:
    // 0x3f6708: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x3f6708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f670c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F670Cu;
    {
        const bool branch_taken_0x3f670c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f670c) {
            ctx->pc = 0x3F6710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F670Cu;
            // 0x3f6710: 0x8e710158  lw          $s1, 0x158($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F66E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f66e0;
        }
    }
    ctx->pc = 0x3F6714u;
label_3f6714:
    // 0x3f6714: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F6714u;
    {
        const bool branch_taken_0x3f6714 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6714u;
        // 0x3f6718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6714) {
            ctx->pc = 0x3F673Cu;
            goto label_3f673c;
        }
    }
    ctx->pc = 0x3F671Cu;
    // 0x3f671c: 0x8e700158  lw          $s0, 0x158($s3)
    ctx->pc = 0x3f671cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
    // 0x3f6720: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f6720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6724: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6724u;
    SET_GPR_U32(ctx, 31, 0x3F672Cu);
    ctx->pc = 0x3F6728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6724u;
    // 0x3f6728: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6724u, 0x3F672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F672Cu;
label_3f672c:
    // 0x3f672c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f672cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6730: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f6730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6734: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6734u;
    SET_GPR_U32(ctx, 31, 0x3F673Cu);
    ctx->pc = 0x3F6738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6734u;
    // 0x3f6738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6734u, 0x3F673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F673Cu;
label_3f673c:
    // 0x3f673c: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F673Cu;
    SET_GPR_U32(ctx, 31, 0x3F6744u);
    ctx->pc = 0x3F6740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F673Cu;
    // 0x3f6740: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F673Cu, 0x3F6744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6744u;
label_3f6744:
    // 0x3f6744: 0x1040013f  beqz        $v0, . + 4 + (0x13F << 2)
    ctx->pc = 0x3F6744u;
    {
        const bool branch_taken_0x3f6744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6744u;
        // 0x3f6748: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6744) {
            ctx->pc = 0x3F6C44u;
            goto label_3f6c44;
        }
    }
    ctx->pc = 0x3F674Cu;
    // 0x3f674c: 0x92620200  lbu         $v0, 0x200($s3)
    ctx->pc = 0x3f674cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 512)));
    // 0x3f6750: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f6750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f6754: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3F6754u;
    {
        const bool branch_taken_0x3f6754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6754u;
        // 0x3f6758: 0xde620100  ld          $v0, 0x100($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6754) {
            ctx->pc = 0x3F682Cu;
            goto label_3f682c;
        }
    }
    ctx->pc = 0x3F675Cu;
    // 0x3f675c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f675cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f6760: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x3F6760u;
    {
        const bool branch_taken_0x3f6760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6760u;
        // 0x3f6764: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6760) {
            ctx->pc = 0x3F684Cu;
            goto label_3f684c;
        }
    }
    ctx->pc = 0x3F6768u;
    // 0x3f6768: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3F6768u;
    {
        const bool branch_taken_0x3f6768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6768u;
        // 0x3f676c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6768) {
            ctx->pc = 0x3F6864u;
            goto label_3f6864;
        }
    }
    ctx->pc = 0x3F6770u;
label_3f6770:
    // 0x3f6770: 0x13c00041  beqz        $fp, . + 4 + (0x41 << 2)
    ctx->pc = 0x3F6770u;
    {
        const bool branch_taken_0x3f6770 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6770u;
        // 0x3f6774: 0x66050001  daddiu      $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6770) {
            ctx->pc = 0x3F6878u;
            goto label_3f6878;
        }
    }
    ctx->pc = 0x3F6778u;
    // 0x3f6778: 0xdfc20010  ld          $v0, 0x10($fp)
    ctx->pc = 0x3f6778u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3f677c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f677cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f6780: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3F6780u;
    {
        const bool branch_taken_0x3f6780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6780u;
        // 0x3f6784: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6780) {
            ctx->pc = 0x3F6874u;
            goto label_3f6874;
        }
    }
    ctx->pc = 0x3F6788u;
    // 0x3f6788: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f6788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f678c: 0x10903c  dsll32      $s2, $s0, 0
    ctx->pc = 0x3f678cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f6790: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3f6790u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3f6794: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F6794u;
    SET_GPR_U32(ctx, 31, 0x3F679Cu);
    ctx->pc = 0x3F6798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6794u;
    // 0x3f6798: 0x24a5f418  addiu       $a1, $a1, -0xBE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F6794u, 0x3F679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F679Cu;
label_3f679c:
    // 0x3f679c: 0x8e74015c  lw          $s4, 0x15C($s3)
    ctx->pc = 0x3f679cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
    // 0x3f67a0: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x3f67a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f67a4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F67A4u;
    {
        const bool branch_taken_0x3f67a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f67a4) {
            ctx->pc = 0x3F67E4u;
            goto label_3f67e4;
        }
    }
    ctx->pc = 0x3F67ACu;
    // 0x3f67ac: 0x8e710158  lw          $s1, 0x158($s3)
    ctx->pc = 0x3f67acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
label_3f67b0:
    // 0x3f67b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f67b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f67b4: 0x8e70015c  lw          $s0, 0x15C($s3)
    ctx->pc = 0x3f67b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 348)));
    // 0x3f67b8: 0x2549023  subu        $s2, $s2, $s4
    ctx->pc = 0x3f67b8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x3f67bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f67bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f67c0: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F67C0u;
    SET_GPR_U32(ctx, 31, 0x3F67C8u);
    ctx->pc = 0x3F67C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F67C0u;
    // 0x3f67c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F67C0u, 0x3F67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F67C8u;
label_3f67c8:
    // 0x3f67c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f67c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f67cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f67ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f67d0: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F67D0u;
    SET_GPR_U32(ctx, 31, 0x3F67D8u);
    ctx->pc = 0x3F67D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F67D0u;
    // 0x3f67d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F67D0u, 0x3F67D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F67D8u;
label_3f67d8:
    // 0x3f67d8: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x3f67d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3f67dc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F67DCu;
    {
        const bool branch_taken_0x3f67dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f67dc) {
            ctx->pc = 0x3F67E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F67DCu;
            // 0x3f67e0: 0x8e710158  lw          $s1, 0x158($s3) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F67B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f67b0;
        }
    }
    ctx->pc = 0x3F67E4u;
label_3f67e4:
    // 0x3f67e4: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F67E4u;
    {
        const bool branch_taken_0x3f67e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F67E4u;
        // 0x3f67e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f67e4) {
            ctx->pc = 0x3F680Cu;
            goto label_3f680c;
        }
    }
    ctx->pc = 0x3F67ECu;
    // 0x3f67ec: 0x8e700158  lw          $s0, 0x158($s3)
    ctx->pc = 0x3f67ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 344)));
    // 0x3f67f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f67f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f67f4: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F67F4u;
    SET_GPR_U32(ctx, 31, 0x3F67FCu);
    ctx->pc = 0x3F67F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F67F4u;
    // 0x3f67f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F67F4u, 0x3F67FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F67FCu;
label_3f67fc:
    // 0x3f67fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f67fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6800: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3f6800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6804: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F6804u;
    SET_GPR_U32(ctx, 31, 0x3F680Cu);
    ctx->pc = 0x3F6808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6804u;
    // 0x3f6808: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F6804u, 0x3F680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F680Cu;
label_3f680c:
    // 0x3f680c: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F680Cu;
    SET_GPR_U32(ctx, 31, 0x3F6814u);
    ctx->pc = 0x3F6810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F680Cu;
    // 0x3f6810: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F680Cu, 0x3F6814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6814u;
label_3f6814:
    // 0x3f6814: 0x1040010b  beqz        $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x3F6814u;
    {
        const bool branch_taken_0x3f6814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6814u;
        // 0x3f6818: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6814) {
            ctx->pc = 0x3F6C44u;
            goto label_3f6c44;
        }
    }
    ctx->pc = 0x3F681Cu;
    // 0x3f681c: 0x92620200  lbu         $v0, 0x200($s3)
    ctx->pc = 0x3f681cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 512)));
    // 0x3f6820: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f6820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f6824: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6824u;
    {
        const bool branch_taken_0x3f6824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6824u;
        // 0x3f6828: 0xde620100  ld          $v0, 0x100($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6824) {
            ctx->pc = 0x3F6840u;
            goto label_3f6840;
        }
    }
    ctx->pc = 0x3F682Cu;
label_3f682c:
    // 0x3f682c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f682cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f6830: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6830u;
    {
        const bool branch_taken_0x3f6830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6830u;
        // 0x3f6834: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6830) {
            ctx->pc = 0x3F684Cu;
            goto label_3f684c;
        }
    }
    ctx->pc = 0x3F6838u;
    // 0x3f6838: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3F6838u;
    {
        const bool branch_taken_0x3f6838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6838u;
        // 0x3f683c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6838) {
            ctx->pc = 0x3F6864u;
            goto label_3f6864;
        }
    }
    ctx->pc = 0x3F6840u;
label_3f6840:
    // 0x3f6840: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f6840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f6844: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6844u;
    {
        const bool branch_taken_0x3f6844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6844u;
        // 0x3f6848: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6844) {
            ctx->pc = 0x3F6860u;
            goto label_3f6860;
        }
    }
    ctx->pc = 0x3F684Cu;
label_3f684c:
    // 0x3f684c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f684cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6850: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F6850u;
    SET_GPR_U32(ctx, 31, 0x3F6858u);
    ctx->pc = 0x3F6854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6850u;
    // 0x3f6854: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F6850u, 0x3F6858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6858u;
label_3f6858:
    // 0x3f6858: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x3F6858u;
    {
        const bool branch_taken_0x3f6858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6858u;
        // 0x3f685c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6858) {
            ctx->pc = 0x3F6C44u;
            goto label_3f6c44;
        }
    }
    ctx->pc = 0x3F6860u;
label_3f6860:
    // 0x3f6860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f6860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f6864:
    // 0x3f6864: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F6864u;
    SET_GPR_U32(ctx, 31, 0x3F686Cu);
    ctx->pc = 0x3F6868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6864u;
    // 0x3f6868: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F6864u, 0x3F686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F686Cu;
label_3f686c:
    // 0x3f686c: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x3F686Cu;
    {
        const bool branch_taken_0x3f686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F686Cu;
        // 0x3f6870: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f686c) {
            ctx->pc = 0x3F6C44u;
            goto label_3f6c44;
        }
    }
    ctx->pc = 0x3F6874u;
label_3f6874:
    // 0x3f6874: 0x66050001  daddiu      $a1, $s0, 0x1
    ctx->pc = 0x3f6874u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
label_3f6878:
    // 0x3f6878: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F6878u;
    SET_GPR_U32(ctx, 31, 0x3F6880u);
    ctx->pc = 0x3F687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6878u;
    // 0x3f687c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F6878u, 0x3F6880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6880u;
label_3f6880:
    // 0x3f6880: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3f6880u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f6884: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3f6884u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3f6888: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3f6888u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f688c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6890: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f6890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6894: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F6894u;
    SET_GPR_U32(ctx, 31, 0x3F689Cu);
    ctx->pc = 0x3F6898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6894u;
    // 0x3f6898: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F6894u, 0x3F689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F689Cu;
label_3f689c:
    // 0x3f689c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f689cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f68a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f68a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f68a4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F68A4u;
    SET_GPR_U32(ctx, 31, 0x3F68ACu);
    ctx->pc = 0x3F68A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F68A4u;
    // 0x3f68a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F68A4u, 0x3F68ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F68ACu;
label_3f68ac:
    // 0x3f68ac: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F68ACu;
    SET_GPR_U32(ctx, 31, 0x3F68B4u);
    ctx->pc = 0x3F68B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F68ACu;
    // 0x3f68b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F68ACu, 0x3F68B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F68B4u;
label_3f68b4:
    // 0x3f68b4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F68B4u;
    {
        const bool branch_taken_0x3f68b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F68B4u;
        // 0x3f68b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f68b4) {
            ctx->pc = 0x3F6914u;
            goto label_3f6914;
        }
    }
    ctx->pc = 0x3F68BCu;
    // 0x3f68bc: 0x92620200  lbu         $v0, 0x200($s3)
    ctx->pc = 0x3f68bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 512)));
    // 0x3f68c0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f68c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f68c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F68C4u;
    {
        const bool branch_taken_0x3f68c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F68C4u;
        // 0x3f68c8: 0xde620100  ld          $v0, 0x100($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f68c4) {
            ctx->pc = 0x3F68E0u;
            goto label_3f68e0;
        }
    }
    ctx->pc = 0x3F68CCu;
    // 0x3f68cc: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f68ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f68d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F68D0u;
    {
        const bool branch_taken_0x3f68d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F68D0u;
        // 0x3f68d4: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f68d0) {
            ctx->pc = 0x3F68ECu;
            goto label_3f68ec;
        }
    }
    ctx->pc = 0x3F68D8u;
    // 0x3f68d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F68D8u;
    {
        const bool branch_taken_0x3f68d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F68D8u;
        // 0x3f68dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f68d8) {
            ctx->pc = 0x3F6908u;
            goto label_3f6908;
        }
    }
    ctx->pc = 0x3F68E0u;
label_3f68e0:
    // 0x3f68e0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f68e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f68e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F68E4u;
    {
        const bool branch_taken_0x3f68e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F68E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F68E4u;
        // 0x3f68e8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f68e4) {
            ctx->pc = 0x3F6904u;
            goto label_3f6904;
        }
    }
    ctx->pc = 0x3F68ECu;
label_3f68ec:
    // 0x3f68ec: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f68ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f68f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f68f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f68f4: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F68F4u;
    SET_GPR_U32(ctx, 31, 0x3F68FCu);
    ctx->pc = 0x3F68F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F68F4u;
    // 0x3f68f8: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F68F4u, 0x3F68FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F68FCu;
label_3f68fc:
    // 0x3f68fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F68FCu;
    {
        const bool branch_taken_0x3f68fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F68FCu;
        // 0x3f6900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f68fc) {
            ctx->pc = 0x3F6914u;
            goto label_3f6914;
        }
    }
    ctx->pc = 0x3F6904u;
label_3f6904:
    // 0x3f6904: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f6904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f6908:
    // 0x3f6908: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F6908u;
    SET_GPR_U32(ctx, 31, 0x3F6910u);
    ctx->pc = 0x3F690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6908u;
    // 0x3f690c: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F6908u, 0x3F6910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6910u;
label_3f6910:
    // 0x3f6910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f6910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f6914:
    // 0x3f6914: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x3F6914u;
    {
        const bool branch_taken_0x3f6914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6914u;
        // 0x3f6918: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6914) {
            ctx->pc = 0x3F6A44u;
            goto label_3f6a44;
        }
    }
    ctx->pc = 0x3F691Cu;
    // 0x3f691c: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x3f691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x3f6920: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3f6920u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f6924: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3f6924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6928: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x3f6928u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3f692c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F692Cu;
    {
        const bool branch_taken_0x3f692c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F692Cu;
        // 0x3f6930: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f692c) {
            ctx->pc = 0x3F6954u;
            goto label_3f6954;
        }
    }
    ctx->pc = 0x3F6934u;
    // 0x3f6934: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x3f6934u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f6938:
    // 0x3f6938: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f6938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f693c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3f693cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f6940: 0x0  nop
    ctx->pc = 0x3f6940u;
    // NOP
    // 0x3f6944: 0x0  nop
    ctx->pc = 0x3f6944u;
    // NOP
    // 0x3f6948: 0x0  nop
    ctx->pc = 0x3f6948u;
    // NOP
    // 0x3f694c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3F694Cu;
    {
        const bool branch_taken_0x3f694c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F694Cu;
        // 0x3f6950: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f694c) {
            ctx->pc = 0x3F6938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6938;
        }
    }
    ctx->pc = 0x3F6954u;
label_3f6954:
    // 0x3f6954: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x3f6954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3f6958: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3f6958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3f695c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F695Cu;
    {
        const bool branch_taken_0x3f695c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F695Cu;
        // 0x3f6960: 0x26080001  addiu       $t0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f695c) {
            ctx->pc = 0x3F6974u;
            goto label_3f6974;
        }
    }
    ctx->pc = 0x3F6964u;
    // 0x3f6964: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f6964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f6968: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f6968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f696c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3F696Cu;
    {
        const bool branch_taken_0x3f696c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F696Cu;
        // 0x3f6970: 0x24a5f430  addiu       $a1, $a1, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f696c) {
            ctx->pc = 0x3F6A38u;
            goto label_3f6a38;
        }
    }
    ctx->pc = 0x3F6974u;
label_3f6974:
    // 0x3f6974: 0x26090005  addiu       $t1, $s0, 0x5
    ctx->pc = 0x3f6974u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x3f6978: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3f6978u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3f697c: 0x2617000b  addiu       $s7, $s0, 0xB
    ctx->pc = 0x3f697cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x3f6980: 0x91050001  lbu         $a1, 0x1($t0)
    ctx->pc = 0x3f6980u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3f6984: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x3f6984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x3f6988: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x3f6988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x3f698c: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x3f698cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x3f6990: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3f6990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3f6994: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x3f6994u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3f6998: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f6998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f699c: 0x91260002  lbu         $a2, 0x2($t1)
    ctx->pc = 0x3f699cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3f69a0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3f69a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3f69a4: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x3f69a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f69a8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3f69a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3f69ac: 0x91050003  lbu         $a1, 0x3($t0)
    ctx->pc = 0x3f69acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3f69b0: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x3f69b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x3f69b4: 0x91240003  lbu         $a0, 0x3($t1)
    ctx->pc = 0x3f69b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x3f69b8: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x3f69b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x3f69bc: 0x67182d  daddu       $v1, $v1, $a3
    ctx->pc = 0x3f69bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
    // 0x3f69c0: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x3f69c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3f69c4: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x3f69c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f69c8: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3f69c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3f69cc: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x3f69ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x3f69d0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3f69d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x3f69d4: 0x92160009  lbu         $s6, 0x9($s0)
    ctx->pc = 0x3f69d4u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x3f69d8: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F69D8u;
    {
        const bool branch_taken_0x3f69d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F69DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F69D8u;
        // 0x3f69dc: 0x9212000a  lbu         $s2, 0xA($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f69d8) {
            ctx->pc = 0x3F69ECu;
            goto label_3f69ec;
        }
    }
    ctx->pc = 0x3F69E0u;
    // 0x3f69e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f69e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f69e4: 0x16420012  bne         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3F69E4u;
    {
        const bool branch_taken_0x3f69e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F69E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F69E4u;
        // 0x3f69e8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f69e4) {
            ctx->pc = 0x3F6A30u;
            goto label_3f6a30;
        }
    }
    ctx->pc = 0x3F69ECu;
label_3f69ec:
    // 0x3f69ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f69ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f69f0: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F69F0u;
    {
        const bool branch_taken_0x3f69f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F69F0u;
        // 0x3f69f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f69f0) {
            ctx->pc = 0x3F6A08u;
            goto label_3f6a08;
        }
    }
    ctx->pc = 0x3F69F8u;
    // 0x3f69f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f69fc: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3F69FCu;
    {
        const bool branch_taken_0x3f69fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F69FCu;
        // 0x3f6a00: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f69fc) {
            ctx->pc = 0x3F6A30u;
            goto label_3f6a30;
        }
    }
    ctx->pc = 0x3F6A04u;
    // 0x3f6a04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f6a08:
    // 0x3f6a08: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F6A08u;
    {
        const bool branch_taken_0x3f6a08 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F6A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6A08u;
        // 0x3f6a0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6a08) {
            ctx->pc = 0x3F6A1Cu;
            goto label_3f6a1c;
        }
    }
    ctx->pc = 0x3F6A10u;
    // 0x3f6a10: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F6A10u;
    {
        const bool branch_taken_0x3f6a10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F6A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6A10u;
        // 0x3f6a14: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6a10) {
            ctx->pc = 0x3F6A30u;
            goto label_3f6a30;
        }
    }
    ctx->pc = 0x3F6A18u;
    // 0x3f6a18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3f6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f6a1c:
    // 0x3f6a1c: 0x16c2000e  bne         $s6, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3F6A1Cu;
    {
        const bool branch_taken_0x3f6a1c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F6A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6A1Cu;
        // 0x3f6a20: 0x2ec20004  sltiu       $v0, $s6, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6a1c) {
            ctx->pc = 0x3F6A58u;
            goto label_3f6a58;
        }
    }
    ctx->pc = 0x3F6A24u;
    // 0x3f6a24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3f6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f6a28: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F6A28u;
    {
        const bool branch_taken_0x3f6a28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6A28u;
        // 0x3f6a2c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6a28) {
            ctx->pc = 0x3F6A54u;
            goto label_3f6a54;
        }
    }
    ctx->pc = 0x3F6A30u;
label_3f6a30:
    // 0x3f6a30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f6a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6a34: 0x24a5f448  addiu       $a1, $a1, -0xBB8
    ctx->pc = 0x3f6a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964296));
label_3f6a38:
    // 0x3f6a38: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F6A38u;
    SET_GPR_U32(ctx, 31, 0x3F6A40u);
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F6A38u, 0x3F6A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6A40u;
label_3f6a40:
    // 0x3f6a40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f6a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3f6a44:
    // 0x3f6a44: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F6A44u;
    SET_GPR_U32(ctx, 31, 0x3F6A4Cu);
    ctx->pc = 0x3F6A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6A44u;
    // 0x3f6a48: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F6A44u, 0x3F6A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6A4Cu;
label_3f6a4c:
    // 0x3f6a4c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x3F6A4Cu;
    {
        const bool branch_taken_0x3f6a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6A4Cu;
        // 0x3f6a50: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6a4c) {
            ctx->pc = 0x3F6C44u;
            goto label_3f6c44;
        }
    }
    ctx->pc = 0x3F6A54u;
label_3f6a54:
    // 0x3f6a54: 0x2ec20004  sltiu       $v0, $s6, 0x4
    ctx->pc = 0x3f6a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3f6a58:
    // 0x3f6a58: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F6A58u;
    {
        const bool branch_taken_0x3f6a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6a58) {
            ctx->pc = 0x3F6A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F6A58u;
            // 0x3f6a5c: 0x82e20000  lb          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6A74u;
            goto label_3f6a74;
        }
    }
    ctx->pc = 0x3F6A60u;
    // 0x3f6a60: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f6a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f6a64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f6a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6a68: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F6A68u;
    SET_GPR_U32(ctx, 31, 0x3F6A70u);
    ctx->pc = 0x3F6A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6A68u;
    // 0x3f6a6c: 0x24a5f478  addiu       $a1, $a1, -0xB88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F6A68u, 0x3F6A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6A70u;
label_3f6a70:
    // 0x3f6a70: 0x82e20000  lb          $v0, 0x0($s7)
    ctx->pc = 0x3f6a70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_3f6a74:
    // 0x3f6a74: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x3f6a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6a78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3F6A78u;
    {
        const bool branch_taken_0x3f6a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6A78u;
        // 0x3f6a7c: 0x122880  sll         $a1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6a78) {
            ctx->pc = 0x3F6AA4u;
            goto label_3f6aa4;
        }
    }
    ctx->pc = 0x3F6A80u;
    // 0x3f6a80: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x3f6a80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6a84: 0x0  nop
    ctx->pc = 0x3f6a84u;
    // NOP
label_3f6a88:
    // 0x3f6a88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f6a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f6a8c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3f6a8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3f6a90: 0x0  nop
    ctx->pc = 0x3f6a90u;
    // NOP
    // 0x3f6a94: 0x0  nop
    ctx->pc = 0x3f6a94u;
    // NOP
    // 0x3f6a98: 0x0  nop
    ctx->pc = 0x3f6a98u;
    // NOP
    // 0x3f6a9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3F6A9Cu;
    {
        const bool branch_taken_0x3f6a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6A9Cu;
        // 0x3f6aa0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6a9c) {
            ctx->pc = 0x3F6A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6a88;
        }
    }
    ctx->pc = 0x3F6AA4u;
label_3f6aa4:
    // 0x3f6aa4: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3F6AA4u;
    SET_GPR_U32(ctx, 31, 0x3F6AACu);
    ctx->pc = 0x3F6AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6AA4u;
    // 0x3f6aa8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3F6AA4u, 0x3F6AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6AACu;
label_3f6aac:
    // 0x3f6aac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3f6aacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6ab0: 0x12400053  beqz        $s2, . + 4 + (0x53 << 2)
    ctx->pc = 0x3F6AB0u;
    {
        const bool branch_taken_0x3f6ab0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6AB0u;
        // 0x3f6ab4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ab0) {
            ctx->pc = 0x3F6C00u;
            goto label_3f6c00;
        }
    }
    ctx->pc = 0x3F6AB8u;
    // 0x3f6ab8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f6ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f6abc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3f6abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f6ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6ac4: 0x0  nop
    ctx->pc = 0x3f6ac4u;
    // NOP
label_3f6ac8:
    // 0x3f6ac8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3f6ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f6acc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f6accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f6ad0: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x3f6ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x3f6ad4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3f6ad4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f6ad8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3F6AD8u;
    {
        const bool branch_taken_0x3f6ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6AD8u;
        // 0x3f6adc: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ad8) {
            ctx->pc = 0x3F6BBCu;
            goto label_3f6bbc;
        }
    }
    ctx->pc = 0x3F6AE0u;
    // 0x3f6ae0: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x3F6AE0u;
    {
        const bool branch_taken_0x3f6ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6ae0) {
            ctx->pc = 0x3F6AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F6AE0u;
            // 0x3f6ae4: 0x24a5f430  addiu       $a1, $a1, -0xBD0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6BCCu;
            goto label_3f6bcc;
        }
    }
    ctx->pc = 0x3F6AE8u;
    // 0x3f6ae8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3f6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3f6aec: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3f6aecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6af0: 0x501823  subu        $v1, $v0, $s0
    ctx->pc = 0x3f6af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3f6af4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3f6af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3f6af8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3F6AF8u;
    {
        const bool branch_taken_0x3f6af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6AF8u;
        // 0x3f6afc: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6af8) {
            ctx->pc = 0x3F6B4Cu;
            goto label_3f6b4c;
        }
    }
    ctx->pc = 0x3F6B00u;
    // 0x3f6b00: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x3F6B00u;
    {
        const bool branch_taken_0x3f6b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6b00) {
            ctx->pc = 0x3F6B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F6B00u;
            // 0x3f6b04: 0x81020001  lb          $v0, 0x1($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6B70u;
            goto label_3f6b70;
        }
    }
    ctx->pc = 0x3F6B08u;
    // 0x3f6b08: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3f6b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3f6b0c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F6B0Cu;
    {
        const bool branch_taken_0x3f6b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B0Cu;
        // 0x3f6b10: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6b0c) {
            ctx->pc = 0x3F6B50u;
            goto label_3f6b50;
        }
    }
    ctx->pc = 0x3F6B14u;
    // 0x3f6b14: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3f6b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3f6b18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F6B18u;
    {
        const bool branch_taken_0x3f6b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B18u;
        // 0x3f6b1c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6b18) {
            ctx->pc = 0x3F6B40u;
            goto label_3f6b40;
        }
    }
    ctx->pc = 0x3F6B20u;
    // 0x3f6b20: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x3f6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3f6b24: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3f6b24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6b28: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3f6b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6b2c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3f6b2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3f6b30: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3F6B30u;
    {
        const bool branch_taken_0x3f6b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6b30) {
            ctx->pc = 0x3F6BBCu;
            goto label_3f6bbc;
        }
    }
    ctx->pc = 0x3F6B38u;
    // 0x3f6b38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3f6b38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3f6b3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f6b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3f6b40:
    // 0x3f6b40: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x3f6b40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f6b44: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3F6B44u;
    {
        const bool branch_taken_0x3f6b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B44u;
        // 0x3f6b48: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6b44) {
            ctx->pc = 0x3F6BBCu;
            goto label_3f6bbc;
        }
    }
    ctx->pc = 0x3F6B4Cu;
label_3f6b4c:
    // 0x3f6b4c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3f6b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3f6b50:
    // 0x3f6b50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f6b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f6b54: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x3f6b54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f6b58: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F6B58u;
    {
        const bool branch_taken_0x3f6b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B58u;
        // 0x3f6b5c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6b58) {
            ctx->pc = 0x3F6BBCu;
            goto label_3f6bbc;
        }
    }
    ctx->pc = 0x3F6B60u;
    // 0x3f6b60: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3f6b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3f6b64: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3F6B64u;
    {
        const bool branch_taken_0x3f6b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f6b64) {
            ctx->pc = 0x3F6B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F6B64u;
            // 0x3f6b68: 0x24a5f430  addiu       $a1, $a1, -0xBD0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964272));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6BCCu;
            goto label_3f6bcc;
        }
    }
    ctx->pc = 0x3F6B6Cu;
    // 0x3f6b6c: 0x81020001  lb          $v0, 0x1($t0)
    ctx->pc = 0x3f6b6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3f6b70:
    // 0x3f6b70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f6b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f6b74: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F6B74u;
    {
        const bool branch_taken_0x3f6b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B74u;
        // 0x3f6b78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6b74) {
            ctx->pc = 0x3F6BBCu;
            goto label_3f6bbc;
        }
    }
    ctx->pc = 0x3F6B7Cu;
    // 0x3f6b7c: 0x81020002  lb          $v0, 0x2($t0)
    ctx->pc = 0x3f6b7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3f6b80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f6b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f6b84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3F6B84u;
    {
        const bool branch_taken_0x3f6b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B84u;
        // 0x3f6b88: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6b84) {
            ctx->pc = 0x3F6BBCu;
            goto label_3f6bbc;
        }
    }
    ctx->pc = 0x3F6B8Cu;
    // 0x3f6b8c: 0x81020003  lb          $v0, 0x3($t0)
    ctx->pc = 0x3f6b8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x3f6b90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f6b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f6b94: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F6B94u;
    {
        const bool branch_taken_0x3f6b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6B94u;
        // 0x3f6b98: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6b94) {
            ctx->pc = 0x3F6BBCu;
            goto label_3f6bbc;
        }
    }
    ctx->pc = 0x3F6B9Cu;
    // 0x3f6b9c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3f6b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3f6ba0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3f6ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f6ba4: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x3f6ba4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3f6ba8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F6BA8u;
    {
        const bool branch_taken_0x3f6ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BA8u;
        // 0x3f6bac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6ba8) {
            ctx->pc = 0x3F6BBCu;
            goto label_3f6bbc;
        }
    }
    ctx->pc = 0x3F6BB0u;
    // 0x3f6bb0: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3f6bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3f6bb4: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3F6BB4u;
    {
        const bool branch_taken_0x3f6bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6bb4) {
            ctx->pc = 0x3F6BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F6BB4u;
            // 0x3f6bb8: 0x81020001  lb          $v0, 0x1($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F6B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6b70;
        }
    }
    ctx->pc = 0x3F6BBCu;
label_3f6bbc:
    // 0x3f6bbc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3f6bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3f6bc0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3F6BC0u;
    {
        const bool branch_taken_0x3f6bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BC0u;
        // 0x3f6bc4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6bc0) {
            ctx->pc = 0x3F6BF4u;
            goto label_3f6bf4;
        }
    }
    ctx->pc = 0x3F6BC8u;
    // 0x3f6bc8: 0x24a5f430  addiu       $a1, $a1, -0xBD0
    ctx->pc = 0x3f6bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964272));
label_3f6bcc:
    // 0x3f6bcc: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F6BCCu;
    SET_GPR_U32(ctx, 31, 0x3F6BD4u);
    ctx->pc = 0x3F6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6BCCu;
    // 0x3f6bd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F6BCCu, 0x3F6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6BD4u;
label_3f6bd4:
    // 0x3f6bd4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f6bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6bd8: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F6BD8u;
    SET_GPR_U32(ctx, 31, 0x3F6BE0u);
    ctx->pc = 0x3F6BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6BD8u;
    // 0x3f6bdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F6BD8u, 0x3F6BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6BE0u;
label_3f6be0:
    // 0x3f6be0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f6be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6be4: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F6BE4u;
    SET_GPR_U32(ctx, 31, 0x3F6BECu);
    ctx->pc = 0x3F6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6BE4u;
    // 0x3f6be8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F6BE4u, 0x3F6BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6BECu;
label_3f6bec:
    // 0x3f6bec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3F6BECu;
    {
        const bool branch_taken_0x3f6bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BECu;
        // 0x3f6bf0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6bec) {
            ctx->pc = 0x3F6C44u;
            goto label_3f6c44;
        }
    }
    ctx->pc = 0x3F6BF4u;
label_3f6bf4:
    // 0x3f6bf4: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x3f6bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3f6bf8: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x3F6BF8u;
    {
        const bool branch_taken_0x3f6bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6BF8u;
        // 0x3f6bfc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6bf8) {
            ctx->pc = 0x3F6AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6ac8;
        }
    }
    ctx->pc = 0x3F6C00u;
label_3f6c00:
    // 0x3f6c00: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x3f6c00u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f6c04: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3f6c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c08: 0xdfa80018  ld          $t0, 0x18($sp)
    ctx->pc = 0x3f6c08u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3f6c0c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x3f6c0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c10: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3f6c10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c14: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x3f6c14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c18: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x3f6c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x3f6c1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f6c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c20: 0xc0fecbe  jal         func_3FB2F8
    ctx->pc = 0x3F6C20u;
    SET_GPR_U32(ctx, 31, 0x3F6C28u);
    ctx->pc = 0x3F6C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6C20u;
    // 0x3f6c24: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB2F8u, 0x3F6C20u, 0x3F6C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6C28u;
label_3f6c28:
    // 0x3f6c28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3f6c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c2c: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F6C2Cu;
    SET_GPR_U32(ctx, 31, 0x3F6C34u);
    ctx->pc = 0x3F6C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6C2Cu;
    // 0x3f6c30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F6C2Cu, 0x3F6C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6C34u;
label_3f6c34:
    // 0x3f6c34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3f6c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f6c38: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3F6C38u;
    SET_GPR_U32(ctx, 31, 0x3F6C40u);
    ctx->pc = 0x3F6C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6C38u;
    // 0x3f6c3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3F6C38u, 0x3F6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6C40u;
label_3f6c40:
    // 0x3f6c40: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3f6c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3f6c44:
    // 0x3f6c44: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3f6c44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3f6c48: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3f6c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3f6c4c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3f6c4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f6c50: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3f6c50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f6c54: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3f6c54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f6c58: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3f6c58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f6c5c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3f6c5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f6c60: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3f6c60u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f6c64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f6c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f6c68: 0x3e00008  jr          $ra
    ctx->pc = 0x3F6C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C68u;
        // 0x3f6c6c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F6C70u;
}
