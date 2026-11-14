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

// Function: sub_00278B50
// Address: 0x278b50 - 0x278bd0
void sub_00278B50_0x278b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278B50_0x278b50");
#endif

    switch (ctx->pc) {
        case 0x278b84u: goto label_278b84;
        case 0x278b94u: goto label_278b94;
        case 0x278bb4u: goto label_278bb4;
        default: break;
    }

    ctx->pc = 0x278b50u;

    // 0x278b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278b58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x278b5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x278b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x278b60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278b64: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x278B64u;
    {
        const bool branch_taken_0x278b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278b64) {
            ctx->pc = 0x278BB4u;
            goto label_278bb4;
        }
    }
    ctx->pc = 0x278B6Cu;
    // 0x278b6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x278b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278b70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278b74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x278b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278b78: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x278b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278b7c: 0xc09e320  jal         func_278C80
    ctx->pc = 0x278B7Cu;
    SET_GPR_U32(ctx, 31, 0x278B84u);
    ctx->pc = 0x278C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278C80u, 0x278B7Cu, 0x278B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B84u;
label_278b84:
    // 0x278b84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x278b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b8c: 0xc09e2f4  jal         func_278BD0
    ctx->pc = 0x278B8Cu;
    SET_GPR_U32(ctx, 31, 0x278B94u);
    ctx->pc = 0x278BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278BD0u, 0x278B8Cu, 0x278B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B94u;
label_278b94:
    // 0x278b94: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x278b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278b98: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x278b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x278b9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x278b9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x278ba0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278BA0u;
    {
        const bool branch_taken_0x278ba0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x278ba0) {
            ctx->pc = 0x278BB4u;
            goto label_278bb4;
        }
    }
    ctx->pc = 0x278BA8u;
    // 0x278ba8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278bac: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x278BACu;
    SET_GPR_U32(ctx, 31, 0x278BB4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x278BACu, 0x278BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278BB4u;
label_278bb4:
    // 0x278bb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278bbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x278BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278BC8u;
    // 0x278bc8: 0x0  nop
    ctx->pc = 0x278bc8u;
    // NOP
    // 0x278bcc: 0x0  nop
    ctx->pc = 0x278bccu;
    // NOP
    ctx->pc = 0x278bd0u;
}
