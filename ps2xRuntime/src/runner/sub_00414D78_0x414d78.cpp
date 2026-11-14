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

// Function: sub_00414D78
// Address: 0x414d78 - 0x414de8
void sub_00414D78_0x414d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414D78_0x414d78");
#endif

    switch (ctx->pc) {
        case 0x414d88u: goto label_414d88;
        default: break;
    }

    ctx->pc = 0x414d78u;

    // 0x414d78: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x414D78u;
    {
        const bool branch_taken_0x414d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x414D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D78u;
        // 0x414d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414d78) {
            ctx->pc = 0x414DE0u;
            goto label_414de0;
        }
    }
    ctx->pc = 0x414D80u;
    // 0x414d80: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x414D80u;
    {
        const bool branch_taken_0x414d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x414d80) {
            ctx->pc = 0x414DE0u;
            goto label_414de0;
        }
    }
    ctx->pc = 0x414D88u;
label_414d88:
    // 0x414d88: 0x80860000  lb          $a2, 0x0($a0)
    ctx->pc = 0x414d88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x414d8c: 0x24c2ffbf  addiu       $v0, $a2, -0x41
    ctx->pc = 0x414d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967231));
    // 0x414d90: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x414d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x414d94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x414D94u;
    {
        const bool branch_taken_0x414d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414D94u;
        // 0x414d98: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414d94) {
            ctx->pc = 0x414DA8u;
            goto label_414da8;
        }
    }
    ctx->pc = 0x414D9Cu;
    // 0x414d9c: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x414d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x414da0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x414da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x414da4: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x414da4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_414da8:
    // 0x414da8: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x414da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
    // 0x414dac: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x414dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x414db0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x414DB0u;
    {
        const bool branch_taken_0x414db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414DB0u;
        // 0x414db4: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414db0) {
            ctx->pc = 0x414DC0u;
            goto label_414dc0;
        }
    }
    ctx->pc = 0x414DB8u;
    // 0x414db8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x414db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x414dbc: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x414dbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_414dc0:
    // 0x414dc0: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x414DC0u;
    {
        const bool branch_taken_0x414dc0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x414DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414DC0u;
        // 0x414dc4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414dc0) {
            ctx->pc = 0x414DD8u;
            goto label_414dd8;
        }
    }
    ctx->pc = 0x414DC8u;
    // 0x414dc8: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x414DC8u;
    {
        const bool branch_taken_0x414dc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x414DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414DC8u;
        // 0x414dcc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414dc8) {
            ctx->pc = 0x414D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414d88;
        }
    }
    ctx->pc = 0x414DD0u;
    // 0x414dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x414DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414DD0u;
        // 0x414dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414DD8u;
label_414dd8:
    // 0x414dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x414DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414DD8u;
        // 0x414ddc: 0xc31023  subu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414DE0u;
label_414de0:
    // 0x414de0: 0x3e00008  jr          $ra
    ctx->pc = 0x414DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414DE8u;
}
