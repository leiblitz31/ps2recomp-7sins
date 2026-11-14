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

// Function: sub_00245000
// Address: 0x245000 - 0x245090
void sub_00245000_0x245000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245000_0x245000");
#endif

    switch (ctx->pc) {
        case 0x245018u: goto label_245018;
        case 0x245050u: goto label_245050;
        case 0x245060u: goto label_245060;
        case 0x245070u: goto label_245070;
        default: break;
    }

    ctx->pc = 0x245000u;

    // 0x245000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x245008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24500c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24500cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245010: 0xc08ec10  jal         func_23B040
    ctx->pc = 0x245010u;
    SET_GPR_U32(ctx, 31, 0x245018u);
    ctx->pc = 0x23B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B040u, 0x245010u, 0x245018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245018u;
label_245018:
    // 0x245018: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x245018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x24501c: 0x246357a0  addiu       $v1, $v1, 0x57A0
    ctx->pc = 0x24501cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22432));
    // 0x245020: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245024: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x245024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x245028: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24502c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x24502cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x245030: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x245030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x245034: 0x24a588c0  addiu       $a1, $a1, -0x7740
    ctx->pc = 0x245034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936768));
    // 0x245038: 0x3c060011  lui         $a2, 0x11
    ctx->pc = 0x245038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17 << 16));
    // 0x24503c: 0x24c68280  addiu       $a2, $a2, -0x7D80
    ctx->pc = 0x24503cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935168));
    // 0x245040: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x245040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x245044: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x245044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x245048: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x245048u;
    SET_GPR_U32(ctx, 31, 0x245050u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x245048u, 0x245050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245050u;
label_245050:
    // 0x245050: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245054: 0x244400ac  addiu       $a0, $v0, 0xAC
    ctx->pc = 0x245054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 172));
    // 0x245058: 0xc042230  jal         func_1088C0
    ctx->pc = 0x245058u;
    SET_GPR_U32(ctx, 31, 0x245060u);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x245058u, 0x245060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245060u;
label_245060:
    // 0x245060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245064: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x245064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x245068: 0xc0914ac  jal         func_2452B0
    ctx->pc = 0x245068u;
    SET_GPR_U32(ctx, 31, 0x245070u);
    ctx->pc = 0x2452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2452B0u, 0x245068u, 0x245070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245070u;
label_245070:
    // 0x245070: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x245070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245078: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x245078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24507c: 0x3e00008  jr          $ra
    ctx->pc = 0x24507Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24507Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245084u;
    // 0x245084: 0x0  nop
    ctx->pc = 0x245084u;
    // NOP
    // 0x245088: 0x0  nop
    ctx->pc = 0x245088u;
    // NOP
    // 0x24508c: 0x0  nop
    ctx->pc = 0x24508cu;
    // NOP
    ctx->pc = 0x245090u;
}
