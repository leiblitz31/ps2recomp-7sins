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

// Function: sub_00340C30
// Address: 0x340c30 - 0x340d00
void sub_00340C30_0x340c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340C30_0x340c30");
#endif

    switch (ctx->pc) {
        case 0x340c5cu: goto label_340c5c;
        case 0x340c74u: goto label_340c74;
        case 0x340c94u: goto label_340c94;
        default: break;
    }

    ctx->pc = 0x340c30u;

    // 0x340c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x340c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x340c34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x340c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x340c38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x340c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x340c3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x340c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x340c40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x340c44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x340c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c48: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x340c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x340c4c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x340c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x340c50: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x340c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x340c54: 0xc0d120c  jal         func_344830
    ctx->pc = 0x340C54u;
    SET_GPR_U32(ctx, 31, 0x340C5Cu);
    ctx->pc = 0x340C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340C54u;
    // 0x340c58: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x340C54u, 0x340C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C5Cu;
label_340c5c:
    // 0x340c5c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x340c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x340c60: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x340c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x340c64: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x340c64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x340c68: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x340c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x340c6c: 0xc0d1228  jal         func_3448A0
    ctx->pc = 0x340C6Cu;
    SET_GPR_U32(ctx, 31, 0x340C74u);
    ctx->pc = 0x340C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340C6Cu;
    // 0x340c70: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448A0u, 0x340C6Cu, 0x340C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C74u;
label_340c74:
    // 0x340c74: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x340c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x340c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x340c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x340c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x340c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c84: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x340c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x340c88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x340c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340c8c: 0xc0d11fa  jal         func_3447E8
    ctx->pc = 0x340C8Cu;
    SET_GPR_U32(ctx, 31, 0x340C94u);
    ctx->pc = 0x340C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340C8Cu;
    // 0x340c90: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3447E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3447E8u, 0x340C8Cu, 0x340C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C94u;
label_340c94:
    // 0x340c94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x340c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340c98: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x340c98u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x340c9c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x340c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x340ca0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x340ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x340ca4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x340ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x340ca8: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x340CA8u;
    {
        const bool branch_taken_0x340ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x340ca8) {
            ctx->pc = 0x340CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340CA8u;
            // 0x340cac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x340CB0u;
            goto label_340cb0;
        }
    }
    ctx->pc = 0x340CB0u;
label_340cb0:
    // 0x340cb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x340cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x340cb4: 0x26260018  addiu       $a2, $s1, 0x18
    ctx->pc = 0x340cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x340cb8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x340cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x340cbc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x340cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340cc0: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x340cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x340cc4: 0xae260010  sw          $a2, 0x10($s1)
    ctx->pc = 0x340cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    // 0x340cc8: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x340cc8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x340ccc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x340cccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x340cd0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x340cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x340cd4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x340cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x340cd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x340cd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340cdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340ce0: 0x1812  mflo        $v1
    ctx->pc = 0x340ce0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x340ce4: 0x652018  mult        $a0, $v1, $a1
    ctx->pc = 0x340ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x340ce8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x340ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x340cec: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x340cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x340cf0: 0xae250014  sw          $a1, 0x14($s1)
    ctx->pc = 0x340cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 5));
    // 0x340cf4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x340cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x340cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x340CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CF8u;
        // 0x340cfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340D00u;
}
