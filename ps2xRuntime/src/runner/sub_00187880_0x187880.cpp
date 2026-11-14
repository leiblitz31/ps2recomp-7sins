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

// Function: sub_00187880
// Address: 0x187880 - 0x1878f0
void sub_00187880_0x187880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187880_0x187880");
#endif

    switch (ctx->pc) {
        case 0x1878a4u: goto label_1878a4;
        case 0x1878d8u: goto label_1878d8;
        default: break;
    }

    ctx->pc = 0x187880u;

    // 0x187880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x187888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18788c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x187890: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x187890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x187894: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x187894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187898: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x187898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18789c: 0xc061f44  jal         func_187D10
    ctx->pc = 0x18789Cu;
    SET_GPR_U32(ctx, 31, 0x1878A4u);
    ctx->pc = 0x187D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D10u, 0x18789Cu, 0x1878A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878A4u;
label_1878a4:
    // 0x1878a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1878A4u;
    {
        const bool branch_taken_0x1878a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1878a4) {
            ctx->pc = 0x1878B8u;
            goto label_1878b8;
        }
    }
    ctx->pc = 0x1878ACu;
    // 0x1878ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1878acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1878b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1878B0u;
    {
        const bool branch_taken_0x1878b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1878b0) {
            ctx->pc = 0x1878DCu;
            goto label_1878dc;
        }
    }
    ctx->pc = 0x1878B8u;
label_1878b8:
    // 0x1878b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1878b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1878bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1878bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1878c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1878c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1878c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1878c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1878c8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1878c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1878cc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1878ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1878d0: 0xc061e3c  jal         func_1878F0
    ctx->pc = 0x1878D0u;
    SET_GPR_U32(ctx, 31, 0x1878D8u);
    ctx->pc = 0x1878F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1878F0u, 0x1878D0u, 0x1878D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1878D8u;
label_1878d8:
    // 0x1878d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1878d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1878dc:
    // 0x1878dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1878dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1878e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1878e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1878e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1878E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1878E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1878ECu;
    // 0x1878ec: 0x0  nop
    ctx->pc = 0x1878ecu;
    // NOP
    ctx->pc = 0x1878f0u;
}
