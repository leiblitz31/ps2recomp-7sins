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

// Function: sub_00149B00
// Address: 0x149b00 - 0x149b70
void sub_00149B00_0x149b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149B00_0x149b00");
#endif

    switch (ctx->pc) {
        case 0x149b30u: goto label_149b30;
        case 0x149b50u: goto label_149b50;
        default: break;
    }

    ctx->pc = 0x149b00u;

    // 0x149b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149b08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x149b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x149b0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x149b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x149b10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b14: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x149B14u;
    {
        const bool branch_taken_0x149b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149b14) {
            ctx->pc = 0x149B50u;
            goto label_149b50;
        }
    }
    ctx->pc = 0x149B1Cu;
    // 0x149b1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b20: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x149b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x149b24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x149b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x149b28: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x149B28u;
    SET_GPR_U32(ctx, 31, 0x149B30u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x149B28u, 0x149B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B30u;
label_149b30:
    // 0x149b30: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x149b30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149b34: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x149b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x149b38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x149b38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x149b3c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149B3Cu;
    {
        const bool branch_taken_0x149b3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x149b3c) {
            ctx->pc = 0x149B50u;
            goto label_149b50;
        }
    }
    ctx->pc = 0x149B44u;
    // 0x149b44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x149b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b48: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x149B48u;
    SET_GPR_U32(ctx, 31, 0x149B50u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x149B48u, 0x149B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149B50u;
label_149b50:
    // 0x149b50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x149b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149b58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x149b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x149b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x149B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149B64u;
    // 0x149b64: 0x0  nop
    ctx->pc = 0x149b64u;
    // NOP
    // 0x149b68: 0x0  nop
    ctx->pc = 0x149b68u;
    // NOP
    // 0x149b6c: 0x0  nop
    ctx->pc = 0x149b6cu;
    // NOP
    ctx->pc = 0x149b70u;
}
