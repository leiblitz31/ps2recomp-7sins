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

// Function: sub_00236B20
// Address: 0x236b20 - 0x236b90
void sub_00236B20_0x236b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236B20_0x236b20");
#endif

    switch (ctx->pc) {
        case 0x236b5cu: goto label_236b5c;
        case 0x236b7cu: goto label_236b7c;
        default: break;
    }

    ctx->pc = 0x236b20u;

    // 0x236b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236b28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x236b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x236b2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x236b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x236b30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236b34: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x236B34u;
    {
        const bool branch_taken_0x236b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236b34) {
            ctx->pc = 0x236B7Cu;
            goto label_236b7c;
        }
    }
    ctx->pc = 0x236B3Cu;
    // 0x236b3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x236b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x236b40: 0x24635560  addiu       $v1, $v1, 0x5560
    ctx->pc = 0x236b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21856));
    // 0x236b44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236b48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x236b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x236b4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x236b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x236b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b54: 0xc08da88  jal         func_236A20
    ctx->pc = 0x236B54u;
    SET_GPR_U32(ctx, 31, 0x236B5Cu);
    ctx->pc = 0x236A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A20u, 0x236B54u, 0x236B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B5Cu;
label_236b5c:
    // 0x236b5c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x236b5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236b60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x236b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x236b64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x236b64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x236b68: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x236B68u;
    {
        const bool branch_taken_0x236b68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x236b68) {
            ctx->pc = 0x236B7Cu;
            goto label_236b7c;
        }
    }
    ctx->pc = 0x236B70u;
    // 0x236b70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x236b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236b74: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x236B74u;
    SET_GPR_U32(ctx, 31, 0x236B7Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x236B74u, 0x236B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B7Cu;
label_236b7c:
    // 0x236b7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x236b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236b84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x236b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x236b88: 0x3e00008  jr          $ra
    ctx->pc = 0x236B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236B90u;
}
