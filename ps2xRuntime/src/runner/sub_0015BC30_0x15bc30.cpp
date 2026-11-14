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

// Function: sub_0015BC30
// Address: 0x15bc30 - 0x15bcb0
void sub_0015BC30_0x15bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BC30_0x15bc30");
#endif

    switch (ctx->pc) {
        case 0x15bc64u: goto label_15bc64;
        case 0x15bc74u: goto label_15bc74;
        case 0x15bc94u: goto label_15bc94;
        default: break;
    }

    ctx->pc = 0x15bc30u;

    // 0x15bc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bc34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bc38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15bc3c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15bc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x15bc40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bc44: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x15BC44u;
    {
        const bool branch_taken_0x15bc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bc44) {
            ctx->pc = 0x15BC94u;
            goto label_15bc94;
        }
    }
    ctx->pc = 0x15BC4Cu;
    // 0x15bc4c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bc50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bc54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15bc58: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x15bc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15bc5c: 0xc056f54  jal         func_15BD50
    ctx->pc = 0x15BC5Cu;
    SET_GPR_U32(ctx, 31, 0x15BC64u);
    ctx->pc = 0x15BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BD50u, 0x15BC5Cu, 0x15BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC64u;
label_15bc64:
    // 0x15bc64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bc68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bc6c: 0xc056f2c  jal         func_15BCB0
    ctx->pc = 0x15BC6Cu;
    SET_GPR_U32(ctx, 31, 0x15BC74u);
    ctx->pc = 0x15BCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCB0u, 0x15BC6Cu, 0x15BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC74u;
label_15bc74:
    // 0x15bc74: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x15bc74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bc78: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15bc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15bc7c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15bc7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15bc80: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BC80u;
    {
        const bool branch_taken_0x15bc80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15bc80) {
            ctx->pc = 0x15BC94u;
            goto label_15bc94;
        }
    }
    ctx->pc = 0x15BC88u;
    // 0x15bc88: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bc8c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x15BC8Cu;
    SET_GPR_U32(ctx, 31, 0x15BC94u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x15BC8Cu, 0x15BC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC94u;
label_15bc94:
    // 0x15bc94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bc98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bc9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15bc9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15bca0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BCA8u;
    // 0x15bca8: 0x0  nop
    ctx->pc = 0x15bca8u;
    // NOP
    // 0x15bcac: 0x0  nop
    ctx->pc = 0x15bcacu;
    // NOP
    ctx->pc = 0x15bcb0u;
}
