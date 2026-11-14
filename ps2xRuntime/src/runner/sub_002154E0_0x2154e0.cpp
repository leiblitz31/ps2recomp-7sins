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

// Function: sub_002154E0
// Address: 0x2154e0 - 0x215570
void sub_002154E0_0x2154e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002154E0_0x2154e0");
#endif

    switch (ctx->pc) {
        case 0x215508u: goto label_215508;
        case 0x215514u: goto label_215514;
        case 0x215524u: goto label_215524;
        case 0x21554cu: goto label_21554c;
        default: break;
    }

    ctx->pc = 0x2154e0u;

    // 0x2154e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2154e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2154e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2154e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2154e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2154e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2154ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2154ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2154f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2154f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2154f4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2154f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2154f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2154f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2154fc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2154fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x215500: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x215500u;
    SET_GPR_U32(ctx, 31, 0x215508u);
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x215500u, 0x215508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215508u;
label_215508:
    // 0x215508: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21550c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x21550Cu;
    {
        const bool branch_taken_0x21550c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21550c) {
            ctx->pc = 0x21553Cu;
            goto label_21553c;
        }
    }
    ctx->pc = 0x215514u;
label_215514:
    // 0x215514: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x215514u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x215518: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x215518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21551c: 0xc084efc  jal         func_213BF0
    ctx->pc = 0x21551Cu;
    SET_GPR_U32(ctx, 31, 0x215524u);
    ctx->pc = 0x213BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213BF0u, 0x21551Cu, 0x215524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215524u;
label_215524:
    // 0x215524: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215524u;
    {
        const bool branch_taken_0x215524 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x215524) {
            ctx->pc = 0x215538u;
            goto label_215538;
        }
    }
    ctx->pc = 0x21552Cu;
    // 0x21552c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215530: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x215530u;
    {
        const bool branch_taken_0x215530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215530) {
            ctx->pc = 0x215558u;
            goto label_215558;
        }
    }
    ctx->pc = 0x215538u;
label_215538:
    // 0x215538: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x215538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_21553c:
    // 0x21553c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x21553cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215540: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x215540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x215544: 0xc041144  jal         func_104510
    ctx->pc = 0x215544u;
    SET_GPR_U32(ctx, 31, 0x21554Cu);
    ctx->pc = 0x104510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104510u, 0x215544u, 0x21554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21554Cu;
label_21554c:
    // 0x21554c: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x21554Cu;
    {
        const bool branch_taken_0x21554c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x21554c) {
            ctx->pc = 0x215514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215514;
        }
    }
    ctx->pc = 0x215554u;
    // 0x215554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215558:
    // 0x215558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x215558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21555c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21555cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215564: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x215564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x215568: 0x3e00008  jr          $ra
    ctx->pc = 0x215568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215570u;
}
