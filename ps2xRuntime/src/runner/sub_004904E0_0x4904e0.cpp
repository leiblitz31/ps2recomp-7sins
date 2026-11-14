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

// Function: sub_004904E0
// Address: 0x4904e0 - 0x490550
void sub_004904E0_0x4904e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004904E0_0x4904e0");
#endif

    switch (ctx->pc) {
        case 0x490514u: goto label_490514;
        default: break;
    }

    ctx->pc = 0x4904e0u;

    // 0x4904e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4904e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4904e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4904e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4904e8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x4904e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4904ec: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x4904ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x4904f0: 0x34450100  ori         $a1, $v0, 0x100
    ctx->pc = 0x4904f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x4904f4: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x4904f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x4904f8: 0x24c60550  addiu       $a2, $a2, 0x550
    ctx->pc = 0x4904f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1360));
    // 0x4904fc: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x4904fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x490500: 0x24e70620  addiu       $a3, $a3, 0x620
    ctx->pc = 0x490500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1568));
    // 0x490504: 0x3c080049  lui         $t0, 0x49
    ctx->pc = 0x490504u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)73 << 16));
    // 0x490508: 0x25080640  addiu       $t0, $t0, 0x640
    ctx->pc = 0x490508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1600));
    // 0x49050c: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x49050Cu;
    SET_GPR_U32(ctx, 31, 0x490514u);
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x49050Cu, 0x490514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490514u;
label_490514:
    // 0x490514: 0xaf82b6d8  sw          $v0, -0x4928($gp)
    ctx->pc = 0x490514u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948568), GPR_U32(ctx, 2));
    // 0x490518: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x490518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x49051c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49051Cu;
    {
        const bool branch_taken_0x49051c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x49051c) {
            ctx->pc = 0x490530u;
            goto label_490530;
        }
    }
    ctx->pc = 0x490524u;
    // 0x490524: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x490524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490528: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x490528u;
    {
        const bool branch_taken_0x490528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x490528) {
            ctx->pc = 0x490534u;
            goto label_490534;
        }
    }
    ctx->pc = 0x490530u;
label_490530:
    // 0x490530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x490530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_490534:
    // 0x490534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490538: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x490538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x49053c: 0x3e00008  jr          $ra
    ctx->pc = 0x49053Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49053Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490544u;
    // 0x490544: 0x0  nop
    ctx->pc = 0x490544u;
    // NOP
    // 0x490548: 0x0  nop
    ctx->pc = 0x490548u;
    // NOP
    // 0x49054c: 0x0  nop
    ctx->pc = 0x49054cu;
    // NOP
    ctx->pc = 0x490550u;
}
