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

// Function: sub_00137EE0
// Address: 0x137ee0 - 0x137f50
void sub_00137EE0_0x137ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137EE0_0x137ee0");
#endif

    switch (ctx->pc) {
        case 0x137f08u: goto label_137f08;
        case 0x137f1cu: goto label_137f1c;
        case 0x137f3cu: goto label_137f3c;
        default: break;
    }

    ctx->pc = 0x137ee0u;

    // 0x137ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137ee8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x137ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x137eec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x137eecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x137ef0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137ef4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x137EF4u;
    {
        const bool branch_taken_0x137ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137ef4) {
            ctx->pc = 0x137F3Cu;
            goto label_137f3c;
        }
    }
    ctx->pc = 0x137EFCu;
    // 0x137efc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x137efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f00: 0xc04f374  jal         func_13CDD0
    ctx->pc = 0x137F00u;
    SET_GPR_U32(ctx, 31, 0x137F08u);
    ctx->pc = 0x13CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDD0u, 0x137F00u, 0x137F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F08u;
label_137f08:
    // 0x137f08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f0c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x137f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x137f10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x137f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x137f14: 0xc04dfd4  jal         func_137F50
    ctx->pc = 0x137F14u;
    SET_GPR_U32(ctx, 31, 0x137F1Cu);
    ctx->pc = 0x137F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F50u, 0x137F14u, 0x137F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F1Cu;
label_137f1c:
    // 0x137f1c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x137f1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137f20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x137f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x137f24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x137f24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x137f28: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137F28u;
    {
        const bool branch_taken_0x137f28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x137f28) {
            ctx->pc = 0x137F3Cu;
            goto label_137f3c;
        }
    }
    ctx->pc = 0x137F30u;
    // 0x137f30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x137f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f34: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x137F34u;
    SET_GPR_U32(ctx, 31, 0x137F3Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x137F34u, 0x137F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F3Cu;
label_137f3c:
    // 0x137f3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137f44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x137f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x137f48: 0x3e00008  jr          $ra
    ctx->pc = 0x137F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137F50u;
}
