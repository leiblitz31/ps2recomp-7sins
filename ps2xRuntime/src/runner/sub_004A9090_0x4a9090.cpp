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

// Function: sub_004A9090
// Address: 0x4a9090 - 0x4a9120
void sub_004A9090_0x4a9090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9090_0x4a9090");
#endif

    switch (ctx->pc) {
        case 0x4a9090u: goto label_4a9090;
        case 0x4a9094u: goto label_4a9094;
        case 0x4a9098u: goto label_4a9098;
        case 0x4a909cu: goto label_4a909c;
        case 0x4a90a0u: goto label_4a90a0;
        case 0x4a90a4u: goto label_4a90a4;
        case 0x4a90a8u: goto label_4a90a8;
        case 0x4a90acu: goto label_4a90ac;
        case 0x4a90b0u: goto label_4a90b0;
        case 0x4a90b4u: goto label_4a90b4;
        case 0x4a90b8u: goto label_4a90b8;
        case 0x4a90bcu: goto label_4a90bc;
        case 0x4a90c0u: goto label_4a90c0;
        case 0x4a90c4u: goto label_4a90c4;
        case 0x4a90c8u: goto label_4a90c8;
        case 0x4a90ccu: goto label_4a90cc;
        case 0x4a90d0u: goto label_4a90d0;
        case 0x4a90d4u: goto label_4a90d4;
        case 0x4a90d8u: goto label_4a90d8;
        case 0x4a90dcu: goto label_4a90dc;
        case 0x4a90e0u: goto label_4a90e0;
        case 0x4a90e4u: goto label_4a90e4;
        case 0x4a90e8u: goto label_4a90e8;
        case 0x4a90ecu: goto label_4a90ec;
        case 0x4a90f0u: goto label_4a90f0;
        case 0x4a90f4u: goto label_4a90f4;
        case 0x4a90f8u: goto label_4a90f8;
        case 0x4a90fcu: goto label_4a90fc;
        case 0x4a9100u: goto label_4a9100;
        case 0x4a9104u: goto label_4a9104;
        case 0x4a9108u: goto label_4a9108;
        case 0x4a910cu: goto label_4a910c;
        case 0x4a9110u: goto label_4a9110;
        case 0x4a9114u: goto label_4a9114;
        case 0x4a9118u: goto label_4a9118;
        case 0x4a911cu: goto label_4a911c;
        default: break;
    }

    ctx->pc = 0x4a9090u;

label_4a9090:
    // 0x4a9090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a9090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4a9094:
    // 0x4a9094: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a9094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4a9098:
    // 0x4a9098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a9098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a909c:
    // 0x4a909c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a909cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a90a0:
    // 0x4a90a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a90a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4a90a4:
    // 0x4a90a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a90a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a90a8:
    // 0x4a90a8: 0xc12a49e  jal         func_4A9278
label_4a90ac:
    if (ctx->pc == 0x4A90ACu) {
        ctx->pc = 0x4A90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A90A8u;
        // 0x4a90ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A90B0u;
        goto label_4a90b0;
    }
    ctx->pc = 0x4A90A8u;
    SET_GPR_U32(ctx, 31, 0x4A90B0u);
    ctx->pc = 0x4A90ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A90A8u;
    // 0x4a90ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9278u, 0x4A90A8u, 0x4A90B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A90B0u;
label_4a90b0:
    // 0x4a90b0: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_4a90b4:
    if (ctx->pc == 0x4A90B4u) {
        ctx->pc = 0x4A90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A90B0u;
        // 0x4a90b4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A90B8u;
        goto label_4a90b8;
    }
    ctx->pc = 0x4A90B0u;
    {
        const bool branch_taken_0x4a90b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A90B0u;
        // 0x4a90b4: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a90b0) {
            ctx->pc = 0x4A9100u;
            goto label_4a9100;
        }
    }
    ctx->pc = 0x4A90B8u;
label_4a90b8:
    // 0x4a90b8: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x4a90b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_4a90bc:
    // 0x4a90bc: 0x8e4200f4  lw          $v0, 0xF4($s2)
    ctx->pc = 0x4a90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_4a90c0:
    // 0x4a90c0: 0x40f809  jalr        $v0
label_4a90c4:
    if (ctx->pc == 0x4A90C4u) {
        ctx->pc = 0x4A90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A90C0u;
        // 0x4a90c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A90C8u;
        goto label_4a90c8;
    }
    ctx->pc = 0x4A90C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A90C8u);
        ctx->pc = 0x4A90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A90C0u;
        // 0x4a90c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A90C0u, 0x4A90C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A90C8u;
label_4a90c8:
    // 0x4a90c8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4a90c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4a90cc:
    // 0x4a90cc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x4a90ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4a90d0:
    // 0x4a90d0: 0xc127ca4  jal         func_49F290
label_4a90d4:
    if (ctx->pc == 0x4A90D4u) {
        ctx->pc = 0x4A90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A90D0u;
        // 0x4a90d4: 0x34a50802  ori         $a1, $a1, 0x802 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2050);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A90D8u;
        goto label_4a90d8;
    }
    ctx->pc = 0x4A90D0u;
    SET_GPR_U32(ctx, 31, 0x4A90D8u);
    ctx->pc = 0x4A90D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A90D0u;
    // 0x4a90d4: 0x34a50802  ori         $a1, $a1, 0x802 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2050);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x4A90D0u, 0x4A90D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A90D8u;
label_4a90d8:
    // 0x4a90d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a90d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a90dc:
    // 0x4a90dc: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x4a90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_4a90e0:
    // 0x4a90e0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_4a90e4:
    if (ctx->pc == 0x4A90E4u) {
        ctx->pc = 0x4A90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A90E0u;
        // 0x4a90e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A90E8u;
        goto label_4a90e8;
    }
    ctx->pc = 0x4A90E0u;
    {
        const bool branch_taken_0x4a90e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A90E0u;
        // 0x4a90e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a90e0) {
            ctx->pc = 0x4A9104u;
            goto label_4a9104;
        }
    }
    ctx->pc = 0x4A90E8u;
label_4a90e8:
    // 0x4a90e8: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x4a90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_4a90ec:
    // 0x4a90ec: 0x40f809  jalr        $v0
label_4a90f0:
    if (ctx->pc == 0x4A90F0u) {
        ctx->pc = 0x4A90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A90ECu;
        // 0x4a90f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A90F4u;
        goto label_4a90f4;
    }
    ctx->pc = 0x4A90ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A90F4u);
        ctx->pc = 0x4A90F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A90ECu;
        // 0x4a90f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A90ECu, 0x4A90F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A90F4u;
label_4a90f4:
    // 0x4a90f4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4a90f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a90f8:
    // 0x4a90f8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x4a90f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_4a90fc:
    // 0x4a90fc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4a90fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_4a9100:
    // 0x4a9100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a9100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a9104:
    // 0x4a9104: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a9104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a9108:
    // 0x4a9108: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a9108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a910c:
    // 0x4a910c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a910cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a9110:
    // 0x4a9110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a9114:
    // 0x4a9114: 0x3e00008  jr          $ra
label_4a9118:
    if (ctx->pc == 0x4A9118u) {
        ctx->pc = 0x4A9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9114u;
        // 0x4a9118: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A911Cu;
        goto label_4a911c;
    }
    ctx->pc = 0x4A9114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9114u;
        // 0x4a9118: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A911Cu;
label_4a911c:
    // 0x4a911c: 0x0  nop
    ctx->pc = 0x4a911cu;
    // NOP
    ctx->pc = 0x4a9120u;
}
