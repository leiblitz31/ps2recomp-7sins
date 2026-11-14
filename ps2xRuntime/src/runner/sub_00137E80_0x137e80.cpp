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

// Function: sub_00137E80
// Address: 0x137e80 - 0x137ee0
void sub_00137E80_0x137e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137E80_0x137e80");
#endif

    switch (ctx->pc) {
        case 0x137eacu: goto label_137eac;
        case 0x137eccu: goto label_137ecc;
        default: break;
    }

    ctx->pc = 0x137e80u;

    // 0x137e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x137e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x137e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137e88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x137e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x137e8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x137e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x137e90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137e94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x137E94u;
    {
        const bool branch_taken_0x137e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e94) {
            ctx->pc = 0x137ECCu;
            goto label_137ecc;
        }
    }
    ctx->pc = 0x137E9Cu;
    // 0x137e9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x137e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137ea0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x137ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x137ea4: 0xc04dfb8  jal         func_137EE0
    ctx->pc = 0x137EA4u;
    SET_GPR_U32(ctx, 31, 0x137EACu);
    ctx->pc = 0x137EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137EE0u, 0x137EA4u, 0x137EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137EACu;
label_137eac:
    // 0x137eac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x137eacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137eb0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x137eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x137eb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x137eb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x137eb8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137EB8u;
    {
        const bool branch_taken_0x137eb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x137eb8) {
            ctx->pc = 0x137ECCu;
            goto label_137ecc;
        }
    }
    ctx->pc = 0x137EC0u;
    // 0x137ec0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x137ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137ec4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x137EC4u;
    SET_GPR_U32(ctx, 31, 0x137ECCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x137EC4u, 0x137ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137ECCu;
label_137ecc:
    // 0x137ecc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x137eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137ed4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x137ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x137ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x137ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137EE0u;
}
