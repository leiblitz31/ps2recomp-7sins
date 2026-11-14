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

// Function: sub_003B4DD0
// Address: 0x3b4dd0 - 0x3b4e58
void sub_003B4DD0_0x3b4dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4DD0_0x3b4dd0");
#endif

    switch (ctx->pc) {
        case 0x3b4e0cu: goto label_3b4e0c;
        case 0x3b4e1cu: goto label_3b4e1c;
        case 0x3b4e2cu: goto label_3b4e2c;
        case 0x3b4e3cu: goto label_3b4e3c;
        default: break;
    }

    ctx->pc = 0x3b4dd0u;

    // 0x3b4dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b4dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b4dd4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3b4dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b4ddc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3b4ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b4de0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x3b4de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3b4de4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B4DE4u;
    {
        const bool branch_taken_0x3b4de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4DE4u;
        // 0x3b4de8: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4de4) {
            ctx->pc = 0x3B4E44u;
            goto label_3b4e44;
        }
    }
    ctx->pc = 0x3B4DECu;
    // 0x3b4dec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b4decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b4df0: 0x2442c0f0  addiu       $v0, $v0, -0x3F10
    ctx->pc = 0x3b4df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951152));
    // 0x3b4df4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b4df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b4df8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b4df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b4dfc: 0x800008  jr          $a0
    ctx->pc = 0x3B4DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B4E04u: goto label_3b4e04;
            case 0x3B4E14u: goto label_3b4e14;
            case 0x3B4E24u: goto label_3b4e24;
            case 0x3B4E34u: goto label_3b4e34;
            case 0x3B4E44u: goto label_3b4e44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4DFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B4E04u;
label_3b4e04:
    // 0x3b4e04: 0xc0ed956  jal         func_3B6558
    ctx->pc = 0x3B4E04u;
    SET_GPR_U32(ctx, 31, 0x3B4E0Cu);
    ctx->pc = 0x3B4E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E04u;
    // 0x3b4e08: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6558u, 0x3B4E04u, 0x3B4E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E0Cu;
label_3b4e0c:
    // 0x3b4e0c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B4E0Cu;
    {
        const bool branch_taken_0x3b4e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E0Cu;
        // 0x3b4e10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e0c) {
            ctx->pc = 0x3B4E4Cu;
            goto label_3b4e4c;
        }
    }
    ctx->pc = 0x3B4E14u;
label_3b4e14:
    // 0x3b4e14: 0xc0ee80e  jal         func_3BA038
    ctx->pc = 0x3B4E14u;
    SET_GPR_U32(ctx, 31, 0x3B4E1Cu);
    ctx->pc = 0x3B4E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E14u;
    // 0x3b4e18: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA038u, 0x3B4E14u, 0x3B4E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E1Cu;
label_3b4e1c:
    // 0x3b4e1c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B4E1Cu;
    {
        const bool branch_taken_0x3b4e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E1Cu;
        // 0x3b4e20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e1c) {
            ctx->pc = 0x3B4E4Cu;
            goto label_3b4e4c;
        }
    }
    ctx->pc = 0x3B4E24u;
label_3b4e24:
    // 0x3b4e24: 0xc0ed4f6  jal         func_3B53D8
    ctx->pc = 0x3B4E24u;
    SET_GPR_U32(ctx, 31, 0x3B4E2Cu);
    ctx->pc = 0x3B4E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E24u;
    // 0x3b4e28: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B53D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B53D8u, 0x3B4E24u, 0x3B4E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E2Cu;
label_3b4e2c:
    // 0x3b4e2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B4E2Cu;
    {
        const bool branch_taken_0x3b4e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E2Cu;
        // 0x3b4e30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e2c) {
            ctx->pc = 0x3B4E4Cu;
            goto label_3b4e4c;
        }
    }
    ctx->pc = 0x3B4E34u;
label_3b4e34:
    // 0x3b4e34: 0xc0ed0be  jal         func_3B42F8
    ctx->pc = 0x3B4E34u;
    SET_GPR_U32(ctx, 31, 0x3B4E3Cu);
    ctx->pc = 0x3B4E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E34u;
    // 0x3b4e38: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B42F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B42F8u, 0x3B4E34u, 0x3B4E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E3Cu;
label_3b4e3c:
    // 0x3b4e3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4E3Cu;
    {
        const bool branch_taken_0x3b4e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E3Cu;
        // 0x3b4e40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e3c) {
            ctx->pc = 0x3B4E4Cu;
            goto label_3b4e4c;
        }
    }
    ctx->pc = 0x3B4E44u;
label_3b4e44:
    // 0x3b4e44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b4e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4e48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b4e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4e4c:
    // 0x3b4e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E4Cu;
        // 0x3b4e50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4E54u;
    // 0x3b4e54: 0x0  nop
    ctx->pc = 0x3b4e54u;
    // NOP
    ctx->pc = 0x3b4e58u;
}
