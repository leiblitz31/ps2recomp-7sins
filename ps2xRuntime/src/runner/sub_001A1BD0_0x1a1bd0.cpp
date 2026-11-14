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

// Function: sub_001A1BD0
// Address: 0x1a1bd0 - 0x1a1c30
void sub_001A1BD0_0x1a1bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1BD0_0x1a1bd0");
#endif

    switch (ctx->pc) {
        case 0x1a1bfcu: goto label_1a1bfc;
        case 0x1a1c1cu: goto label_1a1c1c;
        default: break;
    }

    ctx->pc = 0x1a1bd0u;

    // 0x1a1bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1bd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a1bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a1bdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1a1bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a1be0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1be4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1BE4u;
    {
        const bool branch_taken_0x1a1be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1be4) {
            ctx->pc = 0x1A1C1Cu;
            goto label_1a1c1c;
        }
    }
    ctx->pc = 0x1A1BECu;
    // 0x1a1bec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1bf4: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x1A1BF4u;
    SET_GPR_U32(ctx, 31, 0x1A1BFCu);
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1A1BF4u, 0x1A1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1BFCu;
label_1a1bfc:
    // 0x1a1bfc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1a1bfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1c00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a1c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a1c04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a1c04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a1c08: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1C08u;
    {
        const bool branch_taken_0x1a1c08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1c08) {
            ctx->pc = 0x1A1C1Cu;
            goto label_1a1c1c;
        }
    }
    ctx->pc = 0x1A1C10u;
    // 0x1a1c10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c14: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1A1C14u;
    SET_GPR_U32(ctx, 31, 0x1A1C1Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1A1C14u, 0x1A1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1C1Cu;
label_1a1c1c:
    // 0x1a1c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1c24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1c28: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1C30u;
}
