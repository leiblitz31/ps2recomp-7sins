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

// Function: sub_00222BC0
// Address: 0x222bc0 - 0x222c20
void sub_00222BC0_0x222bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222BC0_0x222bc0");
#endif

    switch (ctx->pc) {
        case 0x222becu: goto label_222bec;
        case 0x222c0cu: goto label_222c0c;
        default: break;
    }

    ctx->pc = 0x222bc0u;

    // 0x222bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222bc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x222bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x222bcc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x222bccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x222bd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222bd4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x222BD4u;
    {
        const bool branch_taken_0x222bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222bd4) {
            ctx->pc = 0x222C0Cu;
            goto label_222c0c;
        }
    }
    ctx->pc = 0x222BDCu;
    // 0x222bdc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x222be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222be4: 0xc088a10  jal         func_222840
    ctx->pc = 0x222BE4u;
    SET_GPR_U32(ctx, 31, 0x222BECu);
    ctx->pc = 0x222840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222840u, 0x222BE4u, 0x222BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222BECu;
label_222bec:
    // 0x222bec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x222becu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222bf0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x222bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x222bf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x222bf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x222bf8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x222BF8u;
    {
        const bool branch_taken_0x222bf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x222bf8) {
            ctx->pc = 0x222C0Cu;
            goto label_222c0c;
        }
    }
    ctx->pc = 0x222C00u;
    // 0x222c00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x222c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222c04: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x222C04u;
    SET_GPR_U32(ctx, 31, 0x222C0Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x222C04u, 0x222C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C0Cu;
label_222c0c:
    // 0x222c0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x222c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222c14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x222c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x222c18: 0x3e00008  jr          $ra
    ctx->pc = 0x222C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222C20u;
}
