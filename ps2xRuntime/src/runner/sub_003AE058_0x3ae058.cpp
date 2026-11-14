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

// Function: sub_003AE058
// Address: 0x3ae058 - 0x3ae168
void sub_003AE058_0x3ae058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE058_0x3ae058");
#endif

    switch (ctx->pc) {
        case 0x3ae0b8u: goto label_3ae0b8;
        case 0x3ae134u: goto label_3ae134;
        default: break;
    }

    ctx->pc = 0x3ae058u;

    // 0x3ae058: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ae058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3ae05c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ae05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3ae060: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ae060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3ae064: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ae064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ae068: 0x2450ce80  addiu       $s0, $v0, -0x3180
    ctx->pc = 0x3ae068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3ae06c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ae06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3ae070: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3ae070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3ae074: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ae074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3ae078: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ae078u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae07c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae080: 0x8e020610  lw          $v0, 0x610($s0)
    ctx->pc = 0x3ae080u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61D490u));
    // 0x3ae084: 0x2853001f  slti        $s3, $v0, 0x1F
    ctx->pc = 0x3ae084u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3ae088: 0x1260002a  beqz        $s3, . + 4 + (0x2A << 2)
    ctx->pc = 0x3AE088u;
    {
        const bool branch_taken_0x3ae088 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE088u;
        // 0x3ae08c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae088) {
            ctx->pc = 0x3AE134u;
            goto label_3ae134;
        }
    }
    ctx->pc = 0x3AE090u;
    // 0x3ae090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ae090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3ae094: 0x26110590  addiu       $s1, $s0, 0x590
    ctx->pc = 0x3ae094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1424));
    // 0x3ae098: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3ae098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ae09c: 0xae020610  sw          $v0, 0x610($s0)
    ctx->pc = 0x3ae09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 2));
    // 0x3ae0a0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3ae0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3ae0a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ae0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ae0a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AE0A8u;
    {
        const bool branch_taken_0x3ae0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae0a8) {
            ctx->pc = 0x3AE0C8u;
            goto label_3ae0c8;
        }
    }
    ctx->pc = 0x3AE0B0u;
    // 0x3ae0b0: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x3AE0B0u;
    SET_GPR_U32(ctx, 31, 0x3AE0B8u);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x3AE0B0u, 0x3AE0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE0B8u;
label_3ae0b8:
    // 0x3ae0b8: 0x8e030610  lw          $v1, 0x610($s0)
    ctx->pc = 0x3ae0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
    // 0x3ae0bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ae0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ae0c0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3ae0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3ae0c4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3ae0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3ae0c8:
    // 0x3ae0c8: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AE0C8u;
    {
        const bool branch_taken_0x3ae0c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0C8u;
        // 0x3ae0cc: 0x8e020610  lw          $v0, 0x610($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae0c8) {
            ctx->pc = 0x3AE110u;
            goto label_3ae110;
        }
    }
    ctx->pc = 0x3AE0D0u;
    // 0x3ae0d0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3ae0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ae0d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ae0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ae0d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ae0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ae0dc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3ae0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3ae0e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3ae0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3ae0e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3ae0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ae0e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3ae0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ae0ec: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3ae0ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ae0f0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3ae0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3ae0f4: 0x78830010  lq          $v1, 0x10($a0)
    ctx->pc = 0x3ae0f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3ae0f8: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x3ae0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x3ae0fc: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x3ae0fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3ae100: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x3ae100u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x3ae104: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x3ae104u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3ae108: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3AE108u;
    {
        const bool branch_taken_0x3ae108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE108u;
        // 0x3ae10c: 0x7ca30030  sq          $v1, 0x30($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae108) {
            ctx->pc = 0x3AE134u;
            goto label_3ae134;
        }
    }
    ctx->pc = 0x3AE110u;
label_3ae110:
    // 0x3ae110: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ae110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae114: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3ae114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ae118: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ae118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ae11c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ae11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ae120: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3ae120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3ae124: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3ae124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3ae128: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ae128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ae12c: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x3AE12Cu;
    SET_GPR_U32(ctx, 31, 0x3AE134u);
    ctx->pc = 0x3AE130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE12Cu;
    // 0x3ae130: 0x8c660000  lw          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x3AE12Cu, 0x3AE134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE134u;
label_3ae134:
    // 0x3ae134: 0x2683ce80  addiu       $v1, $s4, -0x3180
    ctx->pc = 0x3ae134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954624));
    // 0x3ae138: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3ae138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae13c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ae13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ae140: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ae140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ae144: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ae144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ae148: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ae148u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae14c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3ae14cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae154: 0xac600704  sw          $zero, 0x704($v1)
    ctx->pc = 0x3ae154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1796), GPR_U32(ctx, 0));
    // 0x3ae158: 0xac6006f0  sw          $zero, 0x6F0($v1)
    ctx->pc = 0x3ae158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1776), GPR_U32(ctx, 0));
    // 0x3ae15c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE15Cu;
        // 0x3ae160: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE164u;
    // 0x3ae164: 0x0  nop
    ctx->pc = 0x3ae164u;
    // NOP
    ctx->pc = 0x3ae168u;
}
