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

// Function: sub_003D9590
// Address: 0x3d9590 - 0x3d9780
void sub_003D9590_0x3d9590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9590_0x3d9590");
#endif

    switch (ctx->pc) {
        case 0x3d9620u: goto label_3d9620;
        case 0x3d9628u: goto label_3d9628;
        case 0x3d96ecu: goto label_3d96ec;
        case 0x3d9774u: goto label_3d9774;
        default: break;
    }

    ctx->pc = 0x3d9590u;

    // 0x3d9590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d9594: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3d9594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9598: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d9598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3d959c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3D959Cu;
    {
        const bool branch_taken_0x3d959c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D959Cu;
        // 0x3d95a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d959c) {
            ctx->pc = 0x3D95C8u;
            goto label_3d95c8;
        }
    }
    ctx->pc = 0x3D95A4u;
    // 0x3d95a4: 0x8cd00024  lw          $s0, 0x24($a2)
    ctx->pc = 0x3d95a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x3d95a8: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3D95A8u;
    {
        const bool branch_taken_0x3d95a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95A8u;
        // 0x3d95ac: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d95a8) {
            ctx->pc = 0x3D962Cu;
            goto label_3d962c;
        }
    }
    ctx->pc = 0x3D95B0u;
    // 0x3d95b0: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x3d95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x3d95b4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3D95B4u;
    {
        const bool branch_taken_0x3d95b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95B4u;
        // 0x3d95b8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d95b4) {
            ctx->pc = 0x3D962Cu;
            goto label_3d962c;
        }
    }
    ctx->pc = 0x3D95BCu;
    // 0x3d95bc: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x3d95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x3d95c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D95C0u;
    {
        const bool branch_taken_0x3d95c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95C0u;
        // 0x3d95c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d95c0) {
            ctx->pc = 0x3D95D0u;
            goto label_3d95d0;
        }
    }
    ctx->pc = 0x3D95C8u;
label_3d95c8:
    // 0x3d95c8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3D95C8u;
    {
        const bool branch_taken_0x3d95c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95C8u;
        // 0x3d95cc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d95c8) {
            ctx->pc = 0x3D962Cu;
            goto label_3d962c;
        }
    }
    ctx->pc = 0x3D95D0u;
label_3d95d0:
    // 0x3d95d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3d95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d95d4: 0xacc20034  sw          $v0, 0x34($a2)
    ctx->pc = 0x3d95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
    // 0x3d95d8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3d95d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x3d95dc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3d95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3d95e0: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x3d95e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x3d95e4: 0xfcc00008  sd          $zero, 0x8($a2)
    ctx->pc = 0x3d95e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 0));
    // 0x3d95e8: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x3d95e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x3d95ec: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D95ECu;
    {
        const bool branch_taken_0x3d95ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3D95F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95ECu;
        // 0x3d95f0: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d95ec) {
            ctx->pc = 0x3D95F8u;
            goto label_3d95f8;
        }
    }
    ctx->pc = 0x3D95F4u;
    // 0x3d95f4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3d95f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3d95f8:
    // 0x3d95f8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x3d95f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3d95fc: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x3d95fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x3d9600: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d9600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9604: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3d9604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3d9608: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x3d9608u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3d960c: 0xfcc40038  sd          $a0, 0x38($a2)
    ctx->pc = 0x3d960cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 4));
    // 0x3d9610: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3d9610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x3d9614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9618: 0xc0f6f8c  jal         func_3DBE30
    ctx->pc = 0x3D9618u;
    SET_GPR_U32(ctx, 31, 0x3D9620u);
    ctx->pc = 0x3D961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9618u;
    // 0x3d961c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBE30u, 0x3D9618u, 0x3D9620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9620u;
label_3d9620:
    // 0x3d9620: 0xc0f65e0  jal         func_3D9780
    ctx->pc = 0x3D9620u;
    SET_GPR_U32(ctx, 31, 0x3D9628u);
    ctx->pc = 0x3D9624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9620u;
    // 0x3d9624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9780u, 0x3D9620u, 0x3D9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9628u;
label_3d9628:
    // 0x3d9628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d9628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d962c:
    // 0x3d962c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d962cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9634: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9634u;
        // 0x3d9638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D963Cu;
    // 0x3d963c: 0x0  nop
    ctx->pc = 0x3d963cu;
    // NOP
    // 0x3d9640: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d9640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d9644: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3d9644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9648: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3d9648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3d964c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3d964cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d9650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d9654: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d9654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9658: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3d9658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3d965c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3d965cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9660: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3d9660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3d9664: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x3D9664u;
    {
        const bool branch_taken_0x3d9664 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9664u;
        // 0x3d9668: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9664) {
            ctx->pc = 0x3D969Cu;
            goto label_3d969c;
        }
    }
    ctx->pc = 0x3D966Cu;
    // 0x3d966c: 0x8cf10024  lw          $s1, 0x24($a3)
    ctx->pc = 0x3d966cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x3d9670: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x3D9670u;
    {
        const bool branch_taken_0x3d9670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9670u;
        // 0x3d9674: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9670) {
            ctx->pc = 0x3D969Cu;
            goto label_3d969c;
        }
    }
    ctx->pc = 0x3D9678u;
    // 0x3d9678: 0x101827  nor         $v1, $zero, $s0
    ctx->pc = 0x3d9678u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x3d967c: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x3d967cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x3d9680: 0x2e04000a  sltiu       $a0, $s0, 0xA
    ctx->pc = 0x3d9680u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3d9684: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3D9684u;
    {
        const bool branch_taken_0x3d9684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9684u;
        // 0x3d9688: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9684) {
            ctx->pc = 0x3D9734u;
            goto label_3d9734;
        }
    }
    ctx->pc = 0x3D968Cu;
    // 0x3d968c: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D968Cu;
    {
        const bool branch_taken_0x3d968c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3D9690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D968Cu;
        // 0x3d9690: 0x2a420003  slti        $v0, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d968c) {
            ctx->pc = 0x3D969Cu;
            goto label_3d969c;
        }
    }
    ctx->pc = 0x3D9694u;
    // 0x3d9694: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9694u;
    {
        const bool branch_taken_0x3d9694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9694) {
            ctx->pc = 0x3D9698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D9694u;
            // 0x3d9698: 0x8e230094  lw          $v1, 0x94($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D96A4u;
            goto label_3d96a4;
        }
    }
    ctx->pc = 0x3D969Cu;
label_3d969c:
    // 0x3d969c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3D969Cu;
    {
        const bool branch_taken_0x3d969c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D969Cu;
        // 0x3d96a0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d969c) {
            ctx->pc = 0x3D9734u;
            goto label_3d9734;
        }
    }
    ctx->pc = 0x3D96A4u;
label_3d96a4:
    // 0x3d96a4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3d96a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3d96a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3d96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3d96ac: 0x2042818  mult        $a1, $s0, $a0
    ctx->pc = 0x3d96acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3d96b0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3d96b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3d96b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d96b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d96b8: 0x2442c7d0  addiu       $v0, $v0, -0x3830
    ctx->pc = 0x3d96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952912));
    // 0x3d96bc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3d96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3d96c0: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x3d96c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d96c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d96c8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3d96c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d96cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d96d0: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D96D0u;
    {
        const bool branch_taken_0x3d96d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d96d0) {
            ctx->pc = 0x3D96D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D96D0u;
            // 0x3d96d4: 0x8e220094  lw          $v0, 0x94($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D96F4u;
            goto label_3d96f4;
        }
    }
    ctx->pc = 0x3D96D8u;
    // 0x3d96d8: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x3d96d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3d96dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D96DCu;
    {
        const bool branch_taken_0x3d96dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D96DCu;
        // 0x3d96e0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d96dc) {
            ctx->pc = 0x3D96F0u;
            goto label_3d96f0;
        }
    }
    ctx->pc = 0x3D96E4u;
    // 0x3d96e4: 0xc0f5d8e  jal         func_3D7638
    ctx->pc = 0x3D96E4u;
    SET_GPR_U32(ctx, 31, 0x3D96ECu);
    ctx->pc = 0x3D96E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D96E4u;
    // 0x3d96e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7638u, 0x3D96E4u, 0x3D96ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D96ECu;
label_3d96ec:
    // 0x3d96ec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3d96ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d96f0:
    // 0x3d96f0: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x3d96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_3d96f4:
    // 0x3d96f4: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x3D96F4u;
    {
        const bool branch_taken_0x3d96f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3D96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D96F4u;
        // 0x3d96f8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d96f4) {
            ctx->pc = 0x3D972Cu;
            goto label_3d972c;
        }
    }
    ctx->pc = 0x3D96FCu;
    // 0x3d96fc: 0x2663c7d0  addiu       $v1, $s3, -0x3830
    ctx->pc = 0x3d96fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952912));
    // 0x3d9700: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x3d9700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3d9704: 0xae300094  sw          $s0, 0x94($s1)
    ctx->pc = 0x3d9704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 16));
    // 0x3d9708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d9708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d970c: 0x94460006  lhu         $a2, 0x6($v0)
    ctx->pc = 0x3d970cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x3d9710: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x3d9710u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3d9714: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x3d9714u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d9718: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x3d9718u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3d971c: 0xae230090  sw          $v1, 0x90($s1)
    ctx->pc = 0x3d971cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
    // 0x3d9720: 0xae24009c  sw          $a0, 0x9C($s1)
    ctx->pc = 0x3d9720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 4));
    // 0x3d9724: 0xae2500a0  sw          $a1, 0xA0($s1)
    ctx->pc = 0x3d9724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 5));
    // 0x3d9728: 0xae26008c  sw          $a2, 0x8C($s1)
    ctx->pc = 0x3d9728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 6));
label_3d972c:
    // 0x3d972c: 0xae320098  sw          $s2, 0x98($s1)
    ctx->pc = 0x3d972cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 18));
    // 0x3d9730: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x3d9730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3d9734:
    // 0x3d9734: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3d9734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d9738: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3d9738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d973c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d973cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d9740: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3d9740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9748: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9748u;
        // 0x3d974c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9750u;
    // 0x3d9750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9754: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x3d9754u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9758: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x3d9758u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d975c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d9760: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3d9760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d9764: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x3d9764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3d9768: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x3d9768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d976c: 0xc0f5c22  jal         func_3D7088
    ctx->pc = 0x3D976Cu;
    SET_GPR_U32(ctx, 31, 0x3D9774u);
    ctx->pc = 0x3D9770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D976Cu;
    // 0x3d9770: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7088u, 0x3D976Cu, 0x3D9774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9774u;
label_3d9774:
    // 0x3d9774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9778: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9778u;
        // 0x3d977c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9780u;
}
