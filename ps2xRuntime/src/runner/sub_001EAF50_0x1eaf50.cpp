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

// Function: sub_001EAF50
// Address: 0x1eaf50 - 0x1eafe0
void sub_001EAF50_0x1eaf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAF50_0x1eaf50");
#endif

    switch (ctx->pc) {
        case 0x1eaf80u: goto label_1eaf80;
        case 0x1eaf94u: goto label_1eaf94;
        case 0x1eafa8u: goto label_1eafa8;
        case 0x1eafc8u: goto label_1eafc8;
        default: break;
    }

    ctx->pc = 0x1eaf50u;

    // 0x1eaf50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eaf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1eaf54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eaf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eaf58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1eaf58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1eaf5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1eaf5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1eaf60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1eaf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaf64: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EAF64u;
    {
        const bool branch_taken_0x1eaf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaf64) {
            ctx->pc = 0x1EAFC8u;
            goto label_1eafc8;
        }
    }
    ctx->pc = 0x1EAF6Cu;
    // 0x1eaf6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1eaf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaf70: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x1eaf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x1eaf74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1eaf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eaf78: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1EAF78u;
    SET_GPR_U32(ctx, 31, 0x1EAF80u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1EAF78u, 0x1EAF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF80u;
label_1eaf80:
    // 0x1eaf80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1eaf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaf84: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1eaf84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1eaf88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1eaf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eaf8c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1EAF8Cu;
    SET_GPR_U32(ctx, 31, 0x1EAF94u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1EAF8Cu, 0x1EAF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF94u;
label_1eaf94:
    // 0x1eaf94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1eaf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaf98: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1eaf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1eaf9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1eaf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eafa0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1EAFA0u;
    SET_GPR_U32(ctx, 31, 0x1EAFA8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1EAFA0u, 0x1EAFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAFA8u;
label_1eafa8:
    // 0x1eafa8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1eafa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eafac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1eafacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1eafb0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1eafb0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1eafb4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAFB4u;
    {
        const bool branch_taken_0x1eafb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1eafb4) {
            ctx->pc = 0x1EAFC8u;
            goto label_1eafc8;
        }
    }
    ctx->pc = 0x1EAFBCu;
    // 0x1eafbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1eafbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eafc0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1EAFC0u;
    SET_GPR_U32(ctx, 31, 0x1EAFC8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1EAFC0u, 0x1EAFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAFC8u;
label_1eafc8:
    // 0x1eafc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1eafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eafcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eafccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eafd0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1eafd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eafd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAFDCu;
    // 0x1eafdc: 0x0  nop
    ctx->pc = 0x1eafdcu;
    // NOP
    ctx->pc = 0x1eafe0u;
}
