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

// Function: sub_002E4BA0
// Address: 0x2e4ba0 - 0x2e4c20
void sub_002E4BA0_0x2e4ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4BA0_0x2e4ba0");
#endif

    switch (ctx->pc) {
        case 0x2e4bc4u: goto label_2e4bc4;
        case 0x2e4c08u: goto label_2e4c08;
        default: break;
    }

    ctx->pc = 0x2e4ba0u;

    // 0x2e4ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e4ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e4ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4ba8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e4bac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e4bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4bb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4bb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e4bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4bb8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e4bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e4bbc: 0xc0b8ec0  jal         func_2E3B00
    ctx->pc = 0x2E4BBCu;
    SET_GPR_U32(ctx, 31, 0x2E4BC4u);
    ctx->pc = 0x2E3B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3B00u, 0x2E4BBCu, 0x2E4BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4BC4u;
label_2e4bc4:
    // 0x2e4bc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e4bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4bc8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2e4bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4bcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4bd0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2e4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e4bd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e4bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4bd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e4bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4bdc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2e4bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e4be0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e4be4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2e4be4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2e4be8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4BE8u;
    {
        const bool branch_taken_0x2e4be8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2e4be8) {
            ctx->pc = 0x2E4BF8u;
            goto label_2e4bf8;
        }
    }
    ctx->pc = 0x2E4BF0u;
    // 0x2e4bf0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2e4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2e4bf4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2e4bf4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2e4bf8:
    // 0x2e4bf8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2e4bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e4bfc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2e4bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e4c00: 0xc0b9610  jal         func_2E5840
    ctx->pc = 0x2E4C00u;
    SET_GPR_U32(ctx, 31, 0x2E4C08u);
    ctx->pc = 0x2E5840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5840u, 0x2E4C00u, 0x2E4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C08u;
label_2e4c08:
    // 0x2e4c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4c0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e4c0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e4c10: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4C18u;
    // 0x2e4c18: 0x0  nop
    ctx->pc = 0x2e4c18u;
    // NOP
    // 0x2e4c1c: 0x0  nop
    ctx->pc = 0x2e4c1cu;
    // NOP
    ctx->pc = 0x2e4c20u;
}
