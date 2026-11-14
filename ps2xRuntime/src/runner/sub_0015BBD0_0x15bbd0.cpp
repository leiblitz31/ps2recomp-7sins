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

// Function: sub_0015BBD0
// Address: 0x15bbd0 - 0x15bc30
void sub_0015BBD0_0x15bbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BBD0_0x15bbd0");
#endif

    switch (ctx->pc) {
        case 0x15bbfcu: goto label_15bbfc;
        case 0x15bc1cu: goto label_15bc1c;
        default: break;
    }

    ctx->pc = 0x15bbd0u;

    // 0x15bbd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bbd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bbd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15bbdc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x15bbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x15bbe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bbe4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15BBE4u;
    {
        const bool branch_taken_0x15bbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bbe4) {
            ctx->pc = 0x15BC1Cu;
            goto label_15bc1c;
        }
    }
    ctx->pc = 0x15BBECu;
    // 0x15bbec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bbf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15bbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bbf4: 0xc056f0c  jal         func_15BC30
    ctx->pc = 0x15BBF4u;
    SET_GPR_U32(ctx, 31, 0x15BBFCu);
    ctx->pc = 0x15BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC30u, 0x15BBF4u, 0x15BBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BBFCu;
label_15bbfc:
    // 0x15bbfc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x15bbfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15bc00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x15bc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x15bc04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x15bc04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x15bc08: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BC08u;
    {
        const bool branch_taken_0x15bc08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15bc08) {
            ctx->pc = 0x15BC1Cu;
            goto label_15bc1c;
        }
    }
    ctx->pc = 0x15BC10u;
    // 0x15bc10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x15bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bc14: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x15BC14u;
    SET_GPR_U32(ctx, 31, 0x15BC1Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x15BC14u, 0x15BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC1Cu;
label_15bc1c:
    // 0x15bc1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bc20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bc24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15bc24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15bc28: 0x3e00008  jr          $ra
    ctx->pc = 0x15BC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BC30u;
}
