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

// Function: sub_00182FF0
// Address: 0x182ff0 - 0x183060
void sub_00182FF0_0x182ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182FF0_0x182ff0");
#endif

    switch (ctx->pc) {
        case 0x18300cu: goto label_18300c;
        case 0x18302cu: goto label_18302c;
        default: break;
    }

    ctx->pc = 0x182ff0u;

    // 0x182ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182ff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x182ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x182ffc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x182ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183000: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x183000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x183004: 0xc0557e8  jal         func_155FA0
    ctx->pc = 0x183004u;
    SET_GPR_U32(ctx, 31, 0x18300Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x183004u, 0x18300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18300Cu;
label_18300c:
    // 0x18300c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18300cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x183010: 0x24633f70  addiu       $v1, $v1, 0x3F70
    ctx->pc = 0x183010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16240));
    // 0x183014: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183018: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x183018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18301c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183020: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x183020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183024: 0xc056254  jal         func_158950
    ctx->pc = 0x183024u;
    SET_GPR_U32(ctx, 31, 0x18302Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x183024u, 0x18302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18302Cu;
label_18302c:
    // 0x18302c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18302cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183034: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x183034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183038: 0x3e00008  jr          $ra
    ctx->pc = 0x183038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183040u;
    // 0x183040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183048: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x183048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18304c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x18304cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x183050: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183054: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x183054u;
    {
        const bool branch_taken_0x183054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183054) {
            ctx->pc = 0x1830B0u;
            return;
        }
    }
    ctx->pc = 0x18305Cu;
    // 0x18305c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18305cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    ctx->pc = 0x183060u;
}
