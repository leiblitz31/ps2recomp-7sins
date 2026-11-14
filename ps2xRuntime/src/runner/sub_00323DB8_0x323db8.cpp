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

// Function: sub_00323DB8
// Address: 0x323db8 - 0x323e00
void sub_00323DB8_0x323db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323DB8_0x323db8");
#endif

    switch (ctx->pc) {
        case 0x323db8u: goto label_323db8;
        case 0x323dbcu: goto label_323dbc;
        case 0x323dc0u: goto label_323dc0;
        case 0x323dc4u: goto label_323dc4;
        case 0x323dc8u: goto label_323dc8;
        case 0x323dccu: goto label_323dcc;
        case 0x323dd0u: goto label_323dd0;
        case 0x323dd4u: goto label_323dd4;
        case 0x323dd8u: goto label_323dd8;
        case 0x323ddcu: goto label_323ddc;
        case 0x323de0u: goto label_323de0;
        case 0x323de4u: goto label_323de4;
        case 0x323de8u: goto label_323de8;
        case 0x323decu: goto label_323dec;
        case 0x323df0u: goto label_323df0;
        case 0x323df4u: goto label_323df4;
        case 0x323df8u: goto label_323df8;
        case 0x323dfcu: goto label_323dfc;
        default: break;
    }

    ctx->pc = 0x323db8u;

label_323db8:
    // 0x323db8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_323dbc:
    // 0x323dbc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x323dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_323dc0:
    // 0x323dc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_323dc4:
    // 0x323dc4: 0x8c62b1e8  lw          $v0, -0x4E18($v1)
    ctx->pc = 0x323dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947304)));
label_323dc8:
    // 0x323dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_323dcc:
    // 0x323dcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_323dd0:
    // 0x323dd0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x323dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_323dd4:
    // 0x323dd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x323dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_323dd8:
    // 0x323dd8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_323ddc:
    if (ctx->pc == 0x323DDCu) {
        ctx->pc = 0x323DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DD8u;
        // 0x323ddc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323DE0u;
        goto label_323de0;
    }
    ctx->pc = 0x323DD8u;
    {
        const bool branch_taken_0x323dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x323DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DD8u;
        // 0x323ddc: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323dd8) {
            ctx->pc = 0x323DECu;
            goto label_323dec;
        }
    }
    ctx->pc = 0x323DE0u;
label_323de0:
    // 0x323de0: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x323de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_323de4:
    // 0x323de4: 0x40f809  jalr        $v0
label_323de8:
    if (ctx->pc == 0x323DE8u) {
        ctx->pc = 0x323DECu;
        goto label_323dec;
    }
    ctx->pc = 0x323DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323DECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323DE4u, 0x323DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323DECu;
label_323dec:
    // 0x323dec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x323decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323df0:
    // 0x323df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323df4:
    // 0x323df4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_323df8:
    // 0x323df8: 0x3e00008  jr          $ra
label_323dfc:
    if (ctx->pc == 0x323DFCu) {
        ctx->pc = 0x323DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DF8u;
        // 0x323dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323E00u;
        goto label_fallthrough_0x323df8;
    }
    ctx->pc = 0x323DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DF8u;
        // 0x323dfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x323df8:
    ctx->pc = 0x323E00u;
}
