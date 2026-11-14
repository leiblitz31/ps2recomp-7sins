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

// Function: sub_003FA800
// Address: 0x3fa800 - 0x3faa58
void sub_003FA800_0x3fa800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FA800_0x3fa800");
#endif

    switch (ctx->pc) {
        case 0x3fa888u: goto label_3fa888;
        case 0x3fa89cu: goto label_3fa89c;
        case 0x3fa8a8u: goto label_3fa8a8;
        case 0x3fa8d0u: goto label_3fa8d0;
        case 0x3fa900u: goto label_3fa900;
        case 0x3fa91cu: goto label_3fa91c;
        case 0x3fa934u: goto label_3fa934;
        case 0x3fa964u: goto label_3fa964;
        case 0x3fa988u: goto label_3fa988;
        case 0x3fa99cu: goto label_3fa99c;
        case 0x3fa9c8u: goto label_3fa9c8;
        default: break;
    }

    ctx->pc = 0x3fa800u;

    // 0x3fa800: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3fa800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3fa804: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3fa804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3fa808: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3fa808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3fa80c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3fa80cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa810: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3fa810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3fa814: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3fa814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa818: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3fa818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3fa81c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3fa81cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa820: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3fa820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3fa824: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3fa824u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa828: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3fa828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3fa82c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3fa82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3fa830: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3fa830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3fa834: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3fa834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3fa838: 0x12a0007a  beqz        $s5, . + 4 + (0x7A << 2)
    ctx->pc = 0x3FA838u;
    {
        const bool branch_taken_0x3fa838 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA838u;
        // 0x3fa83c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa838) {
            ctx->pc = 0x3FAA24u;
            goto label_3faa24;
        }
    }
    ctx->pc = 0x3FA840u;
    // 0x3fa840: 0x12600079  beqz        $s3, . + 4 + (0x79 << 2)
    ctx->pc = 0x3FA840u;
    {
        const bool branch_taken_0x3fa840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA840u;
        // 0x3fa844: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa840) {
            ctx->pc = 0x3FAA28u;
            goto label_3faa28;
        }
    }
    ctx->pc = 0x3FA848u;
    // 0x3fa848: 0x52200078  beql        $s1, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x3FA848u;
    {
        const bool branch_taken_0x3fa848 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa848) {
            ctx->pc = 0x3FA84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FA848u;
            // 0x3fa84c: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FAA2Cu;
            goto label_3faa2c;
        }
    }
    ctx->pc = 0x3FA850u;
    // 0x3fa850: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x3fa850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x3fa854: 0x8e720044  lw          $s2, 0x44($s3)
    ctx->pc = 0x3fa854u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x3fa858: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3fa858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3fa85c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x3fa85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3fa860: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3FA860u;
    {
        const bool branch_taken_0x3fa860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa860) {
            ctx->pc = 0x3FA8E4u;
            goto label_3fa8e4;
        }
    }
    ctx->pc = 0x3FA868u;
    // 0x3fa868: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x3fa868u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3fa86c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3FA86Cu;
    {
        const bool branch_taken_0x3fa86c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA86Cu;
        // 0x3fa870: 0x24620008  addiu       $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa86c) {
            ctx->pc = 0x3FA8B0u;
            goto label_3fa8b0;
        }
    }
    ctx->pc = 0x3FA874u;
    // 0x3fa874: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x3fa874u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3fa878: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x3fa878u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x3fa87c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3fa87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3fa880: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FA880u;
    SET_GPR_U32(ctx, 31, 0x3FA888u);
    ctx->pc = 0x3FA884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA880u;
    // 0x3fa884: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FA880u, 0x3FA888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA888u;
label_3fa888:
    // 0x3fa888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fa888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa88c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa890: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x3fa890u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x3fa894: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FA894u;
    SET_GPR_U32(ctx, 31, 0x3FA89Cu);
    ctx->pc = 0x3FA898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA894u;
    // 0x3fa898: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FA894u, 0x3FA89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA89Cu;
label_3fa89c:
    // 0x3fa89c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fa89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa8a0: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FA8A0u;
    SET_GPR_U32(ctx, 31, 0x3FA8A8u);
    ctx->pc = 0x3FA8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA8A0u;
    // 0x3fa8a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FA8A0u, 0x3FA8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA8A8u;
label_3fa8a8:
    // 0x3fa8a8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3FA8A8u;
    {
        const bool branch_taken_0x3fa8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fa8a8) {
            ctx->pc = 0x3FA8E4u;
            goto label_3fa8e4;
        }
    }
    ctx->pc = 0x3FA8B0u;
label_3fa8b0:
    // 0x3fa8b0: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x3fa8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3fa8b4: 0xae600040  sw          $zero, 0x40($s3)
    ctx->pc = 0x3fa8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 0));
    // 0x3fa8b8: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x3fa8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3fa8bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fa8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa8c0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3fa8c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3fa8c4: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x3fa8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x3fa8c8: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FA8C8u;
    SET_GPR_U32(ctx, 31, 0x3FA8D0u);
    ctx->pc = 0x3FA8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA8C8u;
    // 0x3fa8cc: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FA8C8u, 0x3FA8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA8D0u;
label_3fa8d0:
    // 0x3fa8d0: 0xde6300f0  ld          $v1, 0xF0($s3)
    ctx->pc = 0x3fa8d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x3fa8d4: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x3fa8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x3fa8d8: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x3fa8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x3fa8dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3fa8dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3fa8e0: 0xfe6300f0  sd          $v1, 0xF0($s3)
    ctx->pc = 0x3fa8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 240), GPR_U64(ctx, 3));
label_3fa8e4:
    // 0x3fa8e4: 0x1a20004f  blez        $s1, . + 4 + (0x4F << 2)
    ctx->pc = 0x3FA8E4u;
    {
        const bool branch_taken_0x3fa8e4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3FA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA8E4u;
        // 0x3fa8e8: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa8e4) {
            ctx->pc = 0x3FAA24u;
            goto label_3faa24;
        }
    }
    ctx->pc = 0x3FA8ECu;
    // 0x3fa8ec: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x3fa8ecu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
    // 0x3fa8f0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3fa8f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa8f4: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x3fa8f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3fa8f8: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x3fa8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x3fa8fc: 0x0  nop
    ctx->pc = 0x3fa8fcu;
    // NOP
label_3fa900:
    // 0x3fa900: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x3fa900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3fa904: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3fa904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3fa908: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3fa908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3fa90c: 0x10800041  beqz        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3FA90Cu;
    {
        const bool branch_taken_0x3fa90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA90Cu;
        // 0x3fa910: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa90c) {
            ctx->pc = 0x3FAA14u;
            goto label_3faa14;
        }
    }
    ctx->pc = 0x3FA914u;
    // 0x3fa914: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FA914u;
    SET_GPR_U32(ctx, 31, 0x3FA91Cu);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FA914u, 0x3FA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA91Cu;
label_3fa91c:
    // 0x3fa91c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3fa91cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa920: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3fa920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3fa924: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FA924u;
    {
        const bool branch_taken_0x3fa924 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3FA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA924u;
        // 0x3fa928: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa924) {
            ctx->pc = 0x3FA93Cu;
            goto label_3fa93c;
        }
    }
    ctx->pc = 0x3FA92Cu;
    // 0x3fa92c: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FA92Cu;
    SET_GPR_U32(ctx, 31, 0x3FA934u);
    ctx->pc = 0x3FA930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA92Cu;
    // 0x3fa930: 0x27c5f938  addiu       $a1, $fp, -0x6C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FA92Cu, 0x3FA934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA934u;
label_3fa934:
    // 0x3fa934: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3FA934u;
    {
        const bool branch_taken_0x3fa934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA934u;
        // 0x3fa938: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa934) {
            ctx->pc = 0x3FAA18u;
            goto label_3faa18;
        }
    }
    ctx->pc = 0x3FA93Cu;
label_3fa93c:
    // 0x3fa93c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3fa93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3fa940: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FA940u;
    {
        const bool branch_taken_0x3fa940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA940u;
        // 0x3fa944: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa940) {
            ctx->pc = 0x3FA954u;
            goto label_3fa954;
        }
    }
    ctx->pc = 0x3FA948u;
    // 0x3fa948: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3fa948u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3fa94c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FA94Cu;
    {
        const bool branch_taken_0x3fa94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fa94c) {
            ctx->pc = 0x3FA95Cu;
            goto label_3fa95c;
        }
    }
    ctx->pc = 0x3FA954u;
label_3fa954:
    // 0x3fa954: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3FA954u;
    {
        const bool branch_taken_0x3fa954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA954u;
        // 0x3fa958: 0xae170000  sw          $s7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa954) {
            ctx->pc = 0x3FA970u;
            goto label_3fa970;
        }
    }
    ctx->pc = 0x3FA95Cu;
label_3fa95c:
    // 0x3fa95c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FA95Cu;
    SET_GPR_U32(ctx, 31, 0x3FA964u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FA95Cu, 0x3FA964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA964u;
label_3fa964:
    // 0x3fa964: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3fa964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3fa968: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3fa968u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa96c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3fa96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3fa970:
    // 0x3fa970: 0x2542821  addu        $a1, $s2, $s4
    ctx->pc = 0x3fa970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x3fa974: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fa974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa978: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3fa978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3fa97c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3fa97cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3fa980: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FA980u;
    SET_GPR_U32(ctx, 31, 0x3FA988u);
    ctx->pc = 0x3FA984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA980u;
    // 0x3fa984: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FA980u, 0x3FA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA988u;
label_3fa988:
    // 0x3fa988: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3fa988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3fa98c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fa98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa990: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3fa990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fa994: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FA994u;
    SET_GPR_U32(ctx, 31, 0x3FA99Cu);
    ctx->pc = 0x3FA998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA994u;
    // 0x3fa998: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FA994u, 0x3FA99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA99Cu;
label_3fa99c:
    // 0x3fa99c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3fa99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3fa9a0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3fa9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3fa9a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3fa9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3fa9a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3fa9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3fa9ac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3fa9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3fa9b0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x3fa9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fa9b4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FA9B4u;
    {
        const bool branch_taken_0x3fa9b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FA9B4u;
        // 0x3fa9b8: 0xae040008  sw          $a0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fa9b4) {
            ctx->pc = 0x3FA9C8u;
            goto label_3fa9c8;
        }
    }
    ctx->pc = 0x3FA9BCu;
    // 0x3fa9bc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3fa9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3fa9c0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FA9C0u;
    SET_GPR_U32(ctx, 31, 0x3FA9C8u);
    ctx->pc = 0x3FA9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FA9C0u;
    // 0x3fa9c4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FA9C0u, 0x3FA9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FA9C8u;
label_3fa9c8:
    // 0x3fa9c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3fa9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3fa9cc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3fa9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3fa9d0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3fa9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3fa9d4: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x3fa9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x3fa9d8: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x3fa9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3fa9dc: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x3fa9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x3fa9e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3fa9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3fa9e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fa9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3fa9e8: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x3fa9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3fa9ec: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x3fa9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3fa9f0: 0x6a04000f  ldl         $a0, 0xF($s0)
    ctx->pc = 0x3fa9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3fa9f4: 0x6e040008  ldr         $a0, 0x8($s0)
    ctx->pc = 0x3fa9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3fa9f8: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3fa9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3fa9fc: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3fa9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3faa00: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3faa00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3faa04: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3faa04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3faa08: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x3faa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x3faa0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3faa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3faa10: 0xae630040  sw          $v1, 0x40($s3)
    ctx->pc = 0x3faa10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
label_3faa14:
    // 0x3faa14: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x3faa14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3faa18:
    // 0x3faa18: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x3faa18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x3faa1c: 0x56c0ffb8  bnel        $s6, $zero, . + 4 + (-0x48 << 2)
    ctx->pc = 0x3FAA1Cu;
    {
        const bool branch_taken_0x3faa1c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x3faa1c) {
            ctx->pc = 0x3FAA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FAA1Cu;
            // 0x3faa20: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FA900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fa900;
        }
    }
    ctx->pc = 0x3FAA24u;
label_3faa24:
    // 0x3faa24: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3faa24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3faa28:
    // 0x3faa28: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3faa28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3faa2c:
    // 0x3faa2c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3faa2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3faa30: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3faa30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3faa34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3faa34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3faa38: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3faa38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3faa3c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3faa3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3faa40: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3faa40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3faa44: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3faa44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3faa48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3faa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3faa4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FAA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAA4Cu;
        // 0x3faa50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FAA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FAA54u;
    // 0x3faa54: 0x0  nop
    ctx->pc = 0x3faa54u;
    // NOP
    ctx->pc = 0x3faa58u;
}
