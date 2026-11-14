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

// Function: sub_0011CE30
// Address: 0x11ce30 - 0x11cec0
void sub_0011CE30_0x11ce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CE30_0x11ce30");
#endif

    switch (ctx->pc) {
        case 0x11ce8cu: goto label_11ce8c;
        case 0x11ceacu: goto label_11ceac;
        default: break;
    }

    ctx->pc = 0x11ce30u;

    // 0x11ce30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ce34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11ce38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11ce38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ce3c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x11ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11ce40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11ce44: 0x3e00008  jr          $ra
    ctx->pc = 0x11CE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CE4Cu;
    // 0x11ce4c: 0x0  nop
    ctx->pc = 0x11ce4cu;
    // NOP
    // 0x11ce50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ce50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ce54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ce54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ce58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11ce5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x11ce5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x11ce60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ce64: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11CE64u;
    {
        const bool branch_taken_0x11ce64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ce64) {
            ctx->pc = 0x11CEACu;
            goto label_11ceac;
        }
    }
    ctx->pc = 0x11CE6Cu;
    // 0x11ce6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x11ce70: 0x24633410  addiu       $v1, $v1, 0x3410
    ctx->pc = 0x11ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13328));
    // 0x11ce74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ce78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11ce7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11ce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ce80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ce80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce84: 0xc047088  jal         func_11C220
    ctx->pc = 0x11CE84u;
    SET_GPR_U32(ctx, 31, 0x11CE8Cu);
    ctx->pc = 0x11C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C220u, 0x11CE84u, 0x11CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE8Cu;
label_11ce8c:
    // 0x11ce8c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x11ce8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ce90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11ce90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x11ce94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x11ce94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x11ce98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CE98u;
    {
        const bool branch_taken_0x11ce98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x11ce98) {
            ctx->pc = 0x11CEACu;
            goto label_11ceac;
        }
    }
    ctx->pc = 0x11CEA0u;
    // 0x11cea0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cea4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x11CEA4u;
    SET_GPR_U32(ctx, 31, 0x11CEACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x11CEA4u, 0x11CEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEACu;
label_11ceac:
    // 0x11ceac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ceb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ceb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ceb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11ceb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11ceb8: 0x3e00008  jr          $ra
    ctx->pc = 0x11CEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CEC0u;
}
