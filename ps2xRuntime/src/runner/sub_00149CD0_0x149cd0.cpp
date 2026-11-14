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

// Function: sub_00149CD0
// Address: 0x149cd0 - 0x149d40
void sub_00149CD0_0x149cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149CD0_0x149cd0");
#endif

    switch (ctx->pc) {
        case 0x149cf8u: goto label_149cf8;
        case 0x149d08u: goto label_149d08;
        case 0x149d28u: goto label_149d28;
        default: break;
    }

    ctx->pc = 0x149cd0u;

    // 0x149cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149cd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x149cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x149cdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x149cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x149ce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149ce4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x149CE4u;
    {
        const bool branch_taken_0x149ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149ce4) {
            ctx->pc = 0x149D28u;
            goto label_149d28;
        }
    }
    ctx->pc = 0x149CECu;
    // 0x149cec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x149cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149cf0: 0xc05276c  jal         func_149DB0
    ctx->pc = 0x149CF0u;
    SET_GPR_U32(ctx, 31, 0x149CF8u);
    ctx->pc = 0x149DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149DB0u, 0x149CF0u, 0x149CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149CF8u;
label_149cf8:
    // 0x149cf8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x149cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149cfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d00: 0xc052750  jal         func_149D40
    ctx->pc = 0x149D00u;
    SET_GPR_U32(ctx, 31, 0x149D08u);
    ctx->pc = 0x149D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149D40u, 0x149D00u, 0x149D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D08u;
label_149d08:
    // 0x149d08: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x149d08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149d0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x149d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x149d10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x149d10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x149d14: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149D14u;
    {
        const bool branch_taken_0x149d14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x149d14) {
            ctx->pc = 0x149D28u;
            goto label_149d28;
        }
    }
    ctx->pc = 0x149D1Cu;
    // 0x149d1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x149d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149d20: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x149D20u;
    SET_GPR_U32(ctx, 31, 0x149D28u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x149D20u, 0x149D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D28u;
label_149d28:
    // 0x149d28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149d30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x149d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x149d34: 0x3e00008  jr          $ra
    ctx->pc = 0x149D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149D3Cu;
    // 0x149d3c: 0x0  nop
    ctx->pc = 0x149d3cu;
    // NOP
    ctx->pc = 0x149d40u;
}
