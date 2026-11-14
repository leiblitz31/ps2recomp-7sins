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

// Function: sub_002B59E0
// Address: 0x2b59e0 - 0x2b5a50
void sub_002B59E0_0x2b59e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B59E0_0x2b59e0");
#endif

    switch (ctx->pc) {
        case 0x2b5a1cu: goto label_2b5a1c;
        case 0x2b5a3cu: goto label_2b5a3c;
        default: break;
    }

    ctx->pc = 0x2b59e0u;

    // 0x2b59e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b59e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b59e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b59e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b59e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b59e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b59ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b59ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b59f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b59f4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B59F4u;
    {
        const bool branch_taken_0x2b59f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b59f4) {
            ctx->pc = 0x2B5A3Cu;
            goto label_2b5a3c;
        }
    }
    ctx->pc = 0x2B59FCu;
    // 0x2b59fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b59fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b5a00: 0x24636680  addiu       $v1, $v1, 0x6680
    ctx->pc = 0x2b5a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26240));
    // 0x2b5a04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5a08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b5a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b5a0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b5a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5a14: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x2B5A14u;
    SET_GPR_U32(ctx, 31, 0x2B5A1Cu);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x2B5A14u, 0x2B5A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5A1Cu;
label_2b5a1c:
    // 0x2b5a1c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b5a1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5a20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b5a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b5a24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b5a24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b5a28: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5A28u;
    {
        const bool branch_taken_0x2b5a28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5a28) {
            ctx->pc = 0x2B5A3Cu;
            goto label_2b5a3c;
        }
    }
    ctx->pc = 0x2B5A30u;
    // 0x2b5a30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b5a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5a34: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B5A34u;
    SET_GPR_U32(ctx, 31, 0x2B5A3Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B5A34u, 0x2B5A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5A3Cu;
label_2b5a3c:
    // 0x2b5a3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5a44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b5a44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b5a48: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5A50u;
}
