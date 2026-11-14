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

// Function: sub_003AE710
// Address: 0x3ae710 - 0x3ae7e0
void sub_003AE710_0x3ae710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE710_0x3ae710");
#endif

    switch (ctx->pc) {
        case 0x3ae770u: goto label_3ae770;
        default: break;
    }

    ctx->pc = 0x3ae710u;

    // 0x3ae710: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ae710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3ae714: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ae714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3ae718: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ae718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3ae71c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ae71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3ae720: 0x2450ce80  addiu       $s0, $v0, -0x3180
    ctx->pc = 0x3ae720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3ae724: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ae724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3ae728: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3ae728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3ae72c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ae72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ae730: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ae730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae738: 0x8e020610  lw          $v0, 0x610($s0)
    ctx->pc = 0x3ae738u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61D490u));
    // 0x3ae73c: 0x2853001f  slti        $s3, $v0, 0x1F
    ctx->pc = 0x3ae73cu;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3ae740: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x3AE740u;
    {
        const bool branch_taken_0x3ae740 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE740u;
        // 0x3ae744: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae740) {
            ctx->pc = 0x3AE7B0u;
            goto label_3ae7b0;
        }
    }
    ctx->pc = 0x3AE748u;
    // 0x3ae748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ae748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ae74c: 0x26120590  addiu       $s2, $s0, 0x590
    ctx->pc = 0x3ae74cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x3ae750: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3ae750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ae754: 0xae020610  sw          $v0, 0x610($s0)
    ctx->pc = 0x3ae754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 2));
    // 0x3ae758: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ae758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3ae75c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ae75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ae760: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE760u;
    {
        const bool branch_taken_0x3ae760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae760) {
            ctx->pc = 0x3AE764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE760u;
            // 0x3ae764: 0x8e020610  lw          $v0, 0x610($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE784u;
            goto label_3ae784;
        }
    }
    ctx->pc = 0x3AE768u;
    // 0x3ae768: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x3AE768u;
    SET_GPR_U32(ctx, 31, 0x3AE770u);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x3AE768u, 0x3AE770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE770u;
label_3ae770:
    // 0x3ae770: 0x8e030610  lw          $v1, 0x610($s0)
    ctx->pc = 0x3ae770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
    // 0x3ae774: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ae774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ae778: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ae778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3ae77c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3ae77cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3ae780: 0x8e020610  lw          $v0, 0x610($s0)
    ctx->pc = 0x3ae780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
label_3ae784:
    // 0x3ae784: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x3ae784u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ae788: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ae788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ae78c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3ae78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ae790: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ae790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ae794: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3ae794u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3ae798: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3ae798u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3ae79c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x3ae79cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x3ae7a0: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3ae7a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3ae7a4: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x3ae7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x3ae7a8: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x3ae7a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3ae7ac: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x3ae7acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_3ae7b0:
    // 0x3ae7b0: 0x2683ce80  addiu       $v1, $s4, -0x3180
    ctx->pc = 0x3ae7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954624));
    // 0x3ae7b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3ae7b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae7b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ae7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ae7bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ae7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ae7c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ae7c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ae7c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ae7c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae7c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3ae7c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae7cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae7ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae7d0: 0xac600704  sw          $zero, 0x704($v1)
    ctx->pc = 0x3ae7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1796), GPR_U32(ctx, 0));
    // 0x3ae7d4: 0xac6006f0  sw          $zero, 0x6F0($v1)
    ctx->pc = 0x3ae7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1776), GPR_U32(ctx, 0));
    // 0x3ae7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE7D8u;
        // 0x3ae7dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE7E0u;
}
