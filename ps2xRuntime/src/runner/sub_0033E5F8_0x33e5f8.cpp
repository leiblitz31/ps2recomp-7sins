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

// Function: sub_0033E5F8
// Address: 0x33e5f8 - 0x33e6c8
void sub_0033E5F8_0x33e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E5F8_0x33e5f8");
#endif

    switch (ctx->pc) {
        case 0x33e634u: goto label_33e634;
        case 0x33e65cu: goto label_33e65c;
        case 0x33e688u: goto label_33e688;
        default: break;
    }

    ctx->pc = 0x33e5f8u;

    // 0x33e5f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33e5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33e5fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x33e600: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33e600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33e604: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33e604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e608: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x33e608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x33e60c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33e60cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e610: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33e610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33e614: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33e618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33e61c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33e61cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e620: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x33e620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x33e624: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e628: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x33e628u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33e62c: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E62Cu;
    SET_GPR_U32(ctx, 31, 0x33E634u);
    ctx->pc = 0x33E630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E62Cu;
    // 0x33e630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E62Cu, 0x33E634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E634u;
label_33e634:
    // 0x33e634: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33E634u;
    {
        const bool branch_taken_0x33e634 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E634u;
        // 0x33e638: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e634) {
            ctx->pc = 0x33E64Cu;
            goto label_33e64c;
        }
    }
    ctx->pc = 0x33E63Cu;
    // 0x33e63c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x33e63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33e640: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33e640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e644: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x33e644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33e648: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x33e648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_33e64c:
    // 0x33e64c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33e650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e654: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E654u;
    SET_GPR_U32(ctx, 31, 0x33E65Cu);
    ctx->pc = 0x33E658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E654u;
    // 0x33e658: 0x34a50003  ori         $a1, $a1, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E654u, 0x33E65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E65Cu;
label_33e65c:
    // 0x33e65c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33E65Cu;
    {
        const bool branch_taken_0x33e65c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33E660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E65Cu;
        // 0x33e660: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e65c) {
            ctx->pc = 0x33E678u;
            goto label_33e678;
        }
    }
    ctx->pc = 0x33E664u;
    // 0x33e664: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x33e664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33e668: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33e668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e66c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x33e66cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33e670: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x33e670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33e674: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x33e674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_33e678:
    // 0x33e678: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e67c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33e67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e680: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E680u;
    SET_GPR_U32(ctx, 31, 0x33E688u);
    ctx->pc = 0x33E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E680u;
    // 0x33e684: 0x34a50005  ori         $a1, $a1, 0x5 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E680u, 0x33E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E688u;
label_33e688:
    // 0x33e688: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33E688u;
    {
        const bool branch_taken_0x33e688 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E688u;
        // 0x33e68c: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e688) {
            ctx->pc = 0x33E6A4u;
            goto label_33e6a4;
        }
    }
    ctx->pc = 0x33E690u;
    // 0x33e690: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x33e690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33e694: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33e694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e698: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x33e698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33e69c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x33e69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33e6a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x33e6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_33e6a4:
    // 0x33e6a4: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x33e6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x33e6a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33e6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e6ac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33e6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33e6b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33e6b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33e6b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33e6b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e6b8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x33e6b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e6bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33e6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x33E6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E6C0u;
        // 0x33e6c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E6C8u;
}
