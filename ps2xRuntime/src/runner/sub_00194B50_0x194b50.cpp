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

// Function: sub_00194B50
// Address: 0x194b50 - 0x194bd0
void sub_00194B50_0x194b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194B50_0x194b50");
#endif

    switch (ctx->pc) {
        case 0x194b84u: goto label_194b84;
        case 0x194b94u: goto label_194b94;
        case 0x194bb4u: goto label_194bb4;
        default: break;
    }

    ctx->pc = 0x194b50u;

    // 0x194b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x194b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194b58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x194b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x194b5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x194b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x194b60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194b64: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x194B64u;
    {
        const bool branch_taken_0x194b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194b64) {
            ctx->pc = 0x194BB4u;
            goto label_194bb4;
        }
    }
    ctx->pc = 0x194B6Cu;
    // 0x194b6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x194b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194b70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194b74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x194b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194b78: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x194b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x194b7c: 0xc06531c  jal         func_194C70
    ctx->pc = 0x194B7Cu;
    SET_GPR_U32(ctx, 31, 0x194B84u);
    ctx->pc = 0x194C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194C70u, 0x194B7Cu, 0x194B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B84u;
label_194b84:
    // 0x194b84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194b8c: 0xc0652f4  jal         func_194BD0
    ctx->pc = 0x194B8Cu;
    SET_GPR_U32(ctx, 31, 0x194B94u);
    ctx->pc = 0x194BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194BD0u, 0x194B8Cu, 0x194B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194B94u;
label_194b94:
    // 0x194b94: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x194b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194b98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x194b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x194b9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x194b9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x194ba0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194BA0u;
    {
        const bool branch_taken_0x194ba0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x194ba0) {
            ctx->pc = 0x194BB4u;
            goto label_194bb4;
        }
    }
    ctx->pc = 0x194BA8u;
    // 0x194ba8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x194ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194bac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x194BACu;
    SET_GPR_U32(ctx, 31, 0x194BB4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x194BACu, 0x194BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194BB4u;
label_194bb4:
    // 0x194bb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x194bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194bbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x194bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x194bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x194BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194BC8u;
    // 0x194bc8: 0x0  nop
    ctx->pc = 0x194bc8u;
    // NOP
    // 0x194bcc: 0x0  nop
    ctx->pc = 0x194bccu;
    // NOP
    ctx->pc = 0x194bd0u;
}
