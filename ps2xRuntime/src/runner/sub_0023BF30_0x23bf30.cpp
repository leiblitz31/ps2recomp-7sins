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

// Function: sub_0023BF30
// Address: 0x23bf30 - 0x23bfa0
void sub_0023BF30_0x23bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BF30_0x23bf30");
#endif

    switch (ctx->pc) {
        case 0x23bf58u: goto label_23bf58;
        case 0x23bf68u: goto label_23bf68;
        case 0x23bf88u: goto label_23bf88;
        default: break;
    }

    ctx->pc = 0x23bf30u;

    // 0x23bf30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23bf34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23bf38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23bf3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23bf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23bf40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bf44: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23BF44u;
    {
        const bool branch_taken_0x23bf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf44) {
            ctx->pc = 0x23BF88u;
            goto label_23bf88;
        }
    }
    ctx->pc = 0x23BF4Cu;
    // 0x23bf4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23bf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bf50: 0xc08f004  jal         func_23C010
    ctx->pc = 0x23BF50u;
    SET_GPR_U32(ctx, 31, 0x23BF58u);
    ctx->pc = 0x23C010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C010u, 0x23BF50u, 0x23BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF58u;
label_23bf58:
    // 0x23bf58: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bf5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23bf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf60: 0xc08efe8  jal         func_23BFA0
    ctx->pc = 0x23BF60u;
    SET_GPR_U32(ctx, 31, 0x23BF68u);
    ctx->pc = 0x23BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BFA0u, 0x23BF60u, 0x23BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF68u;
label_23bf68:
    // 0x23bf68: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23bf68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bf6c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23bf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23bf70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23bf70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23bf74: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BF74u;
    {
        const bool branch_taken_0x23bf74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23bf74) {
            ctx->pc = 0x23BF88u;
            goto label_23bf88;
        }
    }
    ctx->pc = 0x23BF7Cu;
    // 0x23bf7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23bf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bf80: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23BF80u;
    SET_GPR_U32(ctx, 31, 0x23BF88u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23BF80u, 0x23BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF88u;
label_23bf88:
    // 0x23bf88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bf8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bf90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23bf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23bf94: 0x3e00008  jr          $ra
    ctx->pc = 0x23BF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BF9Cu;
    // 0x23bf9c: 0x0  nop
    ctx->pc = 0x23bf9cu;
    // NOP
    ctx->pc = 0x23bfa0u;
}
