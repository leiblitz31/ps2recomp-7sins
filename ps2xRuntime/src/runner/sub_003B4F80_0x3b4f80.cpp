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

// Function: sub_003B4F80
// Address: 0x3b4f80 - 0x3b5010
void sub_003B4F80_0x3b4f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4F80_0x3b4f80");
#endif

    switch (ctx->pc) {
        case 0x3b4fc0u: goto label_3b4fc0;
        case 0x3b4fd0u: goto label_3b4fd0;
        case 0x3b4fe0u: goto label_3b4fe0;
        case 0x3b4ff0u: goto label_3b4ff0;
        default: break;
    }

    ctx->pc = 0x3b4f80u;

    // 0x3b4f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b4f84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b4f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b4f88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b4f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4f90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b4f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b4f94: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x3b4f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3b4f98: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B4F98u;
    {
        const bool branch_taken_0x3b4f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F98u;
        // 0x3b4f9c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f98) {
            ctx->pc = 0x3B4FF8u;
            goto label_3b4ff8;
        }
    }
    ctx->pc = 0x3B4FA0u;
    // 0x3b4fa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b4fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b4fa4: 0x2442c130  addiu       $v0, $v0, -0x3ED0
    ctx->pc = 0x3b4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951216));
    // 0x3b4fa8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b4fac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b4facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b4fb0: 0x800008  jr          $a0
    ctx->pc = 0x3B4FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B4FB8u: goto label_3b4fb8;
            case 0x3B4FC8u: goto label_3b4fc8;
            case 0x3B4FD8u: goto label_3b4fd8;
            case 0x3B4FE8u: goto label_3b4fe8;
            case 0x3B4FFCu: goto label_3b4ffc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4FB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B4FB8u;
label_3b4fb8:
    // 0x3b4fb8: 0xc0ed6e4  jal         func_3B5B90
    ctx->pc = 0x3B4FB8u;
    SET_GPR_U32(ctx, 31, 0x3B4FC0u);
    ctx->pc = 0x3B4FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4FB8u;
    // 0x3b4fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5B90u, 0x3B4FB8u, 0x3B4FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4FC0u;
label_3b4fc0:
    // 0x3b4fc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B4FC0u;
    {
        const bool branch_taken_0x3b4fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FC0u;
        // 0x3b4fc4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4fc0) {
            ctx->pc = 0x3B5000u;
            goto label_3b5000;
        }
    }
    ctx->pc = 0x3B4FC8u;
label_3b4fc8:
    // 0x3b4fc8: 0xc0ee26a  jal         func_3B89A8
    ctx->pc = 0x3B4FC8u;
    SET_GPR_U32(ctx, 31, 0x3B4FD0u);
    ctx->pc = 0x3B4FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4FC8u;
    // 0x3b4fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B89A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B89A8u, 0x3B4FC8u, 0x3B4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4FD0u;
label_3b4fd0:
    // 0x3b4fd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B4FD0u;
    {
        const bool branch_taken_0x3b4fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FD0u;
        // 0x3b4fd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4fd0) {
            ctx->pc = 0x3B5000u;
            goto label_3b5000;
        }
    }
    ctx->pc = 0x3B4FD8u;
label_3b4fd8:
    // 0x3b4fd8: 0xc0ed51a  jal         func_3B5468
    ctx->pc = 0x3B4FD8u;
    SET_GPR_U32(ctx, 31, 0x3B4FE0u);
    ctx->pc = 0x3B4FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4FD8u;
    // 0x3b4fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5468u, 0x3B4FD8u, 0x3B4FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4FE0u;
label_3b4fe0:
    // 0x3b4fe0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B4FE0u;
    {
        const bool branch_taken_0x3b4fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FE0u;
        // 0x3b4fe4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4fe0) {
            ctx->pc = 0x3B5000u;
            goto label_3b5000;
        }
    }
    ctx->pc = 0x3B4FE8u;
label_3b4fe8:
    // 0x3b4fe8: 0xc0ecddc  jal         func_3B3770
    ctx->pc = 0x3B4FE8u;
    SET_GPR_U32(ctx, 31, 0x3B4FF0u);
    ctx->pc = 0x3B4FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4FE8u;
    // 0x3b4fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3770u, 0x3B4FE8u, 0x3B4FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4FF0u;
label_3b4ff0:
    // 0x3b4ff0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4FF0u;
    {
        const bool branch_taken_0x3b4ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FF0u;
        // 0x3b4ff4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4ff0) {
            ctx->pc = 0x3B5000u;
            goto label_3b5000;
        }
    }
    ctx->pc = 0x3B4FF8u;
label_3b4ff8:
    // 0x3b4ff8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3b4ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b4ffc:
    // 0x3b4ffc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b4ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b5000:
    // 0x3b5000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5004: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b5004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5008: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5008u;
        // 0x3b500c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5010u;
}
