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

// Function: sub_0022BC60
// Address: 0x22bc60 - 0x22bcc0
void sub_0022BC60_0x22bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BC60_0x22bc60");
#endif

    switch (ctx->pc) {
        case 0x22bc8cu: goto label_22bc8c;
        case 0x22bcacu: goto label_22bcac;
        default: break;
    }

    ctx->pc = 0x22bc60u;

    // 0x22bc60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22bc64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22bc68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22bc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22bc6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22bc6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x22bc70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bc74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22BC74u;
    {
        const bool branch_taken_0x22bc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bc74) {
            ctx->pc = 0x22BCACu;
            goto label_22bcac;
        }
    }
    ctx->pc = 0x22BC7Cu;
    // 0x22bc7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22bc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bc80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22bc80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bc84: 0xc08af30  jal         func_22BCC0
    ctx->pc = 0x22BC84u;
    SET_GPR_U32(ctx, 31, 0x22BC8Cu);
    ctx->pc = 0x22BCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCC0u, 0x22BC84u, 0x22BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BC8Cu;
label_22bc8c:
    // 0x22bc8c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22bc8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bc90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22bc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22bc94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22bc94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22bc98: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BC98u;
    {
        const bool branch_taken_0x22bc98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22bc98) {
            ctx->pc = 0x22BCACu;
            goto label_22bcac;
        }
    }
    ctx->pc = 0x22BCA0u;
    // 0x22bca0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bca4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22BCA4u;
    SET_GPR_U32(ctx, 31, 0x22BCACu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22BCA4u, 0x22BCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BCACu;
label_22bcac:
    // 0x22bcac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bcb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bcb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22bcb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22bcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x22BCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BCC0u;
}
