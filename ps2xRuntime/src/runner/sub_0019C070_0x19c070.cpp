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

// Function: sub_0019C070
// Address: 0x19c070 - 0x19c110
void sub_0019C070_0x19c070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C070_0x19c070");
#endif

    switch (ctx->pc) {
        case 0x19c088u: goto label_19c088;
        case 0x19c094u: goto label_19c094;
        case 0x19c0a0u: goto label_19c0a0;
        case 0x19c0acu: goto label_19c0ac;
        case 0x19c0b8u: goto label_19c0b8;
        case 0x19c0c4u: goto label_19c0c4;
        case 0x19c0d0u: goto label_19c0d0;
        case 0x19c0e0u: goto label_19c0e0;
        case 0x19c0f0u: goto label_19c0f0;
        default: break;
    }

    ctx->pc = 0x19c070u;

    // 0x19c070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c078: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x19c078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19c07c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c080: 0xc065710  jal         func_195C40
    ctx->pc = 0x19C080u;
    SET_GPR_U32(ctx, 31, 0x19C088u);
    ctx->pc = 0x195C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195C40u, 0x19C080u, 0x19C088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C088u;
label_19c088:
    // 0x19c088: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c08c: 0xc065b68  jal         func_196DA0
    ctx->pc = 0x19C08Cu;
    SET_GPR_U32(ctx, 31, 0x19C094u);
    ctx->pc = 0x196DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196DA0u, 0x19C08Cu, 0x19C094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C094u;
label_19c094:
    // 0x19c094: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c098: 0xc065724  jal         func_195C90
    ctx->pc = 0x19C098u;
    SET_GPR_U32(ctx, 31, 0x19C0A0u);
    ctx->pc = 0x195C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195C90u, 0x19C098u, 0x19C0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0A0u;
label_19c0a0:
    // 0x19c0a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c0a4: 0xc0664b4  jal         func_1992D0
    ctx->pc = 0x19C0A4u;
    SET_GPR_U32(ctx, 31, 0x19C0ACu);
    ctx->pc = 0x1992D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1992D0u, 0x19C0A4u, 0x19C0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0ACu;
label_19c0ac:
    // 0x19c0ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c0b0: 0xc065c94  jal         func_197250
    ctx->pc = 0x19C0B0u;
    SET_GPR_U32(ctx, 31, 0x19C0B8u);
    ctx->pc = 0x197250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197250u, 0x19C0B0u, 0x19C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0B8u;
label_19c0b8:
    // 0x19c0b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c0bc: 0xc065e3c  jal         func_1978F0
    ctx->pc = 0x19C0BCu;
    SET_GPR_U32(ctx, 31, 0x19C0C4u);
    ctx->pc = 0x1978F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1978F0u, 0x19C0BCu, 0x19C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0C4u;
label_19c0c4:
    // 0x19c0c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c0c8: 0xc06611c  jal         func_198470
    ctx->pc = 0x19C0C8u;
    SET_GPR_U32(ctx, 31, 0x19C0D0u);
    ctx->pc = 0x198470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198470u, 0x19C0C8u, 0x19C0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0D0u;
label_19c0d0:
    // 0x19c0d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19c0d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c0d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c0d8: 0xc066734  jal         func_199CD0
    ctx->pc = 0x19C0D8u;
    SET_GPR_U32(ctx, 31, 0x19C0E0u);
    ctx->pc = 0x199CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199CD0u, 0x19C0D8u, 0x19C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0E0u;
label_19c0e0:
    // 0x19c0e0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x19c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x19c0e4: 0x24846130  addiu       $a0, $a0, 0x6130
    ctx->pc = 0x19c0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24880));
    // 0x19c0e8: 0xc0ac004  jal         func_2B0010
    ctx->pc = 0x19C0E8u;
    SET_GPR_U32(ctx, 31, 0x19C0F0u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x19C0E8u, 0x19C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C0F0u;
label_19c0f0:
    // 0x19c0f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x19c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c0f4: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x19c0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x19c0f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c0fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19c0fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19c100: 0x3e00008  jr          $ra
    ctx->pc = 0x19C100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C108u;
    // 0x19c108: 0x0  nop
    ctx->pc = 0x19c108u;
    // NOP
    // 0x19c10c: 0x0  nop
    ctx->pc = 0x19c10cu;
    // NOP
    ctx->pc = 0x19c110u;
}
