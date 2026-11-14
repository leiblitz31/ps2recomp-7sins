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

// Function: sub_0011EC00
// Address: 0x11ec00 - 0x11ec70
void sub_0011EC00_0x11ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EC00_0x11ec00");
#endif

    switch (ctx->pc) {
        case 0x11ec3cu: goto label_11ec3c;
        case 0x11ec5cu: goto label_11ec5c;
        default: break;
    }

    ctx->pc = 0x11ec00u;

    // 0x11ec00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ec04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ec08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11ec0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11ec0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x11ec10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ec14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11EC14u;
    {
        const bool branch_taken_0x11ec14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ec14) {
            ctx->pc = 0x11EC5Cu;
            goto label_11ec5c;
        }
    }
    ctx->pc = 0x11EC1Cu;
    // 0x11ec1c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x11ec20: 0x24633560  addiu       $v1, $v1, 0x3560
    ctx->pc = 0x11ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13664));
    // 0x11ec24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ec28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11ec28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11ec2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11ec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ec30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ec30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ec34: 0xc047088  jal         func_11C220
    ctx->pc = 0x11EC34u;
    SET_GPR_U32(ctx, 31, 0x11EC3Cu);
    ctx->pc = 0x11C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C220u, 0x11EC34u, 0x11EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EC3Cu;
label_11ec3c:
    // 0x11ec3c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x11ec3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ec40: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11ec40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x11ec44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11ec44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x11ec48: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EC48u;
    {
        const bool branch_taken_0x11ec48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11ec48) {
            ctx->pc = 0x11EC5Cu;
            goto label_11ec5c;
        }
    }
    ctx->pc = 0x11EC50u;
    // 0x11ec50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ec54: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x11EC54u;
    SET_GPR_U32(ctx, 31, 0x11EC5Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x11EC54u, 0x11EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EC5Cu;
label_11ec5c:
    // 0x11ec5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ec60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ec60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ec64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11ec64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11ec68: 0x3e00008  jr          $ra
    ctx->pc = 0x11EC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EC70u;
}
