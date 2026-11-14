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

// Function: sub_00188FE0
// Address: 0x188fe0 - 0x189070
void sub_00188FE0_0x188fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188FE0_0x188fe0");
#endif

    switch (ctx->pc) {
        case 0x188ffcu: goto label_188ffc;
        case 0x18901cu: goto label_18901c;
        case 0x18902cu: goto label_18902c;
        case 0x189054u: goto label_189054;
        default: break;
    }

    ctx->pc = 0x188fe0u;

    // 0x188fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188fe8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x188fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x188fec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x188fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188ff0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x188ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x188ff4: 0xc0557e8  jal         func_155FA0
    ctx->pc = 0x188FF4u;
    SET_GPR_U32(ctx, 31, 0x188FFCu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x188FF4u, 0x188FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188FFCu;
label_188ffc:
    // 0x188ffc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x188ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x189000: 0x24634030  addiu       $v1, $v1, 0x4030
    ctx->pc = 0x189000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16432));
    // 0x189004: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189008: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x189008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18900c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189010: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x189010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x189014: 0xc056254  jal         func_158950
    ctx->pc = 0x189014u;
    SET_GPR_U32(ctx, 31, 0x18901Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x189014u, 0x18901Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18901Cu;
label_18901c:
    // 0x18901c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18901cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189020: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x189020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x189024: 0xc056254  jal         func_158950
    ctx->pc = 0x189024u;
    SET_GPR_U32(ctx, 31, 0x18902Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x189024u, 0x18902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18902Cu;
label_18902c:
    // 0x18902c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189030: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x189030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x189034: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x189034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
    // 0x189038: 0x24a59350  addiu       $a1, $a1, -0x6CB0
    ctx->pc = 0x189038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939472));
    // 0x18903c: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18903cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x189040: 0x24c69070  addiu       $a2, $a2, -0x6F90
    ctx->pc = 0x189040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938736));
    // 0x189044: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x189044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x189048: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x189048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18904c: 0xc0b9ff4  jal         func_2E7FD0
    ctx->pc = 0x18904Cu;
    SET_GPR_U32(ctx, 31, 0x189054u);
    ctx->pc = 0x2E7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7FD0u, 0x18904Cu, 0x189054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189054u;
label_189054:
    // 0x189054: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189058: 0xaf82bae8  sw          $v0, -0x4518($gp)
    ctx->pc = 0x189058u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949608), GPR_U32(ctx, 2));
    // 0x18905c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18905cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189064: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x189064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x189068: 0x3e00008  jr          $ra
    ctx->pc = 0x189068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189070u;
}
