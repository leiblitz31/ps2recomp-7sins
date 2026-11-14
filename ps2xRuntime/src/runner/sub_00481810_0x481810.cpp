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

// Function: sub_00481810
// Address: 0x481810 - 0x481870
void sub_00481810_0x481810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481810_0x481810");
#endif

    switch (ctx->pc) {
        case 0x481838u: goto label_481838;
        default: break;
    }

    ctx->pc = 0x481810u;

    // 0x481810: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x481810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x481814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x481814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x481818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x481818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48181c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x481820: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x481820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x481824: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x481824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481828: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x481828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x48182c: 0x3444100e  ori         $a0, $v0, 0x100E
    ctx->pc = 0x48182cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4110);
    // 0x481830: 0xc0caa5e  jal         func_32A978
    ctx->pc = 0x481830u;
    SET_GPR_U32(ctx, 31, 0x481838u);
    ctx->pc = 0x32A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A978u, 0x481830u, 0x481838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481838u;
label_481838:
    // 0x481838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x481838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48183c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x48183cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x481840: 0xac50006c  sw          $s0, 0x6C($v0)
    ctx->pc = 0x481840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 16));
    // 0x481844: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x481844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x481848: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x481848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48184c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48184cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x481850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481858: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x481858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x48185c: 0x3e00008  jr          $ra
    ctx->pc = 0x48185Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48185Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x481864u;
    // 0x481864: 0x0  nop
    ctx->pc = 0x481864u;
    // NOP
    // 0x481868: 0x0  nop
    ctx->pc = 0x481868u;
    // NOP
    // 0x48186c: 0x0  nop
    ctx->pc = 0x48186cu;
    // NOP
    ctx->pc = 0x481870u;
}
