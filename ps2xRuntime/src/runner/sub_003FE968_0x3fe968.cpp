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

// Function: sub_003FE968
// Address: 0x3fe968 - 0x3fea40
void sub_003FE968_0x3fe968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FE968_0x3fe968");
#endif

    switch (ctx->pc) {
        case 0x3fe9c4u: goto label_3fe9c4;
        case 0x3fe9dcu: goto label_3fe9dc;
        case 0x3fe9f4u: goto label_3fe9f4;
        case 0x3fea08u: goto label_3fea08;
        case 0x3fea18u: goto label_3fea18;
        default: break;
    }

    ctx->pc = 0x3fe968u;

    // 0x3fe968: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3fe968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3fe96c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3fe96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3fe970: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3fe970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3fe974: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3fe974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe978: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3fe978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3fe97c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3fe97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe980: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3fe980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3fe984: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3fe984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe988: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3fe988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3fe98c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3fe98cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fe990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fe994: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3FE994u;
    {
        const bool branch_taken_0x3fe994 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE994u;
        // 0x3fe998: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe994) {
            ctx->pc = 0x3FE9A4u;
            goto label_3fe9a4;
        }
    }
    ctx->pc = 0x3FE99Cu;
    // 0x3fe99c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x3fe99cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3fe9a0: 0x8e1402f0  lw          $s4, 0x2F0($s0)
    ctx->pc = 0x3fe9a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 752)));
label_3fe9a4:
    // 0x3fe9a4: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3FE9A4u;
    {
        const bool branch_taken_0x3fe9a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fe9a4) {
            ctx->pc = 0x3FE9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE9A4u;
            // 0x3fe9a8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FE9ACu;
            goto label_3fe9ac;
        }
    }
    ctx->pc = 0x3FE9ACu;
label_3fe9ac:
    // 0x3fe9ac: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x3FE9ACu;
    {
        const bool branch_taken_0x3fe9ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE9ACu;
        // 0x3fe9b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe9ac) {
            ctx->pc = 0x3FE9F8u;
            goto label_3fe9f8;
        }
    }
    ctx->pc = 0x3FE9B4u;
    // 0x3fe9b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fe9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe9b8: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x3fe9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3fe9bc: 0xc0f838e  jal         func_3E0E38
    ctx->pc = 0x3FE9BCu;
    SET_GPR_U32(ctx, 31, 0x3FE9C4u);
    ctx->pc = 0x3FE9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE9BCu;
    // 0x3fe9c0: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0E38u, 0x3FE9BCu, 0x3FE9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE9C4u;
label_3fe9c4:
    // 0x3fe9c4: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x3fe9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x3fe9c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FE9C8u;
    {
        const bool branch_taken_0x3fe9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FE9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FE9C8u;
        // 0x3fe9cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fe9c8) {
            ctx->pc = 0x3FE9E8u;
            goto label_3fe9e8;
        }
    }
    ctx->pc = 0x3FE9D0u;
    // 0x3fe9d0: 0x8e0502cc  lw          $a1, 0x2CC($s0)
    ctx->pc = 0x3fe9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x3fe9d4: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FE9D4u;
    SET_GPR_U32(ctx, 31, 0x3FE9DCu);
    ctx->pc = 0x3FE9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE9D4u;
    // 0x3fe9d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FE9D4u, 0x3FE9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE9DCu;
label_3fe9dc:
    // 0x3fe9dc: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x3fe9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x3fe9e0: 0xae0002c8  sw          $zero, 0x2C8($s0)
    ctx->pc = 0x3fe9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 0));
    // 0x3fe9e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fe9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fe9e8:
    // 0x3fe9e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3fe9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fe9ec: 0xc0f8b9e  jal         func_3E2E78
    ctx->pc = 0x3FE9ECu;
    SET_GPR_U32(ctx, 31, 0x3FE9F4u);
    ctx->pc = 0x3FE9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FE9ECu;
    // 0x3fe9f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2E78u, 0x3FE9ECu, 0x3FE9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FE9F4u;
label_3fe9f4:
    // 0x3fe9f4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3fe9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3fe9f8:
    // 0x3fe9f8: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FE9F8u;
    {
        const bool branch_taken_0x3fe9f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fe9f8) {
            ctx->pc = 0x3FE9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FE9F8u;
            // 0x3fe9fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FEA20u;
            goto label_3fea20;
        }
    }
    ctx->pc = 0x3FEA00u;
    // 0x3fea00: 0xc0ffa90  jal         func_3FEA40
    ctx->pc = 0x3FEA00u;
    SET_GPR_U32(ctx, 31, 0x3FEA08u);
    ctx->pc = 0x3FEA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEA00u;
    // 0x3fea04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FEA40u, 0x3FEA00u, 0x3FEA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEA08u;
label_3fea08:
    // 0x3fea08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fea08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fea0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3fea0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fea10: 0xc0f8b9e  jal         func_3E2E78
    ctx->pc = 0x3FEA10u;
    SET_GPR_U32(ctx, 31, 0x3FEA18u);
    ctx->pc = 0x3FEA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FEA10u;
    // 0x3fea14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2E78u, 0x3FEA10u, 0x3FEA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FEA18u;
label_3fea18:
    // 0x3fea18: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3fea18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x3fea1c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3fea1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3fea20:
    // 0x3fea20: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3fea20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fea24: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3fea24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fea28: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3fea28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fea2c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3fea2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fea30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fea30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fea34: 0x3e00008  jr          $ra
    ctx->pc = 0x3FEA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FEA34u;
        // 0x3fea38: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FEA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FEA3Cu;
    // 0x3fea3c: 0x0  nop
    ctx->pc = 0x3fea3cu;
    // NOP
    ctx->pc = 0x3fea40u;
}
