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

// Function: sub_0020B050
// Address: 0x20b050 - 0x20b0d0
void sub_0020B050_0x20b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B050_0x20b050");
#endif

    switch (ctx->pc) {
        case 0x20b074u: goto label_20b074;
        case 0x20b0b8u: goto label_20b0b8;
        default: break;
    }

    ctx->pc = 0x20b050u;

    // 0x20b050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20b054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20b058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20b05c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x20b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b064: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20b064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b068: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20b068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b06c: 0xc081f24  jal         func_207C90
    ctx->pc = 0x20B06Cu;
    SET_GPR_U32(ctx, 31, 0x20B074u);
    ctx->pc = 0x207C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207C90u, 0x20B06Cu, 0x20B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B074u;
label_20b074:
    // 0x20b074: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20b074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b078: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x20b078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b07c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b080: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x20b080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20b084: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x20b084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b088: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b08c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x20b08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b090: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20b090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b094: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x20b094u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x20b098: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B098u;
    {
        const bool branch_taken_0x20b098 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x20b098) {
            ctx->pc = 0x20B0A8u;
            goto label_20b0a8;
        }
    }
    ctx->pc = 0x20B0A0u;
    // 0x20b0a0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x20b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x20b0a4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x20b0a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_20b0a8:
    // 0x20b0a8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x20b0ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x20b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20b0b0: 0xc083ff0  jal         func_20FFC0
    ctx->pc = 0x20B0B0u;
    SET_GPR_U32(ctx, 31, 0x20B0B8u);
    ctx->pc = 0x20FFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FFC0u, 0x20B0B0u, 0x20B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B0B8u;
label_20b0b8:
    // 0x20b0b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b0bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20b0bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20b0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x20B0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B0C8u;
    // 0x20b0c8: 0x0  nop
    ctx->pc = 0x20b0c8u;
    // NOP
    // 0x20b0cc: 0x0  nop
    ctx->pc = 0x20b0ccu;
    // NOP
    ctx->pc = 0x20b0d0u;
}
