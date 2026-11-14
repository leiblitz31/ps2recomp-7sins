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

// Function: sub_00434F68
// Address: 0x434f68 - 0x434fd0
void sub_00434F68_0x434f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00434F68_0x434f68");
#endif

    switch (ctx->pc) {
        case 0x434f90u: goto label_434f90;
        case 0x434fa8u: goto label_434fa8;
        default: break;
    }

    ctx->pc = 0x434f68u;

    // 0x434f68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x434f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x434f6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x434f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x434f70: 0x8f90bee0  lw          $s0, -0x4120($gp)
    ctx->pc = 0x434f70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950624)));
    // 0x434f74: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x434F74u;
    {
        const bool branch_taken_0x434f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x434F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434F74u;
        // 0x434f78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434f74) {
            ctx->pc = 0x434FACu;
            goto label_434fac;
        }
    }
    ctx->pc = 0x434F7Cu;
    // 0x434f7c: 0x8f84ae7c  lw          $a0, -0x5184($gp)
    ctx->pc = 0x434f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946428)));
    // 0x434f80: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x434F80u;
    {
        const bool branch_taken_0x434f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x434f80) {
            ctx->pc = 0x434F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434F80u;
            // 0x434f84: 0x8f84ae78  lw          $a0, -0x5188($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434F98u;
            goto label_434f98;
        }
    }
    ctx->pc = 0x434F88u;
    // 0x434f88: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x434F88u;
    SET_GPR_U32(ctx, 31, 0x434F90u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x434F88u, 0x434F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434F90u;
label_434f90:
    // 0x434f90: 0xaf80ae7c  sw          $zero, -0x5184($gp)
    ctx->pc = 0x434f90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946428), GPR_U32(ctx, 0));
    // 0x434f94: 0x8f84ae78  lw          $a0, -0x5188($gp)
    ctx->pc = 0x434f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946424)));
label_434f98:
    // 0x434f98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x434F98u;
    {
        const bool branch_taken_0x434f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x434F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434F98u;
        // 0x434f9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434f98) {
            ctx->pc = 0x434FB0u;
            goto label_434fb0;
        }
    }
    ctx->pc = 0x434FA0u;
    // 0x434fa0: 0xc1074ac  jal         func_41D2B0
    ctx->pc = 0x434FA0u;
    SET_GPR_U32(ctx, 31, 0x434FA8u);
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x434FA0u, 0x434FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434FA8u;
label_434fa8:
    // 0x434fa8: 0xaf80ae78  sw          $zero, -0x5188($gp)
    ctx->pc = 0x434fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946424), GPR_U32(ctx, 0));
label_434fac:
    // 0x434fac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x434facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_434fb0:
    // 0x434fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x434fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x434fb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x434fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x434fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x434FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x434FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434FB8u;
        // 0x434fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x434FC0u;
    // 0x434fc0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x434fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x434fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x434FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x434FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434FC4u;
        // 0x434fc8: 0x24423b90  addiu       $v0, $v0, 0x3B90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x434FCCu;
    // 0x434fcc: 0x0  nop
    ctx->pc = 0x434fccu;
    // NOP
    ctx->pc = 0x434fd0u;
}
