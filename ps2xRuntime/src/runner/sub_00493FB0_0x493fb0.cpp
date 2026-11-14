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

// Function: sub_00493FB0
// Address: 0x493fb0 - 0x494040
void sub_00493FB0_0x493fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493FB0_0x493fb0");
#endif

    switch (ctx->pc) {
        case 0x494008u: goto label_494008;
        case 0x494020u: goto label_494020;
        default: break;
    }

    ctx->pc = 0x493fb0u;

    // 0x493fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x493fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x493fb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x493fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x493fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x493fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x493fbc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x493fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x493fc0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x493fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x493fc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x493fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493fc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x493FC8u;
    {
        const bool branch_taken_0x493fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493fc8) {
            ctx->pc = 0x493FDCu;
            goto label_493fdc;
        }
    }
    ctx->pc = 0x493FD0u;
    // 0x493fd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x493fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x493fd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x493FD4u;
    {
        const bool branch_taken_0x493fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493fd4) {
            ctx->pc = 0x493FE8u;
            goto label_493fe8;
        }
    }
    ctx->pc = 0x493FDCu;
label_493fdc:
    // 0x493fdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x493fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493fe0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x493FE0u;
    {
        const bool branch_taken_0x493fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493fe0) {
            ctx->pc = 0x494024u;
            goto label_494024;
        }
    }
    ctx->pc = 0x493FE8u;
label_493fe8:
    // 0x493fe8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x493fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x493fec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x493fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493ff0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x493ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x493ff4: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x493ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x493ff8: 0x24847d70  addiu       $a0, $a0, 0x7D70
    ctx->pc = 0x493ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32112));
    // 0x493ffc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x493ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x494000: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x494000u;
    SET_GPR_U32(ctx, 31, 0x494008u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x494000u, 0x494008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494008u;
label_494008:
    // 0x494008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x494008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49400c: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x49400cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x494010: 0x24a53c60  addiu       $a1, $a1, 0x3C60
    ctx->pc = 0x494010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15456));
    // 0x494014: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x494014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x494018: 0xc1066c2  jal         func_419B08
    ctx->pc = 0x494018u;
    SET_GPR_U32(ctx, 31, 0x494020u);
    ctx->pc = 0x419B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B08u, 0x494018u, 0x494020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494020u;
label_494020:
    // 0x494020: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x494020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_494024:
    // 0x494024: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x494024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x494028: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x494028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49402c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x49402cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x494030: 0x3e00008  jr          $ra
    ctx->pc = 0x494030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494038u;
    // 0x494038: 0x0  nop
    ctx->pc = 0x494038u;
    // NOP
    // 0x49403c: 0x0  nop
    ctx->pc = 0x49403cu;
    // NOP
    ctx->pc = 0x494040u;
}
